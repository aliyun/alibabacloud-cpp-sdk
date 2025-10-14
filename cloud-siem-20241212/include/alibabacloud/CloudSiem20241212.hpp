// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDSIEM20241212_HPP_
#define ALIBABACLOUD_CLOUDSIEM20241212_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CloudSiem20241212Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CloudSiem20241212.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 检查升级项
       *
       * @param request CheckUpgradeItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUpgradeItemResponse
       */
      Models::CheckUpgradeItemResponse checkUpgradeItemWithOptions(const Models::CheckUpgradeItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查升级项
       *
       * @param request CheckUpgradeItemRequest
       * @return CheckUpgradeItemResponse
       */
      Models::CheckUpgradeItemResponse checkUpgradeItem(const Models::CheckUpgradeItemRequest &request);

      /**
       * @summary 创建数据源
       *
       * @param request CreateDataIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataIngestionResponse
       */
      Models::CreateDataIngestionResponse createDataIngestionWithOptions(const Models::CreateDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据源
       *
       * @param request CreateDataIngestionRequest
       * @return CreateDataIngestionResponse
       */
      Models::CreateDataIngestionResponse createDataIngestion(const Models::CreateDataIngestionRequest &request);

      /**
       * @summary 创建数据集
       *
       * @param request CreateDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSetResponse
       */
      Models::CreateDataSetResponse createDataSetWithOptions(const Models::CreateDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据集
       *
       * @param request CreateDataSetRequest
       * @return CreateDataSetResponse
       */
      Models::CreateDataSetResponse createDataSet(const Models::CreateDataSetRequest &request);

      /**
       * @summary 创建数据源
       *
       * @param tmpReq CreateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSourceWithOptions(const Models::CreateDataSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据源
       *
       * @param request CreateDataSourceRequest
       * @return CreateDataSourceResponse
       */
      Models::CreateDataSourceResponse createDataSource(const Models::CreateDataSourceRequest &request);

      /**
       * @summary 创建检测规则
       *
       * @param request CreateDetectionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDetectionRuleResponse
       */
      Models::CreateDetectionRuleResponse createDetectionRuleWithOptions(const Models::CreateDetectionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建检测规则
       *
       * @param request CreateDetectionRuleRequest
       * @return CreateDetectionRuleResponse
       */
      Models::CreateDetectionRuleResponse createDetectionRule(const Models::CreateDetectionRuleRequest &request);

      /**
       * @summary 创建导出任务
       *
       * @param request CreateExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExportTaskResponse
       */
      Models::CreateExportTaskResponse createExportTaskWithOptions(const Models::CreateExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建导出任务
       *
       * @param request CreateExportTaskRequest
       * @return CreateExportTaskResponse
       */
      Models::CreateExportTaskResponse createExportTask(const Models::CreateExportTaskRequest &request);

      /**
       * @summary 创建LogStore
       *
       * @param request CreateLogStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogStoreResponse
       */
      Models::CreateLogStoreResponse createLogStoreWithOptions(const Models::CreateLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建LogStore
       *
       * @param request CreateLogStoreRequest
       * @return CreateLogStoreResponse
       */
      Models::CreateLogStoreResponse createLogStore(const Models::CreateLogStoreRequest &request);

      /**
       * @summary 创建标准化规则
       *
       * @param tmpReq CreateNormalizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNormalizationRuleResponse
       */
      Models::CreateNormalizationRuleResponse createNormalizationRuleWithOptions(const Models::CreateNormalizationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建标准化规则
       *
       * @param request CreateNormalizationRuleRequest
       * @return CreateNormalizationRuleResponse
       */
      Models::CreateNormalizationRuleResponse createNormalizationRule(const Models::CreateNormalizationRuleRequest &request);

      /**
       * @summary 创建产品
       *
       * @param request CreateProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProductWithOptions(const Models::CreateProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建产品
       *
       * @param request CreateProductRequest
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProduct(const Models::CreateProductRequest &request);

      /**
       * @summary 创建厂商
       *
       * @param request CreateVendorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVendorResponse
       */
      Models::CreateVendorResponse createVendorWithOptions(const Models::CreateVendorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建厂商
       *
       * @param request CreateVendorRequest
       * @return CreateVendorResponse
       */
      Models::CreateVendorResponse createVendor(const Models::CreateVendorRequest &request);

      /**
       * @summary 删除数据接入
       *
       * @param request DeleteDataIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataIngestionResponse
       */
      Models::DeleteDataIngestionResponse deleteDataIngestionWithOptions(const Models::DeleteDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据接入
       *
       * @param request DeleteDataIngestionRequest
       * @return DeleteDataIngestionResponse
       */
      Models::DeleteDataIngestionResponse deleteDataIngestion(const Models::DeleteDataIngestionRequest &request);

      /**
       * @summary 删除数据集
       *
       * @param request DeleteDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSetResponse
       */
      Models::DeleteDataSetResponse deleteDataSetWithOptions(const Models::DeleteDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据集
       *
       * @param request DeleteDataSetRequest
       * @return DeleteDataSetResponse
       */
      Models::DeleteDataSetResponse deleteDataSet(const Models::DeleteDataSetRequest &request);

      /**
       * @summary 删除数据集记录
       *
       * @param request DeleteDataSetRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSetRecordResponse
       */
      Models::DeleteDataSetRecordResponse deleteDataSetRecordWithOptions(const Models::DeleteDataSetRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据集记录
       *
       * @param request DeleteDataSetRecordRequest
       * @return DeleteDataSetRecordResponse
       */
      Models::DeleteDataSetRecordResponse deleteDataSetRecord(const Models::DeleteDataSetRecordRequest &request);

      /**
       * @summary 删除数据源
       *
       * @param request DeleteDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSourceWithOptions(const Models::DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据源
       *
       * @param request DeleteDataSourceRequest
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSource(const Models::DeleteDataSourceRequest &request);

      /**
       * @summary 删除检测规则
       *
       * @param request DeleteDetectionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDetectionRuleResponse
       */
      Models::DeleteDetectionRuleResponse deleteDetectionRuleWithOptions(const Models::DeleteDetectionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除检测规则
       *
       * @param request DeleteDetectionRuleRequest
       * @return DeleteDetectionRuleResponse
       */
      Models::DeleteDetectionRuleResponse deleteDetectionRule(const Models::DeleteDetectionRuleRequest &request);

      /**
       * @summary 删除LogStore
       *
       * @param request DeleteLogStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogStoreResponse
       */
      Models::DeleteLogStoreResponse deleteLogStoreWithOptions(const Models::DeleteLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除LogStore
       *
       * @param request DeleteLogStoreRequest
       * @return DeleteLogStoreResponse
       */
      Models::DeleteLogStoreResponse deleteLogStore(const Models::DeleteLogStoreRequest &request);

      /**
       * @summary 删除标准化规则
       *
       * @param request DeleteNormalizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNormalizationRuleResponse
       */
      Models::DeleteNormalizationRuleResponse deleteNormalizationRuleWithOptions(const Models::DeleteNormalizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除标准化规则
       *
       * @param request DeleteNormalizationRuleRequest
       * @return DeleteNormalizationRuleResponse
       */
      Models::DeleteNormalizationRuleResponse deleteNormalizationRule(const Models::DeleteNormalizationRuleRequest &request);

      /**
       * @summary 删除标准化规则版本
       *
       * @param request DeleteNormalizationRuleVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNormalizationRuleVersionResponse
       */
      Models::DeleteNormalizationRuleVersionResponse deleteNormalizationRuleVersionWithOptions(const Models::DeleteNormalizationRuleVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除标准化规则版本
       *
       * @param request DeleteNormalizationRuleVersionRequest
       * @return DeleteNormalizationRuleVersionResponse
       */
      Models::DeleteNormalizationRuleVersionResponse deleteNormalizationRuleVersion(const Models::DeleteNormalizationRuleVersionRequest &request);

      /**
       * @summary 删除产品
       *
       * @param request DeleteProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProductWithOptions(const Models::DeleteProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除产品
       *
       * @param request DeleteProductRequest
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProduct(const Models::DeleteProductRequest &request);

      /**
       * @summary 删除厂商
       *
       * @param request DeleteVendorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVendorResponse
       */
      Models::DeleteVendorResponse deleteVendorWithOptions(const Models::DeleteVendorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除厂商
       *
       * @param request DeleteVendorRequest
       * @return DeleteVendorResponse
       */
      Models::DeleteVendorResponse deleteVendor(const Models::DeleteVendorRequest &request);

      /**
       * @summary 停止数据接入
       *
       * @param request DisableDataIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDataIngestionResponse
       */
      Models::DisableDataIngestionResponse disableDataIngestionWithOptions(const Models::DisableDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止数据接入
       *
       * @param request DisableDataIngestionRequest
       * @return DisableDataIngestionResponse
       */
      Models::DisableDataIngestionResponse disableDataIngestion(const Models::DisableDataIngestionRequest &request);

      /**
       * @summary 启动数据接入
       *
       * @param request EnableDataIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDataIngestionResponse
       */
      Models::EnableDataIngestionResponse enableDataIngestionWithOptions(const Models::EnableDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动数据接入
       *
       * @param request EnableDataIngestionRequest
       * @return EnableDataIngestionResponse
       */
      Models::EnableDataIngestionResponse enableDataIngestion(const Models::EnableDataIngestionRequest &request);

      /**
       * @summary 查看LogStore
       *
       * @param request ExecuteLogQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteLogQueryResponse
       */
      Models::ExecuteLogQueryResponse executeLogQueryWithOptions(const Models::ExecuteLogQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看LogStore
       *
       * @param request ExecuteLogQueryRequest
       * @return ExecuteLogQueryResponse
       */
      Models::ExecuteLogQueryResponse executeLogQuery(const Models::ExecuteLogQueryRequest &request);

      /**
       * @summary 执行升级
       *
       * @param request ExecuteUpgradeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteUpgradeResponse
       */
      Models::ExecuteUpgradeResponse executeUpgradeWithOptions(const Models::ExecuteUpgradeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行升级
       *
       * @param request ExecuteUpgradeRequest
       * @return ExecuteUpgradeResponse
       */
      Models::ExecuteUpgradeResponse executeUpgrade(const Models::ExecuteUpgradeRequest &request);

      /**
       * @summary 获取数据批量接入
       *
       * @param request GetDataBatchIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataBatchIngestionResponse
       */
      Models::GetDataBatchIngestionResponse getDataBatchIngestionWithOptions(const Models::GetDataBatchIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据批量接入
       *
       * @param request GetDataBatchIngestionRequest
       * @return GetDataBatchIngestionResponse
       */
      Models::GetDataBatchIngestionResponse getDataBatchIngestion(const Models::GetDataBatchIngestionRequest &request);

      /**
       * @summary 获取日志管理页面里用户数据存储的详情。
       *
       * @param request GetDataStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataStorageResponse
       */
      Models::GetDataStorageResponse getDataStorageWithOptions(const Models::GetDataStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志管理页面里用户数据存储的详情。
       *
       * @param request GetDataStorageRequest
       * @return GetDataStorageResponse
       */
      Models::GetDataStorageResponse getDataStorage(const Models::GetDataStorageRequest &request);

      /**
       * @summary 更新检测规则
       *
       * @param request GetDetectionStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDetectionStatisticResponse
       */
      Models::GetDetectionStatisticResponse getDetectionStatisticWithOptions(const Models::GetDetectionStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新检测规则
       *
       * @param request GetDetectionStatisticRequest
       * @return GetDetectionStatisticResponse
       */
      Models::GetDetectionStatisticResponse getDetectionStatistic(const Models::GetDetectionStatisticRequest &request);

      /**
       * @summary 获取导出任务进度
       *
       * @param request GetExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExportTaskResponse
       */
      Models::GetExportTaskResponse getExportTaskWithOptions(const Models::GetExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取导出任务进度
       *
       * @param request GetExportTaskRequest
       * @return GetExportTaskResponse
       */
      Models::GetExportTaskResponse getExportTask(const Models::GetExportTaskRequest &request);

      /**
       * @summary 获取事件列表
       *
       * @param request GetIncidentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIncidentResponse
       */
      Models::GetIncidentResponse getIncidentWithOptions(const Models::GetIncidentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取事件列表
       *
       * @param request GetIncidentRequest
       * @return GetIncidentResponse
       */
      Models::GetIncidentResponse getIncident(const Models::GetIncidentRequest &request);

      /**
       * @summary 查看LogStore
       *
       * @param request GetLogTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogTicketResponse
       */
      Models::GetLogTicketResponse getLogTicketWithOptions(const Models::GetLogTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看LogStore
       *
       * @param request GetLogTicketRequest
       * @return GetLogTicketResponse
       */
      Models::GetLogTicketResponse getLogTicket(const Models::GetLogTicketRequest &request);

      /**
       * @summary 获取标准化规则
       *
       * @param request GetNormalizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNormalizationRuleResponse
       */
      Models::GetNormalizationRuleResponse getNormalizationRuleWithOptions(const Models::GetNormalizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标准化规则
       *
       * @param request GetNormalizationRuleRequest
       * @return GetNormalizationRuleResponse
       */
      Models::GetNormalizationRuleResponse getNormalizationRule(const Models::GetNormalizationRuleRequest &request);

      /**
       * @summary 获取标准化规则指定版本信息
       *
       * @param request GetNormalizationRuleVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNormalizationRuleVersionResponse
       */
      Models::GetNormalizationRuleVersionResponse getNormalizationRuleVersionWithOptions(const Models::GetNormalizationRuleVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标准化规则指定版本信息
       *
       * @param request GetNormalizationRuleVersionRequest
       * @return GetNormalizationRuleVersionResponse
       */
      Models::GetNormalizationRuleVersionResponse getNormalizationRuleVersion(const Models::GetNormalizationRuleVersionRequest &request);

      /**
       * @summary 获取Schema信息以及字段
       *
       * @param request GetNormalizationSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNormalizationSchemaResponse
       */
      Models::GetNormalizationSchemaResponse getNormalizationSchemaWithOptions(const Models::GetNormalizationSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Schema信息以及字段
       *
       * @param request GetNormalizationSchemaRequest
       * @return GetNormalizationSchemaResponse
       */
      Models::GetNormalizationSchemaResponse getNormalizationSchema(const Models::GetNormalizationSchemaRequest &request);

      /**
       * @summary 获取用户配置信息
       *
       * @param request GetUserConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserConfigResponse
       */
      Models::GetUserConfigResponse getUserConfigWithOptions(const Models::GetUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户配置信息
       *
       * @param request GetUserConfigRequest
       * @return GetUserConfigResponse
       */
      Models::GetUserConfigResponse getUserConfig(const Models::GetUserConfigRequest &request);

      /**
       * @summary 查询接入模板
       *
       * @param request ListDataIngestionTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataIngestionTemplatesResponse
       */
      Models::ListDataIngestionTemplatesResponse listDataIngestionTemplatesWithOptions(const Models::ListDataIngestionTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询接入模板
       *
       * @param request ListDataIngestionTemplatesRequest
       * @return ListDataIngestionTemplatesResponse
       */
      Models::ListDataIngestionTemplatesResponse listDataIngestionTemplates(const Models::ListDataIngestionTemplatesRequest &request);

      /**
       * @summary 获取数据接入任务列表
       *
       * @param tmpReq ListDataIngestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataIngestionsResponse
       */
      Models::ListDataIngestionsResponse listDataIngestionsWithOptions(const Models::ListDataIngestionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据接入任务列表
       *
       * @param request ListDataIngestionsRequest
       * @return ListDataIngestionsResponse
       */
      Models::ListDataIngestionsResponse listDataIngestions(const Models::ListDataIngestionsRequest &request);

      /**
       * @summary 获取数据集记录列表
       *
       * @param request ListDataSetRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSetRecordsResponse
       */
      Models::ListDataSetRecordsResponse listDataSetRecordsWithOptions(const Models::ListDataSetRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据集记录列表
       *
       * @param request ListDataSetRecordsRequest
       * @return ListDataSetRecordsResponse
       */
      Models::ListDataSetRecordsResponse listDataSetRecords(const Models::ListDataSetRecordsRequest &request);

      /**
       * @summary 获取数据集列表
       *
       * @param tmpReq ListDataSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSetsResponse
       */
      Models::ListDataSetsResponse listDataSetsWithOptions(const Models::ListDataSetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据集列表
       *
       * @param request ListDataSetsRequest
       * @return ListDataSetsResponse
       */
      Models::ListDataSetsResponse listDataSets(const Models::ListDataSetsRequest &request);

      /**
       * @summary 查询数据源模板
       *
       * @param tmpReq ListDataSourceTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceTemplatesResponse
       */
      Models::ListDataSourceTemplatesResponse listDataSourceTemplatesWithOptions(const Models::ListDataSourceTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据源模板
       *
       * @param request ListDataSourceTemplatesRequest
       * @return ListDataSourceTemplatesResponse
       */
      Models::ListDataSourceTemplatesResponse listDataSourceTemplates(const Models::ListDataSourceTemplatesRequest &request);

      /**
       * @summary 获取厂商列表
       *
       * @param tmpReq ListDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSourcesWithOptions(const Models::ListDataSourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取厂商列表
       *
       * @param request ListDataSourcesRequest
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSources(const Models::ListDataSourcesRequest &request);

      /**
       * @summary 获取检测规则列表
       *
       * @param tmpReq ListDetectionRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDetectionRulesResponse
       */
      Models::ListDetectionRulesResponse listDetectionRulesWithOptions(const Models::ListDetectionRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取检测规则列表
       *
       * @param request ListDetectionRulesRequest
       * @return ListDetectionRulesResponse
       */
      Models::ListDetectionRulesResponse listDetectionRules(const Models::ListDetectionRulesRequest &request);

      /**
       * @summary 获取事件列表
       *
       * @param tmpReq ListIncidentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIncidentsResponse
       */
      Models::ListIncidentsResponse listIncidentsWithOptions(const Models::ListIncidentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取事件列表
       *
       * @param request ListIncidentsRequest
       * @return ListIncidentsResponse
       */
      Models::ListIncidentsResponse listIncidents(const Models::ListIncidentsRequest &request);

      /**
       * @summary 获取日志Project列表
       *
       * @param request ListLogProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogProjectsResponse
       */
      Models::ListLogProjectsResponse listLogProjectsWithOptions(const Models::ListLogProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志Project列表
       *
       * @param request ListLogProjectsRequest
       * @return ListLogProjectsResponse
       */
      Models::ListLogProjectsResponse listLogProjects(const Models::ListLogProjectsRequest &request);

      /**
       * @summary 获取所有的区域
       *
       * @param request ListLogRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogRegionsResponse
       */
      Models::ListLogRegionsResponse listLogRegionsWithOptions(const Models::ListLogRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取所有的区域
       *
       * @param request ListLogRegionsRequest
       * @return ListLogRegionsResponse
       */
      Models::ListLogRegionsResponse listLogRegions(const Models::ListLogRegionsRequest &request);

      /**
       * @summary 获取日志store列表
       *
       * @param request ListLogStoresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogStoresResponse
       */
      Models::ListLogStoresResponse listLogStoresWithOptions(const Models::ListLogStoresRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志store列表
       *
       * @param request ListLogStoresRequest
       * @return ListLogStoresResponse
       */
      Models::ListLogStoresResponse listLogStores(const Models::ListLogStoresRequest &request);

      /**
       * @summary 获取标准化目录
       *
       * @param request ListNormalizationCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationCategoriesResponse
       */
      Models::ListNormalizationCategoriesResponse listNormalizationCategoriesWithOptions(const Models::ListNormalizationCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标准化目录
       *
       * @param request ListNormalizationCategoriesRequest
       * @return ListNormalizationCategoriesResponse
       */
      Models::ListNormalizationCategoriesResponse listNormalizationCategories(const Models::ListNormalizationCategoriesRequest &request);

      /**
       * @summary 获取标准化日志所有字段
       *
       * @param request ListNormalizationFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationFieldsResponse
       */
      Models::ListNormalizationFieldsResponse listNormalizationFieldsWithOptions(const Models::ListNormalizationFieldsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标准化日志所有字段
       *
       * @param request ListNormalizationFieldsRequest
       * @return ListNormalizationFieldsResponse
       */
      Models::ListNormalizationFieldsResponse listNormalizationFields(const Models::ListNormalizationFieldsRequest &request);

      /**
       * @summary 获取规则的安全能力
       *
       * @param tmpReq ListNormalizationRuleCapacitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationRuleCapacitiesResponse
       */
      Models::ListNormalizationRuleCapacitiesResponse listNormalizationRuleCapacitiesWithOptions(const Models::ListNormalizationRuleCapacitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取规则的安全能力
       *
       * @param request ListNormalizationRuleCapacitiesRequest
       * @return ListNormalizationRuleCapacitiesResponse
       */
      Models::ListNormalizationRuleCapacitiesResponse listNormalizationRuleCapacities(const Models::ListNormalizationRuleCapacitiesRequest &request);

      /**
       * @summary 获取标准化规则版本列表
       *
       * @param request ListNormalizationRuleVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationRuleVersionsResponse
       */
      Models::ListNormalizationRuleVersionsResponse listNormalizationRuleVersionsWithOptions(const Models::ListNormalizationRuleVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标准化规则版本列表
       *
       * @param request ListNormalizationRuleVersionsRequest
       * @return ListNormalizationRuleVersionsResponse
       */
      Models::ListNormalizationRuleVersionsResponse listNormalizationRuleVersions(const Models::ListNormalizationRuleVersionsRequest &request);

      /**
       * @summary 获取标准化规则列表
       *
       * @param tmpReq ListNormalizationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationRulesResponse
       */
      Models::ListNormalizationRulesResponse listNormalizationRulesWithOptions(const Models::ListNormalizationRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标准化规则列表
       *
       * @param request ListNormalizationRulesRequest
       * @return ListNormalizationRulesResponse
       */
      Models::ListNormalizationRulesResponse listNormalizationRules(const Models::ListNormalizationRulesRequest &request);

      /**
       * @summary 获取标准化类目
       *
       * @param request ListNormalizationSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNormalizationSchemasResponse
       */
      Models::ListNormalizationSchemasResponse listNormalizationSchemasWithOptions(const Models::ListNormalizationSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取标准化类目
       *
       * @param request ListNormalizationSchemasRequest
       * @return ListNormalizationSchemasResponse
       */
      Models::ListNormalizationSchemasResponse listNormalizationSchemas(const Models::ListNormalizationSchemasRequest &request);

      /**
       * @summary 获取产品列表
       *
       * @param tmpReq ListProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取产品列表
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @summary 获取接入流量统计
       *
       * @param tmpReq ListTrafficStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTrafficStatisticsResponse
       */
      Models::ListTrafficStatisticsResponse listTrafficStatisticsWithOptions(const Models::ListTrafficStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取接入流量统计
       *
       * @param request ListTrafficStatisticsRequest
       * @return ListTrafficStatisticsResponse
       */
      Models::ListTrafficStatisticsResponse listTrafficStatistics(const Models::ListTrafficStatisticsRequest &request);

      /**
       * @summary 获取升级项列表
       *
       * @param request ListUpgradeItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUpgradeItemsResponse
       */
      Models::ListUpgradeItemsResponse listUpgradeItemsWithOptions(const Models::ListUpgradeItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取升级项列表
       *
       * @param request ListUpgradeItemsRequest
       * @return ListUpgradeItemsResponse
       */
      Models::ListUpgradeItemsResponse listUpgradeItems(const Models::ListUpgradeItemsRequest &request);

      /**
       * @summary 获取厂商列表
       *
       * @param tmpReq ListVendorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVendorsResponse
       */
      Models::ListVendorsResponse listVendorsWithOptions(const Models::ListVendorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取厂商列表
       *
       * @param request ListVendorsRequest
       * @return ListVendorsResponse
       */
      Models::ListVendorsResponse listVendors(const Models::ListVendorsRequest &request);

      /**
       * @summary 数据存储的清空操作，该动作会删除已有的数据，重新初始化物理存储。
       *
       * @param request ResetDataStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDataStorageResponse
       */
      Models::ResetDataStorageResponse resetDataStorageWithOptions(const Models::ResetDataStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 数据存储的清空操作，该动作会删除已有的数据，重新初始化物理存储。
       *
       * @param request ResetDataStorageRequest
       * @return ResetDataStorageResponse
       */
      Models::ResetDataStorageResponse resetDataStorage(const Models::ResetDataStorageRequest &request);

      /**
       * @summary 设置标准化规则默认版本
       *
       * @param request SetDefaultNormalizationRuleVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultNormalizationRuleVersionResponse
       */
      Models::SetDefaultNormalizationRuleVersionResponse setDefaultNormalizationRuleVersionWithOptions(const Models::SetDefaultNormalizationRuleVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置标准化规则默认版本
       *
       * @param request SetDefaultNormalizationRuleVersionRequest
       * @return SetDefaultNormalizationRuleVersionResponse
       */
      Models::SetDefaultNormalizationRuleVersionResponse setDefaultNormalizationRuleVersion(const Models::SetDefaultNormalizationRuleVersionRequest &request);

      /**
       * @summary 更新数据批量接入
       *
       * @param tmpReq UpdateDataBatchIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataBatchIngestionResponse
       */
      Models::UpdateDataBatchIngestionResponse updateDataBatchIngestionWithOptions(const Models::UpdateDataBatchIngestionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据批量接入
       *
       * @param request UpdateDataBatchIngestionRequest
       * @return UpdateDataBatchIngestionResponse
       */
      Models::UpdateDataBatchIngestionResponse updateDataBatchIngestion(const Models::UpdateDataBatchIngestionRequest &request);

      /**
       * @summary 更新数据接入信息
       *
       * @param request UpdateDataIngestionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataIngestionResponse
       */
      Models::UpdateDataIngestionResponse updateDataIngestionWithOptions(const Models::UpdateDataIngestionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据接入信息
       *
       * @param request UpdateDataIngestionRequest
       * @return UpdateDataIngestionResponse
       */
      Models::UpdateDataIngestionResponse updateDataIngestion(const Models::UpdateDataIngestionRequest &request);

      /**
       * @summary 更新接入模板
       *
       * @param request UpdateDataIngestionTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataIngestionTemplateResponse
       */
      Models::UpdateDataIngestionTemplateResponse updateDataIngestionTemplateWithOptions(const Models::UpdateDataIngestionTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新接入模板
       *
       * @param request UpdateDataIngestionTemplateRequest
       * @return UpdateDataIngestionTemplateResponse
       */
      Models::UpdateDataIngestionTemplateResponse updateDataIngestionTemplate(const Models::UpdateDataIngestionTemplateRequest &request);

      /**
       * @summary 更新数据集
       *
       * @param request UpdateDataSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSetResponse
       */
      Models::UpdateDataSetResponse updateDataSetWithOptions(const Models::UpdateDataSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据集
       *
       * @param request UpdateDataSetRequest
       * @return UpdateDataSetResponse
       */
      Models::UpdateDataSetResponse updateDataSet(const Models::UpdateDataSetRequest &request);

      /**
       * @summary 更新数据集记录
       *
       * @param request UpdateDataSetRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSetRecordResponse
       */
      Models::UpdateDataSetRecordResponse updateDataSetRecordWithOptions(const Models::UpdateDataSetRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据集记录
       *
       * @param request UpdateDataSetRecordRequest
       * @return UpdateDataSetRecordResponse
       */
      Models::UpdateDataSetRecordResponse updateDataSetRecord(const Models::UpdateDataSetRecordRequest &request);

      /**
       * @summary 更新数据源
       *
       * @param request UpdateDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSourceWithOptions(const Models::UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据源
       *
       * @param request UpdateDataSourceRequest
       * @return UpdateDataSourceResponse
       */
      Models::UpdateDataSourceResponse updateDataSource(const Models::UpdateDataSourceRequest &request);

      /**
       * @summary 修改数据源模板
       *
       * @param tmpReq UpdateDataSourceTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataSourceTemplateResponse
       */
      Models::UpdateDataSourceTemplateResponse updateDataSourceTemplateWithOptions(const Models::UpdateDataSourceTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改数据源模板
       *
       * @param request UpdateDataSourceTemplateRequest
       * @return UpdateDataSourceTemplateResponse
       */
      Models::UpdateDataSourceTemplateResponse updateDataSourceTemplate(const Models::UpdateDataSourceTemplateRequest &request);

      /**
       * @summary 获取日志管理页面里用户数据存储的详情。
       *
       * @param request UpdateDataStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataStorageResponse
       */
      Models::UpdateDataStorageResponse updateDataStorageWithOptions(const Models::UpdateDataStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志管理页面里用户数据存储的详情。
       *
       * @param request UpdateDataStorageRequest
       * @return UpdateDataStorageResponse
       */
      Models::UpdateDataStorageResponse updateDataStorage(const Models::UpdateDataStorageRequest &request);

      /**
       * @summary 操作日志投递.
       *
       * @param request UpdateDataStorageDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataStorageDeliveryResponse
       */
      Models::UpdateDataStorageDeliveryResponse updateDataStorageDeliveryWithOptions(const Models::UpdateDataStorageDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 操作日志投递.
       *
       * @param request UpdateDataStorageDeliveryRequest
       * @return UpdateDataStorageDeliveryResponse
       */
      Models::UpdateDataStorageDeliveryResponse updateDataStorageDelivery(const Models::UpdateDataStorageDeliveryRequest &request);

      /**
       * @summary 更新数据存储中日志的数据保存天数。
       *
       * @param request UpdateDataStorageTtlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDataStorageTtlResponse
       */
      Models::UpdateDataStorageTtlResponse updateDataStorageTtlWithOptions(const Models::UpdateDataStorageTtlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据存储中日志的数据保存天数。
       *
       * @param request UpdateDataStorageTtlRequest
       * @return UpdateDataStorageTtlResponse
       */
      Models::UpdateDataStorageTtlResponse updateDataStorageTtl(const Models::UpdateDataStorageTtlRequest &request);

      /**
       * @summary 更新检测规则
       *
       * @param request UpdateDetectionRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDetectionRuleResponse
       */
      Models::UpdateDetectionRuleResponse updateDetectionRuleWithOptions(const Models::UpdateDetectionRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新检测规则
       *
       * @param request UpdateDetectionRuleRequest
       * @return UpdateDetectionRuleResponse
       */
      Models::UpdateDetectionRuleResponse updateDetectionRule(const Models::UpdateDetectionRuleRequest &request);

      /**
       * @summary 更新标准化规则
       *
       * @param tmpReq UpdateNormalizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNormalizationRuleResponse
       */
      Models::UpdateNormalizationRuleResponse updateNormalizationRuleWithOptions(const Models::UpdateNormalizationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新标准化规则
       *
       * @param request UpdateNormalizationRuleRequest
       * @return UpdateNormalizationRuleResponse
       */
      Models::UpdateNormalizationRuleResponse updateNormalizationRule(const Models::UpdateNormalizationRuleRequest &request);

      /**
       * @summary 更新产品品
       *
       * @param request UpdateProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProductWithOptions(const Models::UpdateProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新产品品
       *
       * @param request UpdateProductRequest
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProduct(const Models::UpdateProductRequest &request);

      /**
       * @summary 更新厂商
       *
       * @param request UpdateVendorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVendorResponse
       */
      Models::UpdateVendorResponse updateVendorWithOptions(const Models::UpdateVendorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新厂商
       *
       * @param request UpdateVendorRequest
       * @return UpdateVendorResponse
       */
      Models::UpdateVendorResponse updateVendor(const Models::UpdateVendorRequest &request);

      /**
       * @summary 校验LogStore
       *
       * @param request ValidateLogStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateLogStoreResponse
       */
      Models::ValidateLogStoreResponse validateLogStoreWithOptions(const Models::ValidateLogStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验LogStore
       *
       * @param request ValidateLogStoreRequest
       * @return ValidateLogStoreResponse
       */
      Models::ValidateLogStoreResponse validateLogStore(const Models::ValidateLogStoreRequest &request);

      /**
       * @summary 校验规则和数据
       *
       * @param request ValidateNormalizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateNormalizationRuleResponse
       */
      Models::ValidateNormalizationRuleResponse validateNormalizationRuleWithOptions(const Models::ValidateNormalizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验规则和数据
       *
       * @param request ValidateNormalizationRuleRequest
       * @return ValidateNormalizationRuleResponse
       */
      Models::ValidateNormalizationRuleResponse validateNormalizationRule(const Models::ValidateNormalizationRuleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
