// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DMS20250414_HPP_
#define ALIBABACLOUD_DMS20250414_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dms20250414Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dms20250414.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 批量新建湖仓表分区
       *
       * @param tmpReq BatchCreateDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateDataLakePartitionsResponse
       */
      Models::BatchCreateDataLakePartitionsResponse batchCreateDataLakePartitionsWithOptions(const Models::BatchCreateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量新建湖仓表分区
       *
       * @param request BatchCreateDataLakePartitionsRequest
       * @return BatchCreateDataLakePartitionsResponse
       */
      Models::BatchCreateDataLakePartitionsResponse batchCreateDataLakePartitions(const Models::BatchCreateDataLakePartitionsRequest &request);

      /**
       * @summary 批量删除湖仓表分区
       *
       * @param request BatchDeleteDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteDataLakePartitionsResponse
       */
      Models::BatchDeleteDataLakePartitionsResponse batchDeleteDataLakePartitionsWithOptions(const Models::BatchDeleteDataLakePartitionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除湖仓表分区
       *
       * @param request BatchDeleteDataLakePartitionsRequest
       * @return BatchDeleteDataLakePartitionsResponse
       */
      Models::BatchDeleteDataLakePartitionsResponse batchDeleteDataLakePartitions(const Models::BatchDeleteDataLakePartitionsRequest &request);

      /**
       * @summary 批量更新湖仓表分区
       *
       * @param tmpReq BatchUpdateDataLakePartitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateDataLakePartitionsResponse
       */
      Models::BatchUpdateDataLakePartitionsResponse batchUpdateDataLakePartitionsWithOptions(const Models::BatchUpdateDataLakePartitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量更新湖仓表分区
       *
       * @param request BatchUpdateDataLakePartitionsRequest
       * @return BatchUpdateDataLakePartitionsResponse
       */
      Models::BatchUpdateDataLakePartitionsResponse batchUpdateDataLakePartitions(const Models::BatchUpdateDataLakePartitionsRequest &request);

      /**
       * @summary 创建Airflow
       *
       * @param request CreateAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAirflowResponse
       */
      Models::CreateAirflowResponse createAirflowWithOptions(const Models::CreateAirflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Airflow
       *
       * @param request CreateAirflowRequest
       * @return CreateAirflowResponse
       */
      Models::CreateAirflowResponse createAirflow(const Models::CreateAirflowRequest &request);

      /**
       * @summary Queries the Airflow logon credential. You can use this credential to log on to the DMS-managed Airflow instance.
       *
       * @param request CreateAirflowLoginTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAirflowLoginTokenResponse
       */
      Models::CreateAirflowLoginTokenResponse createAirflowLoginTokenWithOptions(const Models::CreateAirflowLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Airflow logon credential. You can use this credential to log on to the DMS-managed Airflow instance.
       *
       * @param request CreateAirflowLoginTokenRequest
       * @return CreateAirflowLoginTokenResponse
       */
      Models::CreateAirflowLoginTokenResponse createAirflowLoginToken(const Models::CreateAirflowLoginTokenRequest &request);

      /**
       * @summary 新建湖仓数据库
       *
       * @param tmpReq CreateDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeDatabaseResponse
       */
      Models::CreateDataLakeDatabaseResponse createDataLakeDatabaseWithOptions(const Models::CreateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建湖仓数据库
       *
       * @param request CreateDataLakeDatabaseRequest
       * @return CreateDataLakeDatabaseResponse
       */
      Models::CreateDataLakeDatabaseResponse createDataLakeDatabase(const Models::CreateDataLakeDatabaseRequest &request);

      /**
       * @summary 新建湖仓自定义函数
       *
       * @param tmpReq CreateDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeFunctionResponse
       */
      Models::CreateDataLakeFunctionResponse createDataLakeFunctionWithOptions(const Models::CreateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建湖仓自定义函数
       *
       * @param request CreateDataLakeFunctionRequest
       * @return CreateDataLakeFunctionResponse
       */
      Models::CreateDataLakeFunctionResponse createDataLakeFunction(const Models::CreateDataLakeFunctionRequest &request);

      /**
       * @summary 新建湖仓表分区
       *
       * @param tmpReq CreateDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakePartitionResponse
       */
      Models::CreateDataLakePartitionResponse createDataLakePartitionWithOptions(const Models::CreateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建湖仓表分区
       *
       * @param request CreateDataLakePartitionRequest
       * @return CreateDataLakePartitionResponse
       */
      Models::CreateDataLakePartitionResponse createDataLakePartition(const Models::CreateDataLakePartitionRequest &request);

      /**
       * @summary 新建湖仓表
       *
       * @param tmpReq CreateDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataLakeTableResponse
       */
      Models::CreateDataLakeTableResponse createDataLakeTableWithOptions(const Models::CreateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建湖仓表
       *
       * @param request CreateDataLakeTableRequest
       * @return CreateDataLakeTableResponse
       */
      Models::CreateDataLakeTableResponse createDataLakeTable(const Models::CreateDataLakeTableRequest &request);

      /**
       * @summary 删除Airflow
       *
       * @param request DeleteAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAirflowResponse
       */
      Models::DeleteAirflowResponse deleteAirflowWithOptions(const Models::DeleteAirflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Airflow
       *
       * @param request DeleteAirflowRequest
       * @return DeleteAirflowResponse
       */
      Models::DeleteAirflowResponse deleteAirflow(const Models::DeleteAirflowRequest &request);

      /**
       * @summary 删除湖仓数据库
       *
       * @param request DeleteDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeDatabaseResponse
       */
      Models::DeleteDataLakeDatabaseResponse deleteDataLakeDatabaseWithOptions(const Models::DeleteDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除湖仓数据库
       *
       * @param request DeleteDataLakeDatabaseRequest
       * @return DeleteDataLakeDatabaseResponse
       */
      Models::DeleteDataLakeDatabaseResponse deleteDataLakeDatabase(const Models::DeleteDataLakeDatabaseRequest &request);

      /**
       * @summary 删除湖仓自定义函数
       *
       * @param request DeleteDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeFunctionResponse
       */
      Models::DeleteDataLakeFunctionResponse deleteDataLakeFunctionWithOptions(const Models::DeleteDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除湖仓自定义函数
       *
       * @param request DeleteDataLakeFunctionRequest
       * @return DeleteDataLakeFunctionResponse
       */
      Models::DeleteDataLakeFunctionResponse deleteDataLakeFunction(const Models::DeleteDataLakeFunctionRequest &request);

      /**
       * @summary 删除湖仓表分区
       *
       * @param tmpReq DeleteDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakePartitionResponse
       */
      Models::DeleteDataLakePartitionResponse deleteDataLakePartitionWithOptions(const Models::DeleteDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除湖仓表分区
       *
       * @param request DeleteDataLakePartitionRequest
       * @return DeleteDataLakePartitionResponse
       */
      Models::DeleteDataLakePartitionResponse deleteDataLakePartition(const Models::DeleteDataLakePartitionRequest &request);

      /**
       * @summary 删除湖仓表
       *
       * @param request DeleteDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataLakeTableResponse
       */
      Models::DeleteDataLakeTableResponse deleteDataLakeTableWithOptions(const Models::DeleteDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除湖仓表
       *
       * @param request DeleteDataLakeTableRequest
       * @return DeleteDataLakeTableResponse
       */
      Models::DeleteDataLakeTableResponse deleteDataLakeTable(const Models::DeleteDataLakeTableRequest &request);

      /**
       * @summary 查询 Airflow
       *
       * @param request GetAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAirflowResponse
       */
      Models::GetAirflowResponse getAirflowWithOptions(const Models::GetAirflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 Airflow
       *
       * @param request GetAirflowRequest
       * @return GetAirflowResponse
       */
      Models::GetAirflowResponse getAirflow(const Models::GetAirflowRequest &request);

      /**
       * @summary 获取uc的数据库目录
       *
       * @param request GetDataLakeCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeCatalogResponse
       */
      Models::GetDataLakeCatalogResponse getDataLakeCatalogWithOptions(const Models::GetDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取uc的数据库目录
       *
       * @param request GetDataLakeCatalogRequest
       * @return GetDataLakeCatalogResponse
       */
      Models::GetDataLakeCatalogResponse getDataLakeCatalog(const Models::GetDataLakeCatalogRequest &request);

      /**
       * @summary 获取UC的数据库
       *
       * @param request GetDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeDatabaseResponse
       */
      Models::GetDataLakeDatabaseResponse getDataLakeDatabaseWithOptions(const Models::GetDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取UC的数据库
       *
       * @param request GetDataLakeDatabaseRequest
       * @return GetDataLakeDatabaseResponse
       */
      Models::GetDataLakeDatabaseResponse getDataLakeDatabase(const Models::GetDataLakeDatabaseRequest &request);

      /**
       * @summary 获取湖仓自定义函数详细信息
       *
       * @param request GetDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeFunctionResponse
       */
      Models::GetDataLakeFunctionResponse getDataLakeFunctionWithOptions(const Models::GetDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取湖仓自定义函数详细信息
       *
       * @param request GetDataLakeFunctionRequest
       * @return GetDataLakeFunctionResponse
       */
      Models::GetDataLakeFunctionResponse getDataLakeFunction(const Models::GetDataLakeFunctionRequest &request);

      /**
       * @summary 获取湖仓表分区详情
       *
       * @param tmpReq GetDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakePartitionResponse
       */
      Models::GetDataLakePartitionResponse getDataLakePartitionWithOptions(const Models::GetDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取湖仓表分区详情
       *
       * @param request GetDataLakePartitionRequest
       * @return GetDataLakePartitionResponse
       */
      Models::GetDataLakePartitionResponse getDataLakePartition(const Models::GetDataLakePartitionRequest &request);

      /**
       * @summary 获取表信息
       *
       * @param request GetDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataLakeTableResponse
       */
      Models::GetDataLakeTableResponse getDataLakeTableWithOptions(const Models::GetDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取表信息
       *
       * @param request GetDataLakeTableRequest
       * @return GetDataLakeTableResponse
       */
      Models::GetDataLakeTableResponse getDataLakeTable(const Models::GetDataLakeTableRequest &request);

      /**
       * @summary 列出资源Airflow
       *
       * @param request ListAirflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAirflowsResponse
       */
      Models::ListAirflowsResponse listAirflowsWithOptions(const Models::ListAirflowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出资源Airflow
       *
       * @param request ListAirflowsRequest
       * @return ListAirflowsResponse
       */
      Models::ListAirflowsResponse listAirflows(const Models::ListAirflowsRequest &request);

      /**
       * @summary 获取uc的数据库目录列表
       *
       * @param request ListDataLakeCatalogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeCatalogResponse
       */
      Models::ListDataLakeCatalogResponse listDataLakeCatalogWithOptions(const Models::ListDataLakeCatalogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取uc的数据库目录列表
       *
       * @param request ListDataLakeCatalogRequest
       * @return ListDataLakeCatalogResponse
       */
      Models::ListDataLakeCatalogResponse listDataLakeCatalog(const Models::ListDataLakeCatalogRequest &request);

      /**
       * @summary 获取数据库列表
       *
       * @param request ListDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeDatabaseResponse
       */
      Models::ListDataLakeDatabaseResponse listDataLakeDatabaseWithOptions(const Models::ListDataLakeDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据库列表
       *
       * @param request ListDataLakeDatabaseRequest
       * @return ListDataLakeDatabaseResponse
       */
      Models::ListDataLakeDatabaseResponse listDataLakeDatabase(const Models::ListDataLakeDatabaseRequest &request);

      /**
       * @summary 获取数据湖函数列表
       *
       * @param request ListDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeFunctionResponse
       */
      Models::ListDataLakeFunctionResponse listDataLakeFunctionWithOptions(const Models::ListDataLakeFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖函数列表
       *
       * @param request ListDataLakeFunctionRequest
       * @return ListDataLakeFunctionResponse
       */
      Models::ListDataLakeFunctionResponse listDataLakeFunction(const Models::ListDataLakeFunctionRequest &request);

      /**
       * @summary 获取数据湖函数名列表
       *
       * @param request ListDataLakeFunctionNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeFunctionNameResponse
       */
      Models::ListDataLakeFunctionNameResponse listDataLakeFunctionNameWithOptions(const Models::ListDataLakeFunctionNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖函数名列表
       *
       * @param request ListDataLakeFunctionNameRequest
       * @return ListDataLakeFunctionNameResponse
       */
      Models::ListDataLakeFunctionNameResponse listDataLakeFunctionName(const Models::ListDataLakeFunctionNameRequest &request);

      /**
       * @summary 获取数据湖表分区列表
       *
       * @param tmpReq ListDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionResponse
       */
      Models::ListDataLakePartitionResponse listDataLakePartitionWithOptions(const Models::ListDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖表分区列表
       *
       * @param request ListDataLakePartitionRequest
       * @return ListDataLakePartitionResponse
       */
      Models::ListDataLakePartitionResponse listDataLakePartition(const Models::ListDataLakePartitionRequest &request);

      /**
       * @summary 根据筛选条件获取数据湖表分区列表
       *
       * @param request ListDataLakePartitionByFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionByFilterResponse
       */
      Models::ListDataLakePartitionByFilterResponse listDataLakePartitionByFilterWithOptions(const Models::ListDataLakePartitionByFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据筛选条件获取数据湖表分区列表
       *
       * @param request ListDataLakePartitionByFilterRequest
       * @return ListDataLakePartitionByFilterResponse
       */
      Models::ListDataLakePartitionByFilterResponse listDataLakePartitionByFilter(const Models::ListDataLakePartitionByFilterRequest &request);

      /**
       * @summary 获取数据湖表分区名列表
       *
       * @param request ListDataLakePartitionNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakePartitionNameResponse
       */
      Models::ListDataLakePartitionNameResponse listDataLakePartitionNameWithOptions(const Models::ListDataLakePartitionNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖表分区名列表
       *
       * @param request ListDataLakePartitionNameRequest
       * @return ListDataLakePartitionNameResponse
       */
      Models::ListDataLakePartitionNameResponse listDataLakePartitionName(const Models::ListDataLakePartitionNameRequest &request);

      /**
       * @summary 获取数据湖表列表
       *
       * @param request ListDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTableResponse
       */
      Models::ListDataLakeTableResponse listDataLakeTableWithOptions(const Models::ListDataLakeTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖表列表
       *
       * @param request ListDataLakeTableRequest
       * @return ListDataLakeTableResponse
       */
      Models::ListDataLakeTableResponse listDataLakeTable(const Models::ListDataLakeTableRequest &request);

      /**
       * @summary 获取数据湖表名列表
       *
       * @param request ListDataLakeTableNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTableNameResponse
       */
      Models::ListDataLakeTableNameResponse listDataLakeTableNameWithOptions(const Models::ListDataLakeTableNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据湖表名列表
       *
       * @param request ListDataLakeTableNameRequest
       * @return ListDataLakeTableNameResponse
       */
      Models::ListDataLakeTableNameResponse listDataLakeTableName(const Models::ListDataLakeTableNameRequest &request);

      /**
       * @summary 获取表信息
       *
       * @param request ListDataLakeTablebaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataLakeTablebaseInfoResponse
       */
      Models::ListDataLakeTablebaseInfoResponse listDataLakeTablebaseInfoWithOptions(const Models::ListDataLakeTablebaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取表信息
       *
       * @param request ListDataLakeTablebaseInfoRequest
       * @return ListDataLakeTablebaseInfoResponse
       */
      Models::ListDataLakeTablebaseInfoResponse listDataLakeTablebaseInfo(const Models::ListDataLakeTablebaseInfoRequest &request);

      /**
       * @summary 更新UpdateAirflow
       *
       * @param request UpdateAirflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAirflowResponse
       */
      Models::UpdateAirflowResponse updateAirflowWithOptions(const Models::UpdateAirflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新UpdateAirflow
       *
       * @param request UpdateAirflowRequest
       * @return UpdateAirflowResponse
       */
      Models::UpdateAirflowResponse updateAirflow(const Models::UpdateAirflowRequest &request);

      /**
       * @summary 更新湖仓数据库
       *
       * @param tmpReq UpdateDataLakeDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeDatabaseResponse
       */
      Models::UpdateDataLakeDatabaseResponse updateDataLakeDatabaseWithOptions(const Models::UpdateDataLakeDatabaseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新湖仓数据库
       *
       * @param request UpdateDataLakeDatabaseRequest
       * @return UpdateDataLakeDatabaseResponse
       */
      Models::UpdateDataLakeDatabaseResponse updateDataLakeDatabase(const Models::UpdateDataLakeDatabaseRequest &request);

      /**
       * @summary 更新湖仓自定义函数
       *
       * @param tmpReq UpdateDataLakeFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeFunctionResponse
       */
      Models::UpdateDataLakeFunctionResponse updateDataLakeFunctionWithOptions(const Models::UpdateDataLakeFunctionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新湖仓自定义函数
       *
       * @param request UpdateDataLakeFunctionRequest
       * @return UpdateDataLakeFunctionResponse
       */
      Models::UpdateDataLakeFunctionResponse updateDataLakeFunction(const Models::UpdateDataLakeFunctionRequest &request);

      /**
       * @summary 更新湖仓表分区
       *
       * @param tmpReq UpdateDataLakePartitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakePartitionResponse
       */
      Models::UpdateDataLakePartitionResponse updateDataLakePartitionWithOptions(const Models::UpdateDataLakePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新湖仓表分区
       *
       * @param request UpdateDataLakePartitionRequest
       * @return UpdateDataLakePartitionResponse
       */
      Models::UpdateDataLakePartitionResponse updateDataLakePartition(const Models::UpdateDataLakePartitionRequest &request);

      /**
       * @summary 更新湖仓表信息
       *
       * @param tmpReq UpdateDataLakeTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataLakeTableResponse
       */
      Models::UpdateDataLakeTableResponse updateDataLakeTableWithOptions(const Models::UpdateDataLakeTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新湖仓表信息
       *
       * @param request UpdateDataLakeTableRequest
       * @return UpdateDataLakeTableResponse
       */
      Models::UpdateDataLakeTableResponse updateDataLakeTable(const Models::UpdateDataLakeTableRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
