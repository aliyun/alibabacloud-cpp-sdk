// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AICONTENT20240611_HPP_
#define ALIBABACLOUD_AICONTENT20240611_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AiContent20240611Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AiContent20240611.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 拓展练问答对生成
       *
       * @param request AITeacherExpansionPracticeTaskGenerateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AITeacherExpansionPracticeTaskGenerateResponse
       */
      Models::AITeacherExpansionPracticeTaskGenerateResponse aITeacherExpansionPracticeTaskGenerateWithOptions(const Models::AITeacherExpansionPracticeTaskGenerateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拓展练问答对生成
       *
       * @param request AITeacherExpansionPracticeTaskGenerateRequest
       * @return AITeacherExpansionPracticeTaskGenerateResponse
       */
      Models::AITeacherExpansionPracticeTaskGenerateResponse aITeacherExpansionPracticeTaskGenerate(const Models::AITeacherExpansionPracticeTaskGenerateRequest &request);

      /**
       * @summary 同步基础练问答对生成
       *
       * @param request AITeacherSyncPracticeTaskGenerateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AITeacherSyncPracticeTaskGenerateResponse
       */
      Models::AITeacherSyncPracticeTaskGenerateResponse aITeacherSyncPracticeTaskGenerateWithOptions(const Models::AITeacherSyncPracticeTaskGenerateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步基础练问答对生成
       *
       * @param request AITeacherSyncPracticeTaskGenerateRequest
       * @return AITeacherSyncPracticeTaskGenerateResponse
       */
      Models::AITeacherSyncPracticeTaskGenerateResponse aITeacherSyncPracticeTaskGenerate(const Models::AITeacherSyncPracticeTaskGenerateRequest &request);

      /**
       * @summary 阿里云控制台/列出阿里云控制台上可使用的服务列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse
       */
      Models::AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse aliyunConsoleOpenApiQueryAliyunConsoleServcieListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 阿里云控制台/列出阿里云控制台上可使用的服务列表
       *
       * @return AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse
       */
      Models::AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse aliyunConsoleOpenApiQueryAliyunConsoleServcieList();

      /**
       * @summary 阿里云控制台/列出阿里云控制台上可使用的服务列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse
       */
      Models::AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse aliyunConsoleOpenApiQueryAliyunConsoleServiceListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 阿里云控制台/列出阿里云控制台上可使用的服务列表
       *
       * @return AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse
       */
      Models::AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse aliyunConsoleOpenApiQueryAliyunConsoleServiceList();

      /**
       * @summary 阿里云控制台/列出购买过的资源列表
       *
       * @param request AliyunConsoleOpenApiQueryPaidResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AliyunConsoleOpenApiQueryPaidResourceResponse
       */
      Models::AliyunConsoleOpenApiQueryPaidResourceResponse aliyunConsoleOpenApiQueryPaidResourceWithOptions(const Models::AliyunConsoleOpenApiQueryPaidResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 阿里云控制台/列出购买过的资源列表
       *
       * @param request AliyunConsoleOpenApiQueryPaidResourceRequest
       * @return AliyunConsoleOpenApiQueryPaidResourceResponse
       */
      Models::AliyunConsoleOpenApiQueryPaidResourceResponse aliyunConsoleOpenApiQueryPaidResource(const Models::AliyunConsoleOpenApiQueryPaidResourceRequest &request);

      /**
       * @summary 智能批改/口语评测/统计/调用量
       *
       * @param request CountOralEvaluationStatisticsCallsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CountOralEvaluationStatisticsCallsResponse
       */
      Models::CountOralEvaluationStatisticsCallsResponse countOralEvaluationStatisticsCallsWithOptions(const Models::CountOralEvaluationStatisticsCallsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能批改/口语评测/统计/调用量
       *
       * @param request CountOralEvaluationStatisticsCallsRequest
       * @return CountOralEvaluationStatisticsCallsResponse
       */
      Models::CountOralEvaluationStatisticsCallsResponse countOralEvaluationStatisticsCalls(const Models::CountOralEvaluationStatisticsCallsRequest &request);

      /**
       * @summary 智能批改/口语评测/统计/并发数
       *
       * @param request CountOralEvaluationStatisticsConcurrentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CountOralEvaluationStatisticsConcurrentResponse
       */
      Models::CountOralEvaluationStatisticsConcurrentResponse countOralEvaluationStatisticsConcurrentWithOptions(const Models::CountOralEvaluationStatisticsConcurrentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能批改/口语评测/统计/并发数
       *
       * @param request CountOralEvaluationStatisticsConcurrentRequest
       * @return CountOralEvaluationStatisticsConcurrentResponse
       */
      Models::CountOralEvaluationStatisticsConcurrentResponse countOralEvaluationStatisticsConcurrent(const Models::CountOralEvaluationStatisticsConcurrentRequest &request);

      /**
       * @summary 智能批改/口语评测/统计/调用错误
       *
       * @param request CountOralEvaluationStatisticsErrorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CountOralEvaluationStatisticsErrorResponse
       */
      Models::CountOralEvaluationStatisticsErrorResponse countOralEvaluationStatisticsErrorWithOptions(const Models::CountOralEvaluationStatisticsErrorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能批改/口语评测/统计/调用错误
       *
       * @param request CountOralEvaluationStatisticsErrorRequest
       * @return CountOralEvaluationStatisticsErrorResponse
       */
      Models::CountOralEvaluationStatisticsErrorResponse countOralEvaluationStatisticsError(const Models::CountOralEvaluationStatisticsErrorRequest &request);

      /**
       * @summary 阿里云控制台/授权凭证创建
       *
       * @param request CreateAccessWarrantRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessWarrantResponse
       */
      Models::CreateAccessWarrantResponse createAccessWarrantWithOptions(const Models::CreateAccessWarrantRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 阿里云控制台/授权凭证创建
       *
       * @param request CreateAccessWarrantRequest
       * @return CreateAccessWarrantResponse
       */
      Models::CreateAccessWarrantResponse createAccessWarrant(const Models::CreateAccessWarrantRequest &request);

      /**
       * @summary 阿里云控制台/创建项目
       *
       * @param request CreateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 阿里云控制台/创建项目
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary 中文作文辅导
       *
       * @param request ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse
       */
      FutureGenerator<Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse> executeAITeacherChineseCompositionTutoringWorkflowRunWithSSE(const Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 中文作文辅导
       *
       * @param request ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse
       */
      Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse executeAITeacherChineseCompositionTutoringWorkflowRunWithOptions(const Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 中文作文辅导
       *
       * @param request ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest
       * @return ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse
       */
      Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse executeAITeacherChineseCompositionTutoringWorkflowRun(const Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest &request);

      /**
       * @summary 英语作文辅导
       *
       * @param request ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse
       */
      FutureGenerator<Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse> executeAITeacherEnglishCompositionTutoringWorkflowRunWithSSE(const Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 英语作文辅导
       *
       * @param request ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse
       */
      Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse executeAITeacherEnglishCompositionTutoringWorkflowRunWithOptions(const Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 英语作文辅导
       *
       * @param request ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest
       * @return ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse
       */
      Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse executeAITeacherEnglishCompositionTutoringWorkflowRun(const Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &request);

      /**
       * @summary 英文释义
       *
       * @param request ExecuteAITeacherEnglishParaphraseChatMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherEnglishParaphraseChatMessageResponse
       */
      FutureGenerator<Models::ExecuteAITeacherEnglishParaphraseChatMessageResponse> executeAITeacherEnglishParaphraseChatMessageWithSSE(const Models::ExecuteAITeacherEnglishParaphraseChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 英文释义
       *
       * @param request ExecuteAITeacherEnglishParaphraseChatMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherEnglishParaphraseChatMessageResponse
       */
      Models::ExecuteAITeacherEnglishParaphraseChatMessageResponse executeAITeacherEnglishParaphraseChatMessageWithOptions(const Models::ExecuteAITeacherEnglishParaphraseChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 英文释义
       *
       * @param request ExecuteAITeacherEnglishParaphraseChatMessageRequest
       * @return ExecuteAITeacherEnglishParaphraseChatMessageResponse
       */
      Models::ExecuteAITeacherEnglishParaphraseChatMessageResponse executeAITeacherEnglishParaphraseChatMessage(const Models::ExecuteAITeacherEnglishParaphraseChatMessageRequest &request);

      /**
       * @summary 进行拓展练对话
       *
       * @param request ExecuteAITeacherExpansionDialogueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherExpansionDialogueResponse
       */
      Models::ExecuteAITeacherExpansionDialogueResponse executeAITeacherExpansionDialogueWithOptions(const Models::ExecuteAITeacherExpansionDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 进行拓展练对话
       *
       * @param request ExecuteAITeacherExpansionDialogueRequest
       * @return ExecuteAITeacherExpansionDialogueResponse
       */
      Models::ExecuteAITeacherExpansionDialogueResponse executeAITeacherExpansionDialogue(const Models::ExecuteAITeacherExpansionDialogueRequest &request);

      /**
       * @summary 拓展练根据上下文进行润色
       *
       * @param request ExecuteAITeacherExpansionDialogueRefineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherExpansionDialogueRefineResponse
       */
      Models::ExecuteAITeacherExpansionDialogueRefineResponse executeAITeacherExpansionDialogueRefineWithOptions(const Models::ExecuteAITeacherExpansionDialogueRefineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拓展练根据上下文进行润色
       *
       * @param request ExecuteAITeacherExpansionDialogueRefineRequest
       * @return ExecuteAITeacherExpansionDialogueRefineResponse
       */
      Models::ExecuteAITeacherExpansionDialogueRefineResponse executeAITeacherExpansionDialogueRefine(const Models::ExecuteAITeacherExpansionDialogueRefineRequest &request);

      /**
       * @summary 拓展练语境翻译
       *
       * @param request ExecuteAITeacherExpansionDialogueTranslateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherExpansionDialogueTranslateResponse
       */
      Models::ExecuteAITeacherExpansionDialogueTranslateResponse executeAITeacherExpansionDialogueTranslateWithOptions(const Models::ExecuteAITeacherExpansionDialogueTranslateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拓展练语境翻译
       *
       * @param request ExecuteAITeacherExpansionDialogueTranslateRequest
       * @return ExecuteAITeacherExpansionDialogueTranslateResponse
       */
      Models::ExecuteAITeacherExpansionDialogueTranslateResponse executeAITeacherExpansionDialogueTranslate(const Models::ExecuteAITeacherExpansionDialogueTranslateRequest &request);

      /**
       * @summary 语法检测
       *
       * @param request ExecuteAITeacherGrammarCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherGrammarCheckResponse
       */
      Models::ExecuteAITeacherGrammarCheckResponse executeAITeacherGrammarCheckWithOptions(const Models::ExecuteAITeacherGrammarCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 语法检测
       *
       * @param request ExecuteAITeacherGrammarCheckRequest
       * @return ExecuteAITeacherGrammarCheckResponse
       */
      Models::ExecuteAITeacherGrammarCheckResponse executeAITeacherGrammarCheck(const Models::ExecuteAITeacherGrammarCheckRequest &request);

      /**
       * @summary 进行同步练对话
       *
       * @param request ExecuteAITeacherSyncDialogueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherSyncDialogueResponse
       */
      Models::ExecuteAITeacherSyncDialogueResponse executeAITeacherSyncDialogueWithOptions(const Models::ExecuteAITeacherSyncDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 进行同步练对话
       *
       * @param request ExecuteAITeacherSyncDialogueRequest
       * @return ExecuteAITeacherSyncDialogueResponse
       */
      Models::ExecuteAITeacherSyncDialogueResponse executeAITeacherSyncDialogue(const Models::ExecuteAITeacherSyncDialogueRequest &request);

      /**
       * @summary 同步练语境翻译
       *
       * @param request ExecuteAITeacherSyncDialogueTranslateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherSyncDialogueTranslateResponse
       */
      Models::ExecuteAITeacherSyncDialogueTranslateResponse executeAITeacherSyncDialogueTranslateWithOptions(const Models::ExecuteAITeacherSyncDialogueTranslateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步练语境翻译
       *
       * @param request ExecuteAITeacherSyncDialogueTranslateRequest
       * @return ExecuteAITeacherSyncDialogueTranslateResponse
       */
      Models::ExecuteAITeacherSyncDialogueTranslateResponse executeAITeacherSyncDialogueTranslate(const Models::ExecuteAITeacherSyncDialogueTranslateRequest &request);

      /**
       * @summary 进行AI对话
       *
       * @param request ExecuteTextbookAssistantDialogueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantDialogueResponse
       */
      Models::ExecuteTextbookAssistantDialogueResponse executeTextbookAssistantDialogueWithOptions(const Models::ExecuteTextbookAssistantDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 进行AI对话
       *
       * @param request ExecuteTextbookAssistantDialogueRequest
       * @return ExecuteTextbookAssistantDialogueResponse
       */
      Models::ExecuteTextbookAssistantDialogueResponse executeTextbookAssistantDialogue(const Models::ExecuteTextbookAssistantDialogueRequest &request);

      /**
       * @summary 调整难度
       *
       * @param request ExecuteTextbookAssistantDifficultyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantDifficultyResponse
       */
      Models::ExecuteTextbookAssistantDifficultyResponse executeTextbookAssistantDifficultyWithOptions(const Models::ExecuteTextbookAssistantDifficultyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调整难度
       *
       * @param request ExecuteTextbookAssistantDifficultyRequest
       * @return ExecuteTextbookAssistantDifficultyResponse
       */
      Models::ExecuteTextbookAssistantDifficultyResponse executeTextbookAssistantDifficulty(const Models::ExecuteTextbookAssistantDifficultyRequest &request);

      /**
       * @summary 语法检测
       *
       * @param request ExecuteTextbookAssistantGrammarCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantGrammarCheckResponse
       */
      Models::ExecuteTextbookAssistantGrammarCheckResponse executeTextbookAssistantGrammarCheckWithOptions(const Models::ExecuteTextbookAssistantGrammarCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 语法检测
       *
       * @param request ExecuteTextbookAssistantGrammarCheckRequest
       * @return ExecuteTextbookAssistantGrammarCheckResponse
       */
      Models::ExecuteTextbookAssistantGrammarCheckResponse executeTextbookAssistantGrammarCheck(const Models::ExecuteTextbookAssistantGrammarCheckRequest &request);

      /**
       * @summary 句子润色
       *
       * @param request ExecuteTextbookAssistantRefineByContextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantRefineByContextResponse
       */
      Models::ExecuteTextbookAssistantRefineByContextResponse executeTextbookAssistantRefineByContextWithOptions(const Models::ExecuteTextbookAssistantRefineByContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 句子润色
       *
       * @param request ExecuteTextbookAssistantRefineByContextRequest
       * @return ExecuteTextbookAssistantRefineByContextResponse
       */
      Models::ExecuteTextbookAssistantRefineByContextResponse executeTextbookAssistantRefineByContext(const Models::ExecuteTextbookAssistantRefineByContextRequest &request);

      /**
       * @summary 对话重试
       *
       * @param request ExecuteTextbookAssistantRetryConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantRetryConversationResponse
       */
      Models::ExecuteTextbookAssistantRetryConversationResponse executeTextbookAssistantRetryConversationWithOptions(const Models::ExecuteTextbookAssistantRetryConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对话重试
       *
       * @param request ExecuteTextbookAssistantRetryConversationRequest
       * @return ExecuteTextbookAssistantRetryConversationResponse
       */
      Models::ExecuteTextbookAssistantRetryConversationResponse executeTextbookAssistantRetryConversation(const Models::ExecuteTextbookAssistantRetryConversationRequest &request);

      /**
       * @summary 进行对话-流式输出
       *
       * @param request ExecuteTextbookAssistantSseDialogueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantSseDialogueResponse
       */
      FutureGenerator<Models::ExecuteTextbookAssistantSseDialogueResponse> executeTextbookAssistantSseDialogueWithSSE(const Models::ExecuteTextbookAssistantSseDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 进行对话-流式输出
       *
       * @param request ExecuteTextbookAssistantSseDialogueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantSseDialogueResponse
       */
      Models::ExecuteTextbookAssistantSseDialogueResponse executeTextbookAssistantSseDialogueWithOptions(const Models::ExecuteTextbookAssistantSseDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 进行对话-流式输出
       *
       * @param request ExecuteTextbookAssistantSseDialogueRequest
       * @return ExecuteTextbookAssistantSseDialogueResponse
       */
      Models::ExecuteTextbookAssistantSseDialogueResponse executeTextbookAssistantSseDialogue(const Models::ExecuteTextbookAssistantSseDialogueRequest &request);

      /**
       * @summary 开启自由对话
       *
       * @param request ExecuteTextbookAssistantStartConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantStartConversationResponse
       */
      Models::ExecuteTextbookAssistantStartConversationResponse executeTextbookAssistantStartConversationWithOptions(const Models::ExecuteTextbookAssistantStartConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启自由对话
       *
       * @param request ExecuteTextbookAssistantStartConversationRequest
       * @return ExecuteTextbookAssistantStartConversationResponse
       */
      Models::ExecuteTextbookAssistantStartConversationResponse executeTextbookAssistantStartConversation(const Models::ExecuteTextbookAssistantStartConversationRequest &request);

      /**
       * @summary 获取鉴权参数
       *
       * @param request ExecuteTextbookAssistantSuggestionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantSuggestionResponse
       */
      Models::ExecuteTextbookAssistantSuggestionResponse executeTextbookAssistantSuggestionWithOptions(const Models::ExecuteTextbookAssistantSuggestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取鉴权参数
       *
       * @param request ExecuteTextbookAssistantSuggestionRequest
       * @return ExecuteTextbookAssistantSuggestionResponse
       */
      Models::ExecuteTextbookAssistantSuggestionResponse executeTextbookAssistantSuggestion(const Models::ExecuteTextbookAssistantSuggestionRequest &request);

      /**
       * @summary 翻译消息内容
       *
       * @param request ExecuteTextbookAssistantTranslateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantTranslateResponse
       */
      Models::ExecuteTextbookAssistantTranslateResponse executeTextbookAssistantTranslateWithOptions(const Models::ExecuteTextbookAssistantTranslateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 翻译消息内容
       *
       * @param request ExecuteTextbookAssistantTranslateRequest
       * @return ExecuteTextbookAssistantTranslateResponse
       */
      Models::ExecuteTextbookAssistantTranslateResponse executeTextbookAssistantTranslate(const Models::ExecuteTextbookAssistantTranslateRequest &request);

      /**
       * @summary 拓展练小助手
       *
       * @param request GetAITeacherExpansionDialogueSuggestionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAITeacherExpansionDialogueSuggestionResponse
       */
      Models::GetAITeacherExpansionDialogueSuggestionResponse getAITeacherExpansionDialogueSuggestionWithOptions(const Models::GetAITeacherExpansionDialogueSuggestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 拓展练小助手
       *
       * @param request GetAITeacherExpansionDialogueSuggestionRequest
       * @return GetAITeacherExpansionDialogueSuggestionResponse
       */
      Models::GetAITeacherExpansionDialogueSuggestionResponse getAITeacherExpansionDialogueSuggestion(const Models::GetAITeacherExpansionDialogueSuggestionRequest &request);

      /**
       * @summary 同步练小助手
       *
       * @param request GetAITeacherSyncDialogueSuggestionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAITeacherSyncDialogueSuggestionResponse
       */
      Models::GetAITeacherSyncDialogueSuggestionResponse getAITeacherSyncDialogueSuggestionWithOptions(const Models::GetAITeacherSyncDialogueSuggestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步练小助手
       *
       * @param request GetAITeacherSyncDialogueSuggestionRequest
       * @return GetAITeacherSyncDialogueSuggestionResponse
       */
      Models::GetAITeacherSyncDialogueSuggestionResponse getAITeacherSyncDialogueSuggestion(const Models::GetAITeacherSyncDialogueSuggestionRequest &request);

      /**
       * @summary 获取请求鉴权参数
       *
       * @param request GetTextbookAssistantTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTextbookAssistantTokenResponse
       */
      Models::GetTextbookAssistantTokenResponse getTextbookAssistantTokenWithOptions(const Models::GetTextbookAssistantTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取请求鉴权参数
       *
       * @param request GetTextbookAssistantTokenRequest
       * @return GetTextbookAssistantTokenResponse
       */
      Models::GetTextbookAssistantTokenResponse getTextbookAssistantToken(const Models::GetTextbookAssistantTokenRequest &request);

      /**
       * @summary 批量获取文章详情
       *
       * @param request ListTextbookAssistantArticleDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantArticleDetailsResponse
       */
      Models::ListTextbookAssistantArticleDetailsResponse listTextbookAssistantArticleDetailsWithOptions(const Models::ListTextbookAssistantArticleDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取文章详情
       *
       * @param request ListTextbookAssistantArticleDetailsRequest
       * @return ListTextbookAssistantArticleDetailsResponse
       */
      Models::ListTextbookAssistantArticleDetailsResponse listTextbookAssistantArticleDetails(const Models::ListTextbookAssistantArticleDetailsRequest &request);

      /**
       * @summary 获取文章列表
       *
       * @param request ListTextbookAssistantArticlesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantArticlesResponse
       */
      Models::ListTextbookAssistantArticlesResponse listTextbookAssistantArticlesWithOptions(const Models::ListTextbookAssistantArticlesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文章列表
       *
       * @param request ListTextbookAssistantArticlesRequest
       * @return ListTextbookAssistantArticlesResponse
       */
      Models::ListTextbookAssistantArticlesResponse listTextbookAssistantArticles(const Models::ListTextbookAssistantArticlesRequest &request);

      /**
       * @summary 获取书本下的目录信息
       *
       * @param request ListTextbookAssistantBookDirectoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantBookDirectoriesResponse
       */
      Models::ListTextbookAssistantBookDirectoriesResponse listTextbookAssistantBookDirectoriesWithOptions(const Models::ListTextbookAssistantBookDirectoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取书本下的目录信息
       *
       * @param request ListTextbookAssistantBookDirectoriesRequest
       * @return ListTextbookAssistantBookDirectoriesResponse
       */
      Models::ListTextbookAssistantBookDirectoriesResponse listTextbookAssistantBookDirectories(const Models::ListTextbookAssistantBookDirectoriesRequest &request);

      /**
       * @summary 获取包含年级下的书本列表
       *
       * @param request ListTextbookAssistantBooksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantBooksResponse
       */
      Models::ListTextbookAssistantBooksResponse listTextbookAssistantBooksWithOptions(const Models::ListTextbookAssistantBooksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取包含年级下的书本列表
       *
       * @param request ListTextbookAssistantBooksRequest
       * @return ListTextbookAssistantBooksResponse
       */
      Models::ListTextbookAssistantBooksResponse listTextbookAssistantBooks(const Models::ListTextbookAssistantBooksRequest &request);

      /**
       * @summary 获取有资源的年级信息
       *
       * @param request ListTextbookAssistantGradeVolumesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantGradeVolumesResponse
       */
      Models::ListTextbookAssistantGradeVolumesResponse listTextbookAssistantGradeVolumesWithOptions(const Models::ListTextbookAssistantGradeVolumesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取有资源的年级信息
       *
       * @param request ListTextbookAssistantGradeVolumesRequest
       * @return ListTextbookAssistantGradeVolumesResponse
       */
      Models::ListTextbookAssistantGradeVolumesResponse listTextbookAssistantGradeVolumes(const Models::ListTextbookAssistantGradeVolumesRequest &request);

      /**
       * @summary 获取文章内容详情
       *
       * @param request ListTextbookAssistantSceneDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantSceneDetailsResponse
       */
      Models::ListTextbookAssistantSceneDetailsResponse listTextbookAssistantSceneDetailsWithOptions(const Models::ListTextbookAssistantSceneDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文章内容详情
       *
       * @param request ListTextbookAssistantSceneDetailsRequest
       * @return ListTextbookAssistantSceneDetailsResponse
       */
      Models::ListTextbookAssistantSceneDetailsResponse listTextbookAssistantSceneDetails(const Models::ListTextbookAssistantSceneDetailsRequest &request);

      /**
       * @summary 聊天/聊天接口
       *
       * @param request ModelRouterChatCompletionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterChatCompletionsResponse
       */
      FutureGenerator<Models::ModelRouterChatCompletionsResponse> modelRouterChatCompletionsWithSSE(const Models::ModelRouterChatCompletionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 聊天/聊天接口
       *
       * @param request ModelRouterChatCompletionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterChatCompletionsResponse
       */
      Models::ModelRouterChatCompletionsResponse modelRouterChatCompletionsWithOptions(const Models::ModelRouterChatCompletionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 聊天/聊天接口
       *
       * @param request ModelRouterChatCompletionsRequest
       * @return ModelRouterChatCompletionsResponse
       */
      Models::ModelRouterChatCompletionsResponse modelRouterChatCompletions(const Models::ModelRouterChatCompletionsRequest &request);

      /**
       * @summary API密钥管理/复制API密钥
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCopyApiKeyResponse
       */
      Models::ModelRouterCopyApiKeyResponse modelRouterCopyApiKeyWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API密钥管理/复制API密钥
       *
       * @return ModelRouterCopyApiKeyResponse
       */
      Models::ModelRouterCopyApiKeyResponse modelRouterCopyApiKey(const string &id);

      /**
       * @summary API密钥管理/创建API密钥
       *
       * @param request ModelRouterCreateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCreateApiKeyResponse
       */
      Models::ModelRouterCreateApiKeyResponse modelRouterCreateApiKeyWithOptions(const Models::ModelRouterCreateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API密钥管理/创建API密钥
       *
       * @param request ModelRouterCreateApiKeyRequest
       * @return ModelRouterCreateApiKeyResponse
       */
      Models::ModelRouterCreateApiKeyResponse modelRouterCreateApiKey(const Models::ModelRouterCreateApiKeyRequest &request);

      /**
       * @summary 客户管理/创建客户
       *
       * @param request ModelRouterCreateClientRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCreateClientResponse
       */
      Models::ModelRouterCreateClientResponse modelRouterCreateClientWithOptions(const Models::ModelRouterCreateClientRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户管理/创建客户
       *
       * @param request ModelRouterCreateClientRequest
       * @return ModelRouterCreateClientResponse
       */
      Models::ModelRouterCreateClientResponse modelRouterCreateClient(const Models::ModelRouterCreateClientRequest &request);

      /**
       * @summary 对话管理/新建对话
       *
       * @param request ModelRouterCreateConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCreateConversationResponse
       */
      Models::ModelRouterCreateConversationResponse modelRouterCreateConversationWithOptions(const Models::ModelRouterCreateConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对话管理/新建对话
       *
       * @param request ModelRouterCreateConversationRequest
       * @return ModelRouterCreateConversationResponse
       */
      Models::ModelRouterCreateConversationResponse modelRouterCreateConversation(const Models::ModelRouterCreateConversationRequest &request);

      /**
       * @summary 模型管理/创建模型
       *
       * @param request ModelRouterCreateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCreateModelResponse
       */
      Models::ModelRouterCreateModelResponse modelRouterCreateModelWithOptions(const Models::ModelRouterCreateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模型管理/创建模型
       *
       * @param request ModelRouterCreateModelRequest
       * @return ModelRouterCreateModelResponse
       */
      Models::ModelRouterCreateModelResponse modelRouterCreateModel(const Models::ModelRouterCreateModelRequest &request);

      /**
       * @summary API密钥管理/删除API密钥
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterDeleteApiKeyResponse
       */
      Models::ModelRouterDeleteApiKeyResponse modelRouterDeleteApiKeyWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API密钥管理/删除API密钥
       *
       * @return ModelRouterDeleteApiKeyResponse
       */
      Models::ModelRouterDeleteApiKeyResponse modelRouterDeleteApiKey(const string &id);

      /**
       * @summary 客户管理/删除客户
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterDeleteClientResponse
       */
      Models::ModelRouterDeleteClientResponse modelRouterDeleteClientWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户管理/删除客户
       *
       * @return ModelRouterDeleteClientResponse
       */
      Models::ModelRouterDeleteClientResponse modelRouterDeleteClient(const string &id);

      /**
       * @summary 对话管理/删除对话
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterDeleteConversationResponse
       */
      Models::ModelRouterDeleteConversationResponse modelRouterDeleteConversationWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对话管理/删除对话
       *
       * @return ModelRouterDeleteConversationResponse
       */
      Models::ModelRouterDeleteConversationResponse modelRouterDeleteConversation(const string &id);

      /**
       * @summary 模型管理/删除模型
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterDeleteModelResponse
       */
      Models::ModelRouterDeleteModelResponse modelRouterDeleteModelWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模型管理/删除模型
       *
       * @return ModelRouterDeleteModelResponse
       */
      Models::ModelRouterDeleteModelResponse modelRouterDeleteModel(const string &id);

      /**
       * @summary API密钥管理/获取API密钥详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryApiKeyResponse
       */
      Models::ModelRouterQueryApiKeyResponse modelRouterQueryApiKeyWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API密钥管理/获取API密钥详情
       *
       * @return ModelRouterQueryApiKeyResponse
       */
      Models::ModelRouterQueryApiKeyResponse modelRouterQueryApiKey(const string &id);

      /**
       * @summary API密钥管理/获取API密钥列表
       *
       * @param request ModelRouterQueryApiKeyListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryApiKeyListResponse
       */
      Models::ModelRouterQueryApiKeyListResponse modelRouterQueryApiKeyListWithOptions(const Models::ModelRouterQueryApiKeyListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API密钥管理/获取API密钥列表
       *
       * @param request ModelRouterQueryApiKeyListRequest
       * @return ModelRouterQueryApiKeyListResponse
       */
      Models::ModelRouterQueryApiKeyListResponse modelRouterQueryApiKeyList(const Models::ModelRouterQueryApiKeyListRequest &request);

      /**
       * @summary 客户管理/获取客户列表
       *
       * @param request ModelRouterQueryClientListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryClientListResponse
       */
      Models::ModelRouterQueryClientListResponse modelRouterQueryClientListWithOptions(const Models::ModelRouterQueryClientListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户管理/获取客户列表
       *
       * @param request ModelRouterQueryClientListRequest
       * @return ModelRouterQueryClientListResponse
       */
      Models::ModelRouterQueryClientListResponse modelRouterQueryClientList(const Models::ModelRouterQueryClientListRequest &request);

      /**
       * @summary 对话管理/获取对话详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryConversationResponse
       */
      Models::ModelRouterQueryConversationResponse modelRouterQueryConversationWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对话管理/获取对话详情
       *
       * @return ModelRouterQueryConversationResponse
       */
      Models::ModelRouterQueryConversationResponse modelRouterQueryConversation(const string &id);

      /**
       * @summary 对话管理/获取对话列表
       *
       * @param request ModelRouterQueryConversationListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryConversationListResponse
       */
      Models::ModelRouterQueryConversationListResponse modelRouterQueryConversationListWithOptions(const Models::ModelRouterQueryConversationListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对话管理/获取对话列表
       *
       * @param request ModelRouterQueryConversationListRequest
       * @return ModelRouterQueryConversationListResponse
       */
      Models::ModelRouterQueryConversationListResponse modelRouterQueryConversationList(const Models::ModelRouterQueryConversationListRequest &request);

      /**
       * @summary 模型管理/获取模型详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryModelResponse
       */
      Models::ModelRouterQueryModelResponse modelRouterQueryModelWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模型管理/获取模型详情
       *
       * @return ModelRouterQueryModelResponse
       */
      Models::ModelRouterQueryModelResponse modelRouterQueryModel(const string &id);

      /**
       * @summary 模型管理/获取模型列表
       *
       * @param request ModelRouterQueryModelListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryModelListResponse
       */
      Models::ModelRouterQueryModelListResponse modelRouterQueryModelListWithOptions(const Models::ModelRouterQueryModelListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模型管理/获取模型列表
       *
       * @param request ModelRouterQueryModelListRequest
       * @return ModelRouterQueryModelListResponse
       */
      Models::ModelRouterQueryModelListResponse modelRouterQueryModelList(const Models::ModelRouterQueryModelListRequest &request);

      /**
       * @summary Nacos配置/获取Nacos服务提供者列表
       *
       * @param request ModelRouterQueryNacosProvidersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryNacosProvidersResponse
       */
      Models::ModelRouterQueryNacosProvidersResponse modelRouterQueryNacosProvidersWithOptions(const Models::ModelRouterQueryNacosProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Nacos配置/获取Nacos服务提供者列表
       *
       * @param request ModelRouterQueryNacosProvidersRequest
       * @return ModelRouterQueryNacosProvidersResponse
       */
      Models::ModelRouterQueryNacosProvidersResponse modelRouterQueryNacosProviders(const Models::ModelRouterQueryNacosProvidersRequest &request);

      /**
       * @summary Nacos配置/获取Nacos标签列表
       *
       * @param request ModelRouterQueryNacosTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryNacosTagsResponse
       */
      Models::ModelRouterQueryNacosTagsResponse modelRouterQueryNacosTagsWithOptions(const Models::ModelRouterQueryNacosTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Nacos配置/获取Nacos标签列表
       *
       * @param request ModelRouterQueryNacosTagsRequest
       * @return ModelRouterQueryNacosTagsResponse
       */
      Models::ModelRouterQueryNacosTagsResponse modelRouterQueryNacosTags(const Models::ModelRouterQueryNacosTagsRequest &request);

      /**
       * @summary 模型观测/获取观测图表数据
       *
       * @param request ModelRouterQueryObservationChartsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryObservationChartsResponse
       */
      Models::ModelRouterQueryObservationChartsResponse modelRouterQueryObservationChartsWithOptions(const Models::ModelRouterQueryObservationChartsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模型观测/获取观测图表数据
       *
       * @param request ModelRouterQueryObservationChartsRequest
       * @return ModelRouterQueryObservationChartsResponse
       */
      Models::ModelRouterQueryObservationChartsResponse modelRouterQueryObservationCharts(const Models::ModelRouterQueryObservationChartsRequest &request);

      /**
       * @summary 模型观测/获取观测日志列表
       *
       * @param request ModelRouterQueryObservationLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryObservationLogsResponse
       */
      Models::ModelRouterQueryObservationLogsResponse modelRouterQueryObservationLogsWithOptions(const Models::ModelRouterQueryObservationLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模型观测/获取观测日志列表
       *
       * @param request ModelRouterQueryObservationLogsRequest
       * @return ModelRouterQueryObservationLogsResponse
       */
      Models::ModelRouterQueryObservationLogsResponse modelRouterQueryObservationLogs(const Models::ModelRouterQueryObservationLogsRequest &request);

      /**
       * @summary 模型观测/获取观测指标数据
       *
       * @param request ModelRouterQueryObservationMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryObservationMetricsResponse
       */
      Models::ModelRouterQueryObservationMetricsResponse modelRouterQueryObservationMetricsWithOptions(const Models::ModelRouterQueryObservationMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模型观测/获取观测指标数据
       *
       * @param request ModelRouterQueryObservationMetricsRequest
       * @return ModelRouterQueryObservationMetricsResponse
       */
      Models::ModelRouterQueryObservationMetricsResponse modelRouterQueryObservationMetrics(const Models::ModelRouterQueryObservationMetricsRequest &request);

      /**
       * @summary 客户管理/更新客户
       *
       * @param request ModelRouterUpdateClientRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterUpdateClientResponse
       */
      Models::ModelRouterUpdateClientResponse modelRouterUpdateClientWithOptions(const string &id, const Models::ModelRouterUpdateClientRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户管理/更新客户
       *
       * @param request ModelRouterUpdateClientRequest
       * @return ModelRouterUpdateClientResponse
       */
      Models::ModelRouterUpdateClientResponse modelRouterUpdateClient(const string &id, const Models::ModelRouterUpdateClientRequest &request);

      /**
       * @summary 对话管理/更新对话
       *
       * @param request ModelRouterUpdateConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterUpdateConversationResponse
       */
      Models::ModelRouterUpdateConversationResponse modelRouterUpdateConversationWithOptions(const string &id, const Models::ModelRouterUpdateConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对话管理/更新对话
       *
       * @param request ModelRouterUpdateConversationRequest
       * @return ModelRouterUpdateConversationResponse
       */
      Models::ModelRouterUpdateConversationResponse modelRouterUpdateConversation(const string &id, const Models::ModelRouterUpdateConversationRequest &request);

      /**
       * @summary 模型管理/更新模型
       *
       * @param request ModelRouterUpdateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterUpdateModelResponse
       */
      Models::ModelRouterUpdateModelResponse modelRouterUpdateModelWithOptions(const string &id, const Models::ModelRouterUpdateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 模型管理/更新模型
       *
       * @param request ModelRouterUpdateModelRequest
       * @return ModelRouterUpdateModelResponse
       */
      Models::ModelRouterUpdateModelResponse modelRouterUpdateModel(const string &id, const Models::ModelRouterUpdateModelRequest &request);

      /**
       * @summary 个性化文生图/基于一个预训练模型创建图片推理任务
       *
       * @param request PersonalizedTextToImageAddInferenceJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PersonalizedTextToImageAddInferenceJobResponse
       */
      Models::PersonalizedTextToImageAddInferenceJobResponse personalizedTextToImageAddInferenceJobWithOptions(const Models::PersonalizedTextToImageAddInferenceJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 个性化文生图/基于一个预训练模型创建图片推理任务
       *
       * @param request PersonalizedTextToImageAddInferenceJobRequest
       * @return PersonalizedTextToImageAddInferenceJobResponse
       */
      Models::PersonalizedTextToImageAddInferenceJobResponse personalizedTextToImageAddInferenceJob(const Models::PersonalizedTextToImageAddInferenceJobRequest &request);

      /**
       * @summary 个性化文生图/通过唯一的图片编号获取图片内容
       *
       * @param request PersonalizedTextToImageQueryImageAssetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PersonalizedTextToImageQueryImageAssetResponse
       */
      Models::PersonalizedTextToImageQueryImageAssetResponse personalizedTextToImageQueryImageAssetWithOptions(const Models::PersonalizedTextToImageQueryImageAssetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 个性化文生图/通过唯一的图片编号获取图片内容
       *
       * @param request PersonalizedTextToImageQueryImageAssetRequest
       * @return PersonalizedTextToImageQueryImageAssetResponse
       */
      Models::PersonalizedTextToImageQueryImageAssetResponse personalizedTextToImageQueryImageAsset(const Models::PersonalizedTextToImageQueryImageAssetRequest &request);

      /**
       * @summary 个性化文生图/查询预制模型推理任务的状态
       *
       * @param request PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse
       */
      Models::PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse personalizedTextToImageQueryPreModelInferenceJobInfoWithOptions(const Models::PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 个性化文生图/查询预制模型推理任务的状态
       *
       * @param request PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest
       * @return PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse
       */
      Models::PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse personalizedTextToImageQueryPreModelInferenceJobInfo(const Models::PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest &request);

      /**
       * @summary 个性化文生图/基于一个模型创建图片推理任务
       *
       * @param request Personalizedtxt2imgAddInferenceJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgAddInferenceJobResponse
       */
      Models::Personalizedtxt2imgAddInferenceJobResponse personalizedtxt2imgAddInferenceJobWithOptions(const Models::Personalizedtxt2imgAddInferenceJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 个性化文生图/基于一个模型创建图片推理任务
       *
       * @param request Personalizedtxt2imgAddInferenceJobRequest
       * @return Personalizedtxt2imgAddInferenceJobResponse
       */
      Models::Personalizedtxt2imgAddInferenceJobResponse personalizedtxt2imgAddInferenceJob(const Models::Personalizedtxt2imgAddInferenceJobRequest &request);

      /**
       * @summary 个性化文生图/创建一个模型训练任务
       *
       * @param request Personalizedtxt2imgAddModelTrainJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgAddModelTrainJobResponse
       */
      Models::Personalizedtxt2imgAddModelTrainJobResponse personalizedtxt2imgAddModelTrainJobWithOptions(const Models::Personalizedtxt2imgAddModelTrainJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 个性化文生图/创建一个模型训练任务
       *
       * @param request Personalizedtxt2imgAddModelTrainJobRequest
       * @return Personalizedtxt2imgAddModelTrainJobResponse
       */
      Models::Personalizedtxt2imgAddModelTrainJobResponse personalizedtxt2imgAddModelTrainJob(const Models::Personalizedtxt2imgAddModelTrainJobRequest &request);

      /**
       * @summary 个性化文生图/图片二进制内容获取
       *
       * @param request Personalizedtxt2imgQueryImageAssetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgQueryImageAssetResponse
       */
      Models::Personalizedtxt2imgQueryImageAssetResponse personalizedtxt2imgQueryImageAssetWithOptions(const Models::Personalizedtxt2imgQueryImageAssetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 个性化文生图/图片二进制内容获取
       *
       * @param request Personalizedtxt2imgQueryImageAssetRequest
       * @return Personalizedtxt2imgQueryImageAssetResponse
       */
      Models::Personalizedtxt2imgQueryImageAssetResponse personalizedtxt2imgQueryImageAsset(const Models::Personalizedtxt2imgQueryImageAssetRequest &request);

      /**
       * @summary 个性化文生图/查询模型推理任务的状态和结果信息
       *
       * @param request Personalizedtxt2imgQueryInferenceJobInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgQueryInferenceJobInfoResponse
       */
      Models::Personalizedtxt2imgQueryInferenceJobInfoResponse personalizedtxt2imgQueryInferenceJobInfoWithOptions(const Models::Personalizedtxt2imgQueryInferenceJobInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 个性化文生图/查询模型推理任务的状态和结果信息
       *
       * @param request Personalizedtxt2imgQueryInferenceJobInfoRequest
       * @return Personalizedtxt2imgQueryInferenceJobInfoResponse
       */
      Models::Personalizedtxt2imgQueryInferenceJobInfoResponse personalizedtxt2imgQueryInferenceJobInfo(const Models::Personalizedtxt2imgQueryInferenceJobInfoRequest &request);

      /**
       * @summary 个性化文生图/查询模型训练任务列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgQueryModelTrainJobListResponse
       */
      Models::Personalizedtxt2imgQueryModelTrainJobListResponse personalizedtxt2imgQueryModelTrainJobListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 个性化文生图/查询模型训练任务列表
       *
       * @return Personalizedtxt2imgQueryModelTrainJobListResponse
       */
      Models::Personalizedtxt2imgQueryModelTrainJobListResponse personalizedtxt2imgQueryModelTrainJobList();

      /**
       * @summary 个性化文生图/模型训练状态查询
       *
       * @param request Personalizedtxt2imgQueryModelTrainStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgQueryModelTrainStatusResponse
       */
      Models::Personalizedtxt2imgQueryModelTrainStatusResponse personalizedtxt2imgQueryModelTrainStatusWithOptions(const Models::Personalizedtxt2imgQueryModelTrainStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 个性化文生图/模型训练状态查询
       *
       * @param request Personalizedtxt2imgQueryModelTrainStatusRequest
       * @return Personalizedtxt2imgQueryModelTrainStatusResponse
       */
      Models::Personalizedtxt2imgQueryModelTrainStatusResponse personalizedtxt2imgQueryModelTrainStatus(const Models::Personalizedtxt2imgQueryModelTrainStatusRequest &request);

      /**
       * @summary 阿里云控制台/获取应用访问识别码(appkey)信息
       *
       * @param request QueryApplicationAccessIdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryApplicationAccessIdResponse
       */
      Models::QueryApplicationAccessIdResponse queryApplicationAccessIdWithOptions(const Models::QueryApplicationAccessIdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 阿里云控制台/获取应用访问识别码(appkey)信息
       *
       * @param request QueryApplicationAccessIdRequest
       * @return QueryApplicationAccessIdResponse
       */
      Models::QueryApplicationAccessIdResponse queryApplicationAccessId(const Models::QueryApplicationAccessIdRequest &request);

      /**
       * @summary 阿里云控制台/获取项目列表
       *
       * @param request QueryProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryProjectResponse
       */
      Models::QueryProjectResponse queryProjectWithOptions(const Models::QueryProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 阿里云控制台/获取项目列表
       *
       * @param request QueryProjectRequest
       * @return QueryProjectResponse
       */
      Models::QueryProjectResponse queryProject(const Models::QueryProjectRequest &request);

      /**
       * @summary 阿里云控制台/获取项目列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryProjectListResponse
       */
      Models::QueryProjectListResponse queryProjectListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 阿里云控制台/获取项目列表
       *
       * @return QueryProjectListResponse
       */
      Models::QueryProjectListResponse queryProjectList();

      /**
       * @summary 阿里云控制台/已经购买过的服务项目
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPurchasedServiceResponse
       */
      Models::QueryPurchasedServiceResponse queryPurchasedServiceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 阿里云控制台/已经购买过的服务项目
       *
       * @return QueryPurchasedServiceResponse
       */
      Models::QueryPurchasedServiceResponse queryPurchasedService();

      /**
       * @summary 阿里云控制台/更新项目信息
       *
       * @param request UpdateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const Models::UpdateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 阿里云控制台/更新项目信息
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const Models::UpdateProjectRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
