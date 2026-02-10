// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_POLARDBAI20251013_HPP_
#define ALIBABACLOUD_POLARDBAI20251013_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PolardbAI20251013Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PolardbAI20251013.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 导入OSS数据集
       *
       * @param request AddOSSMultimodalFineTuneDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddOSSMultimodalFineTuneDatasetResponse
       */
      Models::AddOSSMultimodalFineTuneDatasetResponse addOSSMultimodalFineTuneDatasetWithOptions(const Models::AddOSSMultimodalFineTuneDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入OSS数据集
       *
       * @param request AddOSSMultimodalFineTuneDatasetRequest
       * @return AddOSSMultimodalFineTuneDatasetResponse
       */
      Models::AddOSSMultimodalFineTuneDatasetResponse addOSSMultimodalFineTuneDataset(const Models::AddOSSMultimodalFineTuneDatasetRequest &request);

      /**
       * @summary 创建chatbi配置表
       *
       * @param request ChatBIConfigCreateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIConfigCreateResponse
       */
      Models::ChatBIConfigCreateResponse chatBIConfigCreateWithOptions(const Models::ChatBIConfigCreateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建chatbi配置表
       *
       * @param request ChatBIConfigCreateRequest
       * @return ChatBIConfigCreateResponse
       */
      Models::ChatBIConfigCreateResponse chatBIConfigCreate(const Models::ChatBIConfigCreateRequest &request);

      /**
       * @summary 删除chatbi配置表
       *
       * @param request ChatBIConfigDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIConfigDeleteResponse
       */
      Models::ChatBIConfigDeleteResponse chatBIConfigDeleteWithOptions(const Models::ChatBIConfigDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除chatbi配置表
       *
       * @param request ChatBIConfigDeleteRequest
       * @return ChatBIConfigDeleteResponse
       */
      Models::ChatBIConfigDeleteResponse chatBIConfigDelete(const Models::ChatBIConfigDeleteRequest &request);

      /**
       * @summary 查询chatbi问题模板表内容
       *
       * @param request ChatBIConfigDeleteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIConfigDeleteEntryResponse
       */
      Models::ChatBIConfigDeleteEntryResponse chatBIConfigDeleteEntryWithOptions(const Models::ChatBIConfigDeleteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询chatbi问题模板表内容
       *
       * @param request ChatBIConfigDeleteEntryRequest
       * @return ChatBIConfigDeleteEntryResponse
       */
      Models::ChatBIConfigDeleteEntryResponse chatBIConfigDeleteEntry(const Models::ChatBIConfigDeleteEntryRequest &request);

      /**
       * @summary 查询chatbi配置表内容
       *
       * @param request ChatBIConfigQueryEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIConfigQueryEntriesResponse
       */
      Models::ChatBIConfigQueryEntriesResponse chatBIConfigQueryEntriesWithOptions(const Models::ChatBIConfigQueryEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询chatbi配置表内容
       *
       * @param request ChatBIConfigQueryEntriesRequest
       * @return ChatBIConfigQueryEntriesResponse
       */
      Models::ChatBIConfigQueryEntriesResponse chatBIConfigQueryEntries(const Models::ChatBIConfigQueryEntriesRequest &request);

      /**
       * @summary 查询客户chatbi配置表名
       *
       * @param request ChatBIConfigQueryTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIConfigQueryTablesResponse
       */
      Models::ChatBIConfigQueryTablesResponse chatBIConfigQueryTablesWithOptions(const Models::ChatBIConfigQueryTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询客户chatbi配置表名
       *
       * @param request ChatBIConfigQueryTablesRequest
       * @return ChatBIConfigQueryTablesResponse
       */
      Models::ChatBIConfigQueryTablesResponse chatBIConfigQueryTables(const Models::ChatBIConfigQueryTablesRequest &request);

      /**
       * @summary 修改chatbi配置表内容
       *
       * @param request ChatBIConfigUpdateEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIConfigUpdateEntryResponse
       */
      Models::ChatBIConfigUpdateEntryResponse chatBIConfigUpdateEntryWithOptions(const Models::ChatBIConfigUpdateEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改chatbi配置表内容
       *
       * @param request ChatBIConfigUpdateEntryRequest
       * @return ChatBIConfigUpdateEntryResponse
       */
      Models::ChatBIConfigUpdateEntryResponse chatBIConfigUpdateEntry(const Models::ChatBIConfigUpdateEntryRequest &request);

      /**
       * @summary 创建chatbi问题模板表
       *
       * @param request ChatBIFileTemplateDownloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIFileTemplateDownloadResponse
       */
      Models::ChatBIFileTemplateDownloadResponse chatBIFileTemplateDownloadWithOptions(const Models::ChatBIFileTemplateDownloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建chatbi问题模板表
       *
       * @param request ChatBIFileTemplateDownloadRequest
       * @return ChatBIFileTemplateDownloadResponse
       */
      Models::ChatBIFileTemplateDownloadResponse chatBIFileTemplateDownload(const Models::ChatBIFileTemplateDownloadRequest &request);

      /**
       * @summary 创建chatbi问题模板表
       *
       * @param request ChatBIFileUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIFileUploadResponse
       */
      Models::ChatBIFileUploadResponse chatBIFileUploadWithOptions(const Models::ChatBIFileUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建chatbi问题模板表
       *
       * @param request ChatBIFileUploadRequest
       * @return ChatBIFileUploadResponse
       */
      Models::ChatBIFileUploadResponse chatBIFileUpload(const Models::ChatBIFileUploadRequest &request);

      /**
       * @summary 创建chatbi问题模板表
       *
       * @param request ChatBIFileUploadCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIFileUploadCallbackResponse
       */
      Models::ChatBIFileUploadCallbackResponse chatBIFileUploadCallbackWithOptions(const Models::ChatBIFileUploadCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建chatbi问题模板表
       *
       * @param request ChatBIFileUploadCallbackRequest
       * @return ChatBIFileUploadCallbackResponse
       */
      Models::ChatBIFileUploadCallbackResponse chatBIFileUploadCallback(const Models::ChatBIFileUploadCallbackRequest &request);

      /**
       * @summary 创建chatbi问题模板表
       *
       * @param request ChatBIPatternCreateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIPatternCreateResponse
       */
      Models::ChatBIPatternCreateResponse chatBIPatternCreateWithOptions(const Models::ChatBIPatternCreateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建chatbi问题模板表
       *
       * @param request ChatBIPatternCreateRequest
       * @return ChatBIPatternCreateResponse
       */
      Models::ChatBIPatternCreateResponse chatBIPatternCreate(const Models::ChatBIPatternCreateRequest &request);

      /**
       * @summary 删除chatbi问题模板表
       *
       * @param request ChatBIPatternDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIPatternDeleteResponse
       */
      Models::ChatBIPatternDeleteResponse chatBIPatternDeleteWithOptions(const Models::ChatBIPatternDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除chatbi问题模板表
       *
       * @param request ChatBIPatternDeleteRequest
       * @return ChatBIPatternDeleteResponse
       */
      Models::ChatBIPatternDeleteResponse chatBIPatternDelete(const Models::ChatBIPatternDeleteRequest &request);

      /**
       * @summary 查询chatbi问题模板表内容
       *
       * @param request ChatBIPatternDeleteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIPatternDeleteEntryResponse
       */
      Models::ChatBIPatternDeleteEntryResponse chatBIPatternDeleteEntryWithOptions(const Models::ChatBIPatternDeleteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询chatbi问题模板表内容
       *
       * @param request ChatBIPatternDeleteEntryRequest
       * @return ChatBIPatternDeleteEntryResponse
       */
      Models::ChatBIPatternDeleteEntryResponse chatBIPatternDeleteEntry(const Models::ChatBIPatternDeleteEntryRequest &request);

      /**
       * @summary 创建chatbi检索索引表
       *
       * @param request ChatBIPatternIndexCreateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIPatternIndexCreateResponse
       */
      Models::ChatBIPatternIndexCreateResponse chatBIPatternIndexCreateWithOptions(const Models::ChatBIPatternIndexCreateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建chatbi检索索引表
       *
       * @param request ChatBIPatternIndexCreateRequest
       * @return ChatBIPatternIndexCreateResponse
       */
      Models::ChatBIPatternIndexCreateResponse chatBIPatternIndexCreate(const Models::ChatBIPatternIndexCreateRequest &request);

      /**
       * @summary 删除检索索引表
       *
       * @param request ChatBIPatternIndexDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIPatternIndexDeleteResponse
       */
      Models::ChatBIPatternIndexDeleteResponse chatBIPatternIndexDeleteWithOptions(const Models::ChatBIPatternIndexDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除检索索引表
       *
       * @param request ChatBIPatternIndexDeleteRequest
       * @return ChatBIPatternIndexDeleteResponse
       */
      Models::ChatBIPatternIndexDeleteResponse chatBIPatternIndexDelete(const Models::ChatBIPatternIndexDeleteRequest &request);

      /**
       * @summary 查询检索索引表名
       *
       * @param request ChatBIPatternIndexQueryTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIPatternIndexQueryTablesResponse
       */
      Models::ChatBIPatternIndexQueryTablesResponse chatBIPatternIndexQueryTablesWithOptions(const Models::ChatBIPatternIndexQueryTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询检索索引表名
       *
       * @param request ChatBIPatternIndexQueryTablesRequest
       * @return ChatBIPatternIndexQueryTablesResponse
       */
      Models::ChatBIPatternIndexQueryTablesResponse chatBIPatternIndexQueryTables(const Models::ChatBIPatternIndexQueryTablesRequest &request);

      /**
       * @summary 查询chatbi问题模板表内容
       *
       * @param request ChatBIPatternQueryEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIPatternQueryEntriesResponse
       */
      Models::ChatBIPatternQueryEntriesResponse chatBIPatternQueryEntriesWithOptions(const Models::ChatBIPatternQueryEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询chatbi问题模板表内容
       *
       * @param request ChatBIPatternQueryEntriesRequest
       * @return ChatBIPatternQueryEntriesResponse
       */
      Models::ChatBIPatternQueryEntriesResponse chatBIPatternQueryEntries(const Models::ChatBIPatternQueryEntriesRequest &request);

      /**
       * @summary 查询chatbi问题模板表名
       *
       * @param request ChatBIPatternQueryTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIPatternQueryTablesResponse
       */
      Models::ChatBIPatternQueryTablesResponse chatBIPatternQueryTablesWithOptions(const Models::ChatBIPatternQueryTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询chatbi问题模板表名
       *
       * @param request ChatBIPatternQueryTablesRequest
       * @return ChatBIPatternQueryTablesResponse
       */
      Models::ChatBIPatternQueryTablesResponse chatBIPatternQueryTables(const Models::ChatBIPatternQueryTablesRequest &request);

      /**
       * @summary 修改chatbi问题模板表内容
       *
       * @param request ChatBIPatternUpdateEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIPatternUpdateEntryResponse
       */
      Models::ChatBIPatternUpdateEntryResponse chatBIPatternUpdateEntryWithOptions(const Models::ChatBIPatternUpdateEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改chatbi问题模板表内容
       *
       * @param request ChatBIPatternUpdateEntryRequest
       * @return ChatBIPatternUpdateEntryResponse
       */
      Models::ChatBIPatternUpdateEntryResponse chatBIPatternUpdateEntry(const Models::ChatBIPatternUpdateEntryRequest &request);

      /**
       * @summary 流式返回
       *
       * @param tmpReq ChatBIPredictSseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIPredictSseResponse
       */
      FutureGenerator<Models::ChatBIPredictSseResponse> chatBIPredictSseWithSSE(const Models::ChatBIPredictSseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 流式返回
       *
       * @param tmpReq ChatBIPredictSseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIPredictSseResponse
       */
      Models::ChatBIPredictSseResponse chatBIPredictSseWithOptions(const Models::ChatBIPredictSseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 流式返回
       *
       * @param request ChatBIPredictSseRequest
       * @return ChatBIPredictSseResponse
       */
      Models::ChatBIPredictSseResponse chatBIPredictSse(const Models::ChatBIPredictSseRequest &request);

      /**
       * @summary 创建chatbi检索索引表
       *
       * @param request ChatBISchemaIndexCreateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBISchemaIndexCreateResponse
       */
      Models::ChatBISchemaIndexCreateResponse chatBISchemaIndexCreateWithOptions(const Models::ChatBISchemaIndexCreateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建chatbi检索索引表
       *
       * @param request ChatBISchemaIndexCreateRequest
       * @return ChatBISchemaIndexCreateResponse
       */
      Models::ChatBISchemaIndexCreateResponse chatBISchemaIndexCreate(const Models::ChatBISchemaIndexCreateRequest &request);

      /**
       * @summary 删除检索索引表
       *
       * @param request ChatBISchemaIndexDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBISchemaIndexDeleteResponse
       */
      Models::ChatBISchemaIndexDeleteResponse chatBISchemaIndexDeleteWithOptions(const Models::ChatBISchemaIndexDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除检索索引表
       *
       * @param request ChatBISchemaIndexDeleteRequest
       * @return ChatBISchemaIndexDeleteResponse
       */
      Models::ChatBISchemaIndexDeleteResponse chatBISchemaIndexDelete(const Models::ChatBISchemaIndexDeleteRequest &request);

      /**
       * @summary 查询检索索引表名
       *
       * @param request ChatBISchemaIndexQueryTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBISchemaIndexQueryTablesResponse
       */
      Models::ChatBISchemaIndexQueryTablesResponse chatBISchemaIndexQueryTablesWithOptions(const Models::ChatBISchemaIndexQueryTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询检索索引表名
       *
       * @param request ChatBISchemaIndexQueryTablesRequest
       * @return ChatBISchemaIndexQueryTablesResponse
       */
      Models::ChatBISchemaIndexQueryTablesResponse chatBISchemaIndexQueryTables(const Models::ChatBISchemaIndexQueryTablesRequest &request);

      /**
       * @summary 查询chatbi问题模板表内容
       *
       * @param request ChatBIUpdateTableValidationColumnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatBIUpdateTableValidationColumnsResponse
       */
      Models::ChatBIUpdateTableValidationColumnsResponse chatBIUpdateTableValidationColumnsWithOptions(const Models::ChatBIUpdateTableValidationColumnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询chatbi问题模板表内容
       *
       * @param request ChatBIUpdateTableValidationColumnsRequest
       * @return ChatBIUpdateTableValidationColumnsResponse
       */
      Models::ChatBIUpdateTableValidationColumnsResponse chatBIUpdateTableValidationColumns(const Models::ChatBIUpdateTableValidationColumnsRequest &request);

      /**
       * @summary 查询多模态数据集列表
       *
       * @param request CreateMultimodalDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultimodalDatasetResponse
       */
      Models::CreateMultimodalDatasetResponse createMultimodalDatasetWithOptions(const Models::CreateMultimodalDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多模态数据集列表
       *
       * @param request CreateMultimodalDatasetRequest
       * @return CreateMultimodalDatasetResponse
       */
      Models::CreateMultimodalDatasetResponse createMultimodalDataset(const Models::CreateMultimodalDatasetRequest &request);

      /**
       * @summary 创建Embedding
       *
       * @param request CreateMultimodalDatasetEmbeddingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultimodalDatasetEmbeddingResponse
       */
      Models::CreateMultimodalDatasetEmbeddingResponse createMultimodalDatasetEmbeddingWithOptions(const Models::CreateMultimodalDatasetEmbeddingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Embedding
       *
       * @param request CreateMultimodalDatasetEmbeddingRequest
       * @return CreateMultimodalDatasetEmbeddingResponse
       */
      Models::CreateMultimodalDatasetEmbeddingResponse createMultimodalDatasetEmbedding(const Models::CreateMultimodalDatasetEmbeddingRequest &request);

      /**
       * @summary 创建多模态微调数据集
       *
       * @param request CreateMultimodalFineTuneDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultimodalFineTuneDatasetResponse
       */
      Models::CreateMultimodalFineTuneDatasetResponse createMultimodalFineTuneDatasetWithOptions(const Models::CreateMultimodalFineTuneDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建多模态微调数据集
       *
       * @param request CreateMultimodalFineTuneDatasetRequest
       * @return CreateMultimodalFineTuneDatasetResponse
       */
      Models::CreateMultimodalFineTuneDatasetResponse createMultimodalFineTuneDataset(const Models::CreateMultimodalFineTuneDatasetRequest &request);

      /**
       * @summary 部署打标服务
       *
       * @param tmpReq CreateMultimodalLabelStudioServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultimodalLabelStudioServiceResponse
       */
      Models::CreateMultimodalLabelStudioServiceResponse createMultimodalLabelStudioServiceWithOptions(const Models::CreateMultimodalLabelStudioServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 部署打标服务
       *
       * @param request CreateMultimodalLabelStudioServiceRequest
       * @return CreateMultimodalLabelStudioServiceResponse
       */
      Models::CreateMultimodalLabelStudioServiceResponse createMultimodalLabelStudioService(const Models::CreateMultimodalLabelStudioServiceRequest &request);

      /**
       * @summary 创建SearchTask
       *
       * @param tmpReq CreateMultimodalSearchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultimodalSearchTaskResponse
       */
      Models::CreateMultimodalSearchTaskResponse createMultimodalSearchTaskWithOptions(const Models::CreateMultimodalSearchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建SearchTask
       *
       * @param request CreateMultimodalSearchTaskRequest
       * @return CreateMultimodalSearchTaskResponse
       */
      Models::CreateMultimodalSearchTaskResponse createMultimodalSearchTask(const Models::CreateMultimodalSearchTaskRequest &request);

      /**
       * @summary 从检索结果中创建微调数据集
       *
       * @param tmpReq CreateMultimodalSearchTaskResultFineTuneDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultimodalSearchTaskResultFineTuneDatasetResponse
       */
      Models::CreateMultimodalSearchTaskResultFineTuneDatasetResponse createMultimodalSearchTaskResultFineTuneDatasetWithOptions(const Models::CreateMultimodalSearchTaskResultFineTuneDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从检索结果中创建微调数据集
       *
       * @param request CreateMultimodalSearchTaskResultFineTuneDatasetRequest
       * @return CreateMultimodalSearchTaskResultFineTuneDatasetResponse
       */
      Models::CreateMultimodalSearchTaskResultFineTuneDatasetResponse createMultimodalSearchTaskResultFineTuneDataset(const Models::CreateMultimodalSearchTaskResultFineTuneDatasetRequest &request);

      /**
       * @summary 删除多模态数据集
       *
       * @param request DeleteMultimodalDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMultimodalDatasetResponse
       */
      Models::DeleteMultimodalDatasetResponse deleteMultimodalDatasetWithOptions(const Models::DeleteMultimodalDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除多模态数据集
       *
       * @param request DeleteMultimodalDatasetRequest
       * @return DeleteMultimodalDatasetResponse
       */
      Models::DeleteMultimodalDatasetResponse deleteMultimodalDataset(const Models::DeleteMultimodalDatasetRequest &request);

      /**
       * @summary 删除多模态数据集embedding
       *
       * @param request DeleteMultimodalEmbeddingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMultimodalEmbeddingResponse
       */
      Models::DeleteMultimodalEmbeddingResponse deleteMultimodalEmbeddingWithOptions(const Models::DeleteMultimodalEmbeddingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除多模态数据集embedding
       *
       * @param request DeleteMultimodalEmbeddingRequest
       * @return DeleteMultimodalEmbeddingResponse
       */
      Models::DeleteMultimodalEmbeddingResponse deleteMultimodalEmbedding(const Models::DeleteMultimodalEmbeddingRequest &request);

      /**
       * @summary 删除多模态微调数据集
       *
       * @param request DeleteMultimodalFineTuneDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMultimodalFineTuneDatasetResponse
       */
      Models::DeleteMultimodalFineTuneDatasetResponse deleteMultimodalFineTuneDatasetWithOptions(const Models::DeleteMultimodalFineTuneDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除多模态微调数据集
       *
       * @param request DeleteMultimodalFineTuneDatasetRequest
       * @return DeleteMultimodalFineTuneDatasetResponse
       */
      Models::DeleteMultimodalFineTuneDatasetResponse deleteMultimodalFineTuneDataset(const Models::DeleteMultimodalFineTuneDatasetRequest &request);

      /**
       * @summary 查询模型mode可选列表
       *
       * @param request DeleteMultimodalLabelStudioServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMultimodalLabelStudioServiceResponse
       */
      Models::DeleteMultimodalLabelStudioServiceResponse deleteMultimodalLabelStudioServiceWithOptions(const Models::DeleteMultimodalLabelStudioServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型mode可选列表
       *
       * @param request DeleteMultimodalLabelStudioServiceRequest
       * @return DeleteMultimodalLabelStudioServiceResponse
       */
      Models::DeleteMultimodalLabelStudioServiceResponse deleteMultimodalLabelStudioService(const Models::DeleteMultimodalLabelStudioServiceRequest &request);

      /**
       * @summary 微调数据集删除导入的OSS路径
       *
       * @param request DeleteOSSMultimodalFineTuneDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOSSMultimodalFineTuneDatasetResponse
       */
      Models::DeleteOSSMultimodalFineTuneDatasetResponse deleteOSSMultimodalFineTuneDatasetWithOptions(const Models::DeleteOSSMultimodalFineTuneDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 微调数据集删除导入的OSS路径
       *
       * @param request DeleteOSSMultimodalFineTuneDatasetRequest
       * @return DeleteOSSMultimodalFineTuneDatasetResponse
       */
      Models::DeleteOSSMultimodalFineTuneDatasetResponse deleteOSSMultimodalFineTuneDataset(const Models::DeleteOSSMultimodalFineTuneDatasetRequest &request);

      /**
       * @summary 下载Search任务的结果元数据
       *
       * @param request DownloadMultimodalSearchTaskResultMetadataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadMultimodalSearchTaskResultMetadataResponse
       */
      Models::DownloadMultimodalSearchTaskResultMetadataResponse downloadMultimodalSearchTaskResultMetadataWithOptions(const Models::DownloadMultimodalSearchTaskResultMetadataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下载Search任务的结果元数据
       *
       * @param request DownloadMultimodalSearchTaskResultMetadataRequest
       * @return DownloadMultimodalSearchTaskResultMetadataResponse
       */
      Models::DownloadMultimodalSearchTaskResultMetadataResponse downloadMultimodalSearchTaskResultMetadata(const Models::DownloadMultimodalSearchTaskResultMetadataRequest &request);

      /**
       * @summary 获得鉴权token
       *
       * @param request GetUserTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserTokenResponse
       */
      Models::GetUserTokenResponse getUserTokenWithOptions(const Models::GetUserTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得鉴权token
       *
       * @param request GetUserTokenRequest
       * @return GetUserTokenResponse
       */
      Models::GetUserTokenResponse getUserToken(const Models::GetUserTokenRequest &request);

      /**
       * @summary 查询多模态数据集列表
       *
       * @param request ListMultimodalDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultimodalDatasetResponse
       */
      Models::ListMultimodalDatasetResponse listMultimodalDatasetWithOptions(const Models::ListMultimodalDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多模态数据集列表
       *
       * @param request ListMultimodalDatasetRequest
       * @return ListMultimodalDatasetResponse
       */
      Models::ListMultimodalDatasetResponse listMultimodalDataset(const Models::ListMultimodalDatasetRequest &request);

      /**
       * @summary 查询模型列表
       *
       * @param request ListMultimodalEmbeddingModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultimodalEmbeddingModelResponse
       */
      Models::ListMultimodalEmbeddingModelResponse listMultimodalEmbeddingModelWithOptions(const Models::ListMultimodalEmbeddingModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型列表
       *
       * @param request ListMultimodalEmbeddingModelRequest
       * @return ListMultimodalEmbeddingModelResponse
       */
      Models::ListMultimodalEmbeddingModelResponse listMultimodalEmbeddingModel(const Models::ListMultimodalEmbeddingModelRequest &request);

      /**
       * @summary 查询模型mode可选列表
       *
       * @param request ListMultimodalEmbeddingModelModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultimodalEmbeddingModelModeResponse
       */
      Models::ListMultimodalEmbeddingModelModeResponse listMultimodalEmbeddingModelModeWithOptions(const Models::ListMultimodalEmbeddingModelModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型mode可选列表
       *
       * @param request ListMultimodalEmbeddingModelModeRequest
       * @return ListMultimodalEmbeddingModelModeResponse
       */
      Models::ListMultimodalEmbeddingModelModeResponse listMultimodalEmbeddingModelMode(const Models::ListMultimodalEmbeddingModelModeRequest &request);

      /**
       * @summary 查询多模态数据集列表
       *
       * @param request ListMultimodalFineTuneDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultimodalFineTuneDatasetResponse
       */
      Models::ListMultimodalFineTuneDatasetResponse listMultimodalFineTuneDatasetWithOptions(const Models::ListMultimodalFineTuneDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询多模态数据集列表
       *
       * @param request ListMultimodalFineTuneDatasetRequest
       * @return ListMultimodalFineTuneDatasetResponse
       */
      Models::ListMultimodalFineTuneDatasetResponse listMultimodalFineTuneDataset(const Models::ListMultimodalFineTuneDatasetRequest &request);

      /**
       * @summary 查询打标服务信息
       *
       * @param request ListMultimodalLabelStudioServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultimodalLabelStudioServiceResponse
       */
      Models::ListMultimodalLabelStudioServiceResponse listMultimodalLabelStudioServiceWithOptions(const Models::ListMultimodalLabelStudioServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询打标服务信息
       *
       * @param request ListMultimodalLabelStudioServiceRequest
       * @return ListMultimodalLabelStudioServiceResponse
       */
      Models::ListMultimodalLabelStudioServiceResponse listMultimodalLabelStudioService(const Models::ListMultimodalLabelStudioServiceRequest &request);

      /**
       * @summary 查询search模型列表
       *
       * @param request ListMultimodalSearchModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultimodalSearchModelResponse
       */
      Models::ListMultimodalSearchModelResponse listMultimodalSearchModelWithOptions(const Models::ListMultimodalSearchModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询search模型列表
       *
       * @param request ListMultimodalSearchModelRequest
       * @return ListMultimodalSearchModelResponse
       */
      Models::ListMultimodalSearchModelResponse listMultimodalSearchModel(const Models::ListMultimodalSearchModelRequest &request);

      /**
       * @summary 查询search task列表
       *
       * @param tmpReq ListMultimodalSearchTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultimodalSearchTaskResponse
       */
      Models::ListMultimodalSearchTaskResponse listMultimodalSearchTaskWithOptions(const Models::ListMultimodalSearchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询search task列表
       *
       * @param request ListMultimodalSearchTaskRequest
       * @return ListMultimodalSearchTaskResponse
       */
      Models::ListMultimodalSearchTaskResponse listMultimodalSearchTask(const Models::ListMultimodalSearchTaskRequest &request);

      /**
       * @summary 查询search task结果列表
       *
       * @param request ListMultimodalSearchTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMultimodalSearchTaskResultResponse
       */
      Models::ListMultimodalSearchTaskResultResponse listMultimodalSearchTaskResultWithOptions(const Models::ListMultimodalSearchTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询search task结果列表
       *
       * @param request ListMultimodalSearchTaskResultRequest
       * @return ListMultimodalSearchTaskResultResponse
       */
      Models::ListMultimodalSearchTaskResultResponse listMultimodalSearchTaskResult(const Models::ListMultimodalSearchTaskResultRequest &request);

      /**
       * @summary 更新数据集信息
       *
       * @param request UpdateMultimodalDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMultimodalDatasetResponse
       */
      Models::UpdateMultimodalDatasetResponse updateMultimodalDatasetWithOptions(const Models::UpdateMultimodalDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据集信息
       *
       * @param request UpdateMultimodalDatasetRequest
       * @return UpdateMultimodalDatasetResponse
       */
      Models::UpdateMultimodalDatasetResponse updateMultimodalDataset(const Models::UpdateMultimodalDatasetRequest &request);

      /**
       * @summary 更新微调数据集信息
       *
       * @param request UpdateMultimodalFineTuneDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMultimodalFineTuneDatasetResponse
       */
      Models::UpdateMultimodalFineTuneDatasetResponse updateMultimodalFineTuneDatasetWithOptions(const Models::UpdateMultimodalFineTuneDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新微调数据集信息
       *
       * @param request UpdateMultimodalFineTuneDatasetRequest
       * @return UpdateMultimodalFineTuneDatasetResponse
       */
      Models::UpdateMultimodalFineTuneDatasetResponse updateMultimodalFineTuneDataset(const Models::UpdateMultimodalFineTuneDatasetRequest &request);

      /**
       * @summary 为打标服务覆盖配置白名单
       *
       * @param tmpReq UpdateMultimodalLabelStudioServiceWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMultimodalLabelStudioServiceWhiteListResponse
       */
      Models::UpdateMultimodalLabelStudioServiceWhiteListResponse updateMultimodalLabelStudioServiceWhiteListWithOptions(const Models::UpdateMultimodalLabelStudioServiceWhiteListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为打标服务覆盖配置白名单
       *
       * @param request UpdateMultimodalLabelStudioServiceWhiteListRequest
       * @return UpdateMultimodalLabelStudioServiceWhiteListResponse
       */
      Models::UpdateMultimodalLabelStudioServiceWhiteListResponse updateMultimodalLabelStudioServiceWhiteList(const Models::UpdateMultimodalLabelStudioServiceWhiteListRequest &request);

      /**
       * @summary 导入OSS数据集
       *
       * @param request UploadOSSMultimodalDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadOSSMultimodalDatasetResponse
       */
      Models::UploadOSSMultimodalDatasetResponse uploadOSSMultimodalDatasetWithOptions(const Models::UploadOSSMultimodalDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入OSS数据集
       *
       * @param request UploadOSSMultimodalDatasetRequest
       * @return UploadOSSMultimodalDatasetResponse
       */
      Models::UploadOSSMultimodalDatasetResponse uploadOSSMultimodalDataset(const Models::UploadOSSMultimodalDatasetRequest &request);

      /**
       * @summary 预检验鉴权token
       *
       * @param request ValidateDatabaseUserTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateDatabaseUserTokenResponse
       */
      Models::ValidateDatabaseUserTokenResponse validateDatabaseUserTokenWithOptions(const Models::ValidateDatabaseUserTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预检验鉴权token
       *
       * @param request ValidateDatabaseUserTokenRequest
       * @return ValidateDatabaseUserTokenResponse
       */
      Models::ValidateDatabaseUserTokenResponse validateDatabaseUserToken(const Models::ValidateDatabaseUserTokenRequest &request);

      /**
       * @summary 预检验鉴权token
       *
       * @param request ValidateUserTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateUserTokenResponse
       */
      Models::ValidateUserTokenResponse validateUserTokenWithOptions(const Models::ValidateUserTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预检验鉴权token
       *
       * @param request ValidateUserTokenRequest
       * @return ValidateUserTokenResponse
       */
      Models::ValidateUserTokenResponse validateUserToken(const Models::ValidateUserTokenRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
