// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AIMIAOBI20230801_HPP_
#define ALIBABACLOUD_AIMIAOBI20230801_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AiMiaoBi20230801Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AiMiaoBi20230801.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加审核自定义词库记录
       *
       * @param tmpReq AddAuditTermsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAuditTermsResponse
       */
      Models::AddAuditTermsResponse addAuditTermsWithOptions(const Models::AddAuditTermsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加审核自定义词库记录
       *
       * @param request AddAuditTermsRequest
       * @return AddAuditTermsResponse
       */
      Models::AddAuditTermsResponse addAuditTerms(const Models::AddAuditTermsRequest &request);

      /**
       * @summary 添加文档到数据集
       *
       * @param tmpReq AddDatasetDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDatasetDocumentResponse
       */
      Models::AddDatasetDocumentResponse addDatasetDocumentWithOptions(const Models::AddDatasetDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加文档到数据集
       *
       * @param request AddDatasetDocumentRequest
       * @return AddDatasetDocumentResponse
       */
      Models::AddDatasetDocumentResponse addDatasetDocument(const Models::AddDatasetDocumentRequest &request);

      /**
       * @summary 生成剪辑视频任务
       *
       * @param tmpReq AsyncCreateClipsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncCreateClipsTaskResponse
       */
      Models::AsyncCreateClipsTaskResponse asyncCreateClipsTaskWithOptions(const Models::AsyncCreateClipsTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成剪辑视频任务
       *
       * @param request AsyncCreateClipsTaskRequest
       * @return AsyncCreateClipsTaskResponse
       */
      Models::AsyncCreateClipsTaskResponse asyncCreateClipsTask(const Models::AsyncCreateClipsTaskRequest &request);

      /**
       * @summary 智能剪辑timeline
       *
       * @param request AsyncCreateClipsTimeLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncCreateClipsTimeLineResponse
       */
      Models::AsyncCreateClipsTimeLineResponse asyncCreateClipsTimeLineWithOptions(const Models::AsyncCreateClipsTimeLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能剪辑timeline
       *
       * @param request AsyncCreateClipsTimeLineRequest
       * @return AsyncCreateClipsTimeLineResponse
       */
      Models::AsyncCreateClipsTimeLineResponse asyncCreateClipsTimeLine(const Models::AsyncCreateClipsTimeLineRequest &request);

      /**
       * @summary 编辑剪辑任务的timeline
       *
       * @param tmpReq AsyncEditTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncEditTimelineResponse
       */
      Models::AsyncEditTimelineResponse asyncEditTimelineWithOptions(const Models::AsyncEditTimelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑剪辑任务的timeline
       *
       * @param request AsyncEditTimelineRequest
       * @return AsyncEditTimelineResponse
       */
      Models::AsyncEditTimelineResponse asyncEditTimeline(const Models::AsyncEditTimelineRequest &request);

      /**
       * @summary 上传招标书文件
       *
       * @param request AsyncUploadTenderDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncUploadTenderDocResponse
       */
      Models::AsyncUploadTenderDocResponse asyncUploadTenderDocWithOptions(const Models::AsyncUploadTenderDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传招标书文件
       *
       * @param request AsyncUploadTenderDocRequest
       * @return AsyncUploadTenderDocResponse
       */
      Models::AsyncUploadTenderDocResponse asyncUploadTenderDoc(const Models::AsyncUploadTenderDocRequest &request);

      /**
       * @summary 上传剪辑素材
       *
       * @param tmpReq AsyncUploadVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncUploadVideoResponse
       */
      Models::AsyncUploadVideoResponse asyncUploadVideoWithOptions(const Models::AsyncUploadVideoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传剪辑素材
       *
       * @param request AsyncUploadVideoRequest
       * @return AsyncUploadVideoResponse
       */
      Models::AsyncUploadVideoResponse asyncUploadVideo(const Models::AsyncUploadVideoRequest &request);

      /**
       * @summary 标书写作接口
       *
       * @param request AsyncWritingBiddingDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncWritingBiddingDocResponse
       */
      Models::AsyncWritingBiddingDocResponse asyncWritingBiddingDocWithOptions(const Models::AsyncWritingBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标书写作接口
       *
       * @param request AsyncWritingBiddingDocRequest
       * @return AsyncWritingBiddingDocResponse
       */
      Models::AsyncWritingBiddingDocResponse asyncWritingBiddingDoc(const Models::AsyncWritingBiddingDocRequest &request);

      /**
       * @summary 取消异步任务
       *
       * @param request CancelAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAsyncTaskResponse
       */
      Models::CancelAsyncTaskResponse cancelAsyncTaskWithOptions(const Models::CancelAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消异步任务
       *
       * @param request CancelAsyncTaskRequest
       * @return CancelAsyncTaskResponse
       */
      Models::CancelAsyncTaskResponse cancelAsyncTask(const Models::CancelAsyncTaskRequest &request);

      /**
       * @summary 取消审核任务
       *
       * @param request CancelAuditTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAuditTaskResponse
       */
      Models::CancelAuditTaskResponse cancelAuditTaskWithOptions(const Models::CancelAuditTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消审核任务
       *
       * @param request CancelAuditTaskRequest
       * @return CancelAuditTaskResponse
       */
      Models::CancelAuditTaskResponse cancelAuditTask(const Models::CancelAuditTaskRequest &request);

      /**
       * @summary 取消深度写作任务
       *
       * @param request CancelDeepWriteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelDeepWriteTaskResponse
       */
      Models::CancelDeepWriteTaskResponse cancelDeepWriteTaskWithOptions(const Models::CancelDeepWriteTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消深度写作任务
       *
       * @param request CancelDeepWriteTaskRequest
       * @return CancelDeepWriteTaskResponse
       */
      Models::CancelDeepWriteTaskResponse cancelDeepWriteTask(const Models::CancelDeepWriteTaskRequest &request);

      /**
       * @summary 清除所有干预内容
       *
       * @param request ClearIntervenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearIntervenesResponse
       */
      Models::ClearIntervenesResponse clearIntervenesWithOptions(const Models::ClearIntervenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清除所有干预内容
       *
       * @param request ClearIntervenesRequest
       * @return ClearIntervenesResponse
       */
      Models::ClearIntervenesResponse clearIntervenes(const Models::ClearIntervenesRequest &request);

      /**
       * @summary 是否将本次提交自定义规则库得到的解析结果用于审核任务。由于解析结果可能不满足用户需求，因此我们为您提供了该接口用于二次确认。如果对提交的规则库解析满意，则可以直接将本次提交任务的 TaskId 作为入参，系统会对您上传的规则库做后处理，使它可以被用于审核。反之，您可以重新调用 SubmitAuditNote 接口上传修改之后的规则库。
       *
       * @param request ConfirmAndPostProcessAuditNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmAndPostProcessAuditNoteResponse
       */
      Models::ConfirmAndPostProcessAuditNoteResponse confirmAndPostProcessAuditNoteWithOptions(const Models::ConfirmAndPostProcessAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 是否将本次提交自定义规则库得到的解析结果用于审核任务。由于解析结果可能不满足用户需求，因此我们为您提供了该接口用于二次确认。如果对提交的规则库解析满意，则可以直接将本次提交任务的 TaskId 作为入参，系统会对您上传的规则库做后处理，使它可以被用于审核。反之，您可以重新调用 SubmitAuditNote 接口上传修改之后的规则库。
       *
       * @param request ConfirmAndPostProcessAuditNoteRequest
       * @return ConfirmAndPostProcessAuditNoteResponse
       */
      Models::ConfirmAndPostProcessAuditNoteResponse confirmAndPostProcessAuditNote(const Models::ConfirmAndPostProcessAuditNoteRequest &request);

      /**
       * @summary 数据集管理-创建
       *
       * @param tmpReq CreateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDatasetWithOptions(const Models::CreateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 数据集管理-创建
       *
       * @param request CreateDatasetRequest
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDataset(const Models::CreateDatasetRequest &request);

      /**
       * @summary 通用配置-创建
       *
       * @param request CreateGeneralConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGeneralConfigResponse
       */
      Models::CreateGeneralConfigResponse createGeneralConfigWithOptions(const Models::CreateGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用配置-创建
       *
       * @param request CreateGeneralConfigRequest
       * @return CreateGeneralConfigResponse
       */
      Models::CreateGeneralConfigResponse createGeneralConfig(const Models::CreateGeneralConfigRequest &request);

      /**
       * @summary 文档管理-创建
       *
       * @param tmpReq CreateGeneratedContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGeneratedContentResponse
       */
      Models::CreateGeneratedContentResponse createGeneratedContentWithOptions(const Models::CreateGeneratedContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档管理-创建
       *
       * @param request CreateGeneratedContentRequest
       * @return CreateGeneratedContentResponse
       */
      Models::CreateGeneratedContentResponse createGeneratedContent(const Models::CreateGeneratedContentRequest &request);

      /**
       * @summary 获取授权token
       *
       * @param request CreateTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTokenResponse
       */
      Models::CreateTokenResponse createTokenWithOptions(const Models::CreateTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取授权token
       *
       * @param request CreateTokenRequest
       * @return CreateTokenResponse
       */
      Models::CreateTokenResponse createToken(const Models::CreateTokenRequest &request);

      /**
       * @summary 删除用户账户下所有可供审核使用的自定义规则库。删除后无法找回，如果您有对规则库存档的需求，请预先使用 DownloadAuditNote 接口保存需要的规则库。
       *
       * @param request DeleteAuditNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAuditNoteResponse
       */
      Models::DeleteAuditNoteResponse deleteAuditNoteWithOptions(const Models::DeleteAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户账户下所有可供审核使用的自定义规则库。删除后无法找回，如果您有对规则库存档的需求，请预先使用 DownloadAuditNote 接口保存需要的规则库。
       *
       * @param request DeleteAuditNoteRequest
       * @return DeleteAuditNoteResponse
       */
      Models::DeleteAuditNoteResponse deleteAuditNote(const Models::DeleteAuditNoteRequest &request);

      /**
       * @summary 删除指定的词库记录
       *
       * @param tmpReq DeleteAuditTermsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAuditTermsResponse
       */
      Models::DeleteAuditTermsResponse deleteAuditTermsWithOptions(const Models::DeleteAuditTermsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定的词库记录
       *
       * @param request DeleteAuditTermsRequest
       * @return DeleteAuditTermsResponse
       */
      Models::DeleteAuditTermsResponse deleteAuditTerms(const Models::DeleteAuditTermsRequest &request);

      /**
       * @summary 删除自定义文本
       *
       * @param request DeleteCustomTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomTextResponse
       */
      Models::DeleteCustomTextResponse deleteCustomTextWithOptions(const Models::DeleteCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义文本
       *
       * @param request DeleteCustomTextRequest
       * @return DeleteCustomTextResponse
       */
      Models::DeleteCustomTextResponse deleteCustomText(const Models::DeleteCustomTextRequest &request);

      /**
       * @summary 根据主题删除自定义主题事件
       *
       * @param request DeleteCustomTopicByTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomTopicByTopicResponse
       */
      Models::DeleteCustomTopicByTopicResponse deleteCustomTopicByTopicWithOptions(const Models::DeleteCustomTopicByTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据主题删除自定义主题事件
       *
       * @param request DeleteCustomTopicByTopicRequest
       * @return DeleteCustomTopicByTopicResponse
       */
      Models::DeleteCustomTopicByTopicResponse deleteCustomTopicByTopic(const Models::DeleteCustomTopicByTopicRequest &request);

      /**
       * @summary 根据自定义观点ID删除自定义观点
       *
       * @param request DeleteCustomTopicViewPointByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomTopicViewPointByIdResponse
       */
      Models::DeleteCustomTopicViewPointByIdResponse deleteCustomTopicViewPointByIdWithOptions(const Models::DeleteCustomTopicViewPointByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据自定义观点ID删除自定义观点
       *
       * @param request DeleteCustomTopicViewPointByIdRequest
       * @return DeleteCustomTopicViewPointByIdResponse
       */
      Models::DeleteCustomTopicViewPointByIdResponse deleteCustomTopicViewPointById(const Models::DeleteCustomTopicViewPointByIdRequest &request);

      /**
       * @summary 数据集管理-删除
       *
       * @param request DeleteDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDatasetWithOptions(const Models::DeleteDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 数据集管理-删除
       *
       * @param request DeleteDatasetRequest
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDataset(const Models::DeleteDatasetRequest &request);

      /**
       * @summary 删除数据集文档
       *
       * @param request DeleteDatasetDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetDocumentResponse
       */
      Models::DeleteDatasetDocumentResponse deleteDatasetDocumentWithOptions(const Models::DeleteDatasetDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据集文档
       *
       * @param request DeleteDatasetDocumentRequest
       * @return DeleteDatasetDocumentResponse
       */
      Models::DeleteDatasetDocumentResponse deleteDatasetDocument(const Models::DeleteDatasetDocumentRequest &request);

      /**
       * @summary 妙读删除多个文档
       *
       * @param tmpReq DeleteDocsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocsResponse
       */
      Models::DeleteDocsResponse deleteDocsWithOptions(const Models::DeleteDocsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读删除多个文档
       *
       * @param request DeleteDocsRequest
       * @return DeleteDocsResponse
       */
      Models::DeleteDocsResponse deleteDocs(const Models::DeleteDocsRequest &request);

      /**
       * @summary 删除指定的用于事实性审核的 URL。
       *
       * @param request DeleteFactAuditUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFactAuditUrlResponse
       */
      Models::DeleteFactAuditUrlResponse deleteFactAuditUrlWithOptions(const Models::DeleteFactAuditUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定的用于事实性审核的 URL。
       *
       * @param request DeleteFactAuditUrlRequest
       * @return DeleteFactAuditUrlResponse
       */
      Models::DeleteFactAuditUrlResponse deleteFactAuditUrl(const Models::DeleteFactAuditUrlRequest &request);

      /**
       * @summary 通用配置-删除
       *
       * @param request DeleteGeneralConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGeneralConfigResponse
       */
      Models::DeleteGeneralConfigResponse deleteGeneralConfigWithOptions(const Models::DeleteGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用配置-删除
       *
       * @param request DeleteGeneralConfigRequest
       * @return DeleteGeneralConfigResponse
       */
      Models::DeleteGeneralConfigResponse deleteGeneralConfig(const Models::DeleteGeneralConfigRequest &request);

      /**
       * @summary 文档管理-删除。
       *
       * @param request DeleteGeneratedContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGeneratedContentResponse
       */
      Models::DeleteGeneratedContentResponse deleteGeneratedContentWithOptions(const Models::DeleteGeneratedContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档管理-删除。
       *
       * @param request DeleteGeneratedContentRequest
       * @return DeleteGeneratedContentResponse
       */
      Models::DeleteGeneratedContentResponse deleteGeneratedContent(const Models::DeleteGeneratedContentRequest &request);

      /**
       * @summary 删除干预规则
       *
       * @param request DeleteInterveneRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInterveneRuleResponse
       */
      Models::DeleteInterveneRuleResponse deleteInterveneRuleWithOptions(const Models::DeleteInterveneRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除干预规则
       *
       * @param request DeleteInterveneRuleRequest
       * @return DeleteInterveneRuleResponse
       */
      Models::DeleteInterveneRuleResponse deleteInterveneRule(const Models::DeleteInterveneRuleRequest &request);

      /**
       * @summary 根据ID删除素材
       *
       * @param request DeleteMaterialByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMaterialByIdResponse
       */
      Models::DeleteMaterialByIdResponse deleteMaterialByIdWithOptions(const Models::DeleteMaterialByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据ID删除素材
       *
       * @param request DeleteMaterialByIdRequest
       * @return DeleteMaterialByIdResponse
       */
      Models::DeleteMaterialByIdResponse deleteMaterialById(const Models::DeleteMaterialByIdRequest &request);

      /**
       * @summary 删除指定自定义文体
       *
       * @param request DeleteStyleLearningResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStyleLearningResultResponse
       */
      Models::DeleteStyleLearningResultResponse deleteStyleLearningResultWithOptions(const Models::DeleteStyleLearningResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定自定义文体
       *
       * @param request DeleteStyleLearningResultRequest
       * @return DeleteStyleLearningResultResponse
       */
      Models::DeleteStyleLearningResultResponse deleteStyleLearningResult(const Models::DeleteStyleLearningResultRequest &request);

      /**
       * @summary 从链接中提取文档内容
       *
       * @param tmpReq DocumentExtractionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocumentExtractionResponse
       */
      Models::DocumentExtractionResponse documentExtractionWithOptions(const Models::DocumentExtractionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从链接中提取文档内容
       *
       * @param request DocumentExtractionRequest
       * @return DocumentExtractionResponse
       */
      Models::DocumentExtractionResponse documentExtraction(const Models::DocumentExtractionRequest &request);

      /**
       * @summary 您可以通过调用该接口下载结构化后的规则库，供您进行进一步处理。该接口同时拥有两个功能：下载未后处理的结构化规则库，或下载当前可用于审核的结构化规则库。具体使用方法，请参考入参说明。
       *
       * @param request DownloadAuditNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadAuditNoteResponse
       */
      Models::DownloadAuditNoteResponse downloadAuditNoteWithOptions(const Models::DownloadAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 您可以通过调用该接口下载结构化后的规则库，供您进行进一步处理。该接口同时拥有两个功能：下载未后处理的结构化规则库，或下载当前可用于审核的结构化规则库。具体使用方法，请参考入参说明。
       *
       * @param request DownloadAuditNoteRequest
       * @return DownloadAuditNoteResponse
       */
      Models::DownloadAuditNoteResponse downloadAuditNote(const Models::DownloadAuditNoteRequest &request);

      /**
       * @summary 标书下载接口
       *
       * @param request DownloadBiddingDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadBiddingDocResponse
       */
      Models::DownloadBiddingDocResponse downloadBiddingDocWithOptions(const Models::DownloadBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 标书下载接口
       *
       * @param request DownloadBiddingDocRequest
       * @return DownloadBiddingDocResponse
       */
      Models::DownloadBiddingDocResponse downloadBiddingDoc(const Models::DownloadBiddingDocRequest &request);

      /**
       * @summary 编辑审核自定义词库记录
       *
       * @param tmpReq EditAuditTermsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditAuditTermsResponse
       */
      Models::EditAuditTermsResponse editAuditTermsWithOptions(const Models::EditAuditTermsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑审核自定义词库记录
       *
       * @param request EditAuditTermsRequest
       * @return EditAuditTermsResponse
       */
      Models::EditAuditTermsResponse editAuditTerms(const Models::EditAuditTermsRequest &request);

      /**
       * @summary 编辑标书内容接口
       *
       * @param request EditBiddingDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditBiddingDocResponse
       */
      Models::EditBiddingDocResponse editBiddingDocWithOptions(const Models::EditBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑标书内容接口
       *
       * @param request EditBiddingDocRequest
       * @return EditBiddingDocResponse
       */
      Models::EditBiddingDocResponse editBiddingDoc(const Models::EditBiddingDocRequest &request);

      /**
       * @summary 导出企业VOC分析任务明细列表
       *
       * @param tmpReq ExportAnalysisTagDetailByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportAnalysisTagDetailByTaskIdResponse
       */
      Models::ExportAnalysisTagDetailByTaskIdResponse exportAnalysisTagDetailByTaskIdWithOptions(const Models::ExportAnalysisTagDetailByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出企业VOC分析任务明细列表
       *
       * @param request ExportAnalysisTagDetailByTaskIdRequest
       * @return ExportAnalysisTagDetailByTaskIdResponse
       */
      Models::ExportAnalysisTagDetailByTaskIdResponse exportAnalysisTagDetailByTaskId(const Models::ExportAnalysisTagDetailByTaskIdRequest &request);

      /**
       * @summary 导出智能审核报告
       *
       * @param request ExportAuditContentResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportAuditContentResultResponse
       */
      Models::ExportAuditContentResultResponse exportAuditContentResultWithOptions(const Models::ExportAuditContentResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出智能审核报告
       *
       * @param request ExportAuditContentResultRequest
       * @return ExportAuditContentResultResponse
       */
      Models::ExportAuditContentResultResponse exportAuditContentResult(const Models::ExportAuditContentResultRequest &request);

      /**
       * @summary 导出-自定义数据源-选题视角分析任务结果
       *
       * @param request ExportCustomSourceAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportCustomSourceAnalysisTaskResponse
       */
      Models::ExportCustomSourceAnalysisTaskResponse exportCustomSourceAnalysisTaskWithOptions(const Models::ExportCustomSourceAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出-自定义数据源-选题视角分析任务结果
       *
       * @param request ExportCustomSourceAnalysisTaskRequest
       * @return ExportCustomSourceAnalysisTaskResponse
       */
      Models::ExportCustomSourceAnalysisTaskResponse exportCustomSourceAnalysisTask(const Models::ExportCustomSourceAnalysisTaskRequest &request);

      /**
       * @summary 文档管理-导出。
       *
       * @param request ExportGeneratedContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportGeneratedContentResponse
       */
      Models::ExportGeneratedContentResponse exportGeneratedContentWithOptions(const Models::ExportGeneratedContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档管理-导出。
       *
       * @param request ExportGeneratedContentRequest
       * @return ExportGeneratedContentResponse
       */
      Models::ExportGeneratedContentResponse exportGeneratedContent(const Models::ExportGeneratedContentRequest &request);

      /**
       * @summary 导出选题策划文档，响应为一个可公开访问的URL。一小时后失效
       *
       * @param tmpReq ExportHotTopicPlanningProposalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportHotTopicPlanningProposalsResponse
       */
      Models::ExportHotTopicPlanningProposalsResponse exportHotTopicPlanningProposalsWithOptions(const Models::ExportHotTopicPlanningProposalsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出选题策划文档，响应为一个可公开访问的URL。一小时后失效
       *
       * @param request ExportHotTopicPlanningProposalsRequest
       * @return ExportHotTopicPlanningProposalsResponse
       */
      Models::ExportHotTopicPlanningProposalsResponse exportHotTopicPlanningProposals(const Models::ExportHotTopicPlanningProposalsRequest &request);

      /**
       * @summary 导出所有干预内容
       *
       * @param request ExportIntervenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportIntervenesResponse
       */
      Models::ExportIntervenesResponse exportIntervenesWithOptions(const Models::ExportIntervenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出所有干预内容
       *
       * @param request ExportIntervenesRequest
       * @return ExportIntervenesResponse
       */
      Models::ExportIntervenesResponse exportIntervenes(const Models::ExportIntervenesRequest &request);

      /**
       * @summary 反馈某次生成的结果
       *
       * @param tmpReq FeedbackDialogueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FeedbackDialogueResponse
       */
      Models::FeedbackDialogueResponse feedbackDialogueWithOptions(const Models::FeedbackDialogueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 反馈某次生成的结果
       *
       * @param request FeedbackDialogueRequest
       * @return FeedbackDialogueResponse
       */
      Models::FeedbackDialogueResponse feedbackDialogue(const Models::FeedbackDialogueRequest &request);

      /**
       * @summary 获取词库导出任务结果
       *
       * @param request FetchExportTermsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchExportTermsTaskResponse
       */
      Models::FetchExportTermsTaskResponse fetchExportTermsTaskWithOptions(const Models::FetchExportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取词库导出任务结果
       *
       * @param request FetchExportTermsTaskRequest
       * @return FetchExportTermsTaskResponse
       */
      Models::FetchExportTermsTaskResponse fetchExportTermsTask(const Models::FetchExportTermsTaskRequest &request);

      /**
       * @summary 获取异步导出文档任务结果
       *
       * @param request FetchExportWordTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchExportWordTaskResponse
       */
      Models::FetchExportWordTaskResponse fetchExportWordTaskWithOptions(const Models::FetchExportWordTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取异步导出文档任务结果
       *
       * @param request FetchExportWordTaskRequest
       * @return FetchExportWordTaskResponse
       */
      Models::FetchExportWordTaskResponse fetchExportWordTask(const Models::FetchExportWordTaskRequest &request);

      /**
       * @summary 获取图片任务执行结果
       *
       * @param tmpReq FetchImageTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchImageTaskResponse
       */
      Models::FetchImageTaskResponse fetchImageTaskWithOptions(const Models::FetchImageTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取图片任务执行结果
       *
       * @param request FetchImageTaskRequest
       * @return FetchImageTaskResponse
       */
      Models::FetchImageTaskResponse fetchImageTask(const Models::FetchImageTaskRequest &request);

      /**
       * @summary 获取导入词库任务结果
       *
       * @param request FetchImportTermsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchImportTermsTaskResponse
       */
      Models::FetchImportTermsTaskResponse fetchImportTermsTaskWithOptions(const Models::FetchImportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取导入词库任务结果
       *
       * @param request FetchImportTermsTaskRequest
       * @return FetchImportTermsTaskResponse
       */
      Models::FetchImportTermsTaskResponse fetchImportTermsTask(const Models::FetchImportTermsTaskRequest &request);

      /**
       * @summary 生成内容导出文档任务
       *
       * @param request GenerateExportWordTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateExportWordTaskResponse
       */
      Models::GenerateExportWordTaskResponse generateExportWordTaskWithOptions(const Models::GenerateExportWordTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成内容导出文档任务
       *
       * @param request GenerateExportWordTaskRequest
       * @return GenerateExportWordTaskResponse
       */
      Models::GenerateExportWordTaskResponse generateExportWordTask(const Models::GenerateExportWordTaskRequest &request);

      /**
       * @summary 生成临时可访问的公开url
       *
       * @param request GenerateFileUrlByKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateFileUrlByKeyResponse
       */
      Models::GenerateFileUrlByKeyResponse generateFileUrlByKeyWithOptions(const Models::GenerateFileUrlByKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成临时可访问的公开url
       *
       * @param request GenerateFileUrlByKeyRequest
       * @return GenerateFileUrlByKeyResponse
       */
      Models::GenerateFileUrlByKeyResponse generateFileUrlByKey(const Models::GenerateFileUrlByKeyRequest &request);

      /**
       * @summary 智能配图，图片生成任务
       *
       * @param tmpReq GenerateImageTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateImageTaskResponse
       */
      Models::GenerateImageTaskResponse generateImageTaskWithOptions(const Models::GenerateImageTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能配图，图片生成任务
       *
       * @param request GenerateImageTaskRequest
       * @return GenerateImageTaskResponse
       */
      Models::GenerateImageTaskResponse generateImageTask(const Models::GenerateImageTaskRequest &request);

      /**
       * @summary 生成上传配置
       *
       * @param request GenerateUploadConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUploadConfigResponse
       */
      Models::GenerateUploadConfigResponse generateUploadConfigWithOptions(const Models::GenerateUploadConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成上传配置
       *
       * @param request GenerateUploadConfigRequest
       * @return GenerateUploadConfigResponse
       */
      Models::GenerateUploadConfigResponse generateUploadConfig(const Models::GenerateUploadConfigRequest &request);

      /**
       * @summary 视角生成
       *
       * @param tmpReq GenerateViewPointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateViewPointResponse
       */
      Models::GenerateViewPointResponse generateViewPointWithOptions(const Models::GenerateViewPointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视角生成
       *
       * @param request GenerateViewPointRequest
       * @return GenerateViewPointResponse
       */
      Models::GenerateViewPointResponse generateViewPoint(const Models::GenerateViewPointRequest &request);

      /**
       * @summary 查询规则库后处理的进度。与 ConfirmAndPostProcessAuditNote 接口配合使用，供您查询当前后处理任务的状态。
       *
       * @param request GetAuditNotePostProcessingStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuditNotePostProcessingStatusResponse
       */
      Models::GetAuditNotePostProcessingStatusResponse getAuditNotePostProcessingStatusWithOptions(const Models::GetAuditNotePostProcessingStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询规则库后处理的进度。与 ConfirmAndPostProcessAuditNote 接口配合使用，供您查询当前后处理任务的状态。
       *
       * @param request GetAuditNotePostProcessingStatusRequest
       * @return GetAuditNotePostProcessingStatusResponse
       */
      Models::GetAuditNotePostProcessingStatusResponse getAuditNotePostProcessingStatus(const Models::GetAuditNotePostProcessingStatusRequest &request);

      /**
       * @summary 查询用户上传规则库的处理状态。通过该接口，用户可以查询到当前规则库上传任务的状态，并获取到解析后的规则库文件大小、存储路径等信息。
       *
       * @param request GetAuditNoteProcessingStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuditNoteProcessingStatusResponse
       */
      Models::GetAuditNoteProcessingStatusResponse getAuditNoteProcessingStatusWithOptions(const Models::GetAuditNoteProcessingStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户上传规则库的处理状态。通过该接口，用户可以查询到当前规则库上传任务的状态，并获取到解析后的规则库文件大小、存储路径等信息。
       *
       * @param request GetAuditNoteProcessingStatusRequest
       * @return GetAuditNoteProcessingStatusResponse
       */
      Models::GetAuditNoteProcessingStatusResponse getAuditNoteProcessingStatus(const Models::GetAuditNoteProcessingStatusRequest &request);

      /**
       * @summary 获得剪辑任务状态
       *
       * @param request GetAutoClipsTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoClipsTaskInfoResponse
       */
      Models::GetAutoClipsTaskInfoResponse getAutoClipsTaskInfoWithOptions(const Models::GetAutoClipsTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得剪辑任务状态
       *
       * @param request GetAutoClipsTaskInfoRequest
       * @return GetAutoClipsTaskInfoResponse
       */
      Models::GetAutoClipsTaskInfoResponse getAutoClipsTaskInfo(const Models::GetAutoClipsTaskInfoRequest &request);

      /**
       * @summary 查询用户当前可供审核的规则库信息，只能查询到当前可用于审核的规则库。如果您想看到自定义规则库的具体内容，请使用 DownloadAuditNote 接口。
       *
       * @param request GetAvailableAuditNotesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAvailableAuditNotesResponse
       */
      Models::GetAvailableAuditNotesResponse getAvailableAuditNotesWithOptions(const Models::GetAvailableAuditNotesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户当前可供审核的规则库信息，只能查询到当前可用于审核的规则库。如果您想看到自定义规则库的具体内容，请使用 DownloadAuditNote 接口。
       *
       * @param request GetAvailableAuditNotesRequest
       * @return GetAvailableAuditNotesResponse
       */
      Models::GetAvailableAuditNotesResponse getAvailableAuditNotes(const Models::GetAvailableAuditNotesRequest &request);

      /**
       * @summary 获得标书写作结果接口
       *
       * @param request GetBiddingDocInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBiddingDocInfoResponse
       */
      Models::GetBiddingDocInfoResponse getBiddingDocInfoWithOptions(const Models::GetBiddingDocInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得标书写作结果接口
       *
       * @param request GetBiddingDocInfoRequest
       * @return GetBiddingDocInfoResponse
       */
      Models::GetBiddingDocInfoResponse getBiddingDocInfo(const Models::GetBiddingDocInfoRequest &request);

      /**
       * @summary 获得标书功能剩余额度
       *
       * @param request GetBiddingRemainLimitNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBiddingRemainLimitNumResponse
       */
      Models::GetBiddingRemainLimitNumResponse getBiddingRemainLimitNumWithOptions(const Models::GetBiddingRemainLimitNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得标书功能剩余额度
       *
       * @param request GetBiddingRemainLimitNumRequest
       * @return GetBiddingRemainLimitNumResponse
       */
      Models::GetBiddingRemainLimitNumResponse getBiddingRemainLimitNum(const Models::GetBiddingRemainLimitNumRequest &request);

      /**
       * @summary 获取某次标签挖掘结果分类
       *
       * @param request GetCategoriesByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCategoriesByTaskIdResponse
       */
      Models::GetCategoriesByTaskIdResponse getCategoriesByTaskIdWithOptions(const Models::GetCategoriesByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取某次标签挖掘结果分类
       *
       * @param request GetCategoriesByTaskIdRequest
       * @return GetCategoriesByTaskIdResponse
       */
      Models::GetCategoriesByTaskIdResponse getCategoriesByTaskId(const Models::GetCategoriesByTaskIdRequest &request);

      /**
       * @summary 获取自定义播报单任务结果
       *
       * @param request GetCustomHotTopicBroadcastJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomHotTopicBroadcastJobResponse
       */
      Models::GetCustomHotTopicBroadcastJobResponse getCustomHotTopicBroadcastJobWithOptions(const Models::GetCustomHotTopicBroadcastJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义播报单任务结果
       *
       * @param request GetCustomHotTopicBroadcastJobRequest
       * @return GetCustomHotTopicBroadcastJobResponse
       */
      Models::GetCustomHotTopicBroadcastJobResponse getCustomHotTopicBroadcastJob(const Models::GetCustomHotTopicBroadcastJobRequest &request);

      /**
       * @summary 获取自定义数据源-选题视角分析任务结果
       *
       * @param request GetCustomSourceTopicAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomSourceTopicAnalysisTaskResponse
       */
      Models::GetCustomSourceTopicAnalysisTaskResponse getCustomSourceTopicAnalysisTaskWithOptions(const Models::GetCustomSourceTopicAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义数据源-选题视角分析任务结果
       *
       * @param request GetCustomSourceTopicAnalysisTaskRequest
       * @return GetCustomSourceTopicAnalysisTaskResponse
       */
      Models::GetCustomSourceTopicAnalysisTaskResponse getCustomSourceTopicAnalysisTask(const Models::GetCustomSourceTopicAnalysisTaskRequest &request);

      /**
       * @summary 获取自定义文本
       *
       * @param request GetCustomTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomTextResponse
       */
      Models::GetCustomTextResponse getCustomTextWithOptions(const Models::GetCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义文本
       *
       * @param request GetCustomTextRequest
       * @return GetCustomTextResponse
       */
      Models::GetCustomTextResponse getCustomText(const Models::GetCustomTextRequest &request);

      /**
       * @summary 获取自定义选题视角分析任务结果
       *
       * @param request GetCustomTopicSelectionPerspectiveAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponse getCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(const Models::GetCustomTopicSelectionPerspectiveAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义选题视角分析任务结果
       *
       * @param request GetCustomTopicSelectionPerspectiveAnalysisTaskRequest
       * @return GetCustomTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponse getCustomTopicSelectionPerspectiveAnalysisTask(const Models::GetCustomTopicSelectionPerspectiveAnalysisTaskRequest &request);

      /**
       * @summary 获取系统数据源配置和个人配置
       *
       * @param request GetDataSourceOrderConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataSourceOrderConfigResponse
       */
      Models::GetDataSourceOrderConfigResponse getDataSourceOrderConfigWithOptions(const Models::GetDataSourceOrderConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取系统数据源配置和个人配置
       *
       * @param request GetDataSourceOrderConfigRequest
       * @return GetDataSourceOrderConfigResponse
       */
      Models::GetDataSourceOrderConfigResponse getDataSourceOrderConfig(const Models::GetDataSourceOrderConfigRequest &request);

      /**
       * @summary 数据集管理-详情
       *
       * @param request GetDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDatasetWithOptions(const Models::GetDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 数据集管理-详情
       *
       * @param request GetDatasetRequest
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDataset(const Models::GetDatasetRequest &request);

      /**
       * @summary 获取数据集文档
       *
       * @param tmpReq GetDatasetDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetDocumentResponse
       */
      Models::GetDatasetDocumentResponse getDatasetDocumentWithOptions(const Models::GetDatasetDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据集文档
       *
       * @param request GetDatasetDocumentRequest
       * @return GetDatasetDocumentResponse
       */
      Models::GetDatasetDocumentResponse getDatasetDocument(const Models::GetDatasetDocumentRequest &request);

      /**
       * @summary 查询深度写作任务
       *
       * @param request GetDeepWriteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeepWriteTaskResponse
       */
      Models::GetDeepWriteTaskResponse getDeepWriteTaskWithOptions(const Models::GetDeepWriteTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询深度写作任务
       *
       * @param request GetDeepWriteTaskRequest
       * @return GetDeepWriteTaskResponse
       */
      Models::GetDeepWriteTaskResponse getDeepWriteTask(const Models::GetDeepWriteTaskRequest &request);

      /**
       * @summary 查询深度写作任务的结果
       *
       * @param request GetDeepWriteTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeepWriteTaskResultResponse
       */
      Models::GetDeepWriteTaskResultResponse getDeepWriteTaskResultWithOptions(const Models::GetDeepWriteTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询深度写作任务的结果
       *
       * @param request GetDeepWriteTaskResultRequest
       * @return GetDeepWriteTaskResultResponse
       */
      Models::GetDeepWriteTaskResultResponse getDeepWriteTaskResult(const Models::GetDeepWriteTaskResultRequest &request);

      /**
       * @summary 获取文档聚合任务结果
       *
       * @param request GetDocClusterTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocClusterTaskResponse
       */
      Models::GetDocClusterTaskResponse getDocClusterTaskWithOptions(const Models::GetDocClusterTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文档聚合任务结果
       *
       * @param request GetDocClusterTaskRequest
       * @return GetDocClusterTaskResponse
       */
      Models::GetDocClusterTaskResponse getDocClusterTask(const Models::GetDocClusterTaskRequest &request);

      /**
       * @summary 妙读获取文档信息
       *
       * @param request GetDocInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocInfoResponse
       */
      Models::GetDocInfoResponse getDocInfoWithOptions(const Models::GetDocInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读获取文档信息
       *
       * @param request GetDocInfoRequest
       * @return GetDocInfoResponse
       */
      Models::GetDocInfoResponse getDocInfo(const Models::GetDocInfoRequest &request);

      /**
       * @summary 获取企业VOC分析任务结果
       *
       * @param request GetEnterpriseVocAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEnterpriseVocAnalysisTaskResponse
       */
      Models::GetEnterpriseVocAnalysisTaskResponse getEnterpriseVocAnalysisTaskWithOptions(const Models::GetEnterpriseVocAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取企业VOC分析任务结果
       *
       * @param request GetEnterpriseVocAnalysisTaskRequest
       * @return GetEnterpriseVocAnalysisTaskResponse
       */
      Models::GetEnterpriseVocAnalysisTaskResponse getEnterpriseVocAnalysisTask(const Models::GetEnterpriseVocAnalysisTaskRequest &request);

      /**
       * @summary 获取当前正用于事实性审核的信源 URL。
       *
       * @param request GetFactAuditUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFactAuditUrlResponse
       */
      Models::GetFactAuditUrlResponse getFactAuditUrlWithOptions(const Models::GetFactAuditUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当前正用于事实性审核的信源 URL。
       *
       * @param request GetFactAuditUrlRequest
       * @return GetFactAuditUrlResponse
       */
      Models::GetFactAuditUrlResponse getFactAuditUrl(const Models::GetFactAuditUrlRequest &request);

      /**
       * @summary 妙读获得文档字数
       *
       * @param request GetFileContentLengthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileContentLengthResponse
       */
      Models::GetFileContentLengthResponse getFileContentLengthWithOptions(const Models::GetFileContentLengthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读获得文档字数
       *
       * @param request GetFileContentLengthRequest
       * @return GetFileContentLengthResponse
       */
      Models::GetFileContentLengthResponse getFileContentLength(const Models::GetFileContentLengthRequest &request);

      /**
       * @summary 通用配置-查询
       *
       * @param request GetGeneralConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGeneralConfigResponse
       */
      Models::GetGeneralConfigResponse getGeneralConfigWithOptions(const Models::GetGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用配置-查询
       *
       * @param request GetGeneralConfigRequest
       * @return GetGeneralConfigResponse
       */
      Models::GetGeneralConfigResponse getGeneralConfig(const Models::GetGeneralConfigRequest &request);

      /**
       * @summary 文档管理-查询详情。
       *
       * @param request GetGeneratedContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGeneratedContentResponse
       */
      Models::GetGeneratedContentResponse getGeneratedContentWithOptions(const Models::GetGeneratedContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档管理-查询详情。
       *
       * @param request GetGeneratedContentRequest
       * @return GetGeneratedContentResponse
       */
      Models::GetGeneratedContentResponse getGeneratedContent(const Models::GetGeneratedContentRequest &request);

      /**
       * @summary 查询新闻播报单
       *
       * @param tmpReq GetHotTopicBroadcastRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotTopicBroadcastResponse
       */
      Models::GetHotTopicBroadcastResponse getHotTopicBroadcastWithOptions(const Models::GetHotTopicBroadcastRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询新闻播报单
       *
       * @param request GetHotTopicBroadcastRequest
       * @return GetHotTopicBroadcastResponse
       */
      Models::GetHotTopicBroadcastResponse getHotTopicBroadcast(const Models::GetHotTopicBroadcastRequest &request);

      /**
       * @summary 获得干预全局回复
       *
       * @param request GetInterveneGlobalReplyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInterveneGlobalReplyResponse
       */
      Models::GetInterveneGlobalReplyResponse getInterveneGlobalReplyWithOptions(const Models::GetInterveneGlobalReplyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得干预全局回复
       *
       * @param request GetInterveneGlobalReplyRequest
       * @return GetInterveneGlobalReplyResponse
       */
      Models::GetInterveneGlobalReplyResponse getInterveneGlobalReply(const Models::GetInterveneGlobalReplyRequest &request);

      /**
       * @summary 获得导入任务信息
       *
       * @param request GetInterveneImportTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInterveneImportTaskInfoResponse
       */
      Models::GetInterveneImportTaskInfoResponse getInterveneImportTaskInfoWithOptions(const Models::GetInterveneImportTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得导入任务信息
       *
       * @param request GetInterveneImportTaskInfoRequest
       * @return GetInterveneImportTaskInfoResponse
       */
      Models::GetInterveneImportTaskInfoResponse getInterveneImportTaskInfo(const Models::GetInterveneImportTaskInfoRequest &request);

      /**
       * @summary 获得干预项规则详情
       *
       * @param request GetInterveneRuleDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInterveneRuleDetailResponse
       */
      Models::GetInterveneRuleDetailResponse getInterveneRuleDetailWithOptions(const Models::GetInterveneRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得干预项规则详情
       *
       * @param request GetInterveneRuleDetailRequest
       * @return GetInterveneRuleDetailResponse
       */
      Models::GetInterveneRuleDetailResponse getInterveneRuleDetail(const Models::GetInterveneRuleDetailRequest &request);

      /**
       * @summary 获得干预导入模版文件下载地址
       *
       * @param request GetInterveneTemplateFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInterveneTemplateFileUrlResponse
       */
      Models::GetInterveneTemplateFileUrlResponse getInterveneTemplateFileUrlWithOptions(const Models::GetInterveneTemplateFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得干预导入模版文件下载地址
       *
       * @param request GetInterveneTemplateFileUrlRequest
       * @return GetInterveneTemplateFileUrlResponse
       */
      Models::GetInterveneTemplateFileUrlResponse getInterveneTemplateFileUrl(const Models::GetInterveneTemplateFileUrlRequest &request);

      /**
       * @summary 根据ID获取素材内容
       *
       * @param request GetMaterialByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMaterialByIdResponse
       */
      Models::GetMaterialByIdResponse getMaterialByIdWithOptions(const Models::GetMaterialByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据ID获取素材内容
       *
       * @param request GetMaterialByIdRequest
       * @return GetMaterialByIdResponse
       */
      Models::GetMaterialByIdResponse getMaterialById(const Models::GetMaterialByIdRequest &request);

      /**
       * @summary 获取当前用户的配置
       *
       * @param request GetPropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPropertiesResponse
       */
      Models::GetPropertiesResponse getPropertiesWithOptions(const Models::GetPropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取当前用户的配置
       *
       * @param request GetPropertiesRequest
       * @return GetPropertiesResponse
       */
      Models::GetPropertiesResponse getProperties(const Models::GetPropertiesRequest &request);

      /**
       * @summary 查询智能审核结果
       *
       * @param request GetSmartAuditResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmartAuditResultResponse
       */
      Models::GetSmartAuditResultResponse getSmartAuditResultWithOptions(const Models::GetSmartAuditResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询智能审核结果
       *
       * @param request GetSmartAuditResultRequest
       * @return GetSmartAuditResultResponse
       */
      Models::GetSmartAuditResultResponse getSmartAuditResult(const Models::GetSmartAuditResultRequest &request);

      /**
       * @summary 查询一键成片剪辑任务
       *
       * @param request GetSmartClipTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmartClipTaskResponse
       */
      Models::GetSmartClipTaskResponse getSmartClipTaskWithOptions(const Models::GetSmartClipTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一键成片剪辑任务
       *
       * @param request GetSmartClipTaskRequest
       * @return GetSmartClipTaskResponse
       */
      Models::GetSmartClipTaskResponse getSmartClipTask(const Models::GetSmartClipTaskRequest &request);

      /**
       * @summary 获取文体学习分析结果
       *
       * @param request GetStyleLearningResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStyleLearningResultResponse
       */
      Models::GetStyleLearningResultResponse getStyleLearningResultWithOptions(const Models::GetStyleLearningResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文体学习分析结果
       *
       * @param request GetStyleLearningResultRequest
       * @return GetStyleLearningResultResponse
       */
      Models::GetStyleLearningResultResponse getStyleLearningResult(const Models::GetStyleLearningResultRequest &request);

      /**
       * @summary 根据ID获取热点事件信息
       *
       * @param request GetTopicByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicByIdResponse
       */
      Models::GetTopicByIdResponse getTopicByIdWithOptions(const Models::GetTopicByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据ID获取热点事件信息
       *
       * @param request GetTopicByIdRequest
       * @return GetTopicByIdResponse
       */
      Models::GetTopicByIdResponse getTopicById(const Models::GetTopicByIdRequest &request);

      /**
       * @summary 获取选题视角分析任务结果
       *
       * @param request GetTopicSelectionPerspectiveAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::GetTopicSelectionPerspectiveAnalysisTaskResponse getTopicSelectionPerspectiveAnalysisTaskWithOptions(const Models::GetTopicSelectionPerspectiveAnalysisTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取选题视角分析任务结果
       *
       * @param request GetTopicSelectionPerspectiveAnalysisTaskRequest
       * @return GetTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::GetTopicSelectionPerspectiveAnalysisTaskResponse getTopicSelectionPerspectiveAnalysisTask(const Models::GetTopicSelectionPerspectiveAnalysisTaskRequest &request);

      /**
       * @summary 导入干预文件
       *
       * @param request ImportInterveneFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportInterveneFileResponse
       */
      Models::ImportInterveneFileResponse importInterveneFileWithOptions(const Models::ImportInterveneFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入干预文件
       *
       * @param request ImportInterveneFileRequest
       * @return ImportInterveneFileResponse
       */
      Models::ImportInterveneFileResponse importInterveneFile(const Models::ImportInterveneFileRequest &request);

      /**
       * @summary 异步导入干预文件
       *
       * @param request ImportInterveneFileAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportInterveneFileAsyncResponse
       */
      Models::ImportInterveneFileAsyncResponse importInterveneFileAsyncWithOptions(const Models::ImportInterveneFileAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 异步导入干预文件
       *
       * @param request ImportInterveneFileAsyncRequest
       * @return ImportInterveneFileAsyncResponse
       */
      Models::ImportInterveneFileAsyncResponse importInterveneFileAsync(const Models::ImportInterveneFileAsyncRequest &request);

      /**
       * @summary 设置干预全局回复
       *
       * @param tmpReq InsertInterveneGlobalReplyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertInterveneGlobalReplyResponse
       */
      Models::InsertInterveneGlobalReplyResponse insertInterveneGlobalReplyWithOptions(const Models::InsertInterveneGlobalReplyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置干预全局回复
       *
       * @param request InsertInterveneGlobalReplyRequest
       * @return InsertInterveneGlobalReplyResponse
       */
      Models::InsertInterveneGlobalReplyResponse insertInterveneGlobalReply(const Models::InsertInterveneGlobalReplyRequest &request);

      /**
       * @summary 插入干预规则
       *
       * @param tmpReq InsertInterveneRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertInterveneRuleResponse
       */
      Models::InsertInterveneRuleResponse insertInterveneRuleWithOptions(const Models::InsertInterveneRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 插入干预规则
       *
       * @param request InsertInterveneRuleRequest
       * @return InsertInterveneRuleResponse
       */
      Models::InsertInterveneRuleResponse insertInterveneRule(const Models::InsertInterveneRuleRequest &request);

      /**
       * @summary 分页获取企业VOC分析任务明细列表
       *
       * @param tmpReq ListAnalysisTagDetailByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnalysisTagDetailByTaskIdResponse
       */
      Models::ListAnalysisTagDetailByTaskIdResponse listAnalysisTagDetailByTaskIdWithOptions(const Models::ListAnalysisTagDetailByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页获取企业VOC分析任务明细列表
       *
       * @param request ListAnalysisTagDetailByTaskIdRequest
       * @return ListAnalysisTagDetailByTaskIdResponse
       */
      Models::ListAnalysisTagDetailByTaskIdResponse listAnalysisTagDetailByTaskId(const Models::ListAnalysisTagDetailByTaskIdRequest &request);

      /**
       * @summary 查询任务列表
       *
       * @param tmpReq ListAsyncTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasksWithOptions(const Models::ListAsyncTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务列表
       *
       * @param request ListAsyncTasksRequest
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasks(const Models::ListAsyncTasksRequest &request);

      /**
       * @summary 获取审核维度列表
       *
       * @param request ListAuditContentErrorTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuditContentErrorTypesResponse
       */
      Models::ListAuditContentErrorTypesResponse listAuditContentErrorTypesWithOptions(const Models::ListAuditContentErrorTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取审核维度列表
       *
       * @param request ListAuditContentErrorTypesRequest
       * @return ListAuditContentErrorTypesResponse
       */
      Models::ListAuditContentErrorTypesResponse listAuditContentErrorTypes(const Models::ListAuditContentErrorTypesRequest &request);

      /**
       * @summary 获取词库列表
       *
       * @param request ListAuditTermsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuditTermsResponse
       */
      Models::ListAuditTermsResponse listAuditTermsWithOptions(const Models::ListAuditTermsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取词库列表
       *
       * @param request ListAuditTermsRequest
       * @return ListAuditTermsResponse
       */
      Models::ListAuditTermsResponse listAuditTerms(const Models::ListAuditTermsRequest &request);

      /**
       * @summary 获得标书写作任务列表
       *
       * @param request ListBiddingDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBiddingDocResponse
       */
      Models::ListBiddingDocResponse listBiddingDocWithOptions(const Models::ListBiddingDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得标书写作任务列表
       *
       * @param request ListBiddingDocRequest
       * @return ListBiddingDocResponse
       */
      Models::ListBiddingDocResponse listBiddingDoc(const Models::ListBiddingDocRequest &request);

      /**
       * @summary 获取系统自定义预设
       *
       * @param request ListBuildConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBuildConfigsResponse
       */
      Models::ListBuildConfigsResponse listBuildConfigsWithOptions(const Models::ListBuildConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取系统自定义预设
       *
       * @param request ListBuildConfigsRequest
       * @return ListBuildConfigsResponse
       */
      Models::ListBuildConfigsResponse listBuildConfigs(const Models::ListBuildConfigsRequest &request);

      /**
       * @summary 自定义文本列表
       *
       * @param request ListCustomTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomTextResponse
       */
      Models::ListCustomTextResponse listCustomTextWithOptions(const Models::ListCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 自定义文本列表
       *
       * @param request ListCustomTextRequest
       * @return ListCustomTextResponse
       */
      Models::ListCustomTextResponse listCustomText(const Models::ListCustomTextRequest &request);

      /**
       * @summary 自定义视角列表
       *
       * @param tmpReq ListCustomViewPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomViewPointsResponse
       */
      Models::ListCustomViewPointsResponse listCustomViewPointsWithOptions(const Models::ListCustomViewPointsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 自定义视角列表
       *
       * @param request ListCustomViewPointsRequest
       * @return ListCustomViewPointsResponse
       */
      Models::ListCustomViewPointsResponse listCustomViewPoints(const Models::ListCustomViewPointsRequest &request);

      /**
       * @summary 查询数据集文档列表
       *
       * @param tmpReq ListDatasetDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetDocumentsResponse
       */
      Models::ListDatasetDocumentsResponse listDatasetDocumentsWithOptions(const Models::ListDatasetDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据集文档列表
       *
       * @param request ListDatasetDocumentsRequest
       * @return ListDatasetDocumentsResponse
       */
      Models::ListDatasetDocumentsResponse listDatasetDocuments(const Models::ListDatasetDocumentsRequest &request);

      /**
       * @summary 数据集管理-查询
       *
       * @param request ListDatasetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasetsWithOptions(const Models::ListDatasetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 数据集管理-查询
       *
       * @param request ListDatasetsRequest
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasets(const Models::ListDatasetsRequest &request);

      /**
       * @summary 生成历史列表
       *
       * @param request ListDialoguesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDialoguesResponse
       */
      Models::ListDialoguesResponse listDialoguesWithOptions(const Models::ListDialoguesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成历史列表
       *
       * @param request ListDialoguesRequest
       * @return ListDialoguesResponse
       */
      Models::ListDialoguesResponse listDialogues(const Models::ListDialoguesRequest &request);

      /**
       * @summary 妙读获取文档列表
       *
       * @param tmpReq ListDocsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDocsResponse
       */
      Models::ListDocsResponse listDocsWithOptions(const Models::ListDocsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读获取文档列表
       *
       * @param request ListDocsRequest
       * @return ListDocsResponse
       */
      Models::ListDocsResponse listDocs(const Models::ListDocsRequest &request);

      /**
       * @summary 公文检索
       *
       * @param request ListDocumentRetrieveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDocumentRetrieveResponse
       */
      Models::ListDocumentRetrieveResponse listDocumentRetrieveWithOptions(const Models::ListDocumentRetrieveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 公文检索
       *
       * @param request ListDocumentRetrieveRequest
       * @return ListDocumentRetrieveResponse
       */
      Models::ListDocumentRetrieveResponse listDocumentRetrieve(const Models::ListDocumentRetrieveRequest &request);

      /**
       * @summary 新颖视角列表
       *
       * @param request ListFreshViewPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFreshViewPointsResponse
       */
      Models::ListFreshViewPointsResponse listFreshViewPointsWithOptions(const Models::ListFreshViewPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新颖视角列表
       *
       * @param request ListFreshViewPointsRequest
       * @return ListFreshViewPointsResponse
       */
      Models::ListFreshViewPointsResponse listFreshViewPoints(const Models::ListFreshViewPointsRequest &request);

      /**
       * @summary 通用配置-列表
       *
       * @param request ListGeneralConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGeneralConfigsResponse
       */
      Models::ListGeneralConfigsResponse listGeneralConfigsWithOptions(const Models::ListGeneralConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用配置-列表
       *
       * @param request ListGeneralConfigsRequest
       * @return ListGeneralConfigsResponse
       */
      Models::ListGeneralConfigsResponse listGeneralConfigs(const Models::ListGeneralConfigsRequest &request);

      /**
       * @summary 文档管理-列表。
       *
       * @param request ListGeneratedContentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGeneratedContentsResponse
       */
      Models::ListGeneratedContentsResponse listGeneratedContentsWithOptions(const Models::ListGeneratedContentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档管理-列表。
       *
       * @param request ListGeneratedContentsRequest
       * @return ListGeneratedContentsResponse
       */
      Models::ListGeneratedContentsResponse listGeneratedContents(const Models::ListGeneratedContentsRequest &request);

      /**
       * @summary 获取分类的热点新闻
       *
       * @param tmpReq ListHotNewsWithTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotNewsWithTypeResponse
       */
      Models::ListHotNewsWithTypeResponse listHotNewsWithTypeWithOptions(const Models::ListHotNewsWithTypeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取分类的热点新闻
       *
       * @param request ListHotNewsWithTypeRequest
       * @return ListHotNewsWithTypeResponse
       */
      Models::ListHotNewsWithTypeResponse listHotNewsWithType(const Models::ListHotNewsWithTypeRequest &request);

      /**
       * @summary 获取所有平台热榜源列表
       *
       * @param request ListHotSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotSourcesResponse
       */
      Models::ListHotSourcesResponse listHotSourcesWithOptions(const Models::ListHotSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取所有平台热榜源列表
       *
       * @param request ListHotSourcesRequest
       * @return ListHotSourcesResponse
       */
      Models::ListHotSourcesResponse listHotSources(const Models::ListHotSourcesRequest &request);

      /**
       * @summary 获取热点事件列表
       *
       * @param tmpReq ListHotTopicsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotTopicsResponse
       */
      Models::ListHotTopicsResponse listHotTopicsWithOptions(const Models::ListHotTopicsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取热点事件列表
       *
       * @param request ListHotTopicsRequest
       * @return ListHotTopicsResponse
       */
      Models::ListHotTopicsResponse listHotTopics(const Models::ListHotTopicsRequest &request);

      /**
       * @summary 热门视角列表
       *
       * @param request ListHotViewPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotViewPointsResponse
       */
      Models::ListHotViewPointsResponse listHotViewPointsWithOptions(const Models::ListHotViewPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 热门视角列表
       *
       * @param request ListHotViewPointsRequest
       * @return ListHotViewPointsResponse
       */
      Models::ListHotViewPointsResponse listHotViewPoints(const Models::ListHotViewPointsRequest &request);

      /**
       * @summary 获得干预项目数量列表
       *
       * @param request ListInterveneCntRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterveneCntResponse
       */
      Models::ListInterveneCntResponse listInterveneCntWithOptions(const Models::ListInterveneCntRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得干预项目数量列表
       *
       * @param request ListInterveneCntRequest
       * @return ListInterveneCntResponse
       */
      Models::ListInterveneCntResponse listInterveneCnt(const Models::ListInterveneCntRequest &request);

      /**
       * @summary 获得导入任务列表
       *
       * @param request ListInterveneImportTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterveneImportTasksResponse
       */
      Models::ListInterveneImportTasksResponse listInterveneImportTasksWithOptions(const Models::ListInterveneImportTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得导入任务列表
       *
       * @param request ListInterveneImportTasksRequest
       * @return ListInterveneImportTasksResponse
       */
      Models::ListInterveneImportTasksResponse listInterveneImportTasks(const Models::ListInterveneImportTasksRequest &request);

      /**
       * @summary 获得干预规则列表
       *
       * @param request ListInterveneRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInterveneRulesResponse
       */
      Models::ListInterveneRulesResponse listInterveneRulesWithOptions(const Models::ListInterveneRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得干预规则列表
       *
       * @param request ListInterveneRulesRequest
       * @return ListInterveneRulesResponse
       */
      Models::ListInterveneRulesResponse listInterveneRules(const Models::ListInterveneRulesRequest &request);

      /**
       * @summary 获得干预项列表
       *
       * @param request ListIntervenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIntervenesResponse
       */
      Models::ListIntervenesResponse listIntervenesWithOptions(const Models::ListIntervenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获得干预项列表
       *
       * @param request ListIntervenesRequest
       * @return ListIntervenesResponse
       */
      Models::ListIntervenesResponse listIntervenes(const Models::ListIntervenesRequest &request);

      /**
       * @summary 查询素材列表
       *
       * @param tmpReq ListMaterialDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMaterialDocumentsResponse
       */
      Models::ListMaterialDocumentsResponse listMaterialDocumentsWithOptions(const Models::ListMaterialDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询素材列表
       *
       * @param request ListMaterialDocumentsRequest
       * @return ListMaterialDocumentsResponse
       */
      Models::ListMaterialDocumentsResponse listMaterialDocuments(const Models::ListMaterialDocumentsRequest &request);

      /**
       * @summary 获取选题策划列表
       *
       * @param tmpReq ListPlanningProposalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPlanningProposalResponse
       */
      Models::ListPlanningProposalResponse listPlanningProposalWithOptions(const Models::ListPlanningProposalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取选题策划列表
       *
       * @param request ListPlanningProposalRequest
       * @return ListPlanningProposalResponse
       */
      Models::ListPlanningProposalResponse listPlanningProposal(const Models::ListPlanningProposalRequest &request);

      /**
       * @summary 查询搜索生成任务对话详情中数据列表
       *
       * @param request ListSearchTaskDialogueDatasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchTaskDialogueDatasResponse
       */
      Models::ListSearchTaskDialogueDatasResponse listSearchTaskDialogueDatasWithOptions(const Models::ListSearchTaskDialogueDatasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询搜索生成任务对话详情中数据列表
       *
       * @param request ListSearchTaskDialogueDatasRequest
       * @return ListSearchTaskDialogueDatasResponse
       */
      Models::ListSearchTaskDialogueDatasResponse listSearchTaskDialogueDatas(const Models::ListSearchTaskDialogueDatasRequest &request);

      /**
       * @summary 查询妙搜搜索生成任务详情列表
       *
       * @param request ListSearchTaskDialoguesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchTaskDialoguesResponse
       */
      Models::ListSearchTaskDialoguesResponse listSearchTaskDialoguesWithOptions(const Models::ListSearchTaskDialoguesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询妙搜搜索生成任务详情列表
       *
       * @param request ListSearchTaskDialoguesRequest
       * @return ListSearchTaskDialoguesResponse
       */
      Models::ListSearchTaskDialoguesResponse listSearchTaskDialogues(const Models::ListSearchTaskDialoguesRequest &request);

      /**
       * @summary 查询妙搜搜索生成历史任务列表
       *
       * @param tmpReq ListSearchTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSearchTasksResponse
       */
      Models::ListSearchTasksResponse listSearchTasksWithOptions(const Models::ListSearchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询妙搜搜索生成历史任务列表
       *
       * @param request ListSearchTasksRequest
       * @return ListSearchTasksResponse
       */
      Models::ListSearchTasksResponse listSearchTasks(const Models::ListSearchTasksRequest &request);

      /**
       * @summary 获取文体学习分析结果列表
       *
       * @param request ListStyleLearningResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListStyleLearningResultResponse
       */
      Models::ListStyleLearningResultResponse listStyleLearningResultWithOptions(const Models::ListStyleLearningResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文体学习分析结果列表
       *
       * @param request ListStyleLearningResultRequest
       * @return ListStyleLearningResultResponse
       */
      Models::ListStyleLearningResultResponse listStyleLearningResult(const Models::ListStyleLearningResultRequest &request);

      /**
       * @summary 时效性视角列表
       *
       * @param request ListTimedViewAttitudeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTimedViewAttitudeResponse
       */
      Models::ListTimedViewAttitudeResponse listTimedViewAttitudeWithOptions(const Models::ListTimedViewAttitudeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 时效性视角列表
       *
       * @param request ListTimedViewAttitudeRequest
       * @return ListTimedViewAttitudeResponse
       */
      Models::ListTimedViewAttitudeResponse listTimedViewAttitude(const Models::ListTimedViewAttitudeRequest &request);

      /**
       * @summary 获取热点推荐事件
       *
       * @param request ListTopicRecommendEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicRecommendEventListResponse
       */
      Models::ListTopicRecommendEventListResponse listTopicRecommendEventListWithOptions(const Models::ListTopicRecommendEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取热点推荐事件
       *
       * @param request ListTopicRecommendEventListRequest
       * @return ListTopicRecommendEventListResponse
       */
      Models::ListTopicRecommendEventListResponse listTopicRecommendEventList(const Models::ListTopicRecommendEventListRequest &request);

      /**
       * @summary 获取主题事件推荐观点列表
       *
       * @param request ListTopicViewPointRecommendEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTopicViewPointRecommendEventListResponse
       */
      Models::ListTopicViewPointRecommendEventListResponse listTopicViewPointRecommendEventListWithOptions(const Models::ListTopicViewPointRecommendEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取主题事件推荐观点列表
       *
       * @param request ListTopicViewPointRecommendEventListRequest
       * @return ListTopicViewPointRecommendEventListResponse
       */
      Models::ListTopicViewPointRecommendEventListResponse listTopicViewPointRecommendEventList(const Models::ListTopicViewPointRecommendEventListRequest &request);

      /**
       * @summary 获取系统所有实例信息
       *
       * @param request ListVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVersionsResponse
       */
      Models::ListVersionsResponse listVersionsWithOptions(const Models::ListVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取系统所有实例信息
       *
       * @param request ListVersionsRequest
       * @return ListVersionsResponse
       */
      Models::ListVersionsResponse listVersions(const Models::ListVersionsRequest &request);

      /**
       * @summary 网友视角列表
       *
       * @param request ListWebReviewPointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWebReviewPointsResponse
       */
      Models::ListWebReviewPointsResponse listWebReviewPointsWithOptions(const Models::ListWebReviewPointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 网友视角列表
       *
       * @param request ListWebReviewPointsRequest
       * @return ListWebReviewPointsResponse
       */
      Models::ListWebReviewPointsResponse listWebReviewPoints(const Models::ListWebReviewPointsRequest &request);

      /**
       * @summary 获取文体列表
       *
       * @param request ListWritingStylesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWritingStylesResponse
       */
      Models::ListWritingStylesResponse listWritingStylesWithOptions(const Models::ListWritingStylesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文体列表
       *
       * @param request ListWritingStylesRequest
       * @return ListWritingStylesResponse
       */
      Models::ListWritingStylesResponse listWritingStyles(const Models::ListWritingStylesRequest &request);

      /**
       * @summary 根据taskId查询异步任务状态
       *
       * @param request QueryAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAsyncTaskResponse
       */
      Models::QueryAsyncTaskResponse queryAsyncTaskWithOptions(const Models::QueryAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据taskId查询异步任务状态
       *
       * @param request QueryAsyncTaskRequest
       * @return QueryAsyncTaskResponse
       */
      Models::QueryAsyncTaskResponse queryAsyncTask(const Models::QueryAsyncTaskRequest &request);

      /**
       * @summary 查询审核结果
       *
       * @param request QueryAuditTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAuditTaskResponse
       */
      Models::QueryAuditTaskResponse queryAuditTaskWithOptions(const Models::QueryAuditTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审核结果
       *
       * @param request QueryAuditTaskRequest
       * @return QueryAuditTaskResponse
       */
      Models::QueryAuditTaskResponse queryAuditTask(const Models::QueryAuditTaskRequest &request);

      /**
       * @summary 内容缩写
       *
       * @param request RunAbbreviationContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAbbreviationContentResponse
       */
      FutrueGenerator<Models::RunAbbreviationContentResponse> runAbbreviationContentWithSSE(const Models::RunAbbreviationContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 内容缩写
       *
       * @param request RunAbbreviationContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAbbreviationContentResponse
       */
      Models::RunAbbreviationContentResponse runAbbreviationContentWithOptions(const Models::RunAbbreviationContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 内容缩写
       *
       * @param request RunAbbreviationContentRequest
       * @return RunAbbreviationContentResponse
       */
      Models::RunAbbreviationContentResponse runAbbreviationContent(const Models::RunAbbreviationContentRequest &request);

      /**
       * @summary 妙读生成书籍脑图
       *
       * @param request RunBookBrainmapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookBrainmapResponse
       */
      FutrueGenerator<Models::RunBookBrainmapResponse> runBookBrainmapWithSSE(const Models::RunBookBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读生成书籍脑图
       *
       * @param request RunBookBrainmapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookBrainmapResponse
       */
      Models::RunBookBrainmapResponse runBookBrainmapWithOptions(const Models::RunBookBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读生成书籍脑图
       *
       * @param request RunBookBrainmapRequest
       * @return RunBookBrainmapResponse
       */
      Models::RunBookBrainmapResponse runBookBrainmap(const Models::RunBookBrainmapRequest &request);

      /**
       * @summary 书籍导读接口
       *
       * @param request RunBookIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookIntroductionResponse
       */
      FutrueGenerator<Models::RunBookIntroductionResponse> runBookIntroductionWithSSE(const Models::RunBookIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 书籍导读接口
       *
       * @param request RunBookIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookIntroductionResponse
       */
      Models::RunBookIntroductionResponse runBookIntroductionWithOptions(const Models::RunBookIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 书籍导读接口
       *
       * @param request RunBookIntroductionRequest
       * @return RunBookIntroductionResponse
       */
      Models::RunBookIntroductionResponse runBookIntroduction(const Models::RunBookIntroductionRequest &request);

      /**
       * @summary 书籍智能卡片接口
       *
       * @param request RunBookSmartCardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookSmartCardResponse
       */
      FutrueGenerator<Models::RunBookSmartCardResponse> runBookSmartCardWithSSE(const Models::RunBookSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 书籍智能卡片接口
       *
       * @param request RunBookSmartCardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunBookSmartCardResponse
       */
      Models::RunBookSmartCardResponse runBookSmartCardWithOptions(const Models::RunBookSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 书籍智能卡片接口
       *
       * @param request RunBookSmartCardRequest
       * @return RunBookSmartCardResponse
       */
      Models::RunBookSmartCardResponse runBookSmartCard(const Models::RunBookSmartCardRequest &request);

      /**
       * @summary 客户之声预测
       *
       * @param tmpReq RunCommentGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommentGenerationResponse
       */
      FutrueGenerator<Models::RunCommentGenerationResponse> runCommentGenerationWithSSE(const Models::RunCommentGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户之声预测
       *
       * @param tmpReq RunCommentGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommentGenerationResponse
       */
      Models::RunCommentGenerationResponse runCommentGenerationWithOptions(const Models::RunCommentGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户之声预测
       *
       * @param request RunCommentGenerationRequest
       * @return RunCommentGenerationResponse
       */
      Models::RunCommentGenerationResponse runCommentGeneration(const Models::RunCommentGenerationRequest &request);

      /**
       * @summary 内容续写
       *
       * @param request RunContinueContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunContinueContentResponse
       */
      FutrueGenerator<Models::RunContinueContentResponse> runContinueContentWithSSE(const Models::RunContinueContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 内容续写
       *
       * @param request RunContinueContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunContinueContentResponse
       */
      Models::RunContinueContentResponse runContinueContentWithOptions(const Models::RunContinueContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 内容续写
       *
       * @param request RunContinueContentRequest
       * @return RunContinueContentResponse
       */
      Models::RunContinueContentResponse runContinueContent(const Models::RunContinueContentRequest &request);

      /**
       * @summary 自定义热点话题分析
       *
       * @param request RunCustomHotTopicAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCustomHotTopicAnalysisResponse
       */
      FutrueGenerator<Models::RunCustomHotTopicAnalysisResponse> runCustomHotTopicAnalysisWithSSE(const Models::RunCustomHotTopicAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 自定义热点话题分析
       *
       * @param request RunCustomHotTopicAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCustomHotTopicAnalysisResponse
       */
      Models::RunCustomHotTopicAnalysisResponse runCustomHotTopicAnalysisWithOptions(const Models::RunCustomHotTopicAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 自定义热点话题分析
       *
       * @param request RunCustomHotTopicAnalysisRequest
       * @return RunCustomHotTopicAnalysisResponse
       */
      Models::RunCustomHotTopicAnalysisResponse runCustomHotTopicAnalysis(const Models::RunCustomHotTopicAnalysisRequest &request);

      /**
       * @summary 自定义选题视角分析
       *
       * @param request RunCustomHotTopicViewPointAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCustomHotTopicViewPointAnalysisResponse
       */
      FutrueGenerator<Models::RunCustomHotTopicViewPointAnalysisResponse> runCustomHotTopicViewPointAnalysisWithSSE(const Models::RunCustomHotTopicViewPointAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 自定义选题视角分析
       *
       * @param request RunCustomHotTopicViewPointAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCustomHotTopicViewPointAnalysisResponse
       */
      Models::RunCustomHotTopicViewPointAnalysisResponse runCustomHotTopicViewPointAnalysisWithOptions(const Models::RunCustomHotTopicViewPointAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 自定义选题视角分析
       *
       * @param request RunCustomHotTopicViewPointAnalysisRequest
       * @return RunCustomHotTopicViewPointAnalysisResponse
       */
      Models::RunCustomHotTopicViewPointAnalysisResponse runCustomHotTopicViewPointAnalysis(const Models::RunCustomHotTopicViewPointAnalysisRequest &request);

      /**
       * @summary 流式输出深度写作事件
       *
       * @param request RunDeepWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDeepWritingResponse
       */
      FutrueGenerator<Models::RunDeepWritingResponse> runDeepWritingWithSSE(const Models::RunDeepWritingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 流式输出深度写作事件
       *
       * @param request RunDeepWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDeepWritingResponse
       */
      Models::RunDeepWritingResponse runDeepWritingWithOptions(const Models::RunDeepWritingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 流式输出深度写作事件
       *
       * @param request RunDeepWritingRequest
       * @return RunDeepWritingResponse
       */
      Models::RunDeepWritingResponse runDeepWriting(const Models::RunDeepWritingRequest &request);

      /**
       * @summary 妙读脑图生成接口
       *
       * @param request RunDocBrainmapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocBrainmapResponse
       */
      FutrueGenerator<Models::RunDocBrainmapResponse> runDocBrainmapWithSSE(const Models::RunDocBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读脑图生成接口
       *
       * @param request RunDocBrainmapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocBrainmapResponse
       */
      Models::RunDocBrainmapResponse runDocBrainmapWithOptions(const Models::RunDocBrainmapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读脑图生成接口
       *
       * @param request RunDocBrainmapRequest
       * @return RunDocBrainmapResponse
       */
      Models::RunDocBrainmapResponse runDocBrainmap(const Models::RunDocBrainmapRequest &request);

      /**
       * @summary 妙读文档导读接口
       *
       * @param request RunDocIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocIntroductionResponse
       */
      FutrueGenerator<Models::RunDocIntroductionResponse> runDocIntroductionWithSSE(const Models::RunDocIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读文档导读接口
       *
       * @param request RunDocIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocIntroductionResponse
       */
      Models::RunDocIntroductionResponse runDocIntroductionWithOptions(const Models::RunDocIntroductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读文档导读接口
       *
       * @param request RunDocIntroductionRequest
       * @return RunDocIntroductionResponse
       */
      Models::RunDocIntroductionResponse runDocIntroduction(const Models::RunDocIntroductionRequest &request);

      /**
       * @summary 妙读问答接口
       *
       * @param tmpReq RunDocQaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocQaResponse
       */
      FutrueGenerator<Models::RunDocQaResponse> runDocQaWithSSE(const Models::RunDocQaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读问答接口
       *
       * @param tmpReq RunDocQaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocQaResponse
       */
      Models::RunDocQaResponse runDocQaWithOptions(const Models::RunDocQaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读问答接口
       *
       * @param request RunDocQaRequest
       * @return RunDocQaResponse
       */
      Models::RunDocQaResponse runDocQa(const Models::RunDocQaRequest &request);

      /**
       * @summary 文档智能卡片接口
       *
       * @param request RunDocSmartCardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocSmartCardResponse
       */
      FutrueGenerator<Models::RunDocSmartCardResponse> runDocSmartCardWithSSE(const Models::RunDocSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档智能卡片接口
       *
       * @param request RunDocSmartCardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocSmartCardResponse
       */
      Models::RunDocSmartCardResponse runDocSmartCardWithOptions(const Models::RunDocSmartCardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档智能卡片接口
       *
       * @param request RunDocSmartCardRequest
       * @return RunDocSmartCardResponse
       */
      Models::RunDocSmartCardResponse runDocSmartCard(const Models::RunDocSmartCardRequest &request);

      /**
       * @summary 妙读文档总结摘要接口
       *
       * @param request RunDocSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocSummaryResponse
       */
      FutrueGenerator<Models::RunDocSummaryResponse> runDocSummaryWithSSE(const Models::RunDocSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读文档总结摘要接口
       *
       * @param request RunDocSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocSummaryResponse
       */
      Models::RunDocSummaryResponse runDocSummaryWithOptions(const Models::RunDocSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读文档总结摘要接口
       *
       * @param request RunDocSummaryRequest
       * @return RunDocSummaryResponse
       */
      Models::RunDocSummaryResponse runDocSummary(const Models::RunDocSummaryRequest &request);

      /**
       * @summary 妙读文档翻译接口
       *
       * @param request RunDocTranslationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocTranslationResponse
       */
      FutrueGenerator<Models::RunDocTranslationResponse> runDocTranslationWithSSE(const Models::RunDocTranslationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读文档翻译接口
       *
       * @param request RunDocTranslationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocTranslationResponse
       */
      Models::RunDocTranslationResponse runDocTranslationWithOptions(const Models::RunDocTranslationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读文档翻译接口
       *
       * @param request RunDocTranslationRequest
       * @return RunDocTranslationResponse
       */
      Models::RunDocTranslationResponse runDocTranslation(const Models::RunDocTranslationRequest &request);

      /**
       * @summary 文档改写
       *
       * @param request RunDocWashingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocWashingResponse
       */
      FutrueGenerator<Models::RunDocWashingResponse> runDocWashingWithSSE(const Models::RunDocWashingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档改写
       *
       * @param request RunDocWashingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDocWashingResponse
       */
      Models::RunDocWashingResponse runDocWashingWithOptions(const Models::RunDocWashingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档改写
       *
       * @param request RunDocWashingRequest
       * @return RunDocWashingResponse
       */
      Models::RunDocWashingResponse runDocWashing(const Models::RunDocWashingRequest &request);

      /**
       * @summary 内容扩写
       *
       * @param request RunExpandContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunExpandContentResponse
       */
      FutrueGenerator<Models::RunExpandContentResponse> runExpandContentWithSSE(const Models::RunExpandContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 内容扩写
       *
       * @param request RunExpandContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunExpandContentResponse
       */
      Models::RunExpandContentResponse runExpandContentWithOptions(const Models::RunExpandContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 内容扩写
       *
       * @param request RunExpandContentRequest
       * @return RunExpandContentResponse
       */
      Models::RunExpandContentResponse runExpandContent(const Models::RunExpandContentRequest &request);

      /**
       * @summary 妙读猜你想问接口
       *
       * @param request RunGenerateQuestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunGenerateQuestionsResponse
       */
      FutrueGenerator<Models::RunGenerateQuestionsResponse> runGenerateQuestionsWithSSE(const Models::RunGenerateQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读猜你想问接口
       *
       * @param request RunGenerateQuestionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunGenerateQuestionsResponse
       */
      Models::RunGenerateQuestionsResponse runGenerateQuestionsWithOptions(const Models::RunGenerateQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读猜你想问接口
       *
       * @param request RunGenerateQuestionsRequest
       * @return RunGenerateQuestionsResponse
       */
      Models::RunGenerateQuestionsResponse runGenerateQuestions(const Models::RunGenerateQuestionsRequest &request);

      /**
       * @summary 妙读文档关键词抽取接口
       *
       * @param request RunHotwordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunHotwordResponse
       */
      FutrueGenerator<Models::RunHotwordResponse> runHotwordWithSSE(const Models::RunHotwordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读文档关键词抽取接口
       *
       * @param request RunHotwordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunHotwordResponse
       */
      Models::RunHotwordResponse runHotwordWithOptions(const Models::RunHotwordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读文档关键词抽取接口
       *
       * @param request RunHotwordRequest
       * @return RunHotwordResponse
       */
      Models::RunHotwordResponse runHotword(const Models::RunHotwordRequest &request);

      /**
       * @summary AI妙笔-创作-抽取关键词
       *
       * @param tmpReq RunKeywordsExtractionGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunKeywordsExtractionGenerationResponse
       */
      FutrueGenerator<Models::RunKeywordsExtractionGenerationResponse> runKeywordsExtractionGenerationWithSSE(const Models::RunKeywordsExtractionGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI妙笔-创作-抽取关键词
       *
       * @param tmpReq RunKeywordsExtractionGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunKeywordsExtractionGenerationResponse
       */
      Models::RunKeywordsExtractionGenerationResponse runKeywordsExtractionGenerationWithOptions(const Models::RunKeywordsExtractionGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI妙笔-创作-抽取关键词
       *
       * @param request RunKeywordsExtractionGenerationRequest
       * @return RunKeywordsExtractionGenerationResponse
       */
      Models::RunKeywordsExtractionGenerationResponse runKeywordsExtractionGeneration(const Models::RunKeywordsExtractionGenerationRequest &request);

      /**
       * @summary 文档批量导读
       *
       * @param tmpReq RunMultiDocIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunMultiDocIntroductionResponse
       */
      FutrueGenerator<Models::RunMultiDocIntroductionResponse> runMultiDocIntroductionWithSSE(const Models::RunMultiDocIntroductionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档批量导读
       *
       * @param tmpReq RunMultiDocIntroductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunMultiDocIntroductionResponse
       */
      Models::RunMultiDocIntroductionResponse runMultiDocIntroductionWithOptions(const Models::RunMultiDocIntroductionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档批量导读
       *
       * @param request RunMultiDocIntroductionRequest
       * @return RunMultiDocIntroductionResponse
       */
      Models::RunMultiDocIntroductionResponse runMultiDocIntroduction(const Models::RunMultiDocIntroductionRequest &request);

      /**
       * @summary 快速写作
       *
       * @param tmpReq RunQuickWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunQuickWritingResponse
       */
      FutrueGenerator<Models::RunQuickWritingResponse> runQuickWritingWithSSE(const Models::RunQuickWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 快速写作
       *
       * @param tmpReq RunQuickWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunQuickWritingResponse
       */
      Models::RunQuickWritingResponse runQuickWritingWithOptions(const Models::RunQuickWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 快速写作
       *
       * @param request RunQuickWritingRequest
       * @return RunQuickWritingResponse
       */
      Models::RunQuickWritingResponse runQuickWriting(const Models::RunQuickWritingRequest &request);

      /**
       * @summary AI妙搜-智能搜索生成
       *
       * @param tmpReq RunSearchGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSearchGenerationResponse
       */
      FutrueGenerator<Models::RunSearchGenerationResponse> runSearchGenerationWithSSE(const Models::RunSearchGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI妙搜-智能搜索生成
       *
       * @param tmpReq RunSearchGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSearchGenerationResponse
       */
      Models::RunSearchGenerationResponse runSearchGenerationWithOptions(const Models::RunSearchGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI妙搜-智能搜索生成
       *
       * @param request RunSearchGenerationRequest
       * @return RunSearchGenerationResponse
       */
      Models::RunSearchGenerationResponse runSearchGeneration(const Models::RunSearchGenerationRequest &request);

      /**
       * @summary 妙搜-文搜文
       *
       * @param tmpReq RunSearchSimilarArticlesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSearchSimilarArticlesResponse
       */
      FutrueGenerator<Models::RunSearchSimilarArticlesResponse> runSearchSimilarArticlesWithSSE(const Models::RunSearchSimilarArticlesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙搜-文搜文
       *
       * @param tmpReq RunSearchSimilarArticlesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSearchSimilarArticlesResponse
       */
      Models::RunSearchSimilarArticlesResponse runSearchSimilarArticlesWithOptions(const Models::RunSearchSimilarArticlesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙搜-文搜文
       *
       * @param request RunSearchSimilarArticlesRequest
       * @return RunSearchSimilarArticlesResponse
       */
      Models::RunSearchSimilarArticlesResponse runSearchSimilarArticles(const Models::RunSearchSimilarArticlesRequest &request);

      /**
       * @summary 创作-分步骤写作
       *
       * @param tmpReq RunStepByStepWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunStepByStepWritingResponse
       */
      FutrueGenerator<Models::RunStepByStepWritingResponse> runStepByStepWritingWithSSE(const Models::RunStepByStepWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创作-分步骤写作
       *
       * @param tmpReq RunStepByStepWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunStepByStepWritingResponse
       */
      Models::RunStepByStepWritingResponse runStepByStepWritingWithOptions(const Models::RunStepByStepWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创作-分步骤写作
       *
       * @param request RunStepByStepWritingRequest
       * @return RunStepByStepWritingResponse
       */
      Models::RunStepByStepWritingResponse runStepByStepWriting(const Models::RunStepByStepWritingRequest &request);

      /**
       * @summary 内容特点分析
       *
       * @param tmpReq RunStyleFeatureAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunStyleFeatureAnalysisResponse
       */
      FutrueGenerator<Models::RunStyleFeatureAnalysisResponse> runStyleFeatureAnalysisWithSSE(const Models::RunStyleFeatureAnalysisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 内容特点分析
       *
       * @param tmpReq RunStyleFeatureAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunStyleFeatureAnalysisResponse
       */
      Models::RunStyleFeatureAnalysisResponse runStyleFeatureAnalysisWithOptions(const Models::RunStyleFeatureAnalysisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 内容特点分析
       *
       * @param request RunStyleFeatureAnalysisRequest
       * @return RunStyleFeatureAnalysisResponse
       */
      Models::RunStyleFeatureAnalysisResponse runStyleFeatureAnalysis(const Models::RunStyleFeatureAnalysisRequest &request);

      /**
       * @summary 内容摘要生成
       *
       * @param request RunSummaryGenerateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSummaryGenerateResponse
       */
      FutrueGenerator<Models::RunSummaryGenerateResponse> runSummaryGenerateWithSSE(const Models::RunSummaryGenerateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 内容摘要生成
       *
       * @param request RunSummaryGenerateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSummaryGenerateResponse
       */
      Models::RunSummaryGenerateResponse runSummaryGenerateWithOptions(const Models::RunSummaryGenerateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 内容摘要生成
       *
       * @param request RunSummaryGenerateRequest
       * @return RunSummaryGenerateResponse
       */
      Models::RunSummaryGenerateResponse runSummaryGenerate(const Models::RunSummaryGenerateRequest &request);

      /**
       * @summary 创作-文本润色
       *
       * @param request RunTextPolishingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTextPolishingResponse
       */
      FutrueGenerator<Models::RunTextPolishingResponse> runTextPolishingWithSSE(const Models::RunTextPolishingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创作-文本润色
       *
       * @param request RunTextPolishingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTextPolishingResponse
       */
      Models::RunTextPolishingResponse runTextPolishingWithOptions(const Models::RunTextPolishingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创作-文本润色
       *
       * @param request RunTextPolishingRequest
       * @return RunTextPolishingResponse
       */
      Models::RunTextPolishingResponse runTextPolishing(const Models::RunTextPolishingRequest &request);

      /**
       * @summary 妙笔：标题生成
       *
       * @param tmpReq RunTitleGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTitleGenerationResponse
       */
      FutrueGenerator<Models::RunTitleGenerationResponse> runTitleGenerationWithSSE(const Models::RunTitleGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙笔：标题生成
       *
       * @param tmpReq RunTitleGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTitleGenerationResponse
       */
      Models::RunTitleGenerationResponse runTitleGenerationWithOptions(const Models::RunTitleGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙笔：标题生成
       *
       * @param request RunTitleGenerationRequest
       * @return RunTitleGenerationResponse
       */
      Models::RunTitleGenerationResponse runTitleGeneration(const Models::RunTitleGenerationRequest &request);

      /**
       * @summary 妙策选题策划聚合
       *
       * @param tmpReq RunTopicSelectionMergeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTopicSelectionMergeResponse
       */
      FutrueGenerator<Models::RunTopicSelectionMergeResponse> runTopicSelectionMergeWithSSE(const Models::RunTopicSelectionMergeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙策选题策划聚合
       *
       * @param tmpReq RunTopicSelectionMergeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTopicSelectionMergeResponse
       */
      Models::RunTopicSelectionMergeResponse runTopicSelectionMergeWithOptions(const Models::RunTopicSelectionMergeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙策选题策划聚合
       *
       * @param request RunTopicSelectionMergeRequest
       * @return RunTopicSelectionMergeResponse
       */
      Models::RunTopicSelectionMergeResponse runTopicSelectionMerge(const Models::RunTopicSelectionMergeRequest &request);

      /**
       * @summary AI妙笔-创作-中英文翻译
       *
       * @param tmpReq RunTranslateGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTranslateGenerationResponse
       */
      FutrueGenerator<Models::RunTranslateGenerationResponse> runTranslateGenerationWithSSE(const Models::RunTranslateGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI妙笔-创作-中英文翻译
       *
       * @param tmpReq RunTranslateGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunTranslateGenerationResponse
       */
      Models::RunTranslateGenerationResponse runTranslateGenerationWithOptions(const Models::RunTranslateGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI妙笔-创作-中英文翻译
       *
       * @param request RunTranslateGenerationRequest
       * @return RunTranslateGenerationResponse
       */
      Models::RunTranslateGenerationResponse runTranslateGeneration(const Models::RunTranslateGenerationRequest &request);

      /**
       * @summary AI生成视频剪辑脚本
       *
       * @param request RunVideoScriptGenerateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunVideoScriptGenerateResponse
       */
      FutrueGenerator<Models::RunVideoScriptGenerateResponse> runVideoScriptGenerateWithSSE(const Models::RunVideoScriptGenerateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI生成视频剪辑脚本
       *
       * @param request RunVideoScriptGenerateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunVideoScriptGenerateResponse
       */
      Models::RunVideoScriptGenerateResponse runVideoScriptGenerateWithOptions(const Models::RunVideoScriptGenerateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI生成视频剪辑脚本
       *
       * @param request RunVideoScriptGenerateRequest
       * @return RunVideoScriptGenerateResponse
       */
      Models::RunVideoScriptGenerateResponse runVideoScriptGenerate(const Models::RunVideoScriptGenerateRequest &request);

      /**
       * @summary AI妙笔-创作-文风改写
       *
       * @param tmpReq RunWriteToneGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWriteToneGenerationResponse
       */
      FutrueGenerator<Models::RunWriteToneGenerationResponse> runWriteToneGenerationWithSSE(const Models::RunWriteToneGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI妙笔-创作-文风改写
       *
       * @param tmpReq RunWriteToneGenerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWriteToneGenerationResponse
       */
      Models::RunWriteToneGenerationResponse runWriteToneGenerationWithOptions(const Models::RunWriteToneGenerationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI妙笔-创作-文风改写
       *
       * @param request RunWriteToneGenerationRequest
       * @return RunWriteToneGenerationResponse
       */
      Models::RunWriteToneGenerationResponse runWriteToneGeneration(const Models::RunWriteToneGenerationRequest &request);

      /**
       * @summary 直接写作
       *
       * @param tmpReq RunWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWritingResponse
       */
      FutrueGenerator<Models::RunWritingResponse> runWritingWithSSE(const Models::RunWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 直接写作
       *
       * @param tmpReq RunWritingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWritingResponse
       */
      Models::RunWritingResponse runWritingWithOptions(const Models::RunWritingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 直接写作
       *
       * @param request RunWritingRequest
       * @return RunWritingResponse
       */
      Models::RunWritingResponse runWriting(const Models::RunWritingRequest &request);

      /**
       * @summary 直接写作
       *
       * @param tmpReq RunWritingV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWritingV2Response
       */
      FutrueGenerator<Models::RunWritingV2Response> runWritingV2WithSSE(const Models::RunWritingV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 直接写作
       *
       * @param tmpReq RunWritingV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunWritingV2Response
       */
      Models::RunWritingV2Response runWritingV2WithOptions(const Models::RunWritingV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 直接写作
       *
       * @param request RunWritingV2Request
       * @return RunWritingV2Response
       */
      Models::RunWritingV2Response runWritingV2(const Models::RunWritingV2Request &request);

      /**
       * @summary 保存自定义文本
       *
       * @param request SaveCustomTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveCustomTextResponse
       */
      Models::SaveCustomTextResponse saveCustomTextWithOptions(const Models::SaveCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存自定义文本
       *
       * @param request SaveCustomTextRequest
       * @return SaveCustomTextResponse
       */
      Models::SaveCustomTextResponse saveCustomText(const Models::SaveCustomTextRequest &request);

      /**
       * @summary 保存用户的信源配置
       *
       * @param tmpReq SaveDataSourceOrderConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveDataSourceOrderConfigResponse
       */
      Models::SaveDataSourceOrderConfigResponse saveDataSourceOrderConfigWithOptions(const Models::SaveDataSourceOrderConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存用户的信源配置
       *
       * @param request SaveDataSourceOrderConfigRequest
       * @return SaveDataSourceOrderConfigResponse
       */
      Models::SaveDataSourceOrderConfigResponse saveDataSourceOrderConfig(const Models::SaveDataSourceOrderConfigRequest &request);

      /**
       * @summary 保存素材
       *
       * @param tmpReq SaveMaterialDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveMaterialDocumentResponse
       */
      Models::SaveMaterialDocumentResponse saveMaterialDocumentWithOptions(const Models::SaveMaterialDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存素材
       *
       * @param request SaveMaterialDocumentRequest
       * @return SaveMaterialDocumentResponse
       */
      Models::SaveMaterialDocumentResponse saveMaterialDocument(const Models::SaveMaterialDocumentRequest &request);

      /**
       * @summary 保存自定义文体
       *
       * @param tmpReq SaveStyleLearningResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveStyleLearningResultResponse
       */
      Models::SaveStyleLearningResultResponse saveStyleLearningResultWithOptions(const Models::SaveStyleLearningResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存自定义文体
       *
       * @param request SaveStyleLearningResultRequest
       * @return SaveStyleLearningResultResponse
       */
      Models::SaveStyleLearningResultResponse saveStyleLearningResult(const Models::SaveStyleLearningResultRequest &request);

      /**
       * @summary 搜索数据集文档
       *
       * @param request SearchDatasetDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchDatasetDocumentsResponse
       */
      Models::SearchDatasetDocumentsResponse searchDatasetDocumentsWithOptions(const Models::SearchDatasetDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索数据集文档
       *
       * @param request SearchDatasetDocumentsRequest
       * @return SearchDatasetDocumentsResponse
       */
      Models::SearchDatasetDocumentsResponse searchDatasetDocuments(const Models::SearchDatasetDocumentsRequest &request);

      /**
       * @summary 新闻检索
       *
       * @param tmpReq SearchNewsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchNewsResponse
       */
      Models::SearchNewsResponse searchNewsWithOptions(const Models::SearchNewsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新闻检索
       *
       * @param request SearchNewsRequest
       * @return SearchNewsResponse
       */
      Models::SearchNewsResponse searchNews(const Models::SearchNewsRequest &request);

      /**
       * @summary 提交异步任务
       *
       * @param request SubmitAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAsyncTaskResponse
       */
      Models::SubmitAsyncTaskResponse submitAsyncTaskWithOptions(const Models::SubmitAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交异步任务
       *
       * @param request SubmitAsyncTaskRequest
       * @return SubmitAsyncTaskResponse
       */
      Models::SubmitAsyncTaskResponse submitAsyncTask(const Models::SubmitAsyncTaskRequest &request);

      /**
       * @summary 妙笔为您提供了与公有云“智能审校”模块中相同的上传自定义规则库的功能。由于鉴权限制，用户需要开通阿里云 OSS 服务后，将自定义规则库文件上传到 OSS 中，再使用该文件的 fileKey 作为入参才能顺利调用本接口。该接口在被调用后，会对用户的自定义规则库进行结构化处理，并生成一个 xlsx 格式的结构化解析结果。您可以调用 GetAuditNoteProcessingStatus 接口查询结构化处理状态，也可以调用 DownloadAuditNote 接口获取结构化之后的规则库。接口功能正在迭代中，预计会在未来使用可访问的文件 URL 作为入参。
       *
       * @param request SubmitAuditNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAuditNoteResponse
       */
      Models::SubmitAuditNoteResponse submitAuditNoteWithOptions(const Models::SubmitAuditNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙笔为您提供了与公有云“智能审校”模块中相同的上传自定义规则库的功能。由于鉴权限制，用户需要开通阿里云 OSS 服务后，将自定义规则库文件上传到 OSS 中，再使用该文件的 fileKey 作为入参才能顺利调用本接口。该接口在被调用后，会对用户的自定义规则库进行结构化处理，并生成一个 xlsx 格式的结构化解析结果。您可以调用 GetAuditNoteProcessingStatus 接口查询结构化处理状态，也可以调用 DownloadAuditNote 接口获取结构化之后的规则库。接口功能正在迭代中，预计会在未来使用可访问的文件 URL 作为入参。
       *
       * @param request SubmitAuditNoteRequest
       * @return SubmitAuditNoteResponse
       */
      Models::SubmitAuditNoteResponse submitAuditNote(const Models::SubmitAuditNoteRequest &request);

      /**
       * @summary 提交审核任务
       *
       * @param request SubmitAuditTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAuditTaskResponse
       */
      Models::SubmitAuditTaskResponse submitAuditTaskWithOptions(const Models::SubmitAuditTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交审核任务
       *
       * @param request SubmitAuditTaskRequest
       * @return SubmitAuditTaskResponse
       */
      Models::SubmitAuditTaskResponse submitAuditTask(const Models::SubmitAuditTaskRequest &request);

      /**
       * @summary 提交自定义播报单任务
       *
       * @param tmpReq SubmitCustomHotTopicBroadcastJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCustomHotTopicBroadcastJobResponse
       */
      Models::SubmitCustomHotTopicBroadcastJobResponse submitCustomHotTopicBroadcastJobWithOptions(const Models::SubmitCustomHotTopicBroadcastJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交自定义播报单任务
       *
       * @param request SubmitCustomHotTopicBroadcastJobRequest
       * @return SubmitCustomHotTopicBroadcastJobResponse
       */
      Models::SubmitCustomHotTopicBroadcastJobResponse submitCustomHotTopicBroadcastJob(const Models::SubmitCustomHotTopicBroadcastJobRequest &request);

      /**
       * @summary 从自定义数据源提交选题热点分析
       *
       * @param tmpReq SubmitCustomSourceTopicAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCustomSourceTopicAnalysisResponse
       */
      Models::SubmitCustomSourceTopicAnalysisResponse submitCustomSourceTopicAnalysisWithOptions(const Models::SubmitCustomSourceTopicAnalysisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从自定义数据源提交选题热点分析
       *
       * @param request SubmitCustomSourceTopicAnalysisRequest
       * @return SubmitCustomSourceTopicAnalysisResponse
       */
      Models::SubmitCustomSourceTopicAnalysisResponse submitCustomSourceTopicAnalysis(const Models::SubmitCustomSourceTopicAnalysisRequest &request);

      /**
       * @summary 提交自定义热点选题视角分析任务
       *
       * @param tmpReq SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse submitCustomTopicSelectionPerspectiveAnalysisTaskWithOptions(const Models::SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交自定义热点选题视角分析任务
       *
       * @param request SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest
       * @return SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::SubmitCustomTopicSelectionPerspectiveAnalysisTaskResponse submitCustomTopicSelectionPerspectiveAnalysisTask(const Models::SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest &request);

      /**
       * @summary 提交深度写作任务
       *
       * @param tmpReq SubmitDeepWriteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDeepWriteTaskResponse
       */
      Models::SubmitDeepWriteTaskResponse submitDeepWriteTaskWithOptions(const Models::SubmitDeepWriteTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交深度写作任务
       *
       * @param request SubmitDeepWriteTaskRequest
       * @return SubmitDeepWriteTaskResponse
       */
      Models::SubmitDeepWriteTaskResponse submitDeepWriteTask(const Models::SubmitDeepWriteTaskRequest &request);

      /**
       * @summary 提交文档聚合任务
       *
       * @param tmpReq SubmitDocClusterTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDocClusterTaskResponse
       */
      Models::SubmitDocClusterTaskResponse submitDocClusterTaskWithOptions(const Models::SubmitDocClusterTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交文档聚合任务
       *
       * @param request SubmitDocClusterTaskRequest
       * @return SubmitDocClusterTaskResponse
       */
      Models::SubmitDocClusterTaskResponse submitDocClusterTask(const Models::SubmitDocClusterTaskRequest &request);

      /**
       * @summary 提交VOC异步任务
       *
       * @param tmpReq SubmitEnterpriseVocAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitEnterpriseVocAnalysisTaskResponse
       */
      Models::SubmitEnterpriseVocAnalysisTaskResponse submitEnterpriseVocAnalysisTaskWithOptions(const Models::SubmitEnterpriseVocAnalysisTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交VOC异步任务
       *
       * @param request SubmitEnterpriseVocAnalysisTaskRequest
       * @return SubmitEnterpriseVocAnalysisTaskResponse
       */
      Models::SubmitEnterpriseVocAnalysisTaskResponse submitEnterpriseVocAnalysisTask(const Models::SubmitEnterpriseVocAnalysisTaskRequest &request);

      /**
       * @summary 导出词库任务
       *
       * @param request SubmitExportTermsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitExportTermsTaskResponse
       */
      Models::SubmitExportTermsTaskResponse submitExportTermsTaskWithOptions(const Models::SubmitExportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出词库任务
       *
       * @param request SubmitExportTermsTaskRequest
       * @return SubmitExportTermsTaskResponse
       */
      Models::SubmitExportTermsTaskResponse submitExportTermsTask(const Models::SubmitExportTermsTaskRequest &request);

      /**
       * @summary 妙笔为您提供了新的事实性审核能力，在联网搜索并判断正误的前提下，还支持用户自定义配置搜索来源 URL。
       *
       * @param request SubmitFactAuditUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitFactAuditUrlResponse
       */
      Models::SubmitFactAuditUrlResponse submitFactAuditUrlWithOptions(const Models::SubmitFactAuditUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙笔为您提供了新的事实性审核能力，在联网搜索并判断正误的前提下，还支持用户自定义配置搜索来源 URL。
       *
       * @param request SubmitFactAuditUrlRequest
       * @return SubmitFactAuditUrlResponse
       */
      Models::SubmitFactAuditUrlResponse submitFactAuditUrl(const Models::SubmitFactAuditUrlRequest &request);

      /**
       * @summary 提交导入自定义词库任务
       *
       * @param request SubmitImportTermsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImportTermsTaskResponse
       */
      Models::SubmitImportTermsTaskResponse submitImportTermsTaskWithOptions(const Models::SubmitImportTermsTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交导入自定义词库任务
       *
       * @param request SubmitImportTermsTaskRequest
       * @return SubmitImportTermsTaskResponse
       */
      Models::SubmitImportTermsTaskResponse submitImportTermsTask(const Models::SubmitImportTermsTaskRequest &request);

      /**
       * @summary 提交智能审核
       *
       * @param tmpReq SubmitSmartAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSmartAuditResponse
       */
      Models::SubmitSmartAuditResponse submitSmartAuditWithOptions(const Models::SubmitSmartAuditRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交智能审核
       *
       * @param request SubmitSmartAuditRequest
       * @return SubmitSmartAuditResponse
       */
      Models::SubmitSmartAuditResponse submitSmartAudit(const Models::SubmitSmartAuditRequest &request);

      /**
       * @summary 提交一键成片剪辑任务
       *
       * @param tmpReq SubmitSmartClipTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSmartClipTaskResponse
       */
      Models::SubmitSmartClipTaskResponse submitSmartClipTaskWithOptions(const Models::SubmitSmartClipTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交一键成片剪辑任务
       *
       * @param request SubmitSmartClipTaskRequest
       * @return SubmitSmartClipTaskResponse
       */
      Models::SubmitSmartClipTaskResponse submitSmartClipTask(const Models::SubmitSmartClipTaskRequest &request);

      /**
       * @summary 提交选题热点分析任务
       *
       * @param tmpReq SubmitTopicSelectionPerspectiveAnalysisTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::SubmitTopicSelectionPerspectiveAnalysisTaskResponse submitTopicSelectionPerspectiveAnalysisTaskWithOptions(const Models::SubmitTopicSelectionPerspectiveAnalysisTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交选题热点分析任务
       *
       * @param request SubmitTopicSelectionPerspectiveAnalysisTaskRequest
       * @return SubmitTopicSelectionPerspectiveAnalysisTaskResponse
       */
      Models::SubmitTopicSelectionPerspectiveAnalysisTaskResponse submitTopicSelectionPerspectiveAnalysisTask(const Models::SubmitTopicSelectionPerspectiveAnalysisTaskRequest &request);

      /**
       * @summary 更新自定义文本
       *
       * @param request UpdateCustomTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomTextResponse
       */
      Models::UpdateCustomTextResponse updateCustomTextWithOptions(const Models::UpdateCustomTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新自定义文本
       *
       * @param request UpdateCustomTextRequest
       * @return UpdateCustomTextResponse
       */
      Models::UpdateCustomTextResponse updateCustomText(const Models::UpdateCustomTextRequest &request);

      /**
       * @summary 数据集管理-更新
       *
       * @param tmpReq UpdateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDatasetWithOptions(const Models::UpdateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 数据集管理-更新
       *
       * @param request UpdateDatasetRequest
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDataset(const Models::UpdateDatasetRequest &request);

      /**
       * @summary 修改数据集文档
       *
       * @param tmpReq UpdateDatasetDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetDocumentResponse
       */
      Models::UpdateDatasetDocumentResponse updateDatasetDocumentWithOptions(const Models::UpdateDatasetDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改数据集文档
       *
       * @param request UpdateDatasetDocumentRequest
       * @return UpdateDatasetDocumentResponse
       */
      Models::UpdateDatasetDocumentResponse updateDatasetDocument(const Models::UpdateDatasetDocumentRequest &request);

      /**
       * @summary 通用配置-更新
       *
       * @param request UpdateGeneralConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGeneralConfigResponse
       */
      Models::UpdateGeneralConfigResponse updateGeneralConfigWithOptions(const Models::UpdateGeneralConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用配置-更新
       *
       * @param request UpdateGeneralConfigRequest
       * @return UpdateGeneralConfigResponse
       */
      Models::UpdateGeneralConfigResponse updateGeneralConfig(const Models::UpdateGeneralConfigRequest &request);

      /**
       * @summary 文档管理-更新。
       *
       * @param tmpReq UpdateGeneratedContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGeneratedContentResponse
       */
      Models::UpdateGeneratedContentResponse updateGeneratedContentWithOptions(const Models::UpdateGeneratedContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档管理-更新。
       *
       * @param request UpdateGeneratedContentRequest
       * @return UpdateGeneratedContentResponse
       */
      Models::UpdateGeneratedContentResponse updateGeneratedContent(const Models::UpdateGeneratedContentRequest &request);

      /**
       * @summary 根据ID更新素材
       *
       * @param tmpReq UpdateMaterialDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMaterialDocumentResponse
       */
      Models::UpdateMaterialDocumentResponse updateMaterialDocumentWithOptions(const Models::UpdateMaterialDocumentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据ID更新素材
       *
       * @param request UpdateMaterialDocumentRequest
       * @return UpdateMaterialDocumentResponse
       */
      Models::UpdateMaterialDocumentResponse updateMaterialDocument(const Models::UpdateMaterialDocumentRequest &request);

      /**
       * @summary 妙读上传书籍
       *
       * @param tmpReq UploadBookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadBookResponse
       */
      Models::UploadBookResponse uploadBookWithOptions(const Models::UploadBookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读上传书籍
       *
       * @param request UploadBookRequest
       * @return UploadBookResponse
       */
      Models::UploadBookResponse uploadBook(const Models::UploadBookRequest &request);

      /**
       * @summary 妙读上传文档接口
       *
       * @param tmpReq UploadDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDocResponse
       */
      Models::UploadDocResponse uploadDocWithOptions(const Models::UploadDocRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 妙读上传文档接口
       *
       * @param request UploadDocRequest
       * @return UploadDocResponse
       */
      Models::UploadDocResponse uploadDoc(const Models::UploadDocRequest &request);

      /**
       * @summary 校验企业VOC上传模板
       *
       * @param request ValidateUploadTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateUploadTemplateResponse
       */
      Models::ValidateUploadTemplateResponse validateUploadTemplateWithOptions(const Models::ValidateUploadTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验企业VOC上传模板
       *
       * @param request ValidateUploadTemplateRequest
       * @return ValidateUploadTemplateResponse
       */
      Models::ValidateUploadTemplateResponse validateUploadTemplate(const Models::ValidateUploadTemplateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
