// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_TINGWU20230930_HPP_
#define ALIBABACLOUD_TINGWU20230930_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Tingwu20230930Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Tingwu20230930.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建听悟任务
       *
       * @param request CreateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTaskWithOptions(const Models::CreateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建听悟任务
       *
       * @param request CreateTaskRequest
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTask(const Models::CreateTaskRequest &request);

      /**
       * @summary 创建热词词表
       *
       * @param request CreateTranscriptionPhrasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTranscriptionPhrasesResponse
       */
      Models::CreateTranscriptionPhrasesResponse createTranscriptionPhrasesWithOptions(const Models::CreateTranscriptionPhrasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建热词词表
       *
       * @param request CreateTranscriptionPhrasesRequest
       * @return CreateTranscriptionPhrasesResponse
       */
      Models::CreateTranscriptionPhrasesResponse createTranscriptionPhrases(const Models::CreateTranscriptionPhrasesRequest &request);

      /**
       * @summary 删除词表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTranscriptionPhrasesResponse
       */
      Models::DeleteTranscriptionPhrasesResponse deleteTranscriptionPhrasesWithOptions(const string &PhraseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除词表
       *
       * @return DeleteTranscriptionPhrasesResponse
       */
      Models::DeleteTranscriptionPhrasesResponse deleteTranscriptionPhrases(const string &PhraseId);

      /**
       * @summary 查询听悟任务信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskInfoResponse
       */
      Models::GetTaskInfoResponse getTaskInfoWithOptions(const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询听悟任务信息
       *
       * @return GetTaskInfoResponse
       */
      Models::GetTaskInfoResponse getTaskInfo(const string &TaskId);

      /**
       * @summary 查询热词词表信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranscriptionPhrasesResponse
       */
      Models::GetTranscriptionPhrasesResponse getTranscriptionPhrasesWithOptions(const string &PhraseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询热词词表信息
       *
       * @return GetTranscriptionPhrasesResponse
       */
      Models::GetTranscriptionPhrasesResponse getTranscriptionPhrases(const string &PhraseId);

      /**
       * @summary 列举用户所有热词词表信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTranscriptionPhrasesResponse
       */
      Models::ListTranscriptionPhrasesResponse listTranscriptionPhrasesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举用户所有热词词表信息
       *
       * @return ListTranscriptionPhrasesResponse
       */
      Models::ListTranscriptionPhrasesResponse listTranscriptionPhrases();

      /**
       * @summary 更新热词词表
       *
       * @param request UpdateTranscriptionPhrasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTranscriptionPhrasesResponse
       */
      Models::UpdateTranscriptionPhrasesResponse updateTranscriptionPhrasesWithOptions(const string &PhraseId, const Models::UpdateTranscriptionPhrasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新热词词表
       *
       * @param request UpdateTranscriptionPhrasesRequest
       * @return UpdateTranscriptionPhrasesResponse
       */
      Models::UpdateTranscriptionPhrasesResponse updateTranscriptionPhrases(const string &PhraseId, const Models::UpdateTranscriptionPhrasesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
