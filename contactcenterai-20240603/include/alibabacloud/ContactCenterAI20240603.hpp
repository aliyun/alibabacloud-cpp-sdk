// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CONTACTCENTERAI20240603_HPP_
#define ALIBABACLOUD_CONTACTCENTERAI20240603_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ContactCenterAI20240603Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ContactCenterAI20240603.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 语音文件分析任务极速版
       *
       * @param request AnalyzeAudioSyncRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeAudioSyncResponse
       */
      FutureGenerator<Models::AnalyzeAudioSyncResponse> analyzeAudioSyncWithSSE(const string &workspaceId, const string &appId, const Models::AnalyzeAudioSyncRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 语音文件分析任务极速版
       *
       * @param request AnalyzeAudioSyncRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeAudioSyncResponse
       */
      Models::AnalyzeAudioSyncResponse analyzeAudioSyncWithOptions(const string &workspaceId, const string &appId, const Models::AnalyzeAudioSyncRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 语音文件分析任务极速版
       *
       * @param request AnalyzeAudioSyncRequest
       * @return AnalyzeAudioSyncResponse
       */
      Models::AnalyzeAudioSyncResponse analyzeAudioSync(const string &workspaceId, const string &appId, const Models::AnalyzeAudioSyncRequest &request);

      /**
       * @summary 根据类型调用大模型
       *
       * @param request AnalyzeConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeConversationResponse
       */
      FutureGenerator<Models::AnalyzeConversationResponse> analyzeConversationWithSSE(const string &workspaceId, const string &appId, const Models::AnalyzeConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据类型调用大模型
       *
       * @param request AnalyzeConversationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeConversationResponse
       */
      Models::AnalyzeConversationResponse analyzeConversationWithOptions(const string &workspaceId, const string &appId, const Models::AnalyzeConversationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据类型调用大模型
       *
       * @param request AnalyzeConversationRequest
       * @return AnalyzeConversationResponse
       */
      Models::AnalyzeConversationResponse analyzeConversation(const string &workspaceId, const string &appId, const Models::AnalyzeConversationRequest &request);

      /**
       * @summary 图片分析
       *
       * @param request AnalyzeImageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeImageResponse
       */
      FutureGenerator<Models::AnalyzeImageResponse> analyzeImageWithSSE(const string &workspaceId, const string &appId, const Models::AnalyzeImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片分析
       *
       * @param request AnalyzeImageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnalyzeImageResponse
       */
      Models::AnalyzeImageResponse analyzeImageWithOptions(const string &workspaceId, const string &appId, const Models::AnalyzeImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片分析
       *
       * @param request AnalyzeImageRequest
       * @return AnalyzeImageResponse
       */
      Models::AnalyzeImageResponse analyzeImage(const string &workspaceId, const string &appId, const Models::AnalyzeImageRequest &request);

      /**
       * @summary 创建语音文件调用llm任务
       *
       * @param request CreateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTaskWithOptions(const string &workspaceId, const string &appId, const Models::CreateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建语音文件调用llm任务
       *
       * @param request CreateTaskRequest
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTask(const string &workspaceId, const string &appId, const Models::CreateTaskRequest &request);

      /**
       * @summary 创建热词
       *
       * @param request CreateVocabRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVocabResponse
       */
      Models::CreateVocabResponse createVocabWithOptions(const Models::CreateVocabRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建热词
       *
       * @param request CreateVocabRequest
       * @return CreateVocabResponse
       */
      Models::CreateVocabResponse createVocab(const Models::CreateVocabRequest &request);

      /**
       * @summary 删删除热词
       *
       * @param request DeleteVocabRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVocabResponse
       */
      Models::DeleteVocabResponse deleteVocabWithOptions(const Models::DeleteVocabRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删删除热词
       *
       * @param request DeleteVocabRequest
       * @return DeleteVocabResponse
       */
      Models::DeleteVocabResponse deleteVocab(const Models::DeleteVocabRequest &request);

      /**
       * @summary 通用图片分析
       *
       * @param request GeneralAnalyzeImageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GeneralAnalyzeImageResponse
       */
      FutureGenerator<Models::GeneralAnalyzeImageResponse> generalAnalyzeImageWithSSE(const string &workspaceId, const string &appId, const Models::GeneralAnalyzeImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用图片分析
       *
       * @param request GeneralAnalyzeImageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GeneralAnalyzeImageResponse
       */
      Models::GeneralAnalyzeImageResponse generalAnalyzeImageWithOptions(const string &workspaceId, const string &appId, const Models::GeneralAnalyzeImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通用图片分析
       *
       * @param request GeneralAnalyzeImageRequest
       * @return GeneralAnalyzeImageResponse
       */
      Models::GeneralAnalyzeImageResponse generalAnalyzeImage(const string &workspaceId, const string &appId, const Models::GeneralAnalyzeImageRequest &request);

      /**
       * @summary 语音文件调用大模型获取结果
       *
       * @param tmpReq GetTaskResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResultResponse
       */
      Models::GetTaskResultResponse getTaskResultWithOptions(const Models::GetTaskResultRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 语音文件调用大模型获取结果
       *
       * @param request GetTaskResultRequest
       * @return GetTaskResultResponse
       */
      Models::GetTaskResultResponse getTaskResult(const Models::GetTaskResultRequest &request);

      /**
       * @summary 获取热词
       *
       * @param request GetVocabRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVocabResponse
       */
      Models::GetVocabResponse getVocabWithOptions(const Models::GetVocabRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取热词
       *
       * @param request GetVocabRequest
       * @return GetVocabResponse
       */
      Models::GetVocabResponse getVocab(const Models::GetVocabRequest &request);

      /**
       * @summary 热词列表
       *
       * @param request ListVocabRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVocabResponse
       */
      Models::ListVocabResponse listVocabWithOptions(const Models::ListVocabRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 热词列表
       *
       * @param request ListVocabRequest
       * @return ListVocabResponse
       */
      Models::ListVocabResponse listVocab(const Models::ListVocabRequest &request);

      /**
       * @summary CCAI服务面API
       *
       * @param request RunCompletionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCompletionResponse
       */
      FutureGenerator<Models::RunCompletionResponse> runCompletionWithSSE(const string &workspaceId, const string &appId, const Models::RunCompletionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CCAI服务面API
       *
       * @param request RunCompletionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCompletionResponse
       */
      Models::RunCompletionResponse runCompletionWithOptions(const string &workspaceId, const string &appId, const Models::RunCompletionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CCAI服务面API
       *
       * @param request RunCompletionRequest
       * @return RunCompletionResponse
       */
      Models::RunCompletionResponse runCompletion(const string &workspaceId, const string &appId, const Models::RunCompletionRequest &request);

      /**
       * @summary CCAI服务面API
       *
       * @param request RunCompletionMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCompletionMessageResponse
       */
      FutureGenerator<Models::RunCompletionMessageResponse> runCompletionMessageWithSSE(const string &workspaceId, const string &appId, const Models::RunCompletionMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CCAI服务面API
       *
       * @param request RunCompletionMessageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCompletionMessageResponse
       */
      Models::RunCompletionMessageResponse runCompletionMessageWithOptions(const string &workspaceId, const string &appId, const Models::RunCompletionMessageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CCAI服务面API
       *
       * @param request RunCompletionMessageRequest
       * @return RunCompletionMessageResponse
       */
      Models::RunCompletionMessageResponse runCompletionMessage(const string &workspaceId, const string &appId, const Models::RunCompletionMessageRequest &request);

      /**
       * @summary 修改热词
       *
       * @param request UpdateVocabRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVocabResponse
       */
      Models::UpdateVocabResponse updateVocabWithOptions(const Models::UpdateVocabRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改热词
       *
       * @param request UpdateVocabRequest
       * @return UpdateVocabResponse
       */
      Models::UpdateVocabResponse updateVocab(const Models::UpdateVocabRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
