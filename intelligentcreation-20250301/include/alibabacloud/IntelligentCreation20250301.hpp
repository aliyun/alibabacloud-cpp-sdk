// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_INTELLIGENTCREATION20250301_HPP_
#define ALIBABACLOUD_INTELLIGENTCREATION20250301_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/IntelligentCreation20250301Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/IntelligentCreation20250301.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20250301
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建模型标注任务
       *
       * @param request CreateLabelTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLabelTaskResponse
       */
      Models::CreateLabelTaskResponse createLabelTaskWithOptions(const Models::CreateLabelTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模型标注任务
       *
       * @param request CreateLabelTaskRequest
       * @return CreateLabelTaskResponse
       */
      Models::CreateLabelTaskResponse createLabelTask(const Models::CreateLabelTaskRequest &request);

      /**
       * @summary 创建OSS上传token
       *
       * @param request CreateOssUploadTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOssUploadTokenResponse
       */
      Models::CreateOssUploadTokenResponse createOssUploadTokenWithOptions(const Models::CreateOssUploadTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建OSS上传token
       *
       * @param request CreateOssUploadTokenRequest
       * @return CreateOssUploadTokenResponse
       */
      Models::CreateOssUploadTokenResponse createOssUploadToken(const Models::CreateOssUploadTokenRequest &request);

      /**
       * @summary 单条文本标注
       *
       * @param request CreateTextLabelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTextLabelResponse
       */
      Models::CreateTextLabelResponse createTextLabelWithOptions(const Models::CreateTextLabelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 单条文本标注
       *
       * @param request CreateTextLabelRequest
       * @return CreateTextLabelResponse
       */
      Models::CreateTextLabelResponse createTextLabel(const Models::CreateTextLabelRequest &request);

      /**
       * @summary 查询模型标注任务
       *
       * @param request GetLabelTaskResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLabelTaskResultResponse
       */
      Models::GetLabelTaskResultResponse getLabelTaskResultWithOptions(const Models::GetLabelTaskResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型标注任务
       *
       * @param request GetLabelTaskResultRequest
       * @return GetLabelTaskResultResponse
       */
      Models::GetLabelTaskResultResponse getLabelTaskResult(const Models::GetLabelTaskResultRequest &request);
  };
} // namespace AlibabaCloud
} // namespace IntelligentCreation20250301
#endif
