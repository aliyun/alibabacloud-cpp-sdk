// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SEARCHENGINE20211025_HPP_
#define ALIBABACLOUD_SEARCHENGINE20211025_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Searchengine20211025Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Searchengine20211025.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Triggers reindexing.
       *
       * @description ## Method
       *     POST
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/actions/build-index
       *
       * @param request BuildIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BuildIndexResponse
       */
      Models::BuildIndexResponse buildIndexWithOptions(const string &instanceId, const Models::BuildIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers reindexing.
       *
       * @description ## Method
       *     POST
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/actions/build-index
       *
       * @param request BuildIndexRequest
       * @return BuildIndexResponse
       */
      Models::BuildIndexResponse buildIndex(const string &instanceId, const Models::BuildIndexRequest &request);

      /**
       * @summary 更换实例资源组
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const string &instanceId, const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更换实例资源组
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const string &instanceId, const Models::ChangeResourceGroupRequest &request);

      /**
       * @param request CloneSqlInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneSqlInstanceResponse
       */
      Models::CloneSqlInstanceResponse cloneSqlInstanceWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::CloneSqlInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CloneSqlInstanceRequest
       * @return CloneSqlInstanceResponse
       */
      Models::CloneSqlInstanceResponse cloneSqlInstance(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::CloneSqlInstanceRequest &request);

      /**
       * @param request CreateAliasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAliasResponse
       */
      Models::CreateAliasResponse createAliasWithOptions(const string &instanceId, const Models::CreateAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAliasRequest
       * @return CreateAliasResponse
       */
      Models::CreateAliasResponse createAlias(const string &instanceId, const Models::CreateAliasRequest &request);

      /**
       * @summary Creates a cluster.
       *
       * @description ### [](#method)Method
       * `POST`
       * ### [](#uri)URI
       * `/openapi/ha3/instances/{instanceId}/clusters`
       *
       * @param request CreateClusterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const string &instanceId, const Models::CreateClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cluster.
       *
       * @description ### [](#method)Method
       * `POST`
       * ### [](#uri)URI
       * `/openapi/ha3/instances/{instanceId}/clusters`
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const string &instanceId, const Models::CreateClusterRequest &request);

      /**
       * @param request CreateConfigDirRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigDirResponse
       */
      Models::CreateConfigDirResponse createConfigDirWithOptions(const string &instanceId, const string &configName, const Models::CreateConfigDirRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateConfigDirRequest
       * @return CreateConfigDirResponse
       */
      Models::CreateConfigDirResponse createConfigDir(const string &instanceId, const string &configName, const Models::CreateConfigDirRequest &request);

      /**
       * @param request CreateConfigFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigFileResponse
       */
      Models::CreateConfigFileResponse createConfigFileWithOptions(const string &instanceId, const string &configName, const Models::CreateConfigFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateConfigFileRequest
       * @return CreateConfigFileResponse
       */
      Models::CreateConfigFileResponse createConfigFile(const string &instanceId, const string &configName, const Models::CreateConfigFileRequest &request);

      /**
       * @summary Creates data sources.
       *
       * @param request CreateDataSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSourceWithOptions(const string &instanceId, const Models::CreateDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates data sources.
       *
       * @param request CreateDataSourceRequest
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSource(const string &instanceId, const Models::CreateDataSourceRequest &request);

      /**
       * @param request CreateFolderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolderWithOptions(const string &instanceId, const string &database, const Models::CreateFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateFolderRequest
       * @return CreateFolderResponse
       */
      Models::CreateFolderResponse createFolder(const string &instanceId, const string &database, const Models::CreateFolderRequest &request);

      /**
       * @summary Creates an index.
       *
       * @description ### Method
       * ```java
       * POST
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/indexes
       * ```
       *
       * @param request CreateIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIndexResponse
       */
      Models::CreateIndexResponse createIndexWithOptions(const string &instanceId, const Models::CreateIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an index.
       *
       * @description ### Method
       * ```java
       * POST
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/indexes
       * ```
       *
       * @param request CreateIndexRequest
       * @return CreateIndexResponse
       */
      Models::CreateIndexResponse createIndex(const string &instanceId, const Models::CreateIndexRequest &request);

      /**
       * @summary Creates a Havenask instance.
       *
       * @description ### [](#)Method
       * `POST`
       * ### [](#uri)URI
       * `/api/instances?dryRun=false`
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Havenask instance.
       *
       * @description ### [](#)Method
       * `POST`
       * ### [](#uri)URI
       * `/api/instances?dryRun=false`
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 创建模型信息
       *
       * @param request CreateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModelWithOptions(const string &instanceId, const Models::CreateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模型信息
       *
       * @param request CreateModelRequest
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModel(const string &instanceId, const Models::CreateModelRequest &request);

      /**
       * @summary Creates a public endpoint.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePublicUrlResponse
       */
      Models::CreatePublicUrlResponse createPublicUrlWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a public endpoint.
       *
       * @return CreatePublicUrlResponse
       */
      Models::CreatePublicUrlResponse createPublicUrl(const string &instanceId);

      /**
       * @param request CreateSqlInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSqlInstanceResponse
       */
      Models::CreateSqlInstanceResponse createSqlInstanceWithOptions(const string &instanceId, const string &database, const Models::CreateSqlInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateSqlInstanceRequest
       * @return CreateSqlInstanceResponse
       */
      Models::CreateSqlInstanceResponse createSqlInstance(const string &instanceId, const string &database, const Models::CreateSqlInstanceRequest &request);

      /**
       * @summary Creates an index table.
       *
       * @param request CreateTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTableResponse
       */
      Models::CreateTableResponse createTableWithOptions(const string &instanceId, const Models::CreateTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an index table.
       *
       * @param request CreateTableRequest
       * @return CreateTableResponse
       */
      Models::CreateTableResponse createTable(const string &instanceId, const Models::CreateTableRequest &request);

      /**
       * @summary 调试模型
       *
       * @param request DebugModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugModelResponse
       */
      Models::DebugModelResponse debugModelWithOptions(const string &instanceId, const string &modelName, const Models::DebugModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调试模型
       *
       * @param request DebugModelRequest
       * @return DebugModelResponse
       */
      Models::DebugModelResponse debugModel(const string &instanceId, const string &modelName, const Models::DebugModelRequest &request);

      /**
       * @summary Deletes the details about advanced configurations.
       *
       * @description ## Method
       *     DELETE
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAdvanceConfigResponse
       */
      Models::DeleteAdvanceConfigResponse deleteAdvanceConfigWithOptions(const string &instanceId, const string &configName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the details about advanced configurations.
       *
       * @description ## Method
       *     DELETE
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}
       *
       * @return DeleteAdvanceConfigResponse
       */
      Models::DeleteAdvanceConfigResponse deleteAdvanceConfig(const string &instanceId, const string &configName);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAliasResponse
       */
      Models::DeleteAliasResponse deleteAliasWithOptions(const string &instanceId, const string &alias, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DeleteAliasResponse
       */
      Models::DeleteAliasResponse deleteAlias(const string &instanceId, const string &alias);

      /**
       * @param request DeleteConfigDirRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigDirResponse
       */
      Models::DeleteConfigDirResponse deleteConfigDirWithOptions(const string &instanceId, const string &configName, const Models::DeleteConfigDirRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteConfigDirRequest
       * @return DeleteConfigDirResponse
       */
      Models::DeleteConfigDirResponse deleteConfigDir(const string &instanceId, const string &configName, const Models::DeleteConfigDirRequest &request);

      /**
       * @param request DeleteConfigFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigFileResponse
       */
      Models::DeleteConfigFileResponse deleteConfigFileWithOptions(const string &instanceId, const string &configName, const Models::DeleteConfigFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteConfigFileRequest
       * @return DeleteConfigFileResponse
       */
      Models::DeleteConfigFileResponse deleteConfigFile(const string &instanceId, const string &configName, const Models::DeleteConfigFileRequest &request);

      /**
       * @summary Deletes a specified data source.
       *
       * @description ## Method
       * `DELETE`
       * ## URI
       * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}`
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSourceWithOptions(const string &instanceId, const string &dataSourceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified data source.
       *
       * @description ## Method
       * `DELETE`
       * ## URI
       * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}`
       *
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSource(const string &instanceId, const string &dataSourceName);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolderWithOptions(const string &instanceId, const string &database, const string &folderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DeleteFolderResponse
       */
      Models::DeleteFolderResponse deleteFolder(const string &instanceId, const string &database, const string &folderId);

      /**
       * @summary Deletes an index.
       *
       * @description ## Method
       *     DELETE
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}?dataSource=xxx
       *
       * @param request DeleteIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIndexResponse
       */
      Models::DeleteIndexResponse deleteIndexWithOptions(const string &instanceId, const string &indexName, const Models::DeleteIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an index.
       *
       * @description ## Method
       *     DELETE
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}?dataSource=xxx
       *
       * @param request DeleteIndexRequest
       * @return DeleteIndexResponse
       */
      Models::DeleteIndexResponse deleteIndex(const string &instanceId, const string &indexName, const Models::DeleteIndexRequest &request);

      /**
       * @summary Deletes the version of an index.
       *
       * @description ## Method
       *     DELETE
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIndexVersionResponse
       */
      Models::DeleteIndexVersionResponse deleteIndexVersionWithOptions(const string &instanceId, const string &indexName, const string &versionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the version of an index.
       *
       * @description ## Method
       *     DELETE
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}
       *
       * @return DeleteIndexVersionResponse
       */
      Models::DeleteIndexVersionResponse deleteIndexVersion(const string &instanceId, const string &indexName, const string &versionName);

      /**
       * @summary Deletes a specified instance.
       *
       * @description ### Method
       * `DELETE`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}`
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified instance.
       *
       * @description ### Method
       * `DELETE`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}`
       *
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const string &instanceId);

      /**
       * @summary 删除模型
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModelWithOptions(const string &instanceId, const string &modelName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模型
       *
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModel(const string &instanceId, const string &modelName);

      /**
       * @summary 删除公网域名
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePublicUrlResponse
       */
      Models::DeletePublicUrlResponse deletePublicUrlWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除公网域名
       *
       * @return DeletePublicUrlResponse
       */
      Models::DeletePublicUrlResponse deletePublicUrl(const string &instanceId);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSqlInstanceResponse
       */
      Models::DeleteSqlInstanceResponse deleteSqlInstanceWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DeleteSqlInstanceResponse
       */
      Models::DeleteSqlInstanceResponse deleteSqlInstance(const string &instanceId, const string &database, const string &sqlInstanceId);

      /**
       * @summary Deletes an index table.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTableResponse
       */
      Models::DeleteTableResponse deleteTableWithOptions(const string &instanceId, const string &tableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an index table.
       *
       * @return DeleteTableResponse
       */
      Models::DeleteTableResponse deleteTable(const string &instanceId, const string &tableName);

      /**
       * @summary Queries available regions.
       *
       * @param request DescribeRegionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @param request ExecuteSqlInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteSqlInstanceResponse
       */
      Models::ExecuteSqlInstanceResponse executeSqlInstanceWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::ExecuteSqlInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ExecuteSqlInstanceRequest
       * @return ExecuteSqlInstanceResponse
       */
      Models::ExecuteSqlInstanceResponse executeSqlInstance(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::ExecuteSqlInstanceRequest &request);

      /**
       * @summary Performs a forced switchover.
       *
       * @description ### [](#)Method
       * ```java
       * PUT
       * ```
       * ### [](#uri)URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/force-switch/{fsmId}
       * ```
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForceSwitchResponse
       */
      Models::ForceSwitchResponse forceSwitchWithOptions(const string &instanceId, const string &fsmId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a forced switchover.
       *
       * @description ### [](#)Method
       * ```java
       * PUT
       * ```
       * ### [](#uri)URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/force-switch/{fsmId}
       * ```
       *
       * @return ForceSwitchResponse
       */
      Models::ForceSwitchResponse forceSwitch(const string &instanceId, const string &fsmId);

      /**
       * @summary Queries the information about an advanced configuration.
       *
       * @description ## Method
       *     GET
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}
       *
       * @param request GetAdvanceConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdvanceConfigResponse
       */
      Models::GetAdvanceConfigResponse getAdvanceConfigWithOptions(const string &instanceId, const string &configName, const Models::GetAdvanceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an advanced configuration.
       *
       * @description ## Method
       *     GET
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}
       *
       * @param request GetAdvanceConfigRequest
       * @return GetAdvanceConfigResponse
       */
      Models::GetAdvanceConfigResponse getAdvanceConfig(const string &instanceId, const string &configName, const Models::GetAdvanceConfigRequest &request);

      /**
       * @summary Queries the information about an advanced configuration file.
       *
       * @description ## Method
       *     GET
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/file?fileName={fileName}
       *
       * @param request GetAdvanceConfigFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdvanceConfigFileResponse
       */
      Models::GetAdvanceConfigFileResponse getAdvanceConfigFileWithOptions(const string &instanceId, const string &configName, const Models::GetAdvanceConfigFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an advanced configuration file.
       *
       * @description ## Method
       *     GET
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/file?fileName={fileName}
       *
       * @param request GetAdvanceConfigFileRequest
       * @return GetAdvanceConfigFileResponse
       */
      Models::GetAdvanceConfigFileResponse getAdvanceConfigFile(const string &instanceId, const string &configName, const Models::GetAdvanceConfigFileRequest &request);

      /**
       * @summary Queries the details of a cluster.
       *
       * @description ### Method
       * `GET`
       * ### URI
       * `/openapi/ha3/instance/{instanceId}/clusters/{clusterName}`
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getClusterWithOptions(const string &instanceId, const string &clusterName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a cluster.
       *
       * @description ### Method
       * `GET`
       * ### URI
       * `/openapi/ha3/instance/{instanceId}/clusters/{clusterName}`
       *
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getCluster(const string &instanceId, const string &clusterName);

      /**
       * @summary Queries the runtime information about a specified cluster.
       *
       * @description ### Method
       * GET
       * ### URI
       * /openapi/ha3/instances/{instanceId}/cluster-run-time-info
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterRunTimeInfoResponse
       */
      Models::GetClusterRunTimeInfoResponse getClusterRunTimeInfoWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the runtime information about a specified cluster.
       *
       * @description ### Method
       * GET
       * ### URI
       * /openapi/ha3/instances/{instanceId}/cluster-run-time-info
       *
       * @return GetClusterRunTimeInfoResponse
       */
      Models::GetClusterRunTimeInfoResponse getClusterRunTimeInfo(const string &instanceId);

      /**
       * @summary Obtains a data source.
       *
       * @description ### Method
       * `GET`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}`
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataSourceResponse
       */
      Models::GetDataSourceResponse getDataSourceWithOptions(const string &instanceId, const string &dataSourceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a data source.
       *
       * @description ### Method
       * `GET`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}`
       *
       * @return GetDataSourceResponse
       */
      Models::GetDataSourceResponse getDataSource(const string &instanceId, const string &dataSourceName);

      /**
       * @summary 获取数据源部署信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataSourceDeployResponse
       */
      Models::GetDataSourceDeployResponse getDataSourceDeployWithOptions(const string &instanceId, const string &deployName, const string &dataSourceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据源部署信息
       *
       * @return GetDataSourceDeployResponse
       */
      Models::GetDataSourceDeployResponse getDataSourceDeploy(const string &instanceId, const string &deployName, const string &dataSourceName);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatabaseSchemaResponse
       */
      Models::GetDatabaseSchemaResponse getDatabaseSchemaWithOptions(const string &instanceId, const string &database, const string &tableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetDatabaseSchemaResponse
       */
      Models::GetDatabaseSchemaResponse getDatabaseSchema(const string &instanceId, const string &database, const string &tableName);

      /**
       * @summary Displays the overview of the deployment.
       *
       * @description ## Method
       * GET
       * ## URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/deploy-graph
       * ```
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeployGraphResponse
       */
      Models::GetDeployGraphResponse getDeployGraphWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays the overview of the deployment.
       *
       * @description ## Method
       * GET
       * ## URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/deploy-graph
       * ```
       *
       * @return GetDeployGraphResponse
       */
      Models::GetDeployGraphResponse getDeployGraph(const string &instanceId);

      /**
       * @summary Queries the details of an index table version.
       *
       * @description ## [](#)Method
       *     GET
       * ## [](#uri)URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}/file
       *
       * @param request GetFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileResponse
       */
      Models::GetFileResponse getFileWithOptions(const string &instanceId, const string &indexName, const string &versionName, const Models::GetFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an index table version.
       *
       * @description ## [](#)Method
       *     GET
       * ## [](#uri)URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}/file
       *
       * @param request GetFileRequest
       * @return GetFileResponse
       */
      Models::GetFileResponse getFile(const string &instanceId, const string &indexName, const string &versionName, const Models::GetFileRequest &request);

      /**
       * @summary Queries the information about an index version.
       *
       * @description ## [](#)Method
       *     GET
       * ## [](#uri)URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIndexResponse
       */
      Models::GetIndexResponse getIndexWithOptions(const string &instanceId, const string &indexName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an index version.
       *
       * @description ## [](#)Method
       *     GET
       * ## [](#uri)URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}
       *
       * @return GetIndexResponse
       */
      Models::GetIndexResponse getIndex(const string &instanceId, const string &indexName);

      /**
       * @summary Queries the online effective policy of an index.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIndexOnlineStrategyResponse
       */
      Models::GetIndexOnlineStrategyResponse getIndexOnlineStrategyWithOptions(const string &instanceId, const string &dataSourceName, const string &deployName, const string &indexName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the online effective policy of an index.
       *
       * @return GetIndexOnlineStrategyResponse
       */
      Models::GetIndexOnlineStrategyResponse getIndexOnlineStrategy(const string &instanceId, const string &dataSourceName, const string &deployName, const string &indexName);

      /**
       * @summary Queries the information about index versions that the current index version can be rolled back to.
       *
       * @description ## Method
       *     GET
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/clusters/{clusterName}/index-version
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIndexVersionResponse
       */
      Models::GetIndexVersionResponse getIndexVersionWithOptions(const string &instanceId, const string &clusterName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about index versions that the current index version can be rolled back to.
       *
       * @description ## Method
       *     GET
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/clusters/{clusterName}/index-version
       *
       * @return GetIndexVersionResponse
       */
      Models::GetIndexVersionResponse getIndexVersion(const string &instanceId, const string &clusterName);

      /**
       * @summary Queries the details of an instance based on the instance ID.
       *
       * @description ### [](#)Method
       * ```java
       * GET
       * ```
       * ### [](#uri)URI
       * ```java
       * /openapi/ha3/instances/{instanceId}
       * ```
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an instance based on the instance ID.
       *
       * @description ### [](#)Method
       * ```java
       * GET
       * ```
       * ### [](#uri)URI
       * ```java
       * /openapi/ha3/instances/{instanceId}
       * ```
       *
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const string &instanceId);

      /**
       * @summary 通过实例ID和模型名称查询特定模型的详细配置信息。
       *
       * @description ## 请求说明
       * - 该API用于获取指定实例下的特定模型的详细信息，包括模型类型、URL、状态等。
       * - 确保提供的`instanceId`和`modelName`是有效的，否则可能返回错误或找不到资源。
       * - 返回的数据结构中包含了模型的内容（如请求头、参数等）以及创建和更新时间，有助于了解模型的具体配置及其最新状态。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelResponse
       */
      Models::GetModelResponse getModelWithOptions(const string &instanceId, const string &modelName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过实例ID和模型名称查询特定模型的详细配置信息。
       *
       * @description ## 请求说明
       * - 该API用于获取指定实例下的特定模型的详细信息，包括模型类型、URL、状态等。
       * - 确保提供的`instanceId`和`modelName`是有效的，否则可能返回错误或找不到资源。
       * - 返回的数据结构中包含了模型的内容（如请求头、参数等）以及创建和更新时间，有助于了解模型的具体配置及其最新状态。
       *
       * @return GetModelResponse
       */
      Models::GetModelResponse getModel(const string &instanceId, const string &modelName);

      /**
       * @summary Gets the configuration information of a node.
       *
       * @param request GetNodeConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeConfigResponse
       */
      Models::GetNodeConfigResponse getNodeConfigWithOptions(const string &instanceId, const Models::GetNodeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the configuration information of a node.
       *
       * @param request GetNodeConfigRequest
       * @return GetNodeConfigResponse
       */
      Models::GetNodeConfigResponse getNodeConfig(const string &instanceId, const Models::GetNodeConfigRequest &request);

      /**
       * @param request GetSqlInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSqlInstanceResponse
       */
      Models::GetSqlInstanceResponse getSqlInstanceWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::GetSqlInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetSqlInstanceRequest
       * @return GetSqlInstanceResponse
       */
      Models::GetSqlInstanceResponse getSqlInstance(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::GetSqlInstanceRequest &request);

      /**
       * @summary Queries the information about an index table.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableResponse
       */
      Models::GetTableResponse getTableWithOptions(const string &instanceId, const string &tableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an index table.
       *
       * @return GetTableResponse
       */
      Models::GetTableResponse getTable(const string &instanceId, const string &tableName);

      /**
       * @summary Queries the status of an index version based on the ID of the full index version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableGenerationResponse
       */
      Models::GetTableGenerationResponse getTableGenerationWithOptions(const string &instanceId, const string &tableName, const string &generationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an index version based on the ID of the full index version.
       *
       * @return GetTableGenerationResponse
       */
      Models::GetTableGenerationResponse getTableGeneration(const string &instanceId, const string &tableName, const string &generationId);

      /**
       * @summary Queries the files in an advanced configuration directory.
       *
       * @description ## Method
       * `GET`
       * ## URI
       * `/openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/dir?dirName={dirName}`
       *
       * @param request ListAdvanceConfigDirRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAdvanceConfigDirResponse
       */
      Models::ListAdvanceConfigDirResponse listAdvanceConfigDirWithOptions(const string &instanceId, const string &configName, const Models::ListAdvanceConfigDirRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the files in an advanced configuration directory.
       *
       * @description ## Method
       * `GET`
       * ## URI
       * `/openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/dir?dirName={dirName}`
       *
       * @param request ListAdvanceConfigDirRequest
       * @return ListAdvanceConfigDirResponse
       */
      Models::ListAdvanceConfigDirResponse listAdvanceConfigDir(const string &instanceId, const string &configName, const Models::ListAdvanceConfigDirRequest &request);

      /**
       * @summary Obtains a list of advanced configurations.
       *
       * @description ## Sample requests
       * `GET /openapi/ha3/instances/ose-test1/advanced-configs`
       *
       * @param request ListAdvanceConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAdvanceConfigsResponse
       */
      Models::ListAdvanceConfigsResponse listAdvanceConfigsWithOptions(const string &instanceId, const Models::ListAdvanceConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of advanced configurations.
       *
       * @description ## Sample requests
       * `GET /openapi/ha3/instances/ose-test1/advanced-configs`
       *
       * @param request ListAdvanceConfigsRequest
       * @return ListAdvanceConfigsResponse
       */
      Models::ListAdvanceConfigsResponse listAdvanceConfigs(const string &instanceId, const Models::ListAdvanceConfigsRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAliasesResponse
       */
      Models::ListAliasesResponse listAliasesWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListAliasesResponse
       */
      Models::ListAliasesResponse listAliases(const string &instanceId);

      /**
       * @summary Queries cluster names.
       *
       * @description ### Method
       * GET
       * ### URI
       * /openapi/ha3/instances/{instanceId}/cluster-names
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterNamesResponse
       */
      Models::ListClusterNamesResponse listClusterNamesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cluster names.
       *
       * @description ### Method
       * GET
       * ### URI
       * /openapi/ha3/instances/{instanceId}/cluster-names
       *
       * @return ListClusterNamesResponse
       */
      Models::ListClusterNamesResponse listClusterNames();

      /**
       * @summary Queries cluster tasks.
       *
       * @description ### Method
       * ```java
       * GET
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/cluster-tasks
       * ```
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterTasksResponse
       */
      Models::ListClusterTasksResponse listClusterTasksWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries cluster tasks.
       *
       * @description ### Method
       * ```java
       * GET
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/cluster-tasks
       * ```
       *
       * @return ListClusterTasksResponse
       */
      Models::ListClusterTasksResponse listClusterTasks(const string &instanceId);

      /**
       * @summary Queries clusters.
       *
       * @description ### Method
       * ```java
       * GET
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/clusters
       * ```
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries clusters.
       *
       * @description ### Method
       * ```java
       * GET
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/clusters
       * ```
       *
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const string &instanceId);

      /**
       * @summary Queries the schema information about a data source.
       *
       * @description ## Method
       * `GET`
       * ## URI
       * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}/schemas`
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceSchemasResponse
       */
      Models::ListDataSourceSchemasResponse listDataSourceSchemasWithOptions(const string &instanceId, const string &dataSourceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the schema information about a data source.
       *
       * @description ## Method
       * `GET`
       * ## URI
       * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}/schemas`
       *
       * @return ListDataSourceSchemasResponse
       */
      Models::ListDataSourceSchemasResponse listDataSourceSchemas(const string &instanceId, const string &dataSourceName);

      /**
       * @summary Displays data source tasks.
       *
       * @description ### [](#)Method
       * ```java
       * GET
       * ```
       * ### [](#uri)URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/data-source-tasks
       * ```
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceTasksResponse
       */
      Models::ListDataSourceTasksResponse listDataSourceTasksWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays data source tasks.
       *
       * @description ### [](#)Method
       * ```java
       * GET
       * ```
       * ### [](#uri)URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/data-source-tasks
       * ```
       *
       * @return ListDataSourceTasksResponse
       */
      Models::ListDataSourceTasksResponse listDataSourceTasks(const string &instanceId);

      /**
       * @summary Obtains the list of data sources.
       *
       * @description ## Method
       * `GET`
       * ## URI
       * `/openapi/ha3/instances/{instanceId}/data-sources`
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSourcesWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the list of data sources.
       *
       * @description ## Method
       * `GET`
       * ## URI
       * `/openapi/ha3/instances/{instanceId}/data-sources`
       *
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSources(const string &instanceId);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabasesWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListDatabasesResponse
       */
      Models::ListDatabasesResponse listDatabases(const string &instanceId);

      /**
       * @summary Queries the historical index versions of a data source.
       *
       * @description ### Method
       * `GET`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}/generations?domainName={domainName}`
       *
       * @param request ListDateSourceGenerationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDateSourceGenerationsResponse
       */
      Models::ListDateSourceGenerationsResponse listDateSourceGenerationsWithOptions(const string &instanceId, const string &dataSourceName, const Models::ListDateSourceGenerationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical index versions of a data source.
       *
       * @description ### Method
       * `GET`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}/generations?domainName={domainName}`
       *
       * @param request ListDateSourceGenerationsRequest
       * @return ListDateSourceGenerationsResponse
       */
      Models::ListDateSourceGenerationsResponse listDateSourceGenerations(const string &instanceId, const string &dataSourceName, const Models::ListDateSourceGenerationsRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndexRecoverRecordsResponse
       */
      Models::ListIndexRecoverRecordsResponse listIndexRecoverRecordsWithOptions(const string &indexName, const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListIndexRecoverRecordsResponse
       */
      Models::ListIndexRecoverRecordsResponse listIndexRecoverRecords(const string &indexName, const string &instanceId);

      /**
       * @summary Obtains the index list.
       *
       * @description ## Method
       *     GET
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/indexes
       *
       * @param request ListIndexesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndexesResponse
       */
      Models::ListIndexesResponse listIndexesWithOptions(const string &instanceId, const Models::ListIndexesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the index list.
       *
       * @description ## Method
       *     GET
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/indexes
       *
       * @param request ListIndexesRequest
       * @return ListIndexesResponse
       */
      Models::ListIndexesResponse listIndexes(const string &instanceId, const Models::ListIndexesRequest &request);

      /**
       * @summary Queries the specifications of an instance.
       *
       * @description ### Method
       * `GET`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/specs?type=qrs`
       *
       * @param request ListInstanceSpecsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceSpecsResponse
       */
      Models::ListInstanceSpecsResponse listInstanceSpecsWithOptions(const string &instanceId, const Models::ListInstanceSpecsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of an instance.
       *
       * @description ### Method
       * `GET`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/specs?type=qrs`
       *
       * @param request ListInstanceSpecsRequest
       * @return ListInstanceSpecsResponse
       */
      Models::ListInstanceSpecsResponse listInstanceSpecs(const string &instanceId, const Models::ListInstanceSpecsRequest &request);

      /**
       * @summary Queries a list of instances.
       *
       * @description ### [](#)Method
       * `GET`
       * ### [](#uri)URI
       * `/openapi/ha3/instances`
       *
       * @param tmpReq ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances.
       *
       * @description ### [](#)Method
       * `GET`
       * ### [](#uri)URI
       * `/openapi/ha3/instances`
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @param request ListLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogsResponse
       */
      Models::ListLogsResponse listLogsWithOptions(const string &instanceId, const Models::ListLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListLogsRequest
       * @return ListLogsResponse
       */
      Models::ListLogsResponse listLogs(const string &instanceId, const Models::ListLogsRequest &request);

      /**
       * @summary 通过实例ID查询指定条件下的模型列表。
       *
       * @description ## 请求说明
       * 本API用于从指定实例中获取模型列表，支持通过模型名称、类型以及分页参数进行筛选。请求时需提供实例ID作为路径参数，其他筛选条件为可选的查询参数。
       *
       * @param request ListModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModelsWithOptions(const string &instanceId, const Models::ListModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过实例ID查询指定条件下的模型列表。
       *
       * @description ## 请求说明
       * 本API用于从指定实例中获取模型列表，支持通过模型名称、类型以及分页参数进行筛选。请求时需提供实例ID作为路径参数，其他筛选条件为可选的查询参数。
       *
       * @param request ListModelsRequest
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModels(const string &instanceId, const Models::ListModelsRequest &request);

      /**
       * @summary Queries the details of an online configuration.
       *
       * @description ### Method
       * ```java
       * GET
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/node/{nodeName}/online-configs?domain={domain}
       * ```
       *
       * @param request ListOnlineConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOnlineConfigsResponse
       */
      Models::ListOnlineConfigsResponse listOnlineConfigsWithOptions(const string &instanceId, const string &nodeName, const Models::ListOnlineConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an online configuration.
       *
       * @description ### Method
       * ```java
       * GET
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/node/{nodeName}/online-configs?domain={domain}
       * ```
       *
       * @param request ListOnlineConfigsRequest
       * @return ListOnlineConfigsResponse
       */
      Models::ListOnlineConfigsResponse listOnlineConfigs(const string &instanceId, const string &nodeName, const Models::ListOnlineConfigsRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPausePolicysResponse
       */
      Models::ListPausePolicysResponse listPausePolicysWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListPausePolicysResponse
       */
      Models::ListPausePolicysResponse listPausePolicys(const string &instanceId);

      /**
       * @summary 召回引擎版使用POST请求获取搜索测试结果
       *
       * @param request ListPostQueryResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPostQueryResultResponse
       */
      Models::ListPostQueryResultResponse listPostQueryResultWithOptions(const string &instanceId, const Models::ListPostQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 召回引擎版使用POST请求获取搜索测试结果
       *
       * @param request ListPostQueryResultRequest
       * @return ListPostQueryResultResponse
       */
      Models::ListPostQueryResultResponse listPostQueryResult(const string &instanceId, const Models::ListPostQueryResultRequest &request);

      /**
       * @summary Queries the query result.
       *
       * @description ### [](#)Method
       * `GET`
       * ### [](#uri)URI
       * `/openapi/ha3/instances/{instanceId}/query?query=xxxx`
       *
       * @param request ListQueryResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQueryResultResponse
       */
      Models::ListQueryResultResponse listQueryResultWithOptions(const string &instanceId, const Models::ListQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the query result.
       *
       * @description ### [](#)Method
       * `GET`
       * ### [](#uri)URI
       * `/openapi/ha3/instances/{instanceId}/query?query=xxxx`
       *
       * @param request ListQueryResultRequest
       * @return ListQueryResultResponse
       */
      Models::ListQueryResultResponse listQueryResult(const string &instanceId, const Models::ListQueryResultRequest &request);

      /**
       * @summary 召回引擎版获取rest查询搜索测试结果
       *
       * @param request ListRestQueryResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRestQueryResultResponse
       */
      Models::ListRestQueryResultResponse listRestQueryResultWithOptions(const string &instanceId, const Models::ListRestQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 召回引擎版获取rest查询搜索测试结果
       *
       * @param request ListRestQueryResultRequest
       * @return ListRestQueryResultResponse
       */
      Models::ListRestQueryResultResponse listRestQueryResult(const string &instanceId, const Models::ListRestQueryResultRequest &request);

      /**
       * @summary 通过数据源配置获取schema信息
       *
       * @param request ListSchemasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemasWithOptions(const string &instanceId, const Models::ListSchemasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过数据源配置获取schema信息
       *
       * @param request ListSchemasRequest
       * @return ListSchemasResponse
       */
      Models::ListSchemasResponse listSchemas(const string &instanceId, const Models::ListSchemasRequest &request);

      /**
       * @summary Queries a list of index versions.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTableGenerationsResponse
       */
      Models::ListTableGenerationsResponse listTableGenerationsWithOptions(const string &instanceId, const string &tableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of index versions.
       *
       * @return ListTableGenerationsResponse
       */
      Models::ListTableGenerationsResponse listTableGenerations(const string &instanceId, const string &tableName);

      /**
       * @summary Queries a list of index tables.
       *
       * @param request ListTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTablesWithOptions(const string &instanceId, const Models::ListTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of index tables.
       *
       * @param request ListTablesRequest
       * @return ListTablesResponse
       */
      Models::ListTablesResponse listTables(const string &instanceId, const Models::ListTablesRequest &request);

      /**
       * @summary 查标签接口
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查标签接口
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 获取集群任务列表（数据源+集群）
       *
       * @param request ListTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const string &instanceId, const Models::ListTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取集群任务列表（数据源+集群）
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const string &instanceId, const Models::ListTasksRequest &request);

      /**
       * @summary 向量检索版获取向量查询搜索测试结果
       *
       * @param request ListVectorQueryResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVectorQueryResultResponse
       */
      Models::ListVectorQueryResultResponse listVectorQueryResultWithOptions(const string &instanceId, const Models::ListVectorQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 向量检索版获取向量查询搜索测试结果
       *
       * @param request ListVectorQueryResultRequest
       * @return ListVectorQueryResultResponse
       */
      Models::ListVectorQueryResultResponse listVectorQueryResult(const string &instanceId, const Models::ListVectorQueryResultRequest &request);

      /**
       * @param request ModifyAdvanceConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAdvanceConfigResponse
       */
      Models::ModifyAdvanceConfigResponse modifyAdvanceConfigWithOptions(const string &instanceId, const string &configName, const Models::ModifyAdvanceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyAdvanceConfigRequest
       * @return ModifyAdvanceConfigResponse
       */
      Models::ModifyAdvanceConfigResponse modifyAdvanceConfig(const string &instanceId, const string &configName, const Models::ModifyAdvanceConfigRequest &request);

      /**
       * @summary Modifies the advanced configurations.
       *
       * @description ## Method
       *     put
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/file?fileName={fileName}
       *
       * @param request ModifyAdvanceConfigFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAdvanceConfigFileResponse
       */
      Models::ModifyAdvanceConfigFileResponse modifyAdvanceConfigFileWithOptions(const string &instanceId, const string &configName, const Models::ModifyAdvanceConfigFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the advanced configurations.
       *
       * @description ## Method
       *     put
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/file?fileName={fileName}
       *
       * @param request ModifyAdvanceConfigFileRequest
       * @return ModifyAdvanceConfigFileResponse
       */
      Models::ModifyAdvanceConfigFileResponse modifyAdvanceConfigFile(const string &instanceId, const string &configName, const Models::ModifyAdvanceConfigFileRequest &request);

      /**
       * @param request ModifyAliasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAliasResponse
       */
      Models::ModifyAliasResponse modifyAliasWithOptions(const string &instanceId, const string &alias, const Models::ModifyAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyAliasRequest
       * @return ModifyAliasResponse
       */
      Models::ModifyAliasResponse modifyAlias(const string &instanceId, const string &alias, const Models::ModifyAliasRequest &request);

      /**
       * @summary Modifies the description of a specified cluster.
       *
       * @description ### [](#)Method
       * `PUT`
       * ### [](#uri)URI
       * `/openapi/ha3/instances/{instanceId}/clusters/{clusterName}/desc`
       *
       * @param request ModifyClusterDescRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterDescResponse
       */
      Models::ModifyClusterDescResponse modifyClusterDescWithOptions(const string &instanceId, const string &clusterName, const Models::ModifyClusterDescRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a specified cluster.
       *
       * @description ### [](#)Method
       * `PUT`
       * ### [](#uri)URI
       * `/openapi/ha3/instances/{instanceId}/clusters/{clusterName}/desc`
       *
       * @param request ModifyClusterDescRequest
       * @return ModifyClusterDescResponse
       */
      Models::ModifyClusterDescResponse modifyClusterDesc(const string &instanceId, const string &clusterName, const Models::ModifyClusterDescRequest &request);

      /**
       * @summary Modifies the configuration information of a cluster.
       *
       * @description ## Request syntax
       *     PUT /openapi/ha3/instances/{instanceId}/cluster-offline-config
       *
       * @param request ModifyClusterOfflineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterOfflineConfigResponse
       */
      Models::ModifyClusterOfflineConfigResponse modifyClusterOfflineConfigWithOptions(const string &instanceId, const Models::ModifyClusterOfflineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration information of a cluster.
       *
       * @description ## Request syntax
       *     PUT /openapi/ha3/instances/{instanceId}/cluster-offline-config
       *
       * @param request ModifyClusterOfflineConfigRequest
       * @return ModifyClusterOfflineConfigResponse
       */
      Models::ModifyClusterOfflineConfigResponse modifyClusterOfflineConfig(const string &instanceId, const Models::ModifyClusterOfflineConfigRequest &request);

      /**
       * @summary Modifies the online configuration of a cluster.
       *
       * @description ### Method
       * `PUT`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/cluster-online-config`
       *
       * @param request ModifyClusterOnlineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterOnlineConfigResponse
       */
      Models::ModifyClusterOnlineConfigResponse modifyClusterOnlineConfigWithOptions(const string &instanceId, const Models::ModifyClusterOnlineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the online configuration of a cluster.
       *
       * @description ### Method
       * `PUT`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/cluster-online-config`
       *
       * @param request ModifyClusterOnlineConfigRequest
       * @return ModifyClusterOnlineConfigResponse
       */
      Models::ModifyClusterOnlineConfigResponse modifyClusterOnlineConfig(const string &instanceId, const Models::ModifyClusterOnlineConfigRequest &request);

      /**
       * @summary 修改数据源部署信息
       *
       * @param request ModifyDataSourceDeployRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataSourceDeployResponse
       */
      Models::ModifyDataSourceDeployResponse modifyDataSourceDeployWithOptions(const string &instanceId, const string &deployName, const string &dataSourceName, const Models::ModifyDataSourceDeployRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改数据源部署信息
       *
       * @param request ModifyDataSourceDeployRequest
       * @return ModifyDataSourceDeployResponse
       */
      Models::ModifyDataSourceDeployResponse modifyDataSourceDeploy(const string &instanceId, const string &deployName, const string &dataSourceName, const Models::ModifyDataSourceDeployRequest &request);

      /**
       * @summary Modifies a file.
       *
       * @description ## Method
       *     PUT
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}/file?fileName=/root/test.txt
       *
       * @param request ModifyFileRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFileResponse
       */
      Models::ModifyFileResponse modifyFileWithOptions(const string &instanceId, const string &indexName, const string &versionName, const Models::ModifyFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a file.
       *
       * @description ## Method
       *     PUT
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}/file?fileName=/root/test.txt
       *
       * @param request ModifyFileRequest
       * @return ModifyFileResponse
       */
      Models::ModifyFileResponse modifyFile(const string &instanceId, const string &indexName, const string &versionName, const Models::ModifyFileRequest &request);

      /**
       * @summary 编辑索引表
       *
       * @param request ModifyIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIndexResponse
       */
      Models::ModifyIndexResponse modifyIndexWithOptions(const string &instanceId, const string &indexName, const Models::ModifyIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑索引表
       *
       * @param request ModifyIndexRequest
       * @return ModifyIndexResponse
       */
      Models::ModifyIndexResponse modifyIndex(const string &instanceId, const string &indexName, const Models::ModifyIndexRequest &request);

      /**
       * @summary Modifies the online policy of an index.
       *
       * @param request ModifyIndexOnlineStrategyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIndexOnlineStrategyResponse
       */
      Models::ModifyIndexOnlineStrategyResponse modifyIndexOnlineStrategyWithOptions(const string &instanceId, const string &dataSourceName, const string &deployName, const string &indexName, const Models::ModifyIndexOnlineStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the online policy of an index.
       *
       * @param request ModifyIndexOnlineStrategyRequest
       * @return ModifyIndexOnlineStrategyResponse
       */
      Models::ModifyIndexOnlineStrategyResponse modifyIndexOnlineStrategy(const string &instanceId, const string &dataSourceName, const string &deployName, const string &indexName, const Models::ModifyIndexOnlineStrategyRequest &request);

      /**
       * @summary Modifies the information about index partitions.
       *
       * @description ### Method
       * `PUT`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/index-partition`
       *
       * @param request ModifyIndexPartitionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIndexPartitionResponse
       */
      Models::ModifyIndexPartitionResponse modifyIndexPartitionWithOptions(const string &instanceId, const Models::ModifyIndexPartitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about index partitions.
       *
       * @description ### Method
       * `PUT`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/index-partition`
       *
       * @param request ModifyIndexPartitionRequest
       * @return ModifyIndexPartitionResponse
       */
      Models::ModifyIndexPartitionResponse modifyIndexPartition(const string &instanceId, const Models::ModifyIndexPartitionRequest &request);

      /**
       * @summary Modifies the index version of a cluster (an index version rollback).
       *
       * @description ## [](#)Method
       *     PUT
       * ## [](#uri)URI
       *     /openapi/ha3/instances/{instanceId}/clusters/{clusterName}/index-version
       *
       * @param request ModifyIndexVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIndexVersionResponse
       */
      Models::ModifyIndexVersionResponse modifyIndexVersionWithOptions(const string &instanceId, const string &clusterName, const Models::ModifyIndexVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the index version of a cluster (an index version rollback).
       *
       * @description ## [](#)Method
       *     PUT
       * ## [](#uri)URI
       *     /openapi/ha3/instances/{instanceId}/clusters/{clusterName}/index-version
       *
       * @param request ModifyIndexVersionRequest
       * @return ModifyIndexVersionResponse
       */
      Models::ModifyIndexVersionResponse modifyIndexVersion(const string &instanceId, const string &clusterName, const Models::ModifyIndexVersionRequest &request);

      /**
       * @summary 修改模型详情，修改模型状态
       *
       * @param request ModifyModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyModelResponse
       */
      Models::ModifyModelResponse modifyModelWithOptions(const string &instanceId, const string &modelName, const Models::ModifyModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改模型详情，修改模型状态
       *
       * @param request ModifyModelRequest
       * @return ModifyModelResponse
       */
      Models::ModifyModelResponse modifyModel(const string &instanceId, const string &modelName, const Models::ModifyModelRequest &request);

      /**
       * @summary Modifies the configurations of a node.
       *
       * @description ### Method
       * ```java
       * PUT
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/node-config?type=qrs&name=test
       * ```
       *
       * @param request ModifyNodeConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodeConfigResponse
       */
      Models::ModifyNodeConfigResponse modifyNodeConfigWithOptions(const string &instanceId, const Models::ModifyNodeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a node.
       *
       * @description ### Method
       * ```java
       * PUT
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/node-config?type=qrs&name=test
       * ```
       *
       * @param request ModifyNodeConfigRequest
       * @return ModifyNodeConfigResponse
       */
      Models::ModifyNodeConfigResponse modifyNodeConfig(const string &instanceId, const Models::ModifyNodeConfigRequest &request);

      /**
       * @summary Modifies online configurations.
       *
       * @description ### Method
       * ```java
       * put
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/node/{nodeName}/online-configs/{indexName}
       * ```
       *
       * @param request ModifyOnlineConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOnlineConfigResponse
       */
      Models::ModifyOnlineConfigResponse modifyOnlineConfigWithOptions(const string &instanceId, const string &nodeName, const string &indexName, const Models::ModifyOnlineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies online configurations.
       *
       * @description ### Method
       * ```java
       * put
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/node/{nodeName}/online-configs/{indexName}
       * ```
       *
       * @param request ModifyOnlineConfigRequest
       * @return ModifyOnlineConfigResponse
       */
      Models::ModifyOnlineConfigResponse modifyOnlineConfig(const string &instanceId, const string &nodeName, const string &indexName, const Models::ModifyOnlineConfigRequest &request);

      /**
       * @summary 修改实例的密码
       *
       * @description ### Method
       * `PUT`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/password`
       *
       * @param request ModifyPasswordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPasswordResponse
       */
      Models::ModifyPasswordResponse modifyPasswordWithOptions(const string &instanceId, const Models::ModifyPasswordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例的密码
       *
       * @description ### Method
       * `PUT`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/password`
       *
       * @param request ModifyPasswordRequest
       * @return ModifyPasswordResponse
       */
      Models::ModifyPasswordResponse modifyPassword(const string &instanceId, const Models::ModifyPasswordRequest &request);

      /**
       * @param request ModifyPausePolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPausePolicyResponse
       */
      Models::ModifyPausePolicyResponse modifyPausePolicyWithOptions(const string &instanceId, const Models::ModifyPausePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyPausePolicyRequest
       * @return ModifyPausePolicyResponse
       */
      Models::ModifyPausePolicyResponse modifyPausePolicy(const string &instanceId, const Models::ModifyPausePolicyRequest &request);

      /**
       * @summary 修改公网域名访问白名单
       *
       * @param request ModifyPublicUrlIpListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPublicUrlIpListResponse
       */
      Models::ModifyPublicUrlIpListResponse modifyPublicUrlIpListWithOptions(const string &instanceId, const Models::ModifyPublicUrlIpListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改公网域名访问白名单
       *
       * @param request ModifyPublicUrlIpListRequest
       * @return ModifyPublicUrlIpListResponse
       */
      Models::ModifyPublicUrlIpListResponse modifyPublicUrlIpList(const string &instanceId, const Models::ModifyPublicUrlIpListRequest &request);

      /**
       * @summary 通过指定实例ID来修改数据节点的副本或分片数量。
       *
       * @description ## 请求说明
       * 本API允许用户修改特定实例下的数据节点副本数或分片数。请求时，需提供实例ID，并在请求体中指定要修改的`replica`（副本数）或`partition`（分片数）。请注意，这两个参数都是可选的，但至少需要提供其中一个以执行更新操作。
       *
       * @param request ModifySearcherReplicaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySearcherReplicaResponse
       */
      Models::ModifySearcherReplicaResponse modifySearcherReplicaWithOptions(const string &instanceId, const Models::ModifySearcherReplicaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过指定实例ID来修改数据节点的副本或分片数量。
       *
       * @description ## 请求说明
       * 本API允许用户修改特定实例下的数据节点副本数或分片数。请求时，需提供实例ID，并在请求体中指定要修改的`replica`（副本数）或`partition`（分片数）。请注意，这两个参数都是可选的，但至少需要提供其中一个以执行更新操作。
       *
       * @param request ModifySearcherReplicaRequest
       * @return ModifySearcherReplicaResponse
       */
      Models::ModifySearcherReplicaResponse modifySearcherReplica(const string &instanceId, const Models::ModifySearcherReplicaRequest &request);

      /**
       * @summary Modifies an index table.
       *
       * @param request ModifyTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTableResponse
       */
      Models::ModifyTableResponse modifyTableWithOptions(const string &instanceId, const string &tableName, const Models::ModifyTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an index table.
       *
       * @param request ModifyTableRequest
       * @return ModifyTableResponse
       */
      Models::ModifyTableResponse modifyTable(const string &instanceId, const string &tableName, const Models::ModifyTableRequest &request);

      /**
       * @summary Publishes a version of advanced configurations.
       *
       * @description ## Method
       * ~~~
       * POST
       * ~~~
       * ## URI
       * ~~~
       * /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/actions/publish
       * ~~~
       *
       * @param request PublishAdvanceConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishAdvanceConfigResponse
       */
      Models::PublishAdvanceConfigResponse publishAdvanceConfigWithOptions(const string &instanceId, const string &configName, const Models::PublishAdvanceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a version of advanced configurations.
       *
       * @description ## Method
       * ~~~
       * POST
       * ~~~
       * ## URI
       * ~~~
       * /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/actions/publish
       * ~~~
       *
       * @param request PublishAdvanceConfigRequest
       * @return PublishAdvanceConfigResponse
       */
      Models::PublishAdvanceConfigResponse publishAdvanceConfig(const string &instanceId, const string &configName, const Models::PublishAdvanceConfigRequest &request);

      /**
       * @summary Publishes a specified index version.
       *
       * @description ## Method
       *     POST
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/actions/publish
       *
       * @param request PublishIndexVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishIndexVersionResponse
       */
      Models::PublishIndexVersionResponse publishIndexVersionWithOptions(const string &instanceId, const string &indexName, const Models::PublishIndexVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a specified index version.
       *
       * @description ## Method
       *     POST
       * ## URI
       *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/actions/publish
       *
       * @param request PublishIndexVersionRequest
       * @return PublishIndexVersionResponse
       */
      Models::PublishIndexVersionResponse publishIndexVersion(const string &instanceId, const string &indexName, const Models::PublishIndexVersionRequest &request);

      /**
       * @param request PushDocumentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushDocumentsResponse
       */
      Models::PushDocumentsResponse pushDocumentsWithOptions(const string &instanceId, const string &dataSourceName, const Models::PushDocumentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PushDocumentsRequest
       * @return PushDocumentsResponse
       */
      Models::PushDocumentsResponse pushDocuments(const string &instanceId, const string &dataSourceName, const Models::PushDocumentsRequest &request);

      /**
       * @summary Restores data from an index.
       *
       * @description ### Method
       * `POST`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/recover-index`
       *
       * @param request RecoverIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverIndexResponse
       */
      Models::RecoverIndexResponse recoverIndexWithOptions(const string &instanceId, const Models::RecoverIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores data from an index.
       *
       * @description ### Method
       * `POST`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}/recover-index`
       *
       * @param request RecoverIndexRequest
       * @return RecoverIndexResponse
       */
      Models::RecoverIndexResponse recoverIndex(const string &instanceId, const Models::RecoverIndexRequest &request);

      /**
       * @summary Rebuilds an index.
       *
       * @param request ReindexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReindexResponse
       */
      Models::ReindexResponse reindexWithOptions(const string &instanceId, const string &tableName, const Models::ReindexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rebuilds an index.
       *
       * @param request ReindexRequest
       * @return ReindexResponse
       */
      Models::ReindexResponse reindex(const string &instanceId, const string &tableName, const Models::ReindexRequest &request);

      /**
       * @summary Deletes a cluster.
       *
       * @description ### Method
       * ```java
       * DELETE
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/clusters/{clusterName}
       * ```
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveClusterResponse
       */
      Models::RemoveClusterResponse removeClusterWithOptions(const string &instanceId, const string &clusterName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cluster.
       *
       * @description ### Method
       * ```java
       * DELETE
       * ```
       * ### URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/clusters/{clusterName}
       * ```
       *
       * @return RemoveClusterResponse
       */
      Models::RemoveClusterResponse removeCluster(const string &instanceId, const string &clusterName);

      /**
       * @param request RenameFolderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenameFolderResponse
       */
      Models::RenameFolderResponse renameFolderWithOptions(const string &instanceId, const string &database, const string &folderId, const Models::RenameFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RenameFolderRequest
       * @return RenameFolderResponse
       */
      Models::RenameFolderResponse renameFolder(const string &instanceId, const string &database, const string &folderId, const Models::RenameFolderRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartIndexResponse
       */
      Models::StartIndexResponse startIndexWithOptions(const string &instanceId, const string &indexName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return StartIndexResponse
       */
      Models::StartIndexResponse startIndex(const string &instanceId, const string &indexName);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopIndexResponse
       */
      Models::StopIndexResponse stopIndexWithOptions(const string &instanceId, const string &indexName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return StopIndexResponse
       */
      Models::StopIndexResponse stopIndex(const string &instanceId, const string &indexName);

      /**
       * @summary Stops an FSM task.
       *
       * @description ### [](#)Method
       * ```java
       * PUT
       * ```
       * ### [](#uri)URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/stop-task/{fsmId}
       * ```
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTaskResponse
       */
      Models::StopTaskResponse stopTaskWithOptions(const string &instanceId, const string &fsmId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an FSM task.
       *
       * @description ### [](#)Method
       * ```java
       * PUT
       * ```
       * ### [](#uri)URI
       * ```java
       * /openapi/ha3/instances/{instanceId}/stop-task/{fsmId}
       * ```
       *
       * @return StopTaskResponse
       */
      Models::StopTaskResponse stopTask(const string &instanceId, const string &fsmId);

      /**
       * @summary 打标签接口
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

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
       * @param tmpReq UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删标签接口
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modifies the configuration of a specified instance.
       *
       * @description ### Method
       * `PUT`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}`
       *
       * @param request UpdateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const string &instanceId, const Models::UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a specified instance.
       *
       * @description ### Method
       * `PUT`
       * ### URI
       * `/openapi/ha3/instances/{instanceId}`
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const string &instanceId, const Models::UpdateInstanceRequest &request);

      /**
       * @param request UpdateSqlInstanceContentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSqlInstanceContentResponse
       */
      Models::UpdateSqlInstanceContentResponse updateSqlInstanceContentWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::UpdateSqlInstanceContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateSqlInstanceContentRequest
       * @return UpdateSqlInstanceContentResponse
       */
      Models::UpdateSqlInstanceContentResponse updateSqlInstanceContent(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::UpdateSqlInstanceContentRequest &request);

      /**
       * @param request UpdateSqlInstanceNameRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSqlInstanceNameResponse
       */
      Models::UpdateSqlInstanceNameResponse updateSqlInstanceNameWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::UpdateSqlInstanceNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateSqlInstanceNameRequest
       * @return UpdateSqlInstanceNameResponse
       */
      Models::UpdateSqlInstanceNameResponse updateSqlInstanceName(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::UpdateSqlInstanceNameRequest &request);

      /**
       * @param request UpdateSqlInstanceParamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSqlInstanceParamsResponse
       */
      Models::UpdateSqlInstanceParamsResponse updateSqlInstanceParamsWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::UpdateSqlInstanceParamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateSqlInstanceParamsRequest
       * @return UpdateSqlInstanceParamsResponse
       */
      Models::UpdateSqlInstanceParamsResponse updateSqlInstanceParams(const string &instanceId, const string &database, const string &sqlInstanceId, const Models::UpdateSqlInstanceParamsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
