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
       * @summary Generate Q&A pairs to expand data.
       *
       * @param request AITeacherExpansionPracticeTaskGenerateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AITeacherExpansionPracticeTaskGenerateResponse
       */
      Models::AITeacherExpansionPracticeTaskGenerateResponse aITeacherExpansionPracticeTaskGenerateWithOptions(const Models::AITeacherExpansionPracticeTaskGenerateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate Q&A pairs to expand data.
       *
       * @param request AITeacherExpansionPracticeTaskGenerateRequest
       * @return AITeacherExpansionPracticeTaskGenerateResponse
       */
      Models::AITeacherExpansionPracticeTaskGenerateResponse aITeacherExpansionPracticeTaskGenerate(const Models::AITeacherExpansionPracticeTaskGenerateRequest &request);

      /**
       * @summary Synchronous basic practice is primarily for dialogue tasks with a ground truth. Although this mode allows some deviation from the ground truth, the AI strictly requires users to follow it.
       *
       * @param request AITeacherSyncPracticeTaskGenerateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AITeacherSyncPracticeTaskGenerateResponse
       */
      Models::AITeacherSyncPracticeTaskGenerateResponse aITeacherSyncPracticeTaskGenerateWithOptions(const Models::AITeacherSyncPracticeTaskGenerateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronous basic practice is primarily for dialogue tasks with a ground truth. Although this mode allows some deviation from the ground truth, the AI strictly requires users to follow it.
       *
       * @param request AITeacherSyncPracticeTaskGenerateRequest
       * @return AITeacherSyncPracticeTaskGenerateResponse
       */
      Models::AITeacherSyncPracticeTaskGenerateResponse aITeacherSyncPracticeTaskGenerate(const Models::AITeacherSyncPracticeTaskGenerateRequest &request);

      /**
       * @summary Lists the services available on the Alibaba Cloud Console.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse
       */
      Models::AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse aliyunConsoleOpenApiQueryAliyunConsoleServcieListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the services available on the Alibaba Cloud Console.
       *
       * @return AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse
       */
      Models::AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse aliyunConsoleOpenApiQueryAliyunConsoleServcieList();

      /**
       * @summary Lists the services available in the Alibaba Cloud console.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse
       */
      Models::AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse aliyunConsoleOpenApiQueryAliyunConsoleServiceListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the services available in the Alibaba Cloud console.
       *
       * @return AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse
       */
      Models::AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse aliyunConsoleOpenApiQueryAliyunConsoleServiceList();

      /**
       * @summary Alibaba Cloud Management Console / List purchased resources
       *
       * @param request AliyunConsoleOpenApiQueryPaidResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AliyunConsoleOpenApiQueryPaidResourceResponse
       */
      Models::AliyunConsoleOpenApiQueryPaidResourceResponse aliyunConsoleOpenApiQueryPaidResourceWithOptions(const Models::AliyunConsoleOpenApiQueryPaidResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Alibaba Cloud Management Console / List purchased resources
       *
       * @param request AliyunConsoleOpenApiQueryPaidResourceRequest
       * @return AliyunConsoleOpenApiQueryPaidResourceResponse
       */
      Models::AliyunConsoleOpenApiQueryPaidResourceResponse aliyunConsoleOpenApiQueryPaidResource(const Models::AliyunConsoleOpenApiQueryPaidResourceRequest &request);

      /**
       * @summary Intelligent Correction / Oral Evaluation / Statistics / call volume
       *
       * @param request CountOralEvaluationStatisticsCallsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CountOralEvaluationStatisticsCallsResponse
       */
      Models::CountOralEvaluationStatisticsCallsResponse countOralEvaluationStatisticsCallsWithOptions(const Models::CountOralEvaluationStatisticsCallsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Intelligent Correction / Oral Evaluation / Statistics / call volume
       *
       * @param request CountOralEvaluationStatisticsCallsRequest
       * @return CountOralEvaluationStatisticsCallsResponse
       */
      Models::CountOralEvaluationStatisticsCallsResponse countOralEvaluationStatisticsCalls(const Models::CountOralEvaluationStatisticsCallsRequest &request);

      /**
       * @summary Intelligent grading / oral evaluation / statistics / concurrency
       *
       * @param request CountOralEvaluationStatisticsConcurrentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CountOralEvaluationStatisticsConcurrentResponse
       */
      Models::CountOralEvaluationStatisticsConcurrentResponse countOralEvaluationStatisticsConcurrentWithOptions(const Models::CountOralEvaluationStatisticsConcurrentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Intelligent grading / oral evaluation / statistics / concurrency
       *
       * @param request CountOralEvaluationStatisticsConcurrentRequest
       * @return CountOralEvaluationStatisticsConcurrentResponse
       */
      Models::CountOralEvaluationStatisticsConcurrentResponse countOralEvaluationStatisticsConcurrent(const Models::CountOralEvaluationStatisticsConcurrentRequest &request);

      /**
       * @summary Retrieves statistics about API call errors for the oral evaluation service.
       *
       * @param request CountOralEvaluationStatisticsErrorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CountOralEvaluationStatisticsErrorResponse
       */
      Models::CountOralEvaluationStatisticsErrorResponse countOralEvaluationStatisticsErrorWithOptions(const Models::CountOralEvaluationStatisticsErrorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves statistics about API call errors for the oral evaluation service.
       *
       * @param request CountOralEvaluationStatisticsErrorRequest
       * @return CountOralEvaluationStatisticsErrorResponse
       */
      Models::CountOralEvaluationStatisticsErrorResponse countOralEvaluationStatisticsError(const Models::CountOralEvaluationStatisticsErrorRequest &request);

      /**
       * @summary Creates an access warrant.
       *
       * @param request CreateAccessWarrantRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessWarrantResponse
       */
      Models::CreateAccessWarrantResponse createAccessWarrantWithOptions(const Models::CreateAccessWarrantRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access warrant.
       *
       * @param request CreateAccessWarrantRequest
       * @return CreateAccessWarrantResponse
       */
      Models::CreateAccessWarrantResponse createAccessWarrant(const Models::CreateAccessWarrantRequest &request);

      /**
       * @summary Alibaba Cloud console > Create Project
       *
       * @param request CreateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Alibaba Cloud console > Create Project
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary Executes a workflow for Chinese composition tutoring.
       *
       * @param request ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse
       */
      FutureGenerator<Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse> executeAITeacherChineseCompositionTutoringWorkflowRunWithSSE(const Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a workflow for Chinese composition tutoring.
       *
       * @param request ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse
       */
      Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse executeAITeacherChineseCompositionTutoringWorkflowRunWithOptions(const Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a workflow for Chinese composition tutoring.
       *
       * @param request ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest
       * @return ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse
       */
      Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse executeAITeacherChineseCompositionTutoringWorkflowRun(const Models::ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest &request);

      /**
       * @summary English Composition Tutoring
       *
       * @param request ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse
       */
      FutureGenerator<Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse> executeAITeacherEnglishCompositionTutoringWorkflowRunWithSSE(const Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary English Composition Tutoring
       *
       * @param request ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse
       */
      Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse executeAITeacherEnglishCompositionTutoringWorkflowRunWithOptions(const Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary English Composition Tutoring
       *
       * @param request ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest
       * @return ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse
       */
      Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse executeAITeacherEnglishCompositionTutoringWorkflowRun(const Models::ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest &request);

      /**
       * @summary Answers English-related questions.
       *
       * @param request ExecuteAITeacherEnglishParaphraseChatMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherEnglishParaphraseChatMessageResponse
       */
      FutureGenerator<Models::ExecuteAITeacherEnglishParaphraseChatMessageResponse> executeAITeacherEnglishParaphraseChatMessageWithSSE(const Models::ExecuteAITeacherEnglishParaphraseChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Answers English-related questions.
       *
       * @param request ExecuteAITeacherEnglishParaphraseChatMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherEnglishParaphraseChatMessageResponse
       */
      Models::ExecuteAITeacherEnglishParaphraseChatMessageResponse executeAITeacherEnglishParaphraseChatMessageWithOptions(const Models::ExecuteAITeacherEnglishParaphraseChatMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Answers English-related questions.
       *
       * @param request ExecuteAITeacherEnglishParaphraseChatMessageRequest
       * @return ExecuteAITeacherEnglishParaphraseChatMessageResponse
       */
      Models::ExecuteAITeacherEnglishParaphraseChatMessageResponse executeAITeacherEnglishParaphraseChatMessage(const Models::ExecuteAITeacherEnglishParaphraseChatMessageRequest &request);

      /**
       * @summary Expansion dialogues are for open-ended conversations. In these conversations, the AI poses open-ended questions, but the user must stay on topic. If a user\\"s response is off-topic, the AI steers the conversation back on topic. If the user gives two consecutive off-topic responses, the AI moves on to the next topic.
       *
       * @param request ExecuteAITeacherExpansionDialogueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherExpansionDialogueResponse
       */
      Models::ExecuteAITeacherExpansionDialogueResponse executeAITeacherExpansionDialogueWithOptions(const Models::ExecuteAITeacherExpansionDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expansion dialogues are for open-ended conversations. In these conversations, the AI poses open-ended questions, but the user must stay on topic. If a user\\"s response is off-topic, the AI steers the conversation back on topic. If the user gives two consecutive off-topic responses, the AI moves on to the next topic.
       *
       * @param request ExecuteAITeacherExpansionDialogueRequest
       * @return ExecuteAITeacherExpansionDialogueResponse
       */
      Models::ExecuteAITeacherExpansionDialogueResponse executeAITeacherExpansionDialogue(const Models::ExecuteAITeacherExpansionDialogueRequest &request);

      /**
       * @summary Uses context to polish the expanded text.
       *
       * @param request ExecuteAITeacherExpansionDialogueRefineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherExpansionDialogueRefineResponse
       */
      Models::ExecuteAITeacherExpansionDialogueRefineResponse executeAITeacherExpansionDialogueRefineWithOptions(const Models::ExecuteAITeacherExpansionDialogueRefineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uses context to polish the expanded text.
       *
       * @param request ExecuteAITeacherExpansionDialogueRefineRequest
       * @return ExecuteAITeacherExpansionDialogueRefineResponse
       */
      Models::ExecuteAITeacherExpansionDialogueRefineResponse executeAITeacherExpansionDialogueRefine(const Models::ExecuteAITeacherExpansionDialogueRefineRequest &request);

      /**
       * @summary Further Contextual Translation Practice.
       *
       * @param request ExecuteAITeacherExpansionDialogueTranslateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherExpansionDialogueTranslateResponse
       */
      Models::ExecuteAITeacherExpansionDialogueTranslateResponse executeAITeacherExpansionDialogueTranslateWithOptions(const Models::ExecuteAITeacherExpansionDialogueTranslateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Further Contextual Translation Practice.
       *
       * @param request ExecuteAITeacherExpansionDialogueTranslateRequest
       * @return ExecuteAITeacherExpansionDialogueTranslateResponse
       */
      Models::ExecuteAITeacherExpansionDialogueTranslateResponse executeAITeacherExpansionDialogueTranslate(const Models::ExecuteAITeacherExpansionDialogueTranslateRequest &request);

      /**
       * @summary Performs a grammar check.
       *
       * @param request ExecuteAITeacherGrammarCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherGrammarCheckResponse
       */
      Models::ExecuteAITeacherGrammarCheckResponse executeAITeacherGrammarCheckWithOptions(const Models::ExecuteAITeacherGrammarCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a grammar check.
       *
       * @param request ExecuteAITeacherGrammarCheckRequest
       * @return ExecuteAITeacherGrammarCheckResponse
       */
      Models::ExecuteAITeacherGrammarCheckResponse executeAITeacherGrammarCheck(const Models::ExecuteAITeacherGrammarCheckRequest &request);

      /**
       * @summary Practice synchronous dialogue.
       *
       * @param request ExecuteAITeacherSyncDialogueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherSyncDialogueResponse
       */
      Models::ExecuteAITeacherSyncDialogueResponse executeAITeacherSyncDialogueWithOptions(const Models::ExecuteAITeacherSyncDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Practice synchronous dialogue.
       *
       * @param request ExecuteAITeacherSyncDialogueRequest
       * @return ExecuteAITeacherSyncDialogueResponse
       */
      Models::ExecuteAITeacherSyncDialogueResponse executeAITeacherSyncDialogue(const Models::ExecuteAITeacherSyncDialogueRequest &request);

      /**
       * @summary You can practice contextual translation in real-time.
       *
       * @param request ExecuteAITeacherSyncDialogueTranslateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteAITeacherSyncDialogueTranslateResponse
       */
      Models::ExecuteAITeacherSyncDialogueTranslateResponse executeAITeacherSyncDialogueTranslateWithOptions(const Models::ExecuteAITeacherSyncDialogueTranslateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can practice contextual translation in real-time.
       *
       * @param request ExecuteAITeacherSyncDialogueTranslateRequest
       * @return ExecuteAITeacherSyncDialogueTranslateResponse
       */
      Models::ExecuteAITeacherSyncDialogueTranslateResponse executeAITeacherSyncDialogueTranslate(const Models::ExecuteAITeacherSyncDialogueTranslateRequest &request);

      /**
       * @summary Executes a dialogue turn with the Textbook Assistant.
       *
       * @param request ExecuteTextbookAssistantDialogueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantDialogueResponse
       */
      Models::ExecuteTextbookAssistantDialogueResponse executeTextbookAssistantDialogueWithOptions(const Models::ExecuteTextbookAssistantDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a dialogue turn with the Textbook Assistant.
       *
       * @param request ExecuteTextbookAssistantDialogueRequest
       * @return ExecuteTextbookAssistantDialogueResponse
       */
      Models::ExecuteTextbookAssistantDialogueResponse executeTextbookAssistantDialogue(const Models::ExecuteTextbookAssistantDialogueRequest &request);

      /**
       * @summary Adjusts the difficulty of the textbook assistant\\"s dialogue.
       *
       * @param request ExecuteTextbookAssistantDifficultyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantDifficultyResponse
       */
      Models::ExecuteTextbookAssistantDifficultyResponse executeTextbookAssistantDifficultyWithOptions(const Models::ExecuteTextbookAssistantDifficultyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adjusts the difficulty of the textbook assistant\\"s dialogue.
       *
       * @param request ExecuteTextbookAssistantDifficultyRequest
       * @return ExecuteTextbookAssistantDifficultyResponse
       */
      Models::ExecuteTextbookAssistantDifficultyResponse executeTextbookAssistantDifficulty(const Models::ExecuteTextbookAssistantDifficultyRequest &request);

      /**
       * @summary Performs a grammar check.
       *
       * @param request ExecuteTextbookAssistantGrammarCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantGrammarCheckResponse
       */
      Models::ExecuteTextbookAssistantGrammarCheckResponse executeTextbookAssistantGrammarCheckWithOptions(const Models::ExecuteTextbookAssistantGrammarCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a grammar check.
       *
       * @param request ExecuteTextbookAssistantGrammarCheckRequest
       * @return ExecuteTextbookAssistantGrammarCheckResponse
       */
      Models::ExecuteTextbookAssistantGrammarCheckResponse executeTextbookAssistantGrammarCheck(const Models::ExecuteTextbookAssistantGrammarCheckRequest &request);

      /**
       * @summary Refines a sentence based on the conversational context.
       *
       * @param request ExecuteTextbookAssistantRefineByContextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantRefineByContextResponse
       */
      Models::ExecuteTextbookAssistantRefineByContextResponse executeTextbookAssistantRefineByContextWithOptions(const Models::ExecuteTextbookAssistantRefineByContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refines a sentence based on the conversational context.
       *
       * @param request ExecuteTextbookAssistantRefineByContextRequest
       * @return ExecuteTextbookAssistantRefineByContextResponse
       */
      Models::ExecuteTextbookAssistantRefineByContextResponse executeTextbookAssistantRefineByContext(const Models::ExecuteTextbookAssistantRefineByContextRequest &request);

      /**
       * @summary This operation retries a conversation.
       *
       * @param request ExecuteTextbookAssistantRetryConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantRetryConversationResponse
       */
      Models::ExecuteTextbookAssistantRetryConversationResponse executeTextbookAssistantRetryConversationWithOptions(const Models::ExecuteTextbookAssistantRetryConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation retries a conversation.
       *
       * @param request ExecuteTextbookAssistantRetryConversationRequest
       * @return ExecuteTextbookAssistantRetryConversationResponse
       */
      Models::ExecuteTextbookAssistantRetryConversationResponse executeTextbookAssistantRetryConversation(const Models::ExecuteTextbookAssistantRetryConversationRequest &request);

      /**
       * @summary Starts a conversation and returns a streaming output.
       *
       * @param request ExecuteTextbookAssistantSseDialogueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantSseDialogueResponse
       */
      FutureGenerator<Models::ExecuteTextbookAssistantSseDialogueResponse> executeTextbookAssistantSseDialogueWithSSE(const Models::ExecuteTextbookAssistantSseDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a conversation and returns a streaming output.
       *
       * @param request ExecuteTextbookAssistantSseDialogueRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantSseDialogueResponse
       */
      Models::ExecuteTextbookAssistantSseDialogueResponse executeTextbookAssistantSseDialogueWithOptions(const Models::ExecuteTextbookAssistantSseDialogueRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a conversation and returns a streaming output.
       *
       * @param request ExecuteTextbookAssistantSseDialogueRequest
       * @return ExecuteTextbookAssistantSseDialogueResponse
       */
      Models::ExecuteTextbookAssistantSseDialogueResponse executeTextbookAssistantSseDialogue(const Models::ExecuteTextbookAssistantSseDialogueRequest &request);

      /**
       * @summary Starts a conversation with the AI teacher. The teacher then sends the initial message.
       *
       * @param request ExecuteTextbookAssistantStartConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantStartConversationResponse
       */
      Models::ExecuteTextbookAssistantStartConversationResponse executeTextbookAssistantStartConversationWithOptions(const Models::ExecuteTextbookAssistantStartConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a conversation with the AI teacher. The teacher then sends the initial message.
       *
       * @param request ExecuteTextbookAssistantStartConversationRequest
       * @return ExecuteTextbookAssistantStartConversationResponse
       */
      Models::ExecuteTextbookAssistantStartConversationResponse executeTextbookAssistantStartConversation(const Models::ExecuteTextbookAssistantStartConversationRequest &request);

      /**
       * @summary Generates a suggested response from the textbook-based AI teacher.
       *
       * @param request ExecuteTextbookAssistantSuggestionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantSuggestionResponse
       */
      Models::ExecuteTextbookAssistantSuggestionResponse executeTextbookAssistantSuggestionWithOptions(const Models::ExecuteTextbookAssistantSuggestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a suggested response from the textbook-based AI teacher.
       *
       * @param request ExecuteTextbookAssistantSuggestionRequest
       * @return ExecuteTextbookAssistantSuggestionResponse
       */
      Models::ExecuteTextbookAssistantSuggestionResponse executeTextbookAssistantSuggestion(const Models::ExecuteTextbookAssistantSuggestionRequest &request);

      /**
       * @summary Translates the content of a message.
       *
       * @param request ExecuteTextbookAssistantTranslateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTextbookAssistantTranslateResponse
       */
      Models::ExecuteTextbookAssistantTranslateResponse executeTextbookAssistantTranslateWithOptions(const Models::ExecuteTextbookAssistantTranslateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Translates the content of a message.
       *
       * @param request ExecuteTextbookAssistantTranslateRequest
       * @return ExecuteTextbookAssistantTranslateResponse
       */
      Models::ExecuteTextbookAssistantTranslateResponse executeTextbookAssistantTranslate(const Models::ExecuteTextbookAssistantTranslateRequest &request);

      /**
       * @summary Supplemental Practice Assistant
       *
       * @param request GetAITeacherExpansionDialogueSuggestionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAITeacherExpansionDialogueSuggestionResponse
       */
      Models::GetAITeacherExpansionDialogueSuggestionResponse getAITeacherExpansionDialogueSuggestionWithOptions(const Models::GetAITeacherExpansionDialogueSuggestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Supplemental Practice Assistant
       *
       * @param request GetAITeacherExpansionDialogueSuggestionRequest
       * @return GetAITeacherExpansionDialogueSuggestionResponse
       */
      Models::GetAITeacherExpansionDialogueSuggestionResponse getAITeacherExpansionDialogueSuggestion(const Models::GetAITeacherExpansionDialogueSuggestionRequest &request);

      /**
       * @summary Sync Practice Assistant
       *
       * @param request GetAITeacherSyncDialogueSuggestionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAITeacherSyncDialogueSuggestionResponse
       */
      Models::GetAITeacherSyncDialogueSuggestionResponse getAITeacherSyncDialogueSuggestionWithOptions(const Models::GetAITeacherSyncDialogueSuggestionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sync Practice Assistant
       *
       * @param request GetAITeacherSyncDialogueSuggestionRequest
       * @return GetAITeacherSyncDialogueSuggestionResponse
       */
      Models::GetAITeacherSyncDialogueSuggestionResponse getAITeacherSyncDialogueSuggestion(const Models::GetAITeacherSyncDialogueSuggestionRequest &request);

      /**
       * @summary Obtains an authorization token to make API calls.
       *
       * @param request GetTextbookAssistantTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTextbookAssistantTokenResponse
       */
      Models::GetTextbookAssistantTokenResponse getTextbookAssistantTokenWithOptions(const Models::GetTextbookAssistantTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an authorization token to make API calls.
       *
       * @param request GetTextbookAssistantTokenRequest
       * @return GetTextbookAssistantTokenResponse
       */
      Models::GetTextbookAssistantTokenResponse getTextbookAssistantToken(const Models::GetTextbookAssistantTokenRequest &request);

      /**
       * @summary Batch get article details
       *
       * @param request ListTextbookAssistantArticleDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantArticleDetailsResponse
       */
      Models::ListTextbookAssistantArticleDetailsResponse listTextbookAssistantArticleDetailsWithOptions(const Models::ListTextbookAssistantArticleDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch get article details
       *
       * @param request ListTextbookAssistantArticleDetailsRequest
       * @return ListTextbookAssistantArticleDetailsResponse
       */
      Models::ListTextbookAssistantArticleDetailsResponse listTextbookAssistantArticleDetails(const Models::ListTextbookAssistantArticleDetailsRequest &request);

      /**
       * @summary Returns a list of articles.
       *
       * @param request ListTextbookAssistantArticlesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantArticlesResponse
       */
      Models::ListTextbookAssistantArticlesResponse listTextbookAssistantArticlesWithOptions(const Models::ListTextbookAssistantArticlesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of articles.
       *
       * @param request ListTextbookAssistantArticlesRequest
       * @return ListTextbookAssistantArticlesResponse
       */
      Models::ListTextbookAssistantArticlesResponse listTextbookAssistantArticles(const Models::ListTextbookAssistantArticlesRequest &request);

      /**
       * @summary Gets the table of contents of a book.
       *
       * @param request ListTextbookAssistantBookDirectoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantBookDirectoriesResponse
       */
      Models::ListTextbookAssistantBookDirectoriesResponse listTextbookAssistantBookDirectoriesWithOptions(const Models::ListTextbookAssistantBookDirectoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the table of contents of a book.
       *
       * @param request ListTextbookAssistantBookDirectoriesRequest
       * @return ListTextbookAssistantBookDirectoriesResponse
       */
      Models::ListTextbookAssistantBookDirectoriesResponse listTextbookAssistantBookDirectories(const Models::ListTextbookAssistantBookDirectoriesRequest &request);

      /**
       * @summary Retrieves a list of books for a specified grade.
       *
       * @param request ListTextbookAssistantBooksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantBooksResponse
       */
      Models::ListTextbookAssistantBooksResponse listTextbookAssistantBooksWithOptions(const Models::ListTextbookAssistantBooksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of books for a specified grade.
       *
       * @param request ListTextbookAssistantBooksRequest
       * @return ListTextbookAssistantBooksResponse
       */
      Models::ListTextbookAssistantBooksResponse listTextbookAssistantBooks(const Models::ListTextbookAssistantBooksRequest &request);

      /**
       * @summary Retrieves the available grades and volumes for the Textbook Assistant.
       *
       * @param request ListTextbookAssistantGradeVolumesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantGradeVolumesResponse
       */
      Models::ListTextbookAssistantGradeVolumesResponse listTextbookAssistantGradeVolumesWithOptions(const Models::ListTextbookAssistantGradeVolumesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the available grades and volumes for the Textbook Assistant.
       *
       * @param request ListTextbookAssistantGradeVolumesRequest
       * @return ListTextbookAssistantGradeVolumesResponse
       */
      Models::ListTextbookAssistantGradeVolumesResponse listTextbookAssistantGradeVolumes(const Models::ListTextbookAssistantGradeVolumesRequest &request);

      /**
       * @summary Get Article Details
       *
       * @param request ListTextbookAssistantSceneDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTextbookAssistantSceneDetailsResponse
       */
      Models::ListTextbookAssistantSceneDetailsResponse listTextbookAssistantSceneDetailsWithOptions(const Models::ListTextbookAssistantSceneDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Article Details
       *
       * @param request ListTextbookAssistantSceneDetailsRequest
       * @return ListTextbookAssistantSceneDetailsResponse
       */
      Models::ListTextbookAssistantSceneDetailsResponse listTextbookAssistantSceneDetails(const Models::ListTextbookAssistantSceneDetailsRequest &request);

      /**
       * @summary Retrieves the tab configuration for usage monitoring.
       *
       * @param request ModelRouterBillingCostTabsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterBillingCostTabsResponse
       */
      Models::ModelRouterBillingCostTabsResponse modelRouterBillingCostTabsWithOptions(const Models::ModelRouterBillingCostTabsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the tab configuration for usage monitoring.
       *
       * @param request ModelRouterBillingCostTabsRequest
       * @return ModelRouterBillingCostTabsResponse
       */
      Models::ModelRouterBillingCostTabsResponse modelRouterBillingCostTabs(const Models::ModelRouterBillingCostTabsRequest &request);

      /**
       * @summary Generates a chat completion.
       *
       * @param request ModelRouterChatCompletionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterChatCompletionsResponse
       */
      FutureGenerator<Models::ModelRouterChatCompletionsResponse> modelRouterChatCompletionsWithSSE(const Models::ModelRouterChatCompletionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a chat completion.
       *
       * @param request ModelRouterChatCompletionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterChatCompletionsResponse
       */
      Models::ModelRouterChatCompletionsResponse modelRouterChatCompletionsWithOptions(const Models::ModelRouterChatCompletionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a chat completion.
       *
       * @param request ModelRouterChatCompletionsRequest
       * @return ModelRouterChatCompletionsResponse
       */
      Models::ModelRouterChatCompletionsResponse modelRouterChatCompletions(const Models::ModelRouterChatCompletionsRequest &request);

      /**
       * @summary Configures balance throttling for a department.
       *
       * @param request ModelRouterConfigureClientBalanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterConfigureClientBalanceResponse
       */
      Models::ModelRouterConfigureClientBalanceResponse modelRouterConfigureClientBalanceWithOptions(const string &id, const Models::ModelRouterConfigureClientBalanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures balance throttling for a department.
       *
       * @param request ModelRouterConfigureClientBalanceRequest
       * @return ModelRouterConfigureClientBalanceResponse
       */
      Models::ModelRouterConfigureClientBalanceResponse modelRouterConfigureClientBalance(const string &id, const Models::ModelRouterConfigureClientBalanceRequest &request);

      /**
       * @summary Copies an API key.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCopyApiKeyResponse
       */
      Models::ModelRouterCopyApiKeyResponse modelRouterCopyApiKeyWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies an API key.
       *
       * @return ModelRouterCopyApiKeyResponse
       */
      Models::ModelRouterCopyApiKeyResponse modelRouterCopyApiKey(const string &id);

      /**
       * @summary API key management / Create an API key
       *
       * @param request ModelRouterCreateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCreateApiKeyResponse
       */
      Models::ModelRouterCreateApiKeyResponse modelRouterCreateApiKeyWithOptions(const Models::ModelRouterCreateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API key management / Create an API key
       *
       * @param request ModelRouterCreateApiKeyRequest
       * @return ModelRouterCreateApiKeyResponse
       */
      Models::ModelRouterCreateApiKeyResponse modelRouterCreateApiKey(const Models::ModelRouterCreateApiKeyRequest &request);

      /**
       * @summary Creates a balance transaction for customer management.
       *
       * @description This operation is deprecated. Do not use it.
       *
       * @param request ModelRouterCreateBalanceTransactionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCreateBalanceTransactionResponse
       */
      Models::ModelRouterCreateBalanceTransactionResponse modelRouterCreateBalanceTransactionWithOptions(const string &id, const Models::ModelRouterCreateBalanceTransactionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a balance transaction for customer management.
       *
       * @description This operation is deprecated. Do not use it.
       *
       * @param request ModelRouterCreateBalanceTransactionRequest
       * @return ModelRouterCreateBalanceTransactionResponse
       */
      Models::ModelRouterCreateBalanceTransactionResponse modelRouterCreateBalanceTransaction(const string &id, const Models::ModelRouterCreateBalanceTransactionRequest &request);

      /**
       * @summary Billing Management/Create Billing Rule
       *
       * @param request ModelRouterCreateBillingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCreateBillingRuleResponse
       */
      Models::ModelRouterCreateBillingRuleResponse modelRouterCreateBillingRuleWithOptions(const Models::ModelRouterCreateBillingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Billing Management/Create Billing Rule
       *
       * @param request ModelRouterCreateBillingRuleRequest
       * @return ModelRouterCreateBillingRuleResponse
       */
      Models::ModelRouterCreateBillingRuleResponse modelRouterCreateBillingRule(const Models::ModelRouterCreateBillingRuleRequest &request);

      /**
       * @summary Client management / Create client
       *
       * @param request ModelRouterCreateClientRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCreateClientResponse
       */
      Models::ModelRouterCreateClientResponse modelRouterCreateClientWithOptions(const Models::ModelRouterCreateClientRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Client management / Create client
       *
       * @param request ModelRouterCreateClientRequest
       * @return ModelRouterCreateClientResponse
       */
      Models::ModelRouterCreateClientResponse modelRouterCreateClient(const Models::ModelRouterCreateClientRequest &request);

      /**
       * @summary Conversation management / Create conversation
       *
       * @param request ModelRouterCreateConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCreateConversationResponse
       */
      Models::ModelRouterCreateConversationResponse modelRouterCreateConversationWithOptions(const Models::ModelRouterCreateConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Conversation management / Create conversation
       *
       * @param request ModelRouterCreateConversationRequest
       * @return ModelRouterCreateConversationResponse
       */
      Models::ModelRouterCreateConversationResponse modelRouterCreateConversation(const Models::ModelRouterCreateConversationRequest &request);

      /**
       * @summary Creates a model.
       *
       * @param request ModelRouterCreateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCreateModelResponse
       */
      Models::ModelRouterCreateModelResponse modelRouterCreateModelWithOptions(const Models::ModelRouterCreateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model.
       *
       * @param request ModelRouterCreateModelRequest
       * @return ModelRouterCreateModelResponse
       */
      Models::ModelRouterCreateModelResponse modelRouterCreateModel(const Models::ModelRouterCreateModelRequest &request);

      /**
       * @summary 客户管理/创建周期充值订阅
       *
       * @description 该接口已弃用，请勿使用
       *
       * @param request ModelRouterCreateSubscriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterCreateSubscriptionResponse
       */
      Models::ModelRouterCreateSubscriptionResponse modelRouterCreateSubscriptionWithOptions(const string &id, const Models::ModelRouterCreateSubscriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户管理/创建周期充值订阅
       *
       * @description 该接口已弃用，请勿使用
       *
       * @param request ModelRouterCreateSubscriptionRequest
       * @return ModelRouterCreateSubscriptionResponse
       */
      Models::ModelRouterCreateSubscriptionResponse modelRouterCreateSubscription(const string &id, const Models::ModelRouterCreateSubscriptionRequest &request);

      /**
       * @summary API Key Management / Delete API Key
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterDeleteApiKeyResponse
       */
      Models::ModelRouterDeleteApiKeyResponse modelRouterDeleteApiKeyWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API Key Management / Delete API Key
       *
       * @return ModelRouterDeleteApiKeyResponse
       */
      Models::ModelRouterDeleteApiKeyResponse modelRouterDeleteApiKey(const string &id);

      /**
       * @summary Deletes a client.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterDeleteClientResponse
       */
      Models::ModelRouterDeleteClientResponse modelRouterDeleteClientWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a client.
       *
       * @return ModelRouterDeleteClientResponse
       */
      Models::ModelRouterDeleteClientResponse modelRouterDeleteClient(const string &id);

      /**
       * @summary Conversation management/Delete conversation
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterDeleteConversationResponse
       */
      Models::ModelRouterDeleteConversationResponse modelRouterDeleteConversationWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Conversation management/Delete conversation
       *
       * @return ModelRouterDeleteConversationResponse
       */
      Models::ModelRouterDeleteConversationResponse modelRouterDeleteConversation(const string &id);

      /**
       * @summary Model Management / Delete Model
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterDeleteModelResponse
       */
      Models::ModelRouterDeleteModelResponse modelRouterDeleteModelWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Model Management / Delete Model
       *
       * @return ModelRouterDeleteModelResponse
       */
      Models::ModelRouterDeleteModelResponse modelRouterDeleteModel(const string &id);

      /**
       * @summary Client Management/Get department balance
       *
       * @param request ModelRouterGetClientBalanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterGetClientBalanceResponse
       */
      Models::ModelRouterGetClientBalanceResponse modelRouterGetClientBalanceWithOptions(const string &id, const Models::ModelRouterGetClientBalanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Client Management/Get department balance
       *
       * @param request ModelRouterGetClientBalanceRequest
       * @return ModelRouterGetClientBalanceResponse
       */
      Models::ModelRouterGetClientBalanceResponse modelRouterGetClientBalance(const string &id, const Models::ModelRouterGetClientBalanceRequest &request);

      /**
       * @summary Gets the balance change log for a specified department.
       *
       * @param request ModelRouterGetClientBalanceLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterGetClientBalanceLogsResponse
       */
      Models::ModelRouterGetClientBalanceLogsResponse modelRouterGetClientBalanceLogsWithOptions(const string &id, const Models::ModelRouterGetClientBalanceLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the balance change log for a specified department.
       *
       * @param request ModelRouterGetClientBalanceLogsRequest
       * @return ModelRouterGetClientBalanceLogsResponse
       */
      Models::ModelRouterGetClientBalanceLogsResponse modelRouterGetClientBalanceLogs(const string &id, const Models::ModelRouterGetClientBalanceLogsRequest &request);

      /**
       * @summary 客户管理/查询周期充值订阅列表
       *
       * @description 该接口已弃用，请勿使用
       *
       * @param request ModelRouterListSubscriptionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterListSubscriptionsResponse
       */
      Models::ModelRouterListSubscriptionsResponse modelRouterListSubscriptionsWithOptions(const string &id, const Models::ModelRouterListSubscriptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户管理/查询周期充值订阅列表
       *
       * @description 该接口已弃用，请勿使用
       *
       * @param request ModelRouterListSubscriptionsRequest
       * @return ModelRouterListSubscriptionsResponse
       */
      Models::ModelRouterListSubscriptionsResponse modelRouterListSubscriptions(const string &id, const Models::ModelRouterListSubscriptionsRequest &request);

      /**
       * @summary Retrieves the details of a specific API key.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryApiKeyResponse
       */
      Models::ModelRouterQueryApiKeyResponse modelRouterQueryApiKeyWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific API key.
       *
       * @return ModelRouterQueryApiKeyResponse
       */
      Models::ModelRouterQueryApiKeyResponse modelRouterQueryApiKey(const string &id);

      /**
       * @summary Retrieves a list of API keys.
       *
       * @param request ModelRouterQueryApiKeyListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryApiKeyListResponse
       */
      Models::ModelRouterQueryApiKeyListResponse modelRouterQueryApiKeyListWithOptions(const Models::ModelRouterQueryApiKeyListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of API keys.
       *
       * @param request ModelRouterQueryApiKeyListRequest
       * @return ModelRouterQueryApiKeyListResponse
       */
      Models::ModelRouterQueryApiKeyListResponse modelRouterQueryApiKeyList(const Models::ModelRouterQueryApiKeyListRequest &request);

      /**
       * @summary Billing > Query billing cost breakdown
       *
       * @param request ModelRouterQueryBillingCostBreakdownRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryBillingCostBreakdownResponse
       */
      Models::ModelRouterQueryBillingCostBreakdownResponse modelRouterQueryBillingCostBreakdownWithOptions(const Models::ModelRouterQueryBillingCostBreakdownRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Billing > Query billing cost breakdown
       *
       * @param request ModelRouterQueryBillingCostBreakdownRequest
       * @return ModelRouterQueryBillingCostBreakdownResponse
       */
      Models::ModelRouterQueryBillingCostBreakdownResponse modelRouterQueryBillingCostBreakdown(const Models::ModelRouterQueryBillingCostBreakdownRequest &request);

      /**
       * @summary Billing management / Query billing rule list
       *
       * @param request ModelRouterQueryBillingRuleListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryBillingRuleListResponse
       */
      Models::ModelRouterQueryBillingRuleListResponse modelRouterQueryBillingRuleListWithOptions(const Models::ModelRouterQueryBillingRuleListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Billing management / Query billing rule list
       *
       * @param request ModelRouterQueryBillingRuleListRequest
       * @return ModelRouterQueryBillingRuleListResponse
       */
      Models::ModelRouterQueryBillingRuleListResponse modelRouterQueryBillingRuleList(const Models::ModelRouterQueryBillingRuleListRequest &request);

      /**
       * @summary Retrieves the discount modification history for a client.
       *
       * @param request ModelRouterQueryClientDiscountLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryClientDiscountLogsResponse
       */
      Models::ModelRouterQueryClientDiscountLogsResponse modelRouterQueryClientDiscountLogsWithOptions(const string &id, const Models::ModelRouterQueryClientDiscountLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the discount modification history for a client.
       *
       * @param request ModelRouterQueryClientDiscountLogsRequest
       * @return ModelRouterQueryClientDiscountLogsResponse
       */
      Models::ModelRouterQueryClientDiscountLogsResponse modelRouterQueryClientDiscountLogs(const string &id, const Models::ModelRouterQueryClientDiscountLogsRequest &request);

      /**
       * @summary Retrieves a list of clients.
       *
       * @param request ModelRouterQueryClientListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryClientListResponse
       */
      Models::ModelRouterQueryClientListResponse modelRouterQueryClientListWithOptions(const Models::ModelRouterQueryClientListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of clients.
       *
       * @param request ModelRouterQueryClientListRequest
       * @return ModelRouterQueryClientListResponse
       */
      Models::ModelRouterQueryClientListResponse modelRouterQueryClientList(const Models::ModelRouterQueryClientListRequest &request);

      /**
       * @summary Returns a hierarchical tree of customers.
       *
       * @param request ModelRouterQueryClientTreeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryClientTreeResponse
       */
      Models::ModelRouterQueryClientTreeResponse modelRouterQueryClientTreeWithOptions(const Models::ModelRouterQueryClientTreeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a hierarchical tree of customers.
       *
       * @param request ModelRouterQueryClientTreeRequest
       * @return ModelRouterQueryClientTreeResponse
       */
      Models::ModelRouterQueryClientTreeResponse modelRouterQueryClientTree(const Models::ModelRouterQueryClientTreeRequest &request);

      /**
       * @summary Retrieves the details of a conversation.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryConversationResponse
       */
      Models::ModelRouterQueryConversationResponse modelRouterQueryConversationWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a conversation.
       *
       * @return ModelRouterQueryConversationResponse
       */
      Models::ModelRouterQueryConversationResponse modelRouterQueryConversation(const string &id);

      /**
       * @summary Conversation management/Conversation list
       *
       * @param request ModelRouterQueryConversationListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryConversationListResponse
       */
      Models::ModelRouterQueryConversationListResponse modelRouterQueryConversationListWithOptions(const Models::ModelRouterQueryConversationListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Conversation management/Conversation list
       *
       * @param request ModelRouterQueryConversationListRequest
       * @return ModelRouterQueryConversationListResponse
       */
      Models::ModelRouterQueryConversationListResponse modelRouterQueryConversationList(const Models::ModelRouterQueryConversationListRequest &request);

      /**
       * @summary billing management / Model details
       *
       * @param request ModelRouterQueryCostModelDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryCostModelDetailResponse
       */
      Models::ModelRouterQueryCostModelDetailResponse modelRouterQueryCostModelDetailWithOptions(const Models::ModelRouterQueryCostModelDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary billing management / Model details
       *
       * @param request ModelRouterQueryCostModelDetailRequest
       * @return ModelRouterQueryCostModelDetailResponse
       */
      Models::ModelRouterQueryCostModelDetailResponse modelRouterQueryCostModelDetail(const Models::ModelRouterQueryCostModelDetailRequest &request);

      /**
       * @summary billing management / Retrieves a list of invoked models
       *
       * @param request ModelRouterQueryCostModelListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryCostModelListResponse
       */
      Models::ModelRouterQueryCostModelListResponse modelRouterQueryCostModelListWithOptions(const Models::ModelRouterQueryCostModelListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary billing management / Retrieves a list of invoked models
       *
       * @param request ModelRouterQueryCostModelListRequest
       * @return ModelRouterQueryCostModelListResponse
       */
      Models::ModelRouterQueryCostModelListResponse modelRouterQueryCostModelList(const Models::ModelRouterQueryCostModelListRequest &request);

      /**
       * @summary billing management / Get cost overview metrics
       *
       * @param request ModelRouterQueryCostOverviewMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryCostOverviewMetricsResponse
       */
      Models::ModelRouterQueryCostOverviewMetricsResponse modelRouterQueryCostOverviewMetricsWithOptions(const Models::ModelRouterQueryCostOverviewMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary billing management / Get cost overview metrics
       *
       * @param request ModelRouterQueryCostOverviewMetricsRequest
       * @return ModelRouterQueryCostOverviewMetricsResponse
       */
      Models::ModelRouterQueryCostOverviewMetricsResponse modelRouterQueryCostOverviewMetrics(const Models::ModelRouterQueryCostOverviewMetricsRequest &request);

      /**
       * @summary billing management / Cost trends
       *
       * @param request ModelRouterQueryCostTrendMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryCostTrendMetricsResponse
       */
      Models::ModelRouterQueryCostTrendMetricsResponse modelRouterQueryCostTrendMetricsWithOptions(const Models::ModelRouterQueryCostTrendMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary billing management / Cost trends
       *
       * @param request ModelRouterQueryCostTrendMetricsRequest
       * @return ModelRouterQueryCostTrendMetricsResponse
       */
      Models::ModelRouterQueryCostTrendMetricsResponse modelRouterQueryCostTrendMetrics(const Models::ModelRouterQueryCostTrendMetricsRequest &request);

      /**
       * @summary Retrieves details for a specific model.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryModelResponse
       */
      Models::ModelRouterQueryModelResponse modelRouterQueryModelWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for a specific model.
       *
       * @return ModelRouterQueryModelResponse
       */
      Models::ModelRouterQueryModelResponse modelRouterQueryModel(const string &id);

      /**
       * @summary Model management/Get model list
       *
       * @param request ModelRouterQueryModelListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryModelListResponse
       */
      Models::ModelRouterQueryModelListResponse modelRouterQueryModelListWithOptions(const Models::ModelRouterQueryModelListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Model management/Get model list
       *
       * @param request ModelRouterQueryModelListRequest
       * @return ModelRouterQueryModelListResponse
       */
      Models::ModelRouterQueryModelListResponse modelRouterQueryModelList(const Models::ModelRouterQueryModelListRequest &request);

      /**
       * @summary Configures Nacos or retrieves the list of Nacos service providers.
       *
       * @description This operation is deprecated. Do not use it.
       *
       * @param request ModelRouterQueryNacosProvidersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryNacosProvidersResponse
       */
      Models::ModelRouterQueryNacosProvidersResponse modelRouterQueryNacosProvidersWithOptions(const Models::ModelRouterQueryNacosProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures Nacos or retrieves the list of Nacos service providers.
       *
       * @description This operation is deprecated. Do not use it.
       *
       * @param request ModelRouterQueryNacosProvidersRequest
       * @return ModelRouterQueryNacosProvidersResponse
       */
      Models::ModelRouterQueryNacosProvidersResponse modelRouterQueryNacosProviders(const Models::ModelRouterQueryNacosProvidersRequest &request);

      /**
       * @summary Retrieves a list of tags from Nacos.
       *
       * @param request ModelRouterQueryNacosTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryNacosTagsResponse
       */
      Models::ModelRouterQueryNacosTagsResponse modelRouterQueryNacosTagsWithOptions(const Models::ModelRouterQueryNacosTagsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of tags from Nacos.
       *
       * @param request ModelRouterQueryNacosTagsRequest
       * @return ModelRouterQueryNacosTagsResponse
       */
      Models::ModelRouterQueryNacosTagsResponse modelRouterQueryNacosTags(const Models::ModelRouterQueryNacosTagsRequest &request);

      /**
       * @summary Retrieves chart data for model observation.
       *
       * @param request ModelRouterQueryObservationChartsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryObservationChartsResponse
       */
      Models::ModelRouterQueryObservationChartsResponse modelRouterQueryObservationChartsWithOptions(const Models::ModelRouterQueryObservationChartsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves chart data for model observation.
       *
       * @param request ModelRouterQueryObservationChartsRequest
       * @return ModelRouterQueryObservationChartsResponse
       */
      Models::ModelRouterQueryObservationChartsResponse modelRouterQueryObservationCharts(const Models::ModelRouterQueryObservationChartsRequest &request);

      /**
       * @summary Model Observation / Observation Logs
       *
       * @param request ModelRouterQueryObservationLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryObservationLogsResponse
       */
      Models::ModelRouterQueryObservationLogsResponse modelRouterQueryObservationLogsWithOptions(const Models::ModelRouterQueryObservationLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Model Observation / Observation Logs
       *
       * @param request ModelRouterQueryObservationLogsRequest
       * @return ModelRouterQueryObservationLogsResponse
       */
      Models::ModelRouterQueryObservationLogsResponse modelRouterQueryObservationLogs(const Models::ModelRouterQueryObservationLogsRequest &request);

      /**
       * @summary Model Observation > Get Observation Metric Data
       *
       * @param request ModelRouterQueryObservationMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryObservationMetricsResponse
       */
      Models::ModelRouterQueryObservationMetricsResponse modelRouterQueryObservationMetricsWithOptions(const Models::ModelRouterQueryObservationMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Model Observation > Get Observation Metric Data
       *
       * @param request ModelRouterQueryObservationMetricsRequest
       * @return ModelRouterQueryObservationMetricsResponse
       */
      Models::ModelRouterQueryObservationMetricsResponse modelRouterQueryObservationMetrics(const Models::ModelRouterQueryObservationMetricsRequest &request);

      /**
       * @summary Queries usage details in batches for usage management.
       *
       * @param request ModelRouterQueryUsageBreakdownRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterQueryUsageBreakdownResponse
       */
      Models::ModelRouterQueryUsageBreakdownResponse modelRouterQueryUsageBreakdownWithOptions(const Models::ModelRouterQueryUsageBreakdownRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries usage details in batches for usage management.
       *
       * @param request ModelRouterQueryUsageBreakdownRequest
       * @return ModelRouterQueryUsageBreakdownResponse
       */
      Models::ModelRouterQueryUsageBreakdownResponse modelRouterQueryUsageBreakdown(const Models::ModelRouterQueryUsageBreakdownRequest &request);

      /**
       * @summary Flow control management / Save flow control configuration
       *
       * @param request ModelRouterSaveFlowConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterSaveFlowConfigResponse
       */
      Models::ModelRouterSaveFlowConfigResponse modelRouterSaveFlowConfigWithOptions(const Models::ModelRouterSaveFlowConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Flow control management / Save flow control configuration
       *
       * @param request ModelRouterSaveFlowConfigRequest
       * @return ModelRouterSaveFlowConfigResponse
       */
      Models::ModelRouterSaveFlowConfigResponse modelRouterSaveFlowConfig(const Models::ModelRouterSaveFlowConfigRequest &request);

      /**
       * @summary 客户管理/停止周期充值订阅
       *
       * @param request ModelRouterStopSubscriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterStopSubscriptionResponse
       */
      Models::ModelRouterStopSubscriptionResponse modelRouterStopSubscriptionWithOptions(const string &id, const Models::ModelRouterStopSubscriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 客户管理/停止周期充值订阅
       *
       * @param request ModelRouterStopSubscriptionRequest
       * @return ModelRouterStopSubscriptionResponse
       */
      Models::ModelRouterStopSubscriptionResponse modelRouterStopSubscription(const string &id, const Models::ModelRouterStopSubscriptionRequest &request);

      /**
       * @summary Billing management/Update billing rules
       *
       * @param request ModelRouterUpdateBillingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterUpdateBillingRuleResponse
       */
      Models::ModelRouterUpdateBillingRuleResponse modelRouterUpdateBillingRuleWithOptions(const string &id, const Models::ModelRouterUpdateBillingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Billing management/Update billing rules
       *
       * @param request ModelRouterUpdateBillingRuleRequest
       * @return ModelRouterUpdateBillingRuleResponse
       */
      Models::ModelRouterUpdateBillingRuleResponse modelRouterUpdateBillingRule(const string &id, const Models::ModelRouterUpdateBillingRuleRequest &request);

      /**
       * @summary Updates a specified client\\"s information.
       *
       * @param request ModelRouterUpdateClientRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterUpdateClientResponse
       */
      Models::ModelRouterUpdateClientResponse modelRouterUpdateClientWithOptions(const string &id, const Models::ModelRouterUpdateClientRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specified client\\"s information.
       *
       * @param request ModelRouterUpdateClientRequest
       * @return ModelRouterUpdateClientResponse
       */
      Models::ModelRouterUpdateClientResponse modelRouterUpdateClient(const string &id, const Models::ModelRouterUpdateClientRequest &request);

      /**
       * @summary Conversation management / Update conversation
       *
       * @param request ModelRouterUpdateConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterUpdateConversationResponse
       */
      Models::ModelRouterUpdateConversationResponse modelRouterUpdateConversationWithOptions(const string &id, const Models::ModelRouterUpdateConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Conversation management / Update conversation
       *
       * @param request ModelRouterUpdateConversationRequest
       * @return ModelRouterUpdateConversationResponse
       */
      Models::ModelRouterUpdateConversationResponse modelRouterUpdateConversation(const string &id, const Models::ModelRouterUpdateConversationRequest &request);

      /**
       * @summary Model Management / Update Model
       *
       * @param request ModelRouterUpdateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModelRouterUpdateModelResponse
       */
      Models::ModelRouterUpdateModelResponse modelRouterUpdateModelWithOptions(const string &id, const Models::ModelRouterUpdateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Model Management / Update Model
       *
       * @param request ModelRouterUpdateModelRequest
       * @return ModelRouterUpdateModelResponse
       */
      Models::ModelRouterUpdateModelResponse modelRouterUpdateModel(const string &id, const Models::ModelRouterUpdateModelRequest &request);

      /**
       * @summary Personalized text-to-image: Create image inference tasks using a pre-trained model.
       *
       * @param request PersonalizedTextToImageAddInferenceJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PersonalizedTextToImageAddInferenceJobResponse
       */
      Models::PersonalizedTextToImageAddInferenceJobResponse personalizedTextToImageAddInferenceJobWithOptions(const Models::PersonalizedTextToImageAddInferenceJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Personalized text-to-image: Create image inference tasks using a pre-trained model.
       *
       * @param request PersonalizedTextToImageAddInferenceJobRequest
       * @return PersonalizedTextToImageAddInferenceJobResponse
       */
      Models::PersonalizedTextToImageAddInferenceJobResponse personalizedTextToImageAddInferenceJob(const Models::PersonalizedTextToImageAddInferenceJobRequest &request);

      /**
       * @summary Retrieves the content of an image from the personalized text-to-image service using its unique image ID.
       *
       * @param request PersonalizedTextToImageQueryImageAssetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PersonalizedTextToImageQueryImageAssetResponse
       */
      Models::PersonalizedTextToImageQueryImageAssetResponse personalizedTextToImageQueryImageAssetWithOptions(const Models::PersonalizedTextToImageQueryImageAssetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the content of an image from the personalized text-to-image service using its unique image ID.
       *
       * @param request PersonalizedTextToImageQueryImageAssetRequest
       * @return PersonalizedTextToImageQueryImageAssetResponse
       */
      Models::PersonalizedTextToImageQueryImageAssetResponse personalizedTextToImageQueryImageAsset(const Models::PersonalizedTextToImageQueryImageAssetRequest &request);

      /**
       * @summary Queries the status of a personalized text-to-image inference job.
       *
       * @param request PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse
       */
      Models::PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse personalizedTextToImageQueryPreModelInferenceJobInfoWithOptions(const Models::PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a personalized text-to-image inference job.
       *
       * @param request PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest
       * @return PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse
       */
      Models::PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse personalizedTextToImageQueryPreModelInferenceJobInfo(const Models::PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest &request);

      /**
       * @summary Creates an inference job to generate images based on a personalized text-to-image model.
       *
       * @param request Personalizedtxt2imgAddInferenceJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgAddInferenceJobResponse
       */
      Models::Personalizedtxt2imgAddInferenceJobResponse personalizedtxt2imgAddInferenceJobWithOptions(const Models::Personalizedtxt2imgAddInferenceJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an inference job to generate images based on a personalized text-to-image model.
       *
       * @param request Personalizedtxt2imgAddInferenceJobRequest
       * @return Personalizedtxt2imgAddInferenceJobResponse
       */
      Models::Personalizedtxt2imgAddInferenceJobResponse personalizedtxt2imgAddInferenceJob(const Models::Personalizedtxt2imgAddInferenceJobRequest &request);

      /**
       * @summary Personalized text-to-image: Create a model training task.
       *
       * @param request Personalizedtxt2imgAddModelTrainJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgAddModelTrainJobResponse
       */
      Models::Personalizedtxt2imgAddModelTrainJobResponse personalizedtxt2imgAddModelTrainJobWithOptions(const Models::Personalizedtxt2imgAddModelTrainJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Personalized text-to-image: Create a model training task.
       *
       * @param request Personalizedtxt2imgAddModelTrainJobRequest
       * @return Personalizedtxt2imgAddModelTrainJobResponse
       */
      Models::Personalizedtxt2imgAddModelTrainJobResponse personalizedtxt2imgAddModelTrainJob(const Models::Personalizedtxt2imgAddModelTrainJobRequest &request);

      /**
       * @summary Retrieves the binary data of an image generated by the personalized text-to-image service.
       *
       * @param request Personalizedtxt2imgQueryImageAssetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgQueryImageAssetResponse
       */
      Models::Personalizedtxt2imgQueryImageAssetResponse personalizedtxt2imgQueryImageAssetWithOptions(const Models::Personalizedtxt2imgQueryImageAssetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the binary data of an image generated by the personalized text-to-image service.
       *
       * @param request Personalizedtxt2imgQueryImageAssetRequest
       * @return Personalizedtxt2imgQueryImageAssetResponse
       */
      Models::Personalizedtxt2imgQueryImageAssetResponse personalizedtxt2imgQueryImageAsset(const Models::Personalizedtxt2imgQueryImageAssetRequest &request);

      /**
       * @summary Retrieves the status and results of a Personalizedtxt2img inference job.
       *
       * @param request Personalizedtxt2imgQueryInferenceJobInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgQueryInferenceJobInfoResponse
       */
      Models::Personalizedtxt2imgQueryInferenceJobInfoResponse personalizedtxt2imgQueryInferenceJobInfoWithOptions(const Models::Personalizedtxt2imgQueryInferenceJobInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the status and results of a Personalizedtxt2img inference job.
       *
       * @param request Personalizedtxt2imgQueryInferenceJobInfoRequest
       * @return Personalizedtxt2imgQueryInferenceJobInfoResponse
       */
      Models::Personalizedtxt2imgQueryInferenceJobInfoResponse personalizedtxt2imgQueryInferenceJobInfo(const Models::Personalizedtxt2imgQueryInferenceJobInfoRequest &request);

      /**
       * @summary Your personalized model training tasks: image generation and query models.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgQueryModelTrainJobListResponse
       */
      Models::Personalizedtxt2imgQueryModelTrainJobListResponse personalizedtxt2imgQueryModelTrainJobListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Your personalized model training tasks: image generation and query models.
       *
       * @return Personalizedtxt2imgQueryModelTrainJobListResponse
       */
      Models::Personalizedtxt2imgQueryModelTrainJobListResponse personalizedtxt2imgQueryModelTrainJobList();

      /**
       * @summary Queries the training status of a personalized text-to-image model.
       *
       * @param request Personalizedtxt2imgQueryModelTrainStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return Personalizedtxt2imgQueryModelTrainStatusResponse
       */
      Models::Personalizedtxt2imgQueryModelTrainStatusResponse personalizedtxt2imgQueryModelTrainStatusWithOptions(const Models::Personalizedtxt2imgQueryModelTrainStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the training status of a personalized text-to-image model.
       *
       * @param request Personalizedtxt2imgQueryModelTrainStatusRequest
       * @return Personalizedtxt2imgQueryModelTrainStatusResponse
       */
      Models::Personalizedtxt2imgQueryModelTrainStatusResponse personalizedtxt2imgQueryModelTrainStatus(const Models::Personalizedtxt2imgQueryModelTrainStatusRequest &request);

      /**
       * @summary Queries information about an application access ID (appkey).
       *
       * @param request QueryApplicationAccessIdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryApplicationAccessIdResponse
       */
      Models::QueryApplicationAccessIdResponse queryApplicationAccessIdWithOptions(const Models::QueryApplicationAccessIdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an application access ID (appkey).
       *
       * @param request QueryApplicationAccessIdRequest
       * @return QueryApplicationAccessIdResponse
       */
      Models::QueryApplicationAccessIdResponse queryApplicationAccessId(const Models::QueryApplicationAccessIdRequest &request);

      /**
       * @summary Alibaba Cloud console / Project list
       *
       * @param request QueryProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryProjectResponse
       */
      Models::QueryProjectResponse queryProjectWithOptions(const Models::QueryProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Alibaba Cloud console / Project list
       *
       * @param request QueryProjectRequest
       * @return QueryProjectResponse
       */
      Models::QueryProjectResponse queryProject(const Models::QueryProjectRequest &request);

      /**
       * @summary Alibaba Cloud console / Project List
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryProjectListResponse
       */
      Models::QueryProjectListResponse queryProjectListWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Alibaba Cloud console / Project List
       *
       * @return QueryProjectListResponse
       */
      Models::QueryProjectListResponse queryProjectList();

      /**
       * @summary Alibaba Cloud Console / Purchased Services
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPurchasedServiceResponse
       */
      Models::QueryPurchasedServiceResponse queryPurchasedServiceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Alibaba Cloud Console / Purchased Services
       *
       * @return QueryPurchasedServiceResponse
       */
      Models::QueryPurchasedServiceResponse queryPurchasedService();

      /**
       * @summary Alibaba Cloud Console / Update project information
       *
       * @param request UpdateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProjectWithOptions(const Models::UpdateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Alibaba Cloud Console / Update project information
       *
       * @param request UpdateProjectRequest
       * @return UpdateProjectResponse
       */
      Models::UpdateProjectResponse updateProject(const Models::UpdateProjectRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
