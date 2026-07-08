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
       * @summary Tongyi Multimodal Translation: Batch Translation
       *
       * @param tmpReq BatchTranslateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchTranslateResponse
       */
      Models::BatchTranslateResponse batchTranslateWithOptions(const Models::BatchTranslateRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tongyi Multimodal Translation: Batch Translation
       *
       * @param request BatchTranslateRequest
       * @return BatchTranslateResponse
       */
      Models::BatchTranslateResponse batchTranslate(const Models::BatchTranslateRequest &request);

      /**
       * @summary 通义多模态翻译批量翻译(供js sdk使用)
       *
       * @param tmpReq BatchTranslateForHtmlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchTranslateForHtmlResponse
       */
      Models::BatchTranslateForHtmlResponse batchTranslateForHtmlWithOptions(const Models::BatchTranslateForHtmlRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态翻译批量翻译(供js sdk使用)
       *
       * @param request BatchTranslateForHtmlRequest
       * @return BatchTranslateForHtmlResponse
       */
      Models::BatchTranslateForHtmlResponse batchTranslateForHtml(const Models::BatchTranslateForHtmlRequest &request);

      /**
       * @summary Gets the results of a document translation task from Tongyi Multimodal Translation.
       *
       * @description Gets the results of a document translation task.
       *
       * @param request GetDocTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocTranslateTaskResponse
       */
      Models::GetDocTranslateTaskResponse getDocTranslateTaskWithOptions(const Models::GetDocTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the results of a document translation task from Tongyi Multimodal Translation.
       *
       * @description Gets the results of a document translation task.
       *
       * @param request GetDocTranslateTaskRequest
       * @return GetDocTranslateTaskResponse
       */
      Models::GetDocTranslateTaskResponse getDocTranslateTask(const Models::GetDocTranslateTaskRequest &request);

      /**
       * @summary Retrieves the result of an HTML translation task from Tongyi Multimodal Translation.
       *
       * @param request GetHtmlTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHtmlTranslateTaskResponse
       */
      Models::GetHtmlTranslateTaskResponse getHtmlTranslateTaskWithOptions(const Models::GetHtmlTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the result of an HTML translation task from Tongyi Multimodal Translation.
       *
       * @param request GetHtmlTranslateTaskRequest
       * @return GetHtmlTranslateTaskResponse
       */
      Models::GetHtmlTranslateTaskResponse getHtmlTranslateTask(const Models::GetHtmlTranslateTaskRequest &request);

      /**
       * @summary Tongyi Multimodal Translation: Getting image translation results
       *
       * @param request GetImageTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageTranslateTaskResponse
       */
      Models::GetImageTranslateTaskResponse getImageTranslateTaskWithOptions(const Models::GetImageTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tongyi Multimodal Translation: Getting image translation results
       *
       * @param request GetImageTranslateTaskRequest
       * @return GetImageTranslateTaskResponse
       */
      Models::GetImageTranslateTaskResponse getImageTranslateTask(const Models::GetImageTranslateTaskRequest &request);

      /**
       * @summary Get document translations from Tongyi Multimodal Translation.
       *
       * @param request GetLongTextTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLongTextTranslateTaskResponse
       */
      Models::GetLongTextTranslateTaskResponse getLongTextTranslateTaskWithOptions(const Models::GetLongTextTranslateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get document translations from Tongyi Multimodal Translation.
       *
       * @param request GetLongTextTranslateTaskRequest
       * @return GetLongTextTranslateTaskResponse
       */
      Models::GetLongTextTranslateTaskResponse getLongTextTranslateTask(const Models::GetLongTextTranslateTaskRequest &request);

      /**
       * @summary Submit a document translation task to Tongyi Multimodal Translation.
       *
       * @param tmpReq SubmitDocTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDocTranslateTaskResponse
       */
      Models::SubmitDocTranslateTaskResponse submitDocTranslateTaskWithOptions(const Models::SubmitDocTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit a document translation task to Tongyi Multimodal Translation.
       *
       * @param request SubmitDocTranslateTaskRequest
       * @return SubmitDocTranslateTaskResponse
       */
      Models::SubmitDocTranslateTaskResponse submitDocTranslateTask(const Models::SubmitDocTranslateTaskRequest &request);

      /**
       * @summary Submitting an HTML translation task with Tongyi Multimodal Translation
       *
       * @param tmpReq SubmitHtmlTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitHtmlTranslateTaskResponse
       */
      Models::SubmitHtmlTranslateTaskResponse submitHtmlTranslateTaskWithOptions(const Models::SubmitHtmlTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submitting an HTML translation task with Tongyi Multimodal Translation
       *
       * @param request SubmitHtmlTranslateTaskRequest
       * @return SubmitHtmlTranslateTaskResponse
       */
      Models::SubmitHtmlTranslateTaskResponse submitHtmlTranslateTask(const Models::SubmitHtmlTranslateTaskRequest &request);

      /**
       * @summary Use Tongyi multimodal translation to submit an image for translation.
       *
       * @param tmpReq SubmitImageTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImageTranslateTaskResponse
       */
      Models::SubmitImageTranslateTaskResponse submitImageTranslateTaskWithOptions(const Models::SubmitImageTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use Tongyi multimodal translation to submit an image for translation.
       *
       * @param request SubmitImageTranslateTaskRequest
       * @return SubmitImageTranslateTaskResponse
       */
      Models::SubmitImageTranslateTaskResponse submitImageTranslateTask(const Models::SubmitImageTranslateTaskRequest &request);

      /**
       * @summary Submitting a long text translation task using Translate Multimodal.
       *
       * @param tmpReq SubmitLongTextTranslateTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitLongTextTranslateTaskResponse
       */
      Models::SubmitLongTextTranslateTaskResponse submitLongTextTranslateTaskWithOptions(const Models::SubmitLongTextTranslateTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submitting a long text translation task using Translate Multimodal.
       *
       * @param request SubmitLongTextTranslateTaskRequest
       * @return SubmitLongTextTranslateTaskResponse
       */
      Models::SubmitLongTextTranslateTaskResponse submitLongTextTranslateTask(const Models::SubmitLongTextTranslateTaskRequest &request);

      /**
       * @summary Editing the Tongyi Multimodal Translation termbase
       *
       * @param tmpReq TermEditRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TermEditResponse
       */
      Models::TermEditResponse termEditWithOptions(const Models::TermEditRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Editing the Tongyi Multimodal Translation termbase
       *
       * @param request TermEditRequest
       * @return TermEditResponse
       */
      Models::TermEditResponse termEdit(const Models::TermEditRequest &request);

      /**
       * @summary Queries the Tongyi Multimodal Translation termbase for intervention terms.
       *
       * @param tmpReq TermQueryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TermQueryResponse
       */
      Models::TermQueryResponse termQueryWithOptions(const Models::TermQueryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Tongyi Multimodal Translation termbase for intervention terms.
       *
       * @param request TermQueryRequest
       * @return TermQueryResponse
       */
      Models::TermQueryResponse termQuery(const Models::TermQueryRequest &request);

      /**
       * @summary Tongyi Multimodal Translation: Text Translation
       *
       * @param tmpReq TextTranslateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TextTranslateResponse
       */
      Models::TextTranslateResponse textTranslateWithOptions(const Models::TextTranslateRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tongyi Multimodal Translation: Text Translation
       *
       * @param request TextTranslateRequest
       * @return TextTranslateResponse
       */
      Models::TextTranslateResponse textTranslate(const Models::TextTranslateRequest &request);

      /**
       * @summary 通义多模态文档翻译查询Usage
       *
       * @param request UsageQueryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UsageQueryResponse
       */
      Models::UsageQueryResponse usageQueryWithOptions(const Models::UsageQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通义多模态文档翻译查询Usage
       *
       * @param request UsageQueryRequest
       * @return UsageQueryResponse
       */
      Models::UsageQueryResponse usageQuery(const Models::UsageQueryRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
