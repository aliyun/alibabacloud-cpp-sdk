// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTRANSLATIONAGENT20260622_HPP_
#define ALIBABACLOUD_REALTRANSLATIONAGENT20260622_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/RealTranslationAgent20260622Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/RealTranslationAgent20260622.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RealTranslationAgent20260622
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 取消翻译任务
       *
       * @param request CancelTranslationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTranslationTaskResponse
       */
      Models::CancelTranslationTaskResponse cancelTranslationTaskWithOptions(const Models::CancelTranslationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消翻译任务
       *
       * @param request CancelTranslationTaskRequest
       * @return CancelTranslationTaskResponse
       */
      Models::CancelTranslationTaskResponse cancelTranslationTask(const Models::CancelTranslationTaskRequest &request);

      /**
       * @summary 获取原文文件下载URL
       *
       * @param request GetOriginalFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOriginalFileUrlResponse
       */
      Models::GetOriginalFileUrlResponse getOriginalFileUrlWithOptions(const Models::GetOriginalFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取原文文件下载URL
       *
       * @param request GetOriginalFileUrlRequest
       * @return GetOriginalFileUrlResponse
       */
      Models::GetOriginalFileUrlResponse getOriginalFileUrl(const Models::GetOriginalFileUrlRequest &request);

      /**
       * @summary 获取译文文件下载URL
       *
       * @param request GetTranslatedFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranslatedFileUrlResponse
       */
      Models::GetTranslatedFileUrlResponse getTranslatedFileUrlWithOptions(const Models::GetTranslatedFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取译文文件下载URL
       *
       * @param request GetTranslatedFileUrlRequest
       * @return GetTranslatedFileUrlResponse
       */
      Models::GetTranslatedFileUrlResponse getTranslatedFileUrl(const Models::GetTranslatedFileUrlRequest &request);

      /**
       * @summary 获取翻译任务详情
       *
       * @param request GetTranslationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranslationTaskResponse
       */
      Models::GetTranslationTaskResponse getTranslationTaskWithOptions(const Models::GetTranslationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取翻译任务详情
       *
       * @param request GetTranslationTaskRequest
       * @return GetTranslationTaskResponse
       */
      Models::GetTranslationTaskResponse getTranslationTask(const Models::GetTranslationTaskRequest &request);

      /**
       * @summary 获取翻译任务列表
       *
       * @param request ListTranslationTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTranslationTasksResponse
       */
      Models::ListTranslationTasksResponse listTranslationTasksWithOptions(const Models::ListTranslationTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取翻译任务列表
       *
       * @param request ListTranslationTasksRequest
       * @return ListTranslationTasksResponse
       */
      Models::ListTranslationTasksResponse listTranslationTasks(const Models::ListTranslationTasksRequest &request);

      /**
       * @summary 提交翻译任务
       *
       * @param tmpReq SubmitTranslationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTranslationTaskResponse
       */
      Models::SubmitTranslationTaskResponse submitTranslationTaskWithOptions(const Models::SubmitTranslationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交翻译任务
       *
       * @param request SubmitTranslationTaskRequest
       * @return SubmitTranslationTaskResponse
       */
      Models::SubmitTranslationTaskResponse submitTranslationTask(const Models::SubmitTranslationTaskRequest &request);

      /**
       * @summary 解析文档
       *
       * @param request UploadTranslationFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadTranslationFileResponse
       */
      Models::UploadTranslationFileResponse uploadTranslationFileWithOptions(const Models::UploadTranslationFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解析文档
       *
       * @param request UploadTranslationFileRequest
       * @return UploadTranslationFileResponse
       */
      Models::UploadTranslationFileResponse uploadTranslationFile(const Models::UploadTranslationFileRequest &request);

      Models::UploadTranslationFileResponse uploadTranslationFileAdvance(const Models::UploadTranslationFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace RealTranslationAgent20260622
#endif
