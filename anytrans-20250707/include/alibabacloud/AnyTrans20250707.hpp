// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ANYTRANS20250707_HPP_
#define ALIBABACLOUD_ANYTRANS20250707_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AnyTrans20250707Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AnyTrans20250707.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 通义多模态翻译批量翻译
       *
       * @param tmpReq BatchTranslateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchTranslateResponse
       */
      Models::BatchTranslateResponse batchTranslateWithOptions(const Models::BatchTranslateRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译批量翻译
       *
       * @param request BatchTranslateRequest
       * @return BatchTranslateResponse
       */
      Models::BatchTranslateResponse batchTranslate(const Models::BatchTranslateRequest &request);

      /**
       * @summary 通义多模态翻译获文档翻译任务
       *
       * @param request GetDocTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocTranslateTaskResponse
       */
      Models::GetDocTranslateTaskResponse getDocTranslateTaskWithOptions(const Models::GetDocTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译获文档翻译任务
       *
       * @param request GetDocTranslateTaskRequest
       * @return GetDocTranslateTaskResponse
       */
      Models::GetDocTranslateTaskResponse getDocTranslateTask(const Models::GetDocTranslateTaskRequest &request);

      /**
       * @summary 通义多模态翻译获取html翻译结果
       *
       * @param request GetHtmlTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHtmlTranslateTaskResponse
       */
      Models::GetHtmlTranslateTaskResponse getHtmlTranslateTaskWithOptions(const Models::GetHtmlTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译获取html翻译结果
       *
       * @param request GetHtmlTranslateTaskRequest
       * @return GetHtmlTranslateTaskResponse
       */
      Models::GetHtmlTranslateTaskResponse getHtmlTranslateTask(const Models::GetHtmlTranslateTaskRequest &request);

      /**
       * @summary 通义多模态翻译获取图片翻译任务
       *
       * @param request GetImageTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageTranslateTaskResponse
       */
      Models::GetImageTranslateTaskResponse getImageTranslateTaskWithOptions(const Models::GetImageTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译获取图片翻译任务
       *
       * @param request GetImageTranslateTaskRequest
       * @return GetImageTranslateTaskResponse
       */
      Models::GetImageTranslateTaskResponse getImageTranslateTask(const Models::GetImageTranslateTaskRequest &request);

      /**
       * @summary 通义多模态翻译获取长文翻译结果
       *
       * @param request GetLongTextTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLongTextTranslateTaskResponse
       */
      Models::GetLongTextTranslateTaskResponse getLongTextTranslateTaskWithOptions(const Models::GetLongTextTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译获取长文翻译结果
       *
       * @param request GetLongTextTranslateTaskRequest
       * @return GetLongTextTranslateTaskResponse
       */
      Models::GetLongTextTranslateTaskResponse getLongTextTranslateTask(const Models::GetLongTextTranslateTaskRequest &request);

      /**
       * @summary 通义多模态翻译提交文档翻译任务
       *
       * @param tmpReq SubmitDocTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDocTranslateTaskResponse
       */
      Models::SubmitDocTranslateTaskResponse submitDocTranslateTaskWithOptions(const Models::SubmitDocTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译提交文档翻译任务
       *
       * @param request SubmitDocTranslateTaskRequest
       * @return SubmitDocTranslateTaskResponse
       */
      Models::SubmitDocTranslateTaskResponse submitDocTranslateTask(const Models::SubmitDocTranslateTaskRequest &request);

      /**
       * @summary 通义多模态翻译提交html翻译任务
       *
       * @param tmpReq SubmitHtmlTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitHtmlTranslateTaskResponse
       */
      Models::SubmitHtmlTranslateTaskResponse submitHtmlTranslateTaskWithOptions(const Models::SubmitHtmlTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译提交html翻译任务
       *
       * @param request SubmitHtmlTranslateTaskRequest
       * @return SubmitHtmlTranslateTaskResponse
       */
      Models::SubmitHtmlTranslateTaskResponse submitHtmlTranslateTask(const Models::SubmitHtmlTranslateTaskRequest &request);

      /**
       * @summary 通义多模态翻译提交图片翻译任务
       *
       * @param tmpReq SubmitImageTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImageTranslateTaskResponse
       */
      Models::SubmitImageTranslateTaskResponse submitImageTranslateTaskWithOptions(const Models::SubmitImageTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译提交图片翻译任务
       *
       * @param request SubmitImageTranslateTaskRequest
       * @return SubmitImageTranslateTaskResponse
       */
      Models::SubmitImageTranslateTaskResponse submitImageTranslateTask(const Models::SubmitImageTranslateTaskRequest &request);

      /**
       * @summary 通义多模态翻译提交长文翻译任务
       *
       * @param tmpReq SubmitLongTextTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitLongTextTranslateTaskResponse
       */
      Models::SubmitLongTextTranslateTaskResponse submitLongTextTranslateTaskWithOptions(const Models::SubmitLongTextTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译提交长文翻译任务
       *
       * @param request SubmitLongTextTranslateTaskRequest
       * @return SubmitLongTextTranslateTaskResponse
       */
      Models::SubmitLongTextTranslateTaskResponse submitLongTextTranslateTask(const Models::SubmitLongTextTranslateTaskRequest &request);

      /**
       * @summary 通义多模态翻译术语编辑
       *
       * @param tmpReq TermEditRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TermEditResponse
       */
      Models::TermEditResponse termEditWithOptions(const Models::TermEditRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译术语编辑
       *
       * @param request TermEditRequest
       * @return TermEditResponse
       */
      Models::TermEditResponse termEdit(const Models::TermEditRequest &request);

      /**
       * @summary 通义多模态翻译术语查询
       *
       * @param request TermQueryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TermQueryResponse
       */
      Models::TermQueryResponse termQueryWithOptions(const Models::TermQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译术语查询
       *
       * @param request TermQueryRequest
       * @return TermQueryResponse
       */
      Models::TermQueryResponse termQuery(const Models::TermQueryRequest &request);

      /**
       * @summary 通义多模态翻译文本翻译
       *
       * @param tmpReq TextTranslateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TextTranslateResponse
       */
      Models::TextTranslateResponse textTranslateWithOptions(const Models::TextTranslateRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译文本翻译
       *
       * @param request TextTranslateRequest
       * @return TextTranslateResponse
       */
      Models::TextTranslateResponse textTranslate(const Models::TextTranslateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
