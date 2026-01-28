// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_INTELLIGENTCREATION20240313_HPP_
#define ALIBABACLOUD_INTELLIGENTCREATION20240313_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/IntelligentCreation20240313Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/IntelligentCreation20240313.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加文案反馈
       *
       * @param request AddTextFeedbackRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTextFeedbackResponse
       */
      Models::AddTextFeedbackResponse addTextFeedbackWithOptions(const Models::AddTextFeedbackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加文案反馈
       *
       * @param request AddTextFeedbackRequest
       * @return AddTextFeedbackResponse
       */
      Models::AddTextFeedbackResponse addTextFeedback(const Models::AddTextFeedbackRequest &request);

      /**
       * @summary 批量添加知识文档
       *
       * @param request BatchAddDocumentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchAddDocumentResponse
       */
      Models::BatchAddDocumentResponse batchAddDocumentWithOptions(const string &knowledgeBaseId, const Models::BatchAddDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量添加知识文档
       *
       * @param request BatchAddDocumentRequest
       * @return BatchAddDocumentResponse
       */
      Models::BatchAddDocumentResponse batchAddDocument(const string &knowledgeBaseId, const Models::BatchAddDocumentRequest &request);

      /**
       * @summary 批量发布剧本任务
       *
       * @param request BatchCreateAICoachTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateAICoachTaskResponse
       */
      Models::BatchCreateAICoachTaskResponse batchCreateAICoachTaskWithOptions(const Models::BatchCreateAICoachTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量发布剧本任务
       *
       * @param request BatchCreateAICoachTaskRequest
       * @return BatchCreateAICoachTaskResponse
       */
      Models::BatchCreateAICoachTaskResponse batchCreateAICoachTask(const Models::BatchCreateAICoachTaskRequest &request);

      /**
       * @summary 批量删除对练任务
       *
       * @param tmpReq BatchDeletePracticeTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeletePracticeTaskResponse
       */
      Models::BatchDeletePracticeTaskResponse batchDeletePracticeTaskWithOptions(const Models::BatchDeletePracticeTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除对练任务
       *
       * @param request BatchDeletePracticeTaskRequest
       * @return BatchDeletePracticeTaskResponse
       */
      Models::BatchDeletePracticeTaskResponse batchDeletePracticeTask(const Models::BatchDeletePracticeTaskRequest &request);

      /**
       * @summary 批量查询项目信息
       *
       * @param tmpReq BatchGetProjectTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetProjectTaskResponse
       */
      Models::BatchGetProjectTaskResponse batchGetProjectTaskWithOptions(const Models::BatchGetProjectTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询项目信息
       *
       * @param request BatchGetProjectTaskRequest
       * @return BatchGetProjectTaskResponse
       */
      Models::BatchGetProjectTaskResponse batchGetProjectTask(const Models::BatchGetProjectTaskRequest &request);

      /**
       * @summary 批量查询声音复刻任务
       *
       * @param tmpReq BatchGetTrainTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetTrainTaskResponse
       */
      Models::BatchGetTrainTaskResponse batchGetTrainTaskWithOptions(const Models::BatchGetTrainTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询声音复刻任务
       *
       * @param request BatchGetTrainTaskRequest
       * @return BatchGetTrainTaskResponse
       */
      Models::BatchGetTrainTaskResponse batchGetTrainTask(const Models::BatchGetTrainTaskRequest &request);

      /**
       * @summary 批量查询视频切片任务信息
       *
       * @param tmpReq BatchGetVideoClipTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetVideoClipTaskResponse
       */
      Models::BatchGetVideoClipTaskResponse batchGetVideoClipTaskWithOptions(const Models::BatchGetVideoClipTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询视频切片任务信息
       *
       * @param request BatchGetVideoClipTaskRequest
       * @return BatchGetVideoClipTaskResponse
       */
      Models::BatchGetVideoClipTaskResponse batchGetVideoClipTask(const Models::BatchGetVideoClipTaskRequest &request);

      /**
       * @summary 批量查询文案
       *
       * @param tmpReq BatchQueryIndividuationTextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchQueryIndividuationTextResponse
       */
      Models::BatchQueryIndividuationTextResponse batchQueryIndividuationTextWithOptions(const Models::BatchQueryIndividuationTextRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询文案
       *
       * @param request BatchQueryIndividuationTextRequest
       * @return BatchQueryIndividuationTextResponse
       */
      Models::BatchQueryIndividuationTextResponse batchQueryIndividuationText(const Models::BatchQueryIndividuationTextRequest &request);

      /**
       * @summary 快速发布剧本
       *
       * @param request BuildAICoachScriptRecordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BuildAICoachScriptRecordResponse
       */
      Models::BuildAICoachScriptRecordResponse buildAICoachScriptRecordWithOptions(const Models::BuildAICoachScriptRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 快速发布剧本
       *
       * @param request BuildAICoachScriptRecordRequest
       * @return BuildAICoachScriptRecordResponse
       */
      Models::BuildAICoachScriptRecordResponse buildAICoachScriptRecord(const Models::BuildAICoachScriptRecordRequest &request);

      /**
       * @summary 检查会话状态
       *
       * @param request CheckSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSessionResponse
       */
      Models::CheckSessionResponse checkSessionWithOptions(const Models::CheckSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查会话状态
       *
       * @param request CheckSessionRequest
       * @return CheckSessionResponse
       */
      Models::CheckSessionResponse checkSession(const Models::CheckSessionRequest &request);

      /**
       * @summary 学员关闭会话
       *
       * @param request CloseAICoachTaskSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseAICoachTaskSessionResponse
       */
      Models::CloseAICoachTaskSessionResponse closeAICoachTaskSessionWithOptions(const Models::CloseAICoachTaskSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 学员关闭会话
       *
       * @param request CloseAICoachTaskSessionRequest
       * @return CloseAICoachTaskSessionResponse
       */
      Models::CloseAICoachTaskSessionResponse closeAICoachTaskSession(const Models::CloseAICoachTaskSessionRequest &request);

      /**
       * @summary 文本数量统计
       *
       * @param request CountTextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CountTextResponse
       */
      Models::CountTextResponse countTextWithOptions(const Models::CountTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文本数量统计
       *
       * @param request CountTextRequest
       * @return CountTextResponse
       */
      Models::CountTextResponse countText(const Models::CountTextRequest &request);

      /**
       * @summary 查询剧本列表
       *
       * @param request CreateAICoachTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAICoachTaskResponse
       */
      Models::CreateAICoachTaskResponse createAICoachTaskWithOptions(const Models::CreateAICoachTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询剧本列表
       *
       * @param request CreateAICoachTaskRequest
       * @return CreateAICoachTaskResponse
       */
      Models::CreateAICoachTaskResponse createAICoachTask(const Models::CreateAICoachTaskRequest &request);

      /**
       * @summary 学员开启对练会话
       *
       * @param request CreateAICoachTaskSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAICoachTaskSessionResponse
       */
      Models::CreateAICoachTaskSessionResponse createAICoachTaskSessionWithOptions(const Models::CreateAICoachTaskSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 学员开启对练会话
       *
       * @param request CreateAICoachTaskSessionRequest
       * @return CreateAICoachTaskSessionResponse
       */
      Models::CreateAICoachTaskSessionResponse createAICoachTaskSession(const Models::CreateAICoachTaskSessionRequest &request);

      /**
       * @summary CreateAgent
       *
       * @param request CreateAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgentWithOptions(const Models::CreateAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateAgent
       *
       * @param request CreateAgentRequest
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgent(const Models::CreateAgentRequest &request);

      /**
       * @summary 创建照片数字人
       *
       * @param request CreateAnchorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAnchorResponse
       */
      Models::CreateAnchorResponse createAnchorWithOptions(const Models::CreateAnchorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建照片数字人
       *
       * @param request CreateAnchorRequest
       * @return CreateAnchorResponse
       */
      Models::CreateAnchorResponse createAnchor(const Models::CreateAnchorRequest &request);

      /**
       * @summary 创建配图生成任务
       *
       * @param request CreateIllustrationTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIllustrationTaskResponse
       */
      Models::CreateIllustrationTaskResponse createIllustrationTaskWithOptions(const string &textId, const Models::CreateIllustrationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建配图生成任务
       *
       * @param request CreateIllustrationTaskRequest
       * @return CreateIllustrationTaskResponse
       */
      Models::CreateIllustrationTaskResponse createIllustrationTask(const string &textId, const Models::CreateIllustrationTaskRequest &request);

      /**
       * @summary 创建个性化文案项目
       *
       * @param request CreateIndividuationProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIndividuationProjectResponse
       */
      Models::CreateIndividuationProjectResponse createIndividuationProjectWithOptions(const Models::CreateIndividuationProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建个性化文案项目
       *
       * @param request CreateIndividuationProjectRequest
       * @return CreateIndividuationProjectResponse
       */
      Models::CreateIndividuationProjectResponse createIndividuationProject(const Models::CreateIndividuationProjectRequest &request);

      /**
       * @summary 创建个性化文案任务
       *
       * @param request CreateIndividuationTextTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIndividuationTextTaskResponse
       */
      Models::CreateIndividuationTextTaskResponse createIndividuationTextTaskWithOptions(const Models::CreateIndividuationTextTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建个性化文案任务
       *
       * @param request CreateIndividuationTextTaskRequest
       * @return CreateIndividuationTextTaskResponse
       */
      Models::CreateIndividuationTextTaskResponse createIndividuationTextTask(const Models::CreateIndividuationTextTaskRequest &request);

      /**
       * @summary 创建产品图
       *
       * @param request CreateProductImageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductImageResponse
       */
      Models::CreateProductImageResponse createProductImageWithOptions(const Models::CreateProductImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建产品图
       *
       * @param request CreateProductImageRequest
       * @return CreateProductImageResponse
       */
      Models::CreateProductImageResponse createProductImage(const Models::CreateProductImageRequest &request);

      /**
       * @summary 写实人像创作
       *
       * @param request CreateRealisticPortraitRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRealisticPortraitResponse
       */
      Models::CreateRealisticPortraitResponse createRealisticPortraitWithOptions(const Models::CreateRealisticPortraitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 写实人像创作
       *
       * @param request CreateRealisticPortraitRequest
       * @return CreateRealisticPortraitResponse
       */
      Models::CreateRealisticPortraitResponse createRealisticPortrait(const Models::CreateRealisticPortraitRequest &request);

      /**
       * @summary 创建文案生成任务
       *
       * @param request CreateTextTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTextTaskResponse
       */
      Models::CreateTextTaskResponse createTextTaskWithOptions(const Models::CreateTextTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建文案生成任务
       *
       * @param request CreateTextTaskRequest
       * @return CreateTextTaskResponse
       */
      Models::CreateTextTaskResponse createTextTask(const Models::CreateTextTaskRequest &request);

      /**
       * @summary 提交声音复刻任务
       *
       * @param request CreateTrainTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrainTaskResponse
       */
      Models::CreateTrainTaskResponse createTrainTaskWithOptions(const Models::CreateTrainTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交声音复刻任务
       *
       * @param request CreateTrainTaskRequest
       * @return CreateTrainTaskResponse
       */
      Models::CreateTrainTaskResponse createTrainTask(const Models::CreateTrainTaskRequest &request);

      /**
       * @summary 提交视频切片任务
       *
       * @param request CreateVideoClipTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVideoClipTaskResponse
       */
      Models::CreateVideoClipTaskResponse createVideoClipTaskWithOptions(const Models::CreateVideoClipTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交视频切片任务
       *
       * @param request CreateVideoClipTaskRequest
       * @return CreateVideoClipTaskResponse
       */
      Models::CreateVideoClipTaskResponse createVideoClipTask(const Models::CreateVideoClipTaskRequest &request);

      /**
       * @summary DeleteAICoachScript
       *
       * @param request DeleteAICoachScriptRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAICoachScriptResponse
       */
      Models::DeleteAICoachScriptResponse deleteAICoachScriptWithOptions(const Models::DeleteAICoachScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteAICoachScript
       *
       * @param request DeleteAICoachScriptRequest
       * @return DeleteAICoachScriptResponse
       */
      Models::DeleteAICoachScriptResponse deleteAICoachScript(const Models::DeleteAICoachScriptRequest &request);

      /**
       * @summary DeleteAgent
       *
       * @param request DeleteAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgentWithOptions(const Models::DeleteAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteAgent
       *
       * @param request DeleteAgentRequest
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgent(const Models::DeleteAgentRequest &request);

      /**
       * @summary 删除个性化文案项目
       *
       * @param request DeleteIndividuationProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIndividuationProjectResponse
       */
      Models::DeleteIndividuationProjectResponse deleteIndividuationProjectWithOptions(const Models::DeleteIndividuationProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除个性化文案项目
       *
       * @param request DeleteIndividuationProjectRequest
       * @return DeleteIndividuationProjectResponse
       */
      Models::DeleteIndividuationProjectResponse deleteIndividuationProject(const Models::DeleteIndividuationProjectRequest &request);

      /**
       * @summary 删除个性化文案
       *
       * @param request DeleteIndividuationTextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIndividuationTextResponse
       */
      Models::DeleteIndividuationTextResponse deleteIndividuationTextWithOptions(const Models::DeleteIndividuationTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除个性化文案
       *
       * @param request DeleteIndividuationTextRequest
       * @return DeleteIndividuationTextResponse
       */
      Models::DeleteIndividuationTextResponse deleteIndividuationText(const Models::DeleteIndividuationTextRequest &request);

      /**
       * @summary 查询文档信息与状态
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDocumentResponse
       */
      Models::DescribeDocumentResponse describeDocumentWithOptions(const string &knowledgeBaseId, const string &documentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询文档信息与状态
       *
       * @return DescribeDocumentResponse
       */
      Models::DescribeDocumentResponse describeDocument(const string &knowledgeBaseId, const string &documentId);

      /**
       * @summary 学员完成会话
       *
       * @param request FinishAICoachTaskSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishAICoachTaskSessionResponse
       */
      Models::FinishAICoachTaskSessionResponse finishAICoachTaskSessionWithOptions(const Models::FinishAICoachTaskSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 学员完成会话
       *
       * @param request FinishAICoachTaskSessionRequest
       * @return FinishAICoachTaskSessionResponse
       */
      Models::FinishAICoachTaskSessionResponse finishAICoachTaskSession(const Models::FinishAICoachTaskSessionRequest &request);

      /**
       * @summary 获取考核点详情
       *
       * @param request GetAICoachAssessmentPointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAICoachAssessmentPointResponse
       */
      Models::GetAICoachAssessmentPointResponse getAICoachAssessmentPointWithOptions(const Models::GetAICoachAssessmentPointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取考核点详情
       *
       * @param request GetAICoachAssessmentPointRequest
       * @return GetAICoachAssessmentPointResponse
       */
      Models::GetAICoachAssessmentPointResponse getAICoachAssessmentPoint(const Models::GetAICoachAssessmentPointRequest &request);

      /**
       * @summary 查询作弊检测详情
       *
       * @param request GetAICoachCheatDetectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAICoachCheatDetectionResponse
       */
      Models::GetAICoachCheatDetectionResponse getAICoachCheatDetectionWithOptions(const Models::GetAICoachCheatDetectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询作弊检测详情
       *
       * @param request GetAICoachCheatDetectionRequest
       * @return GetAICoachCheatDetectionResponse
       */
      Models::GetAICoachCheatDetectionResponse getAICoachCheatDetection(const Models::GetAICoachCheatDetectionRequest &request);

      /**
       * @summary 查询剧本详情
       *
       * @param request GetAICoachScriptRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAICoachScriptResponse
       */
      Models::GetAICoachScriptResponse getAICoachScriptWithOptions(const Models::GetAICoachScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询剧本详情
       *
       * @param request GetAICoachScriptRequest
       * @return GetAICoachScriptResponse
       */
      Models::GetAICoachScriptResponse getAICoachScript(const Models::GetAICoachScriptRequest &request);

      /**
       * @summary 学员查询会话历史
       *
       * @param request GetAICoachTaskSessionHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAICoachTaskSessionHistoryResponse
       */
      Models::GetAICoachTaskSessionHistoryResponse getAICoachTaskSessionHistoryWithOptions(const Models::GetAICoachTaskSessionHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 学员查询会话历史
       *
       * @param request GetAICoachTaskSessionHistoryRequest
       * @return GetAICoachTaskSessionHistoryResponse
       */
      Models::GetAICoachTaskSessionHistoryResponse getAICoachTaskSessionHistory(const Models::GetAICoachTaskSessionHistoryRequest &request);

      /**
       * @summary 学员查询会话评测报告
       *
       * @param request GetAICoachTaskSessionReportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAICoachTaskSessionReportResponse
       */
      Models::GetAICoachTaskSessionReportResponse getAICoachTaskSessionReportWithOptions(const Models::GetAICoachTaskSessionReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 学员查询会话评测报告
       *
       * @param request GetAICoachTaskSessionReportRequest
       * @return GetAICoachTaskSessionReportResponse
       */
      Models::GetAICoachTaskSessionReportResponse getAICoachTaskSessionReport(const Models::GetAICoachTaskSessionReportRequest &request);

      /**
       * @summary 获取对练会话资源使用情况
       *
       * @param request GetAICoachTaskSessionResourceUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAICoachTaskSessionResourceUsageResponse
       */
      Models::GetAICoachTaskSessionResourceUsageResponse getAICoachTaskSessionResourceUsageWithOptions(const Models::GetAICoachTaskSessionResourceUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取对练会话资源使用情况
       *
       * @param request GetAICoachTaskSessionResourceUsageRequest
       * @return GetAICoachTaskSessionResourceUsageResponse
       */
      Models::GetAICoachTaskSessionResourceUsageResponse getAICoachTaskSessionResourceUsage(const Models::GetAICoachTaskSessionResourceUsageRequest &request);

      /**
       * @summary 查询配图
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIllustrationResponse
       */
      Models::GetIllustrationResponse getIllustrationWithOptions(const string &textId, const string &illustrationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询配图
       *
       * @return GetIllustrationResponse
       */
      Models::GetIllustrationResponse getIllustration(const string &textId, const string &illustrationId);

      /**
       * @summary 查询配图任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIllustrationTaskResponse
       */
      Models::GetIllustrationTaskResponse getIllustrationTaskWithOptions(const string &textId, const string &illustrationTaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询配图任务
       *
       * @return GetIllustrationTaskResponse
       */
      Models::GetIllustrationTaskResponse getIllustrationTask(const string &textId, const string &illustrationTaskId);

      /**
       * @summary 获取图片上传oss token
       *
       * @param request GetOssUploadTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssUploadTokenResponse
       */
      Models::GetOssUploadTokenResponse getOssUploadTokenWithOptions(const Models::GetOssUploadTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取图片上传oss token
       *
       * @param request GetOssUploadTokenRequest
       * @return GetOssUploadTokenResponse
       */
      Models::GetOssUploadTokenResponse getOssUploadToken(const Models::GetOssUploadTokenRequest &request);

      /**
       * @summary 获取数据人合成信息
       *
       * @param request GetProjectTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProjectTaskResponse
       */
      Models::GetProjectTaskResponse getProjectTaskWithOptions(const Models::GetProjectTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据人合成信息
       *
       * @param request GetProjectTaskRequest
       * @return GetProjectTaskResponse
       */
      Models::GetProjectTaskResponse getProjectTask(const Models::GetProjectTaskRequest &request);

      /**
       * @summary 查询文案
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTextResponse
       */
      Models::GetTextResponse getTextWithOptions(const string &textId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询文案
       *
       * @return GetTextResponse
       */
      Models::GetTextResponse getText(const string &textId);

      /**
       * @summary 查询文案任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTextTaskResponse
       */
      Models::GetTextTaskResponse getTextTaskWithOptions(const string &textTaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询文案任务
       *
       * @return GetTextTaskResponse
       */
      Models::GetTextTaskResponse getTextTask(const string &textTaskId);

      /**
       * @summary 查询表单配置
       *
       * @param request GetTextTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTextTemplateResponse
       */
      Models::GetTextTemplateResponse getTextTemplateWithOptions(const Models::GetTextTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询表单配置
       *
       * @param request GetTextTemplateRequest
       * @return GetTextTemplateResponse
       */
      Models::GetTextTemplateResponse getTextTemplate(const Models::GetTextTemplateRequest &request);

      /**
       * @summary 营销文案互动问答
       *
       * @param request InteractTextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InteractTextResponse
       */
      FutureGenerator<Models::InteractTextResponse> interactTextWithSSE(const Models::InteractTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 营销文案互动问答
       *
       * @param request InteractTextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InteractTextResponse
       */
      Models::InteractTextResponse interactTextWithOptions(const Models::InteractTextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 营销文案互动问答
       *
       * @param request InteractTextRequest
       * @return InteractTextResponse
       */
      Models::InteractTextResponse interactText(const Models::InteractTextRequest &request);

      /**
       * @summary 查询剧本列表
       *
       * @param request ListAICoachScriptPageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAICoachScriptPageResponse
       */
      Models::ListAICoachScriptPageResponse listAICoachScriptPageWithOptions(const Models::ListAICoachScriptPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询剧本列表
       *
       * @param request ListAICoachScriptPageRequest
       * @return ListAICoachScriptPageResponse
       */
      Models::ListAICoachScriptPageResponse listAICoachScriptPage(const Models::ListAICoachScriptPageRequest &request);

      /**
       * @summary 查询任务列表
       *
       * @param request ListAICoachTaskPageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAICoachTaskPageResponse
       */
      Models::ListAICoachTaskPageResponse listAICoachTaskPageWithOptions(const Models::ListAICoachTaskPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务列表
       *
       * @param request ListAICoachTaskPageRequest
       * @return ListAICoachTaskPageResponse
       */
      Models::ListAICoachTaskPageResponse listAICoachTaskPage(const Models::ListAICoachTaskPageRequest &request);

      /**
       * @summary 分页查询智能体
       *
       * @param request ListAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgentsWithOptions(const Models::ListAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询智能体
       *
       * @param request ListAgentsRequest
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgents(const Models::ListAgentsRequest &request);

      /**
       * @summary 获取数字人模特列表
       *
       * @param request ListAnchorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnchorResponse
       */
      Models::ListAnchorResponse listAnchorWithOptions(const Models::ListAnchorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数字人模特列表
       *
       * @param request ListAnchorRequest
       * @return ListAnchorResponse
       */
      Models::ListAnchorResponse listAnchor(const Models::ListAnchorRequest &request);

      /**
       * @summary 批量查询数字人项目启动结果
       *
       * @param tmpReq ListAvatarProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvatarProjectResponse
       */
      Models::ListAvatarProjectResponse listAvatarProjectWithOptions(const Models::ListAvatarProjectRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询数字人项目启动结果
       *
       * @param request ListAvatarProjectRequest
       * @return ListAvatarProjectResponse
       */
      Models::ListAvatarProjectResponse listAvatarProject(const Models::ListAvatarProjectRequest &request);

      /**
       * @summary 查询知识库
       *
       * @param request ListKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBaseResponse
       */
      Models::ListKnowledgeBaseResponse listKnowledgeBaseWithOptions(const Models::ListKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询知识库
       *
       * @param request ListKnowledgeBaseRequest
       * @return ListKnowledgeBaseResponse
       */
      Models::ListKnowledgeBaseResponse listKnowledgeBase(const Models::ListKnowledgeBaseRequest &request);

      /**
       * @summary 查询文案主题列表
       *
       * @param request ListTextThemesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextThemesResponse
       */
      Models::ListTextThemesResponse listTextThemesWithOptions(const Models::ListTextThemesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询文案主题列表
       *
       * @param request ListTextThemesRequest
       * @return ListTextThemesResponse
       */
      Models::ListTextThemesResponse listTextThemes(const Models::ListTextThemesRequest &request);

      /**
       * @summary 列举文案
       *
       * @param request ListTextsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextsResponse
       */
      Models::ListTextsResponse listTextsWithOptions(const Models::ListTextsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举文案
       *
       * @param request ListTextsRequest
       * @return ListTextsResponse
       */
      Models::ListTextsResponse listTexts(const Models::ListTextsRequest &request);

      /**
       * @summary 获取声音模版列表
       *
       * @param request ListVoiceModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVoiceModelsResponse
       */
      Models::ListVoiceModelsResponse listVoiceModelsWithOptions(const Models::ListVoiceModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取声音模版列表
       *
       * @param request ListVoiceModelsRequest
       * @return ListVoiceModelsResponse
       */
      Models::ListVoiceModelsResponse listVoiceModels(const Models::ListVoiceModelsRequest &request);

      /**
       * @summary 下线剧本
       *
       * @param request OfflineAICoachScriptRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineAICoachScriptResponse
       */
      Models::OfflineAICoachScriptResponse offlineAICoachScriptWithOptions(const Models::OfflineAICoachScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线剧本
       *
       * @param request OfflineAICoachScriptRequest
       * @return OfflineAICoachScriptResponse
       */
      Models::OfflineAICoachScriptResponse offlineAICoachScript(const Models::OfflineAICoachScriptRequest &request);

      /**
       * @summary 操作实时数字人项目
       *
       * @param request OperateAvatarProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAvatarProjectResponse
       */
      Models::OperateAvatarProjectResponse operateAvatarProjectWithOptions(const Models::OperateAvatarProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 操作实时数字人项目
       *
       * @param request OperateAvatarProjectRequest
       * @return OperateAvatarProjectResponse
       */
      Models::OperateAvatarProjectResponse operateAvatarProject(const Models::OperateAvatarProjectRequest &request);

      /**
       * @summary 查询数字人项目信息
       *
       * @param request QueryAvatarProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAvatarProjectResponse
       */
      Models::QueryAvatarProjectResponse queryAvatarProjectWithOptions(const Models::QueryAvatarProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数字人项目信息
       *
       * @param request QueryAvatarProjectRequest
       * @return QueryAvatarProjectResponse
       */
      Models::QueryAvatarProjectResponse queryAvatarProject(const Models::QueryAvatarProjectRequest &request);

      /**
       * @summary 查找资源
       *
       * @param request QueryAvatarResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAvatarResourceResponse
       */
      Models::QueryAvatarResourceResponse queryAvatarResourceWithOptions(const Models::QueryAvatarResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查找资源
       *
       * @param request QueryAvatarResourceRequest
       * @return QueryAvatarResourceResponse
       */
      Models::QueryAvatarResourceResponse queryAvatarResource(const Models::QueryAvatarResourceRequest &request);

      /**
       * @summary 查询图片转视频任务
       *
       * @param request QueryImageToVideoTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryImageToVideoTaskResponse
       */
      Models::QueryImageToVideoTaskResponse queryImageToVideoTaskWithOptions(const Models::QueryImageToVideoTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询图片转视频任务
       *
       * @param request QueryImageToVideoTaskRequest
       * @return QueryImageToVideoTaskResponse
       */
      Models::QueryImageToVideoTaskResponse queryImageToVideoTask(const Models::QueryImageToVideoTaskRequest &request);

      /**
       * @summary 查询个性化文案任务
       *
       * @param request QueryIndividuationTextTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryIndividuationTextTaskResponse
       */
      Models::QueryIndividuationTextTaskResponse queryIndividuationTextTaskWithOptions(const Models::QueryIndividuationTextTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询个性化文案任务
       *
       * @param request QueryIndividuationTextTaskRequest
       * @return QueryIndividuationTextTaskResponse
       */
      Models::QueryIndividuationTextTaskResponse queryIndividuationTextTask(const Models::QueryIndividuationTextTaskRequest &request);

      /**
       * @summary 查询会话信息
       *
       * @param tmpReq QuerySessionInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySessionInfoResponse
       */
      Models::QuerySessionInfoResponse querySessionInfoWithOptions(const Models::QuerySessionInfoRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询会话信息
       *
       * @param request QuerySessionInfoRequest
       * @return QuerySessionInfoResponse
       */
      Models::QuerySessionInfoResponse querySessionInfo(const Models::QuerySessionInfoRequest &request);

      /**
       * @summary 流式输出文案
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTextStreamResponse
       */
      FutureGenerator<Models::QueryTextStreamResponse> queryTextStreamWithSSE(const string &textId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 流式输出文案
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTextStreamResponse
       */
      Models::QueryTextStreamResponse queryTextStreamWithOptions(const string &textId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 流式输出文案
       *
       * @return QueryTextStreamResponse
       */
      Models::QueryTextStreamResponse queryTextStream(const string &textId);

      /**
       * @summary ReleaseAgent
       *
       * @param request ReleaseAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseAgentResponse
       */
      Models::ReleaseAgentResponse releaseAgentWithOptions(const Models::ReleaseAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ReleaseAgent
       *
       * @param request ReleaseAgentRequest
       * @return ReleaseAgentResponse
       */
      Models::ReleaseAgentResponse releaseAgent(const Models::ReleaseAgentRequest &request);

      /**
       * @summary 保存实时数字人项目
       *
       * @param request SaveAvatarProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveAvatarProjectResponse
       */
      Models::SaveAvatarProjectResponse saveAvatarProjectWithOptions(const Models::SaveAvatarProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存实时数字人项目
       *
       * @param request SaveAvatarProjectRequest
       * @return SaveAvatarProjectResponse
       */
      Models::SaveAvatarProjectResponse saveAvatarProject(const Models::SaveAvatarProjectRequest &request);

      /**
       * @summary 查询图片任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectImageTaskResponse
       */
      Models::SelectImageTaskResponse selectImageTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询图片任务
       *
       * @return SelectImageTaskResponse
       */
      Models::SelectImageTaskResponse selectImageTask(const string &taskId);

      /**
       * @summary 查询离线数字人剩余资源
       *
       * @param request SelectResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectResourceResponse
       */
      Models::SelectResourceResponse selectResourceWithOptions(const Models::SelectResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询离线数字人剩余资源
       *
       * @param request SelectResourceRequest
       * @return SelectResourceResponse
       */
      Models::SelectResourceResponse selectResource(const Models::SelectResourceRequest &request);

      /**
       * @summary 发送sdk消息
       *
       * @param request SendSdkMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendSdkMessageResponse
       */
      Models::SendSdkMessageResponse sendSdkMessageWithOptions(const Models::SendSdkMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送sdk消息
       *
       * @param request SendSdkMessageRequest
       * @return SendSdkMessageResponse
       */
      Models::SendSdkMessageResponse sendSdkMessage(const Models::SendSdkMessageRequest &request);

      /**
       * @summary 发送sdk流式消息
       *
       * @param request SendSdkStreamMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendSdkStreamMessageResponse
       */
      FutureGenerator<Models::SendSdkStreamMessageResponse> sendSdkStreamMessageWithSSE(const Models::SendSdkStreamMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送sdk流式消息
       *
       * @param request SendSdkStreamMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendSdkStreamMessageResponse
       */
      Models::SendSdkStreamMessageResponse sendSdkStreamMessageWithOptions(const Models::SendSdkStreamMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送sdk流式消息
       *
       * @param request SendSdkStreamMessageRequest
       * @return SendSdkStreamMessageResponse
       */
      Models::SendSdkStreamMessageResponse sendSdkStreamMessage(const Models::SendSdkStreamMessageRequest &request);

      /**
       * @summary 发送文本消息
       *
       * @param request SendTextMsgRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendTextMsgResponse
       */
      Models::SendTextMsgResponse sendTextMsgWithOptions(const Models::SendTextMsgRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送文本消息
       *
       * @param request SendTextMsgRequest
       * @return SendTextMsgResponse
       */
      Models::SendTextMsgResponse sendTextMsg(const Models::SendTextMsgRequest &request);

      /**
       * @summary 启动会话
       *
       * @param request StartAvatarSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAvatarSessionResponse
       */
      Models::StartAvatarSessionResponse startAvatarSessionWithOptions(const Models::StartAvatarSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动会话
       *
       * @param request StartAvatarSessionRequest
       * @return StartAvatarSessionResponse
       */
      Models::StartAvatarSessionResponse startAvatarSession(const Models::StartAvatarSessionRequest &request);

      /**
       * @summary 停止会话
       *
       * @param request StopAvatarSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAvatarSessionResponse
       */
      Models::StopAvatarSessionResponse stopAvatarSessionWithOptions(const Models::StopAvatarSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止会话
       *
       * @param request StopAvatarSessionRequest
       * @return StopAvatarSessionResponse
       */
      Models::StopAvatarSessionResponse stopAvatarSession(const Models::StopAvatarSessionRequest &request);

      /**
       * @summary 视频合成任务停止
       *
       * @param request StopProjectTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopProjectTaskResponse
       */
      Models::StopProjectTaskResponse stopProjectTaskWithOptions(const Models::StopProjectTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频合成任务停止
       *
       * @param request StopProjectTaskRequest
       * @return StopProjectTaskResponse
       */
      Models::StopProjectTaskResponse stopProjectTask(const Models::StopProjectTaskRequest &request);

      /**
       * @summary 提交图片转视频任务
       *
       * @param request SubmitImageToVideoTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImageToVideoTaskResponse
       */
      Models::SubmitImageToVideoTaskResponse submitImageToVideoTaskWithOptions(const Models::SubmitImageToVideoTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交图片转视频任务
       *
       * @param request SubmitImageToVideoTaskRequest
       * @return SubmitImageToVideoTaskResponse
       */
      Models::SubmitImageToVideoTaskResponse submitImageToVideoTask(const Models::SubmitImageToVideoTaskRequest &request);

      /**
       * @summary 提交离线数字人合成任务
       *
       * @param request SubmitProjectTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitProjectTaskResponse
       */
      Models::SubmitProjectTaskResponse submitProjectTaskWithOptions(const Models::SubmitProjectTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交离线数字人合成任务
       *
       * @param request SubmitProjectTaskRequest
       * @return SubmitProjectTaskResponse
       */
      Models::SubmitProjectTaskResponse submitProjectTask(const Models::SubmitProjectTaskRequest &request);

      /**
       * @summary 人像风格变化
       *
       * @param request TransferPortraitStyleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferPortraitStyleResponse
       */
      Models::TransferPortraitStyleResponse transferPortraitStyleWithOptions(const Models::TransferPortraitStyleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 人像风格变化
       *
       * @param request TransferPortraitStyleRequest
       * @return TransferPortraitStyleResponse
       */
      Models::TransferPortraitStyleResponse transferPortraitStyle(const Models::TransferPortraitStyleRequest &request);

      /**
       * @summary UpdateAgent
       *
       * @param request UpdateAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgentWithOptions(const Models::UpdateAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpdateAgent
       *
       * @param request UpdateAgentRequest
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgent(const Models::UpdateAgentRequest &request);
  };
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
