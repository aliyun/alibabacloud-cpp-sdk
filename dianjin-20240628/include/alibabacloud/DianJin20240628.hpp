// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DIANJIN20240628_HPP_
#define ALIBABACLOUD_DIANJIN20240628_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DianJin20240628Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DianJin20240628.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建按年文档总结任务
       *
       * @param request CreateAnnualDocSummaryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAnnualDocSummaryTaskResponse
       */
      Models::CreateAnnualDocSummaryTaskResponse createAnnualDocSummaryTaskWithOptions(const string &workspaceId, const Models::CreateAnnualDocSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建按年文档总结任务
       *
       * @param request CreateAnnualDocSummaryTaskRequest
       * @return CreateAnnualDocSummaryTaskResponse
       */
      Models::CreateAnnualDocSummaryTaskResponse createAnnualDocSummaryTask(const string &workspaceId, const Models::CreateAnnualDocSummaryTaskRequest &request);

      /**
       * @summary 创建外呼会话
       *
       * @param request CreateDialogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDialogResponse
       */
      Models::CreateDialogResponse createDialogWithOptions(const string &workspaceId, const Models::CreateDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建外呼会话
       *
       * @param request CreateDialogRequest
       * @return CreateDialogResponse
       */
      Models::CreateDialogResponse createDialog(const string &workspaceId, const Models::CreateDialogRequest &request);

      /**
       * @summary 创建会话分析任务
       *
       * @param request CreateDialogAnalysisTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDialogAnalysisTaskResponse
       */
      Models::CreateDialogAnalysisTaskResponse createDialogAnalysisTaskWithOptions(const string &workspaceId, const Models::CreateDialogAnalysisTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建会话分析任务
       *
       * @param request CreateDialogAnalysisTaskRequest
       * @return CreateDialogAnalysisTaskResponse
       */
      Models::CreateDialogAnalysisTaskResponse createDialogAnalysisTask(const string &workspaceId, const Models::CreateDialogAnalysisTaskRequest &request);

      /**
       * @summary 创建财报总结任务
       *
       * @param request CreateDocsSummaryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDocsSummaryTaskResponse
       */
      Models::CreateDocsSummaryTaskResponse createDocsSummaryTaskWithOptions(const string &workspaceId, const Models::CreateDocsSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建财报总结任务
       *
       * @param request CreateDocsSummaryTaskRequest
       * @return CreateDocsSummaryTaskResponse
       */
      Models::CreateDocsSummaryTaskResponse createDocsSummaryTask(const string &workspaceId, const Models::CreateDocsSummaryTaskRequest &request);

      /**
       * @summary 创建财报总结任务
       *
       * @param request CreateFinReportSummaryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFinReportSummaryTaskResponse
       */
      Models::CreateFinReportSummaryTaskResponse createFinReportSummaryTaskWithOptions(const string &workspaceId, const Models::CreateFinReportSummaryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建财报总结任务
       *
       * @param request CreateFinReportSummaryTaskRequest
       * @return CreateFinReportSummaryTaskResponse
       */
      Models::CreateFinReportSummaryTaskResponse createFinReportSummaryTask(const string &workspaceId, const Models::CreateFinReportSummaryTaskRequest &request);

      /**
       * @summary 创建图片检测任务
       *
       * @param request CreateImageDetectionTaskRequest
       * @param headers CreateImageDetectionTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageDetectionTaskResponse
       */
      Models::CreateImageDetectionTaskResponse createImageDetectionTaskWithOptions(const string &workspaceId, const Models::CreateImageDetectionTaskRequest &request, const Models::CreateImageDetectionTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建图片检测任务
       *
       * @param request CreateImageDetectionTaskRequest
       * @return CreateImageDetectionTaskResponse
       */
      Models::CreateImageDetectionTaskResponse createImageDetectionTask(const string &workspaceId, const Models::CreateImageDetectionTaskRequest &request);

      /**
       * @summary 创建文档库
       *
       * @param request CreateLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLibraryResponse
       */
      Models::CreateLibraryResponse createLibraryWithOptions(const string &workspaceId, const Models::CreateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建文档库
       *
       * @param request CreateLibraryRequest
       * @return CreateLibraryResponse
       */
      Models::CreateLibraryResponse createLibrary(const string &workspaceId, const Models::CreateLibraryRequest &request);

      /**
       * @summary 创建PDF翻译任务
       *
       * @param request CreatePdfTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePdfTranslateTaskResponse
       */
      Models::CreatePdfTranslateTaskResponse createPdfTranslateTaskWithOptions(const string &workspaceId, const Models::CreatePdfTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建PDF翻译任务
       *
       * @param request CreatePdfTranslateTaskRequest
       * @return CreatePdfTranslateTaskResponse
       */
      Models::CreatePdfTranslateTaskResponse createPdfTranslateTask(const string &workspaceId, const Models::CreatePdfTranslateTaskRequest &request);

      /**
       * @summary 创建预定义文档
       *
       * @param request CreatePredefinedDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePredefinedDocumentResponse
       */
      Models::CreatePredefinedDocumentResponse createPredefinedDocumentWithOptions(const string &workspaceId, const Models::CreatePredefinedDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建预定义文档
       *
       * @param request CreatePredefinedDocumentRequest
       * @return CreatePredefinedDocumentResponse
       */
      Models::CreatePredefinedDocumentResponse createPredefinedDocument(const string &workspaceId, const Models::CreatePredefinedDocumentRequest &request);

      /**
       * @summary 创建财报总结的任务
       *
       * @param request CreateQualityCheckTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityCheckTaskResponse
       */
      Models::CreateQualityCheckTaskResponse createQualityCheckTaskWithOptions(const string &workspaceId, const Models::CreateQualityCheckTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建财报总结的任务
       *
       * @param request CreateQualityCheckTaskRequest
       * @return CreateQualityCheckTaskResponse
       */
      Models::CreateQualityCheckTaskResponse createQualityCheckTask(const string &workspaceId, const Models::CreateQualityCheckTaskRequest &request);

      /**
       * @summary 创建视频生成任务
       *
       * @param request CreateVideoCreationTaskRequest
       * @param headers CreateVideoCreationTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVideoCreationTaskResponse
       */
      Models::CreateVideoCreationTaskResponse createVideoCreationTaskWithOptions(const string &workspaceId, const Models::CreateVideoCreationTaskRequest &request, const Models::CreateVideoCreationTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建视频生成任务
       *
       * @param request CreateVideoCreationTaskRequest
       * @return CreateVideoCreationTaskResponse
       */
      Models::CreateVideoCreationTaskResponse createVideoCreationTask(const string &workspaceId, const Models::CreateVideoCreationTaskRequest &request);

      /**
       * @summary Dashscope异步任务完成事件处理
       *
       * @param request DashscopeAsyncTaskFinishEventRequest
       * @param headers DashscopeAsyncTaskFinishEventHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DashscopeAsyncTaskFinishEventResponse
       */
      Models::DashscopeAsyncTaskFinishEventResponse dashscopeAsyncTaskFinishEventWithOptions(const string &workspaceId, const Models::DashscopeAsyncTaskFinishEventRequest &request, const Models::DashscopeAsyncTaskFinishEventHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dashscope异步任务完成事件处理
       *
       * @param request DashscopeAsyncTaskFinishEventRequest
       * @return DashscopeAsyncTaskFinishEventResponse
       */
      Models::DashscopeAsyncTaskFinishEventResponse dashscopeAsyncTaskFinishEvent(const string &workspaceId, const Models::DashscopeAsyncTaskFinishEventRequest &request);

      /**
       * @summary 删除文档
       *
       * @param request DeleteDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocumentWithOptions(const string &workspaceId, const Models::DeleteDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文档
       *
       * @param request DeleteDocumentRequest
       * @return DeleteDocumentResponse
       */
      Models::DeleteDocumentResponse deleteDocument(const string &workspaceId, const Models::DeleteDocumentRequest &request);

      /**
       * @summary 删除文档库
       *
       * @param request DeleteLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLibraryResponse
       */
      Models::DeleteLibraryResponse deleteLibraryWithOptions(const string &workspaceId, const Models::DeleteLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文档库
       *
       * @param request DeleteLibraryRequest
       * @return DeleteLibraryResponse
       */
      Models::DeleteLibraryResponse deleteLibrary(const string &workspaceId, const Models::DeleteLibraryRequest &request);

      /**
       * @summary 端到端实时对话
       *
       * @param request EndToEndRealTimeDialogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndToEndRealTimeDialogResponse
       */
      Models::EndToEndRealTimeDialogResponse endToEndRealTimeDialogWithOptions(const string &workspaceId, const Models::EndToEndRealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 端到端实时对话
       *
       * @param request EndToEndRealTimeDialogRequest
       * @return EndToEndRealTimeDialogResponse
       */
      Models::EndToEndRealTimeDialogResponse endToEndRealTimeDialog(const string &workspaceId, const Models::EndToEndRealTimeDialogRequest &request);

      /**
       * @summary 中断任务
       *
       * @param request EvictTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvictTaskResponse
       */
      Models::EvictTaskResponse evictTaskWithOptions(const string &workspaceId, const Models::EvictTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 中断任务
       *
       * @param request EvictTaskRequest
       * @return EvictTaskResponse
       */
      Models::EvictTaskResponse evictTask(const string &workspaceId, const Models::EvictTaskRequest &request);

      /**
       * @summary 根据文档解析问答QA
       *
       * @param request GenDocQaResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenDocQaResultResponse
       */
      Models::GenDocQaResultResponse genDocQaResultWithOptions(const string &workspaceId, const Models::GenDocQaResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据文档解析问答QA
       *
       * @param request GenDocQaResultRequest
       * @return GenDocQaResultResponse
       */
      Models::GenDocQaResultResponse genDocQaResult(const string &workspaceId, const Models::GenDocQaResultRequest &request);

      /**
       * @summary 获取app配置
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppConfigResponse
       */
      Models::GetAppConfigResponse getAppConfigWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取app配置
       *
       * @return GetAppConfigResponse
       */
      Models::GetAppConfigResponse getAppConfig(const string &workspaceId);

      /**
       * @summary 获取问答结果
       *
       * @param request GetChatQuestionRespRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatQuestionRespResponse
       */
      Models::GetChatQuestionRespResponse getChatQuestionRespWithOptions(const string &workspaceId, const Models::GetChatQuestionRespRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取问答结果
       *
       * @param request GetChatQuestionRespRequest
       * @return GetChatQuestionRespResponse
       */
      Models::GetChatQuestionRespResponse getChatQuestionResp(const string &workspaceId, const Models::GetChatQuestionRespRequest &request);

      /**
       * @summary 获取外呼会话分析结果
       *
       * @param request GetDialogAnalysisResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDialogAnalysisResultResponse
       */
      Models::GetDialogAnalysisResultResponse getDialogAnalysisResultWithOptions(const string &workspaceId, const Models::GetDialogAnalysisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取外呼会话分析结果
       *
       * @param request GetDialogAnalysisResultRequest
       * @return GetDialogAnalysisResultResponse
       */
      Models::GetDialogAnalysisResultResponse getDialogAnalysisResult(const string &workspaceId, const Models::GetDialogAnalysisResultRequest &request);

      /**
       * @summary 获取异步任务的结果
       *
       * @param request GetDialogDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDialogDetailResponse
       */
      Models::GetDialogDetailResponse getDialogDetailWithOptions(const string &workspaceId, const Models::GetDialogDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取异步任务的结果
       *
       * @param request GetDialogDetailRequest
       * @return GetDialogDetailResponse
       */
      Models::GetDialogDetailResponse getDialogDetail(const string &workspaceId, const Models::GetDialogDetailRequest &request);

      /**
       * @summary 查询会话日志
       *
       * @param request GetDialogLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDialogLogResponse
       */
      Models::GetDialogLogResponse getDialogLogWithOptions(const string &workspaceId, const Models::GetDialogLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会话日志
       *
       * @param request GetDialogLogRequest
       * @return GetDialogLogResponse
       */
      Models::GetDialogLogResponse getDialogLog(const string &workspaceId, const Models::GetDialogLogRequest &request);

      /**
       * @summary 获取文档的chunk列表
       *
       * @param request GetDocumentChunkListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentChunkListResponse
       */
      Models::GetDocumentChunkListResponse getDocumentChunkListWithOptions(const string &workspaceId, const Models::GetDocumentChunkListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文档的chunk列表
       *
       * @param request GetDocumentChunkListRequest
       * @return GetDocumentChunkListResponse
       */
      Models::GetDocumentChunkListResponse getDocumentChunkList(const string &workspaceId, const Models::GetDocumentChunkListRequest &request);

      /**
       * @summary 分页查询文档库的文档列表
       *
       * @param request GetDocumentListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentListResponse
       */
      Models::GetDocumentListResponse getDocumentListWithOptions(const string &workspaceId, const Models::GetDocumentListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询文档库的文档列表
       *
       * @param request GetDocumentListRequest
       * @return GetDocumentListResponse
       */
      Models::GetDocumentListResponse getDocumentList(const string &workspaceId, const Models::GetDocumentListRequest &request);

      /**
       * @summary 获取文档URL
       *
       * @param request GetDocumentUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentUrlResponse
       */
      Models::GetDocumentUrlResponse getDocumentUrlWithOptions(const string &workspaceId, const Models::GetDocumentUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文档URL
       *
       * @param request GetDocumentUrlRequest
       * @return GetDocumentUrlResponse
       */
      Models::GetDocumentUrlResponse getDocumentUrl(const string &workspaceId, const Models::GetDocumentUrlRequest &request);

      /**
       * @summary 带条件的分页查询文档库的文档列表
       *
       * @param request GetFilterDocumentListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFilterDocumentListResponse
       */
      Models::GetFilterDocumentListResponse getFilterDocumentListWithOptions(const string &workspaceId, const Models::GetFilterDocumentListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 带条件的分页查询文档库的文档列表
       *
       * @param request GetFilterDocumentListRequest
       * @return GetFilterDocumentListResponse
       */
      Models::GetFilterDocumentListResponse getFilterDocumentList(const string &workspaceId, const Models::GetFilterDocumentListRequest &request);

      /**
       * @summary 分页查询文档库列表
       *
       * @param request GetHistoryListByBizTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHistoryListByBizTypeResponse
       */
      Models::GetHistoryListByBizTypeResponse getHistoryListByBizTypeWithOptions(const string &workspaceId, const Models::GetHistoryListByBizTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询文档库列表
       *
       * @param request GetHistoryListByBizTypeRequest
       * @return GetHistoryListByBizTypeResponse
       */
      Models::GetHistoryListByBizTypeResponse getHistoryListByBizType(const string &workspaceId, const Models::GetHistoryListByBizTypeRequest &request);

      /**
       * @summary 获取检测结果
       *
       * @param request GetImageDetectionTaskResultRequest
       * @param headers GetImageDetectionTaskResultHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageDetectionTaskResultResponse
       */
      Models::GetImageDetectionTaskResultResponse getImageDetectionTaskResultWithOptions(const string &workspaceId, const Models::GetImageDetectionTaskResultRequest &request, const Models::GetImageDetectionTaskResultHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取检测结果
       *
       * @param request GetImageDetectionTaskResultRequest
       * @return GetImageDetectionTaskResultResponse
       */
      Models::GetImageDetectionTaskResultResponse getImageDetectionTaskResult(const string &workspaceId, const Models::GetImageDetectionTaskResultRequest &request);

      /**
       * @summary 获取文档库配置详情
       *
       * @param request GetLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLibraryResponse
       */
      Models::GetLibraryResponse getLibraryWithOptions(const string &workspaceId, const Models::GetLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文档库配置详情
       *
       * @param request GetLibraryRequest
       * @return GetLibraryResponse
       */
      Models::GetLibraryResponse getLibrary(const string &workspaceId, const Models::GetLibraryRequest &request);

      /**
       * @summary 分页查询文档库列表
       *
       * @param request GetLibraryListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLibraryListResponse
       */
      Models::GetLibraryListResponse getLibraryListWithOptions(const string &workspaceId, const Models::GetLibraryListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询文档库列表
       *
       * @param request GetLibraryListRequest
       * @return GetLibraryListResponse
       */
      Models::GetLibraryListResponse getLibraryList(const string &workspaceId, const Models::GetLibraryListRequest &request);

      /**
       * @summary 获取解析结果
       *
       * @param request GetParseResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetParseResultResponse
       */
      Models::GetParseResultResponse getParseResultWithOptions(const string &workspaceId, const Models::GetParseResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取解析结果
       *
       * @param request GetParseResultRequest
       * @return GetParseResultResponse
       */
      Models::GetParseResultResponse getParseResult(const string &workspaceId, const Models::GetParseResultRequest &request);

      /**
       * @summary 获取异步任务的结果
       *
       * @param request GetQualityCheckTaskResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityCheckTaskResultResponse
       */
      Models::GetQualityCheckTaskResultResponse getQualityCheckTaskResultWithOptions(const string &workspaceId, const Models::GetQualityCheckTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取异步任务的结果
       *
       * @param request GetQualityCheckTaskResultRequest
       * @return GetQualityCheckTaskResultResponse
       */
      Models::GetQualityCheckTaskResultResponse getQualityCheckTaskResult(const string &workspaceId, const Models::GetQualityCheckTaskResultRequest &request);

      /**
       * @summary 获取财报总结任务结果
       *
       * @param request GetSummaryTaskResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSummaryTaskResultResponse
       */
      Models::GetSummaryTaskResultResponse getSummaryTaskResultWithOptions(const string &workspaceId, const Models::GetSummaryTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取财报总结任务结果
       *
       * @param request GetSummaryTaskResultRequest
       * @return GetSummaryTaskResultResponse
       */
      Models::GetSummaryTaskResultResponse getSummaryTaskResult(const string &workspaceId, const Models::GetSummaryTaskResultRequest &request);

      /**
       * @summary 获取异步任务结果
       *
       * @param request GetTaskResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResultResponse
       */
      Models::GetTaskResultResponse getTaskResultWithOptions(const string &workspaceId, const Models::GetTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取异步任务结果
       *
       * @param request GetTaskResultRequest
       * @return GetTaskResultResponse
       */
      Models::GetTaskResultResponse getTaskResult(const string &workspaceId, const Models::GetTaskResultRequest &request);

      /**
       * @summary 获取财报总结任务结果
       *
       * @param request GetTaskStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskStatusResponse
       */
      Models::GetTaskStatusResponse getTaskStatusWithOptions(const string &workspaceId, const Models::GetTaskStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取财报总结任务结果
       *
       * @param request GetTaskStatusRequest
       * @return GetTaskStatusResponse
       */
      Models::GetTaskStatusResponse getTaskStatus(const string &workspaceId, const Models::GetTaskStatusRequest &request);

      /**
       * @summary 获取视频生成任务结果
       *
       * @param request GetVideoCreationTaskResultRequest
       * @param headers GetVideoCreationTaskResultHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoCreationTaskResultResponse
       */
      Models::GetVideoCreationTaskResultResponse getVideoCreationTaskResultWithOptions(const string &workspaceId, const Models::GetVideoCreationTaskResultRequest &request, const Models::GetVideoCreationTaskResultHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取视频生成任务结果
       *
       * @param request GetVideoCreationTaskResultRequest
       * @return GetVideoCreationTaskResultResponse
       */
      Models::GetVideoCreationTaskResultResponse getVideoCreationTaskResult(const string &workspaceId, const Models::GetVideoCreationTaskResultRequest &request);

      /**
       * @summary 插件调试接口
       *
       * @param request InvokePluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokePluginResponse
       */
      Models::InvokePluginResponse invokePluginWithOptions(const string &workspaceId, const Models::InvokePluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 插件调试接口
       *
       * @param request InvokePluginRequest
       * @return InvokePluginResponse
       */
      Models::InvokePluginResponse invokePlugin(const string &workspaceId, const Models::InvokePluginRequest &request);

      /**
       * @summary 获取文档预览
       *
       * @param request PreviewDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewDocumentResponse
       */
      Models::PreviewDocumentResponse previewDocumentWithOptions(const string &workspaceId, const Models::PreviewDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文档预览
       *
       * @param request PreviewDocumentRequest
       * @return PreviewDocumentResponse
       */
      Models::PreviewDocumentResponse previewDocument(const string &workspaceId, const Models::PreviewDocumentRequest &request);

      /**
       * @summary 重新索引
       *
       * @param request ReIndexRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReIndexResponse
       */
      Models::ReIndexResponse reIndexWithOptions(const string &workspaceId, const Models::ReIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新索引
       *
       * @param request ReIndexRequest
       * @return ReIndexResponse
       */
      Models::ReIndexResponse reIndex(const string &workspaceId, const Models::ReIndexRequest &request);

      /**
       * @summary 实时对话
       *
       * @param request RealTimeDialogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RealTimeDialogResponse
       */
      FutureGenerator<Models::RealTimeDialogResponse> realTimeDialogWithSSE(const string &workspaceId, const Models::RealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实时对话
       *
       * @param request RealTimeDialogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RealTimeDialogResponse
       */
      Models::RealTimeDialogResponse realTimeDialogWithOptions(const string &workspaceId, const Models::RealTimeDialogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实时对话
       *
       * @param request RealTimeDialogRequest
       * @return RealTimeDialogResponse
       */
      Models::RealTimeDialogResponse realTimeDialog(const string &workspaceId, const Models::RealTimeDialogRequest &request);

      /**
       * @summary 实时会话辅助
       *
       * @param request RealtimeDialogAssistRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RealtimeDialogAssistResponse
       */
      Models::RealtimeDialogAssistResponse realtimeDialogAssistWithOptions(const string &workspaceId, const Models::RealtimeDialogAssistRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实时会话辅助
       *
       * @param request RealtimeDialogAssistRequest
       * @return RealtimeDialogAssistResponse
       */
      Models::RealtimeDialogAssistResponse realtimeDialogAssist(const string &workspaceId, const Models::RealtimeDialogAssistRequest &request);

      /**
       * @summary 重建任务
       *
       * @param request RebuildTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildTaskResponse
       */
      Models::RebuildTaskResponse rebuildTaskWithOptions(const string &workspaceId, const Models::RebuildTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重建任务
       *
       * @param request RebuildTaskRequest
       * @return RebuildTaskResponse
       */
      Models::RebuildTaskResponse rebuildTask(const string &workspaceId, const Models::RebuildTaskRequest &request);

      /**
       * @summary 文档召回。
       *
       * @param request RecallDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecallDocumentResponse
       */
      Models::RecallDocumentResponse recallDocumentWithOptions(const string &workspaceId, const Models::RecallDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档召回。
       *
       * @param request RecallDocumentRequest
       * @return RecallDocumentResponse
       */
      Models::RecallDocumentResponse recallDocument(const string &workspaceId, const Models::RecallDocumentRequest &request);

      /**
       * @summary 意图识别
       *
       * @param request RecognizeIntentionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeIntentionResponse
       */
      Models::RecognizeIntentionResponse recognizeIntentionWithOptions(const string &workspaceId, const Models::RecognizeIntentionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 意图识别
       *
       * @param request RecognizeIntentionRequest
       * @return RecognizeIntentionResponse
       */
      Models::RecognizeIntentionResponse recognizeIntention(const string &workspaceId, const Models::RecognizeIntentionRequest &request);

      /**
       * @summary 运行智能体
       *
       * @param request RunAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAgentResponse
       */
      FutureGenerator<Models::RunAgentResponse> runAgentWithSSE(const string &workspaceId, const Models::RunAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运行智能体
       *
       * @param request RunAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunAgentResponse
       */
      Models::RunAgentResponse runAgentWithOptions(const string &workspaceId, const Models::RunAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运行智能体
       *
       * @param request RunAgentRequest
       * @return RunAgentResponse
       */
      Models::RunAgentResponse runAgent(const string &workspaceId, const Models::RunAgentRequest &request);

      /**
       * @summary 获取生成式对话结果
       *
       * @param request RunChatResultGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunChatResultGenerationResponse
       */
      FutureGenerator<Models::RunChatResultGenerationResponse> runChatResultGenerationWithSSE(const string &workspaceId, const Models::RunChatResultGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取生成式对话结果
       *
       * @param request RunChatResultGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunChatResultGenerationResponse
       */
      Models::RunChatResultGenerationResponse runChatResultGenerationWithOptions(const string &workspaceId, const Models::RunChatResultGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取生成式对话结果
       *
       * @param request RunChatResultGenerationRequest
       * @return RunChatResultGenerationResponse
       */
      Models::RunChatResultGenerationResponse runChatResultGeneration(const string &workspaceId, const Models::RunChatResultGenerationRequest &request);

      /**
       * @summary 流式获取外呼会话分析结果
       *
       * @param request RunDialogAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDialogAnalysisResponse
       */
      FutureGenerator<Models::RunDialogAnalysisResponse> runDialogAnalysisWithSSE(const string &workspaceId, const Models::RunDialogAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 流式获取外呼会话分析结果
       *
       * @param request RunDialogAnalysisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunDialogAnalysisResponse
       */
      Models::RunDialogAnalysisResponse runDialogAnalysisWithOptions(const string &workspaceId, const Models::RunDialogAnalysisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 流式获取外呼会话分析结果
       *
       * @param request RunDialogAnalysisRequest
       * @return RunDialogAnalysisResponse
       */
      Models::RunDialogAnalysisResponse runDialogAnalysis(const string &workspaceId, const Models::RunDialogAnalysisRequest &request);

      /**
       * @summary 获取生成式对话结果
       *
       * @param request RunLibraryChatGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunLibraryChatGenerationResponse
       */
      FutureGenerator<Models::RunLibraryChatGenerationResponse> runLibraryChatGenerationWithSSE(const string &workspaceId, const Models::RunLibraryChatGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取生成式对话结果
       *
       * @param request RunLibraryChatGenerationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunLibraryChatGenerationResponse
       */
      Models::RunLibraryChatGenerationResponse runLibraryChatGenerationWithOptions(const string &workspaceId, const Models::RunLibraryChatGenerationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取生成式对话结果
       *
       * @param request RunLibraryChatGenerationRequest
       * @return RunLibraryChatGenerationResponse
       */
      Models::RunLibraryChatGenerationResponse runLibraryChatGeneration(const string &workspaceId, const Models::RunLibraryChatGenerationRequest &request);

      /**
       * @summary 提交问题列表
       *
       * @param request SubmitChatQuestionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitChatQuestionResponse
       */
      Models::SubmitChatQuestionResponse submitChatQuestionWithOptions(const string &workspaceId, const Models::SubmitChatQuestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交问题列表
       *
       * @param request SubmitChatQuestionRequest
       * @return SubmitChatQuestionResponse
       */
      Models::SubmitChatQuestionResponse submitChatQuestion(const string &workspaceId, const Models::SubmitChatQuestionRequest &request);

      /**
       * @summary 更新文档
       *
       * @param request UpdateDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDocumentResponse
       */
      Models::UpdateDocumentResponse updateDocumentWithOptions(const string &workspaceId, const Models::UpdateDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新文档
       *
       * @param request UpdateDocumentRequest
       * @return UpdateDocumentResponse
       */
      Models::UpdateDocumentResponse updateDocument(const string &workspaceId, const Models::UpdateDocumentRequest &request);

      /**
       * @summary 更新文档的chunk
       *
       * @param request UpdateDocumentChunkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDocumentChunkResponse
       */
      Models::UpdateDocumentChunkResponse updateDocumentChunkWithOptions(const string &workspaceId, const Models::UpdateDocumentChunkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新文档的chunk
       *
       * @param request UpdateDocumentChunkRequest
       * @return UpdateDocumentChunkResponse
       */
      Models::UpdateDocumentChunkResponse updateDocumentChunk(const string &workspaceId, const Models::UpdateDocumentChunkRequest &request);

      /**
       * @summary 更新文档库配置
       *
       * @param request UpdateLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLibraryResponse
       */
      Models::UpdateLibraryResponse updateLibraryWithOptions(const string &workspaceId, const Models::UpdateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新文档库配置
       *
       * @param request UpdateLibraryRequest
       * @return UpdateLibraryResponse
       */
      Models::UpdateLibraryResponse updateLibrary(const string &workspaceId, const Models::UpdateLibraryRequest &request);

      /**
       * @summary 更新QA问答库
       *
       * @param request UpdateQaLibraryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQaLibraryResponse
       */
      Models::UpdateQaLibraryResponse updateQaLibraryWithOptions(const string &workspaceId, const Models::UpdateQaLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新QA问答库
       *
       * @param request UpdateQaLibraryRequest
       * @return UpdateQaLibraryResponse
       */
      Models::UpdateQaLibraryResponse updateQaLibrary(const string &workspaceId, const Models::UpdateQaLibraryRequest &request);

      /**
       * @summary 上传文档到文档库
       *
       * @param request UploadDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDocumentResponse
       */
      Models::UploadDocumentResponse uploadDocumentWithOptions(const string &workspaceId, const Models::UploadDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传文档到文档库
       *
       * @param request UploadDocumentRequest
       * @return UploadDocumentResponse
       */
      Models::UploadDocumentResponse uploadDocument(const string &workspaceId, const Models::UploadDocumentRequest &request);

      Models::UploadDocumentResponse uploadDocumentAdvance(const string &workspaceId, const Models::UploadDocumentAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
