// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAISTUDIO20210202_HPP_
#define ALIBABACLOUD_PAISTUDIO20210202_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PaiStudio20210202Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PaiStudio20210202.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 复制实验
       *
       * @param request CopyExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyExperimentResponse
       */
      Models::CopyExperimentResponse copyExperimentWithOptions(const string &ExperimentId, const Models::CopyExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 复制实验
       *
       * @param request CopyExperimentRequest
       * @return CopyExperimentResponse
       */
      Models::CopyExperimentResponse copyExperiment(const string &ExperimentId, const Models::CopyExperimentRequest &request);

      /**
       * @summary 创建实验，或根据实验模版创建实验
       *
       * @param request CreateExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExperimentResponse
       */
      Models::CreateExperimentResponse createExperimentWithOptions(const Models::CreateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实验，或根据实验模版创建实验
       *
       * @param request CreateExperimentRequest
       * @return CreateExperimentResponse
       */
      Models::CreateExperimentResponse createExperiment(const Models::CreateExperimentRequest &request);

      /**
       * @summary 创建算法文件夹
       *
       * @param request CreateExperimentFolderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExperimentFolderResponse
       */
      Models::CreateExperimentFolderResponse createExperimentFolderWithOptions(const Models::CreateExperimentFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建算法文件夹
       *
       * @param request CreateExperimentFolderRequest
       * @return CreateExperimentFolderResponse
       */
      Models::CreateExperimentFolderResponse createExperimentFolder(const Models::CreateExperimentFolderRequest &request);

      /**
       * @summary 校验实验是否能迁移
       *
       * @param request CreateExperimentMigrateValidationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExperimentMigrateValidationResponse
       */
      Models::CreateExperimentMigrateValidationResponse createExperimentMigrateValidationWithOptions(const Models::CreateExperimentMigrateValidationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验实验是否能迁移
       *
       * @param request CreateExperimentMigrateValidationRequest
       * @return CreateExperimentMigrateValidationResponse
       */
      Models::CreateExperimentMigrateValidationResponse createExperimentMigrateValidation(const Models::CreateExperimentMigrateValidationRequest &request);

      /**
       * @summary 创建一个工作流的作业
       *
       * @param request CreateJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个工作流的作业
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const Models::CreateJobRequest &request);

      /**
       * @summary 删除实验
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExperimentResponse
       */
      Models::DeleteExperimentResponse deleteExperimentWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除实验
       *
       * @return DeleteExperimentResponse
       */
      Models::DeleteExperimentResponse deleteExperiment(const string &ExperimentId);

      /**
       * @summary 删除算法文件夹
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExperimentFolderResponse
       */
      Models::DeleteExperimentFolderResponse deleteExperimentFolderWithOptions(const string &FolderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除算法文件夹
       *
       * @return DeleteExperimentFolderResponse
       */
      Models::DeleteExperimentFolderResponse deleteExperimentFolder(const string &FolderId);

      /**
       * @summary 获取算法树
       *
       * @param request GetAlgoTreeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlgoTreeResponse
       */
      Models::GetAlgoTreeResponse getAlgoTreeWithOptions(const Models::GetAlgoTreeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取算法树
       *
       * @param request GetAlgoTreeRequest
       * @return GetAlgoTreeResponse
       */
      Models::GetAlgoTreeResponse getAlgoTree(const Models::GetAlgoTreeRequest &request);

      /**
       * @summary 获取算法定义
       *
       * @param request GetAlgorithmDefRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlgorithmDefResponse
       */
      Models::GetAlgorithmDefResponse getAlgorithmDefWithOptions(const Models::GetAlgorithmDefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取算法定义
       *
       * @param request GetAlgorithmDefRequest
       * @return GetAlgorithmDefResponse
       */
      Models::GetAlgorithmDefResponse getAlgorithmDef(const Models::GetAlgorithmDefRequest &request);

      /**
       * @summary 批量获取算法定义
       *
       * @param request GetAlgorithmDefsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlgorithmDefsResponse
       */
      Models::GetAlgorithmDefsResponse getAlgorithmDefsWithOptions(const Models::GetAlgorithmDefsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取算法定义
       *
       * @param request GetAlgorithmDefsRequest
       * @return GetAlgorithmDefsResponse
       */
      Models::GetAlgorithmDefsResponse getAlgorithmDefs(const Models::GetAlgorithmDefsRequest &request);

      /**
       * @summary 获取算法树
       *
       * @param request GetAlgorithmTreeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlgorithmTreeResponse
       */
      Models::GetAlgorithmTreeResponse getAlgorithmTreeWithOptions(const Models::GetAlgorithmTreeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取算法树
       *
       * @param request GetAlgorithmTreeRequest
       * @return GetAlgorithmTreeResponse
       */
      Models::GetAlgorithmTreeResponse getAlgorithmTree(const Models::GetAlgorithmTreeRequest &request);

      /**
       * @summary 获取实验信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentResponse
       */
      Models::GetExperimentResponse getExperimentWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验信息
       *
       * @return GetExperimentResponse
       */
      Models::GetExperimentResponse getExperiment(const string &ExperimentId);

      /**
       * @summary 获取算法文件夹下的内容
       *
       * @param request GetExperimentFolderChildrenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentFolderChildrenResponse
       */
      Models::GetExperimentFolderChildrenResponse getExperimentFolderChildrenWithOptions(const string &FolderId, const Models::GetExperimentFolderChildrenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取算法文件夹下的内容
       *
       * @param request GetExperimentFolderChildrenRequest
       * @return GetExperimentFolderChildrenResponse
       */
      Models::GetExperimentFolderChildrenResponse getExperimentFolderChildren(const string &FolderId, const Models::GetExperimentFolderChildrenRequest &request);

      /**
       * @summary 获取实验的元信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentMetaResponse
       */
      Models::GetExperimentMetaResponse getExperimentMetaWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验的元信息
       *
       * @return GetExperimentMetaResponse
       */
      Models::GetExperimentMetaResponse getExperimentMeta(const string &ExperimentId);

      /**
       * @summary 获取实验以及实验节点的状态
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentStatusResponse
       */
      Models::GetExperimentStatusResponse getExperimentStatusWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验以及实验节点的状态
       *
       * @return GetExperimentStatusResponse
       */
      Models::GetExperimentStatusResponse getExperimentStatus(const string &ExperimentId);

      /**
       * @summary 查询实验的可视化meta
       *
       * @param request GetExperimentVisualizationMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentVisualizationMetaResponse
       */
      Models::GetExperimentVisualizationMetaResponse getExperimentVisualizationMetaWithOptions(const string &ExperimentId, const Models::GetExperimentVisualizationMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实验的可视化meta
       *
       * @param request GetExperimentVisualizationMetaRequest
       * @return GetExperimentVisualizationMetaResponse
       */
      Models::GetExperimentVisualizationMetaResponse getExperimentVisualizationMeta(const string &ExperimentId, const Models::GetExperimentVisualizationMetaRequest &request);

      /**
       * @summary 获取实验的统计信息
       *
       * @param request GetExperimentsStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentsStatisticsResponse
       */
      Models::GetExperimentsStatisticsResponse getExperimentsStatisticsWithOptions(const Models::GetExperimentsStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验的统计信息
       *
       * @param request GetExperimentsStatisticsRequest
       * @return GetExperimentsStatisticsResponse
       */
      Models::GetExperimentsStatisticsResponse getExperimentsStatistics(const Models::GetExperimentsStatisticsRequest &request);

      /**
       * @summary 获取实验或文件夹所有者列表
       *
       * @param request GetExperimentsUsersStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperimentsUsersStatisticsResponse
       */
      Models::GetExperimentsUsersStatisticsResponse getExperimentsUsersStatisticsWithOptions(const Models::GetExperimentsUsersStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验或文件夹所有者列表
       *
       * @param request GetExperimentsUsersStatisticsRequest
       * @return GetExperimentsUsersStatisticsResponse
       */
      Models::GetExperimentsUsersStatisticsResponse getExperimentsUsersStatistics(const Models::GetExperimentsUsersStatisticsRequest &request);

      /**
       * @summary 获取一个PAI Studio作业详情
       *
       * @param request GetJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const string &JobId, const Models::GetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一个PAI Studio作业详情
       *
       * @param request GetJobRequest
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const string &JobId, const Models::GetJobRequest &request);

      /**
       * @summary 获取MaxCompute表schema
       *
       * @param request GetMCTableSchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMCTableSchemaResponse
       */
      Models::GetMCTableSchemaResponse getMCTableSchemaWithOptions(const string &TableName, const Models::GetMCTableSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取MaxCompute表schema
       *
       * @param request GetMCTableSchemaRequest
       * @return GetMCTableSchemaResponse
       */
      Models::GetMCTableSchemaResponse getMCTableSchema(const string &TableName, const Models::GetMCTableSchemaRequest &request);

      /**
       * @summary 获取实验节点输入桩的输入表的格式
       *
       * @param request GetNodeInputSchemaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeInputSchemaResponse
       */
      Models::GetNodeInputSchemaResponse getNodeInputSchemaWithOptions(const string &ExperimentId, const string &NodeId, const Models::GetNodeInputSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验节点输入桩的输入表的格式
       *
       * @param request GetNodeInputSchemaRequest
       * @return GetNodeInputSchemaResponse
       */
      Models::GetNodeInputSchemaResponse getNodeInputSchema(const string &ExperimentId, const string &NodeId, const Models::GetNodeInputSchemaRequest &request);

      /**
       * @summary 获取某个节点的输出模型信息
       *
       * @param request GetNodeOutputRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeOutputResponse
       */
      Models::GetNodeOutputResponse getNodeOutputWithOptions(const string &ExperimentId, const string &NodeId, const string &OutputId, const Models::GetNodeOutputRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取某个节点的输出模型信息
       *
       * @param request GetNodeOutputRequest
       * @return GetNodeOutputResponse
       */
      Models::GetNodeOutputResponse getNodeOutput(const string &ExperimentId, const string &NodeId, const string &OutputId, const Models::GetNodeOutputRequest &request);

      /**
       * @summary 获取PAI Studio中指定模板
       *
       * @param request GetTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const string &TemplateId, const Models::GetTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取PAI Studio中指定模板
       *
       * @param request GetTemplateRequest
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const string &TemplateId, const Models::GetTemplateRequest &request);

      /**
       * @summary 获取授权角色列表
       *
       * @param request ListAuthRolesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthRolesResponse
       */
      Models::ListAuthRolesResponse listAuthRolesWithOptions(const Models::ListAuthRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取授权角色列表
       *
       * @param request ListAuthRolesRequest
       * @return ListAuthRolesResponse
       */
      Models::ListAuthRolesResponse listAuthRoles(const Models::ListAuthRolesRequest &request);

      /**
       * @summary 获取实验列表
       *
       * @param request ListExperimentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExperimentsResponse
       */
      Models::ListExperimentsResponse listExperimentsWithOptions(const Models::ListExperimentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实验列表
       *
       * @param request ListExperimentsRequest
       * @return ListExperimentsResponse
       */
      Models::ListExperimentsResponse listExperiments(const Models::ListExperimentsRequest &request);

      /**
       * @summary 列举标签
       *
       * @param request ListImageLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageLabelsResponse
       */
      Models::ListImageLabelsResponse listImageLabelsWithOptions(const Models::ListImageLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举标签
       *
       * @param request ListImageLabelsRequest
       * @return ListImageLabelsResponse
       */
      Models::ListImageLabelsResponse listImageLabels(const Models::ListImageLabelsRequest &request);

      /**
       * @summary 列举已注册镜像
       *
       * @param request ListImagesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImagesWithOptions(const Models::ListImagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举已注册镜像
       *
       * @param request ListImagesRequest
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImages(const Models::ListImagesRequest &request);

      /**
       * @summary 获取作业详情
       *
       * @param request ListJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取作业详情
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary 获取某个节点的输出模型列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeOutputsResponse
       */
      Models::ListNodeOutputsResponse listNodeOutputsWithOptions(const string &ExperimentId, const string &NodeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取某个节点的输出模型列表
       *
       * @return ListNodeOutputsResponse
       */
      Models::ListNodeOutputsResponse listNodeOutputs(const string &ExperimentId, const string &NodeId);

      /**
       * @summary 获取最近的实验
       *
       * @param request ListRecentExperimentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecentExperimentsResponse
       */
      Models::ListRecentExperimentsResponse listRecentExperimentsWithOptions(const Models::ListRecentExperimentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取最近的实验
       *
       * @param request ListRecentExperimentsRequest
       * @return ListRecentExperimentsResponse
       */
      Models::ListRecentExperimentsResponse listRecentExperiments(const Models::ListRecentExperimentsRequest &request);

      /**
       * @summary 获取PAI Studio中指定模板列表
       *
       * @param request ListTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplatesWithOptions(const Models::ListTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取PAI Studio中指定模板列表
       *
       * @param request ListTemplatesRequest
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplates(const Models::ListTemplatesRequest &request);

      /**
       * @summary 迁移PAI Studio 1.0的实验目录 
       *
       * @param request MigrateExperimentFoldersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateExperimentFoldersResponse
       */
      Models::MigrateExperimentFoldersResponse migrateExperimentFoldersWithOptions(const Models::MigrateExperimentFoldersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 迁移PAI Studio 1.0的实验目录 
       *
       * @param request MigrateExperimentFoldersRequest
       * @return MigrateExperimentFoldersResponse
       */
      Models::MigrateExperimentFoldersResponse migrateExperimentFolders(const Models::MigrateExperimentFoldersRequest &request);

      /**
       * @summary 迁移PAI Studio 1.0的实验
       *
       * @param request MigrateExperimentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateExperimentsResponse
       */
      Models::MigrateExperimentsResponse migrateExperimentsWithOptions(const Models::MigrateExperimentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 迁移PAI Studio 1.0的实验
       *
       * @param request MigrateExperimentsRequest
       * @return MigrateExperimentsResponse
       */
      Models::MigrateExperimentsResponse migrateExperiments(const Models::MigrateExperimentsRequest &request);

      /**
       * @summary 预览Maxcompute表数据
       *
       * @param request PreviewMCTableRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewMCTableResponse
       */
      Models::PreviewMCTableResponse previewMCTableWithOptions(const string &TableName, const Models::PreviewMCTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预览Maxcompute表数据
       *
       * @param request PreviewMCTableRequest
       * @return PreviewMCTableResponse
       */
      Models::PreviewMCTableResponse previewMCTable(const string &TableName, const Models::PreviewMCTableRequest &request);

      /**
       * @summary 发布实验
       *
       * @param request PublishExperimentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishExperimentResponse
       */
      Models::PublishExperimentResponse publishExperimentWithOptions(const string &ExperimentId, const Models::PublishExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布实验
       *
       * @param request PublishExperimentRequest
       * @return PublishExperimentResponse
       */
      Models::PublishExperimentResponse publishExperiment(const string &ExperimentId, const Models::PublishExperimentRequest &request);

      /**
       * @summary 查询实验的可视化数据
       *
       * @param request QueryExperimentVisualizationDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryExperimentVisualizationDataResponse
       */
      Models::QueryExperimentVisualizationDataResponse queryExperimentVisualizationDataWithOptions(const string &ExperimentId, const Models::QueryExperimentVisualizationDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实验的可视化数据
       *
       * @param request QueryExperimentVisualizationDataRequest
       * @return QueryExperimentVisualizationDataResponse
       */
      Models::QueryExperimentVisualizationDataResponse queryExperimentVisualizationData(const string &ExperimentId, const Models::QueryExperimentVisualizationDataRequest &request);

      /**
       * @summary 搜索MaxCompute表
       *
       * @param request SearchMCTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMCTablesResponse
       */
      Models::SearchMCTablesResponse searchMCTablesWithOptions(const Models::SearchMCTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索MaxCompute表
       *
       * @param request SearchMCTablesRequest
       * @return SearchMCTablesResponse
       */
      Models::SearchMCTablesResponse searchMCTables(const Models::SearchMCTablesRequest &request);

      /**
       * @summary 停止实验所有运行中的作业
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopExperimentResponse
       */
      Models::StopExperimentResponse stopExperimentWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止实验所有运行中的作业
       *
       * @return StopExperimentResponse
       */
      Models::StopExperimentResponse stopExperiment(const string &ExperimentId);

      /**
       * @summary 停止一个实验的作业
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopJobResponse
       */
      Models::StopJobResponse stopJobWithOptions(const string &JobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止一个实验的作业
       *
       * @return StopJobResponse
       */
      Models::StopJobResponse stopJob(const string &JobId);

      /**
       * @summary 更新实验内容
       *
       * @param request UpdateExperimentContentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExperimentContentResponse
       */
      Models::UpdateExperimentContentResponse updateExperimentContentWithOptions(const string &ExperimentId, const Models::UpdateExperimentContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实验内容
       *
       * @param request UpdateExperimentContentRequest
       * @return UpdateExperimentContentResponse
       */
      Models::UpdateExperimentContentResponse updateExperimentContent(const string &ExperimentId, const Models::UpdateExperimentContentRequest &request);

      /**
       * @summary 更新算法文件夹
       *
       * @param request UpdateExperimentFolderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExperimentFolderResponse
       */
      Models::UpdateExperimentFolderResponse updateExperimentFolderWithOptions(const string &FolderId, const Models::UpdateExperimentFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新算法文件夹
       *
       * @param request UpdateExperimentFolderRequest
       * @return UpdateExperimentFolderResponse
       */
      Models::UpdateExperimentFolderResponse updateExperimentFolder(const string &FolderId, const Models::UpdateExperimentFolderRequest &request);

      /**
       * @summary 更新实验的Meta信息
       *
       * @param request UpdateExperimentMetaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExperimentMetaResponse
       */
      Models::UpdateExperimentMetaResponse updateExperimentMetaWithOptions(const string &ExperimentId, const Models::UpdateExperimentMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实验的Meta信息
       *
       * @param request UpdateExperimentMetaRequest
       * @return UpdateExperimentMetaResponse
       */
      Models::UpdateExperimentMetaResponse updateExperimentMeta(const string &ExperimentId, const Models::UpdateExperimentMetaRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
