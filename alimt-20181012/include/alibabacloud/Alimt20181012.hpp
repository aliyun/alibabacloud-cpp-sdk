// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIMT20181012_HPP_
#define ALIBABACLOUD_ALIMT20181012_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Alimt20181012Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/Alimt20181012.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 大文本异步翻译，支持5000-50000字翻译
       *
       * @param request CreateAsyncTranslateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAsyncTranslateResponse
       */
      Models::CreateAsyncTranslateResponse createAsyncTranslateWithOptions(const Models::CreateAsyncTranslateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 大文本异步翻译，支持5000-50000字翻译
       *
       * @param request CreateAsyncTranslateRequest
       * @return CreateAsyncTranslateResponse
       */
      Models::CreateAsyncTranslateResponse createAsyncTranslate(const Models::CreateAsyncTranslateRequest &request);

      /**
       * @param request CreateDocTranslateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDocTranslateTaskResponse
       */
      Models::CreateDocTranslateTaskResponse createDocTranslateTaskWithOptions(const Models::CreateDocTranslateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateDocTranslateTaskRequest
       * @return CreateDocTranslateTaskResponse
       */
      Models::CreateDocTranslateTaskResponse createDocTranslateTask(const Models::CreateDocTranslateTaskRequest &request);

      Models::CreateDocTranslateTaskResponse createDocTranslateTaskAdvance(const Models::CreateDocTranslateTaskAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建图片翻译任务
       *
       * @param request CreateImageTranslateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageTranslateTaskResponse
       */
      Models::CreateImageTranslateTaskResponse createImageTranslateTaskWithOptions(const Models::CreateImageTranslateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建图片翻译任务
       *
       * @param request CreateImageTranslateTaskRequest
       * @return CreateImageTranslateTaskResponse
       */
      Models::CreateImageTranslateTaskResponse createImageTranslateTask(const Models::CreateImageTranslateTaskRequest &request);

      /**
       * @summary 大文本异步翻译，支持5000-50000字翻译
       *
       * @param request GetAsyncTranslateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncTranslateResponse
       */
      Models::GetAsyncTranslateResponse getAsyncTranslateWithOptions(const Models::GetAsyncTranslateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 大文本异步翻译，支持5000-50000字翻译
       *
       * @param request GetAsyncTranslateRequest
       * @return GetAsyncTranslateResponse
       */
      Models::GetAsyncTranslateResponse getAsyncTranslate(const Models::GetAsyncTranslateRequest &request);

      /**
       * @summary 批量文本翻译
       *
       * @param request GetBatchTranslateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTranslateResponse
       */
      Models::GetBatchTranslateResponse getBatchTranslateWithOptions(const Models::GetBatchTranslateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量文本翻译
       *
       * @param request GetBatchTranslateRequest
       * @return GetBatchTranslateResponse
       */
      Models::GetBatchTranslateResponse getBatchTranslate(const Models::GetBatchTranslateRequest &request);

      /**
       * @summary GetBatchTranslateByVPC
       *
       * @param request GetBatchTranslateByVPCRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTranslateByVPCResponse
       */
      Models::GetBatchTranslateByVPCResponse getBatchTranslateByVPCWithOptions(const Models::GetBatchTranslateByVPCRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetBatchTranslateByVPC
       *
       * @param request GetBatchTranslateByVPCRequest
       * @return GetBatchTranslateByVPCResponse
       */
      Models::GetBatchTranslateByVPCResponse getBatchTranslateByVPC(const Models::GetBatchTranslateByVPCRequest &request);

      /**
       * @summary 语种识别
       *
       * @param request GetDetectLanguageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDetectLanguageResponse
       */
      Models::GetDetectLanguageResponse getDetectLanguageWithOptions(const Models::GetDetectLanguageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 语种识别
       *
       * @param request GetDetectLanguageRequest
       * @return GetDetectLanguageResponse
       */
      Models::GetDetectLanguageResponse getDetectLanguage(const Models::GetDetectLanguageRequest &request);

      /**
       * @summary 语种识别
       *
       * @param request GetDetectLanguageVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDetectLanguageVpcResponse
       */
      Models::GetDetectLanguageVpcResponse getDetectLanguageVpcWithOptions(const Models::GetDetectLanguageVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 语种识别
       *
       * @param request GetDetectLanguageVpcRequest
       * @return GetDetectLanguageVpcResponse
       */
      Models::GetDetectLanguageVpcResponse getDetectLanguageVpc(const Models::GetDetectLanguageVpcRequest &request);

      /**
       * @summary 获取文档翻译任务
       *
       * @param request GetDocTranslateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocTranslateTaskResponse
       */
      Models::GetDocTranslateTaskResponse getDocTranslateTaskWithOptions(const Models::GetDocTranslateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取文档翻译任务
       *
       * @param request GetDocTranslateTaskRequest
       * @return GetDocTranslateTaskResponse
       */
      Models::GetDocTranslateTaskResponse getDocTranslateTask(const Models::GetDocTranslateTaskRequest &request);

      /**
       * @param request GetImageDiagnoseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageDiagnoseResponse
       */
      Models::GetImageDiagnoseResponse getImageDiagnoseWithOptions(const Models::GetImageDiagnoseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetImageDiagnoseRequest
       * @return GetImageDiagnoseResponse
       */
      Models::GetImageDiagnoseResponse getImageDiagnose(const Models::GetImageDiagnoseRequest &request);

      /**
       * @summary 获取图片翻译结果
       *
       * @param request GetImageTranslateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageTranslateResponse
       */
      Models::GetImageTranslateResponse getImageTranslateWithOptions(const Models::GetImageTranslateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取图片翻译结果
       *
       * @param request GetImageTranslateRequest
       * @return GetImageTranslateResponse
       */
      Models::GetImageTranslateResponse getImageTranslate(const Models::GetImageTranslateRequest &request);

      /**
       * @summary 获取图片翻译任务
       *
       * @param request GetImageTranslateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageTranslateTaskResponse
       */
      Models::GetImageTranslateTaskResponse getImageTranslateTaskWithOptions(const Models::GetImageTranslateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取图片翻译任务
       *
       * @param request GetImageTranslateTaskRequest
       * @return GetImageTranslateTaskResponse
       */
      Models::GetImageTranslateTaskResponse getImageTranslateTask(const Models::GetImageTranslateTaskRequest &request);

      /**
       * @summary GetTitleDiagnose
       *
       * @param request GetTitleDiagnoseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTitleDiagnoseResponse
       */
      Models::GetTitleDiagnoseResponse getTitleDiagnoseWithOptions(const Models::GetTitleDiagnoseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetTitleDiagnose
       *
       * @param request GetTitleDiagnoseRequest
       * @return GetTitleDiagnoseResponse
       */
      Models::GetTitleDiagnoseResponse getTitleDiagnose(const Models::GetTitleDiagnoseRequest &request);

      /**
       * @summary GetTitleGenerate
       *
       * @param request GetTitleGenerateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTitleGenerateResponse
       */
      Models::GetTitleGenerateResponse getTitleGenerateWithOptions(const Models::GetTitleGenerateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetTitleGenerate
       *
       * @param request GetTitleGenerateRequest
       * @return GetTitleGenerateResponse
       */
      Models::GetTitleGenerateResponse getTitleGenerate(const Models::GetTitleGenerateRequest &request);

      /**
       * @summary GetTitleIntelligence
       *
       * @param request GetTitleIntelligenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTitleIntelligenceResponse
       */
      Models::GetTitleIntelligenceResponse getTitleIntelligenceWithOptions(const Models::GetTitleIntelligenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetTitleIntelligence
       *
       * @param request GetTitleIntelligenceRequest
       * @return GetTitleIntelligenceResponse
       */
      Models::GetTitleIntelligenceResponse getTitleIntelligence(const Models::GetTitleIntelligenceRequest &request);

      /**
       * @summary 获取图片批量翻译结果
       *
       * @param request GetTranslateImageBatchResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranslateImageBatchResultResponse
       */
      Models::GetTranslateImageBatchResultResponse getTranslateImageBatchResultWithOptions(const Models::GetTranslateImageBatchResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取图片批量翻译结果
       *
       * @param request GetTranslateImageBatchResultRequest
       * @return GetTranslateImageBatchResultResponse
       */
      Models::GetTranslateImageBatchResultResponse getTranslateImageBatchResult(const Models::GetTranslateImageBatchResultRequest &request);

      /**
       * @summary GetTranslateReport
       *
       * @param request GetTranslateReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranslateReportResponse
       */
      Models::GetTranslateReportResponse getTranslateReportWithOptions(const Models::GetTranslateReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetTranslateReport
       *
       * @param request GetTranslateReportRequest
       * @return GetTranslateReportResponse
       */
      Models::GetTranslateReportResponse getTranslateReport(const Models::GetTranslateReportRequest &request);

      /**
       * @summary 开通服务
       *
       * @param request OpenAlimtServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenAlimtServiceResponse
       */
      Models::OpenAlimtServiceResponse openAlimtServiceWithOptions(const Models::OpenAlimtServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通服务
       *
       * @param request OpenAlimtServiceRequest
       * @return OpenAlimtServiceResponse
       */
      Models::OpenAlimtServiceResponse openAlimtService(const Models::OpenAlimtServiceRequest &request);

      /**
       * @summary 专业文本翻译
       *
       * @param request TranslateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TranslateResponse
       */
      Models::TranslateResponse translateWithOptions(const Models::TranslateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 专业文本翻译
       *
       * @param request TranslateRequest
       * @return TranslateResponse
       */
      Models::TranslateResponse translate(const Models::TranslateRequest &request);

      /**
       * @summary TranslateCertificate
       *
       * @param request TranslateCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TranslateCertificateResponse
       */
      Models::TranslateCertificateResponse translateCertificateWithOptions(const Models::TranslateCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary TranslateCertificate
       *
       * @param request TranslateCertificateRequest
       * @return TranslateCertificateResponse
       */
      Models::TranslateCertificateResponse translateCertificate(const Models::TranslateCertificateRequest &request);

      Models::TranslateCertificateResponse translateCertificateAdvance(const Models::TranslateCertificateAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI TranslateECommerce is deprecated, please use alimt::2018-10-12::Translate instead.
       *
       * @summary TranslateECommerce
       *
       * @param request TranslateECommerceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TranslateECommerceResponse
       */
      Models::TranslateECommerceResponse translateECommerceWithOptions(const Models::TranslateECommerceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI TranslateECommerce is deprecated, please use alimt::2018-10-12::Translate instead.
       *
       * @summary TranslateECommerce
       *
       * @param request TranslateECommerceRequest
       * @return TranslateECommerceResponse
       */
      Models::TranslateECommerceResponse translateECommerce(const Models::TranslateECommerceRequest &request);

      /**
       * @summary 文本通用翻译
       *
       * @param request TranslateGeneralRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TranslateGeneralResponse
       */
      Models::TranslateGeneralResponse translateGeneralWithOptions(const Models::TranslateGeneralRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文本通用翻译
       *
       * @param request TranslateGeneralRequest
       * @return TranslateGeneralResponse
       */
      Models::TranslateGeneralResponse translateGeneral(const Models::TranslateGeneralRequest &request);

      /**
       * @summary TranslateGeneralVpc
       *
       * @param request TranslateGeneralVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TranslateGeneralVpcResponse
       */
      Models::TranslateGeneralVpcResponse translateGeneralVpcWithOptions(const Models::TranslateGeneralVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary TranslateGeneralVpc
       *
       * @param request TranslateGeneralVpcRequest
       * @return TranslateGeneralVpcResponse
       */
      Models::TranslateGeneralVpcResponse translateGeneralVpc(const Models::TranslateGeneralVpcRequest &request);

      /**
       * @summary 公有云图片翻译产品API
       *
       * @param request TranslateImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TranslateImageResponse
       */
      Models::TranslateImageResponse translateImageWithOptions(const Models::TranslateImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 公有云图片翻译产品API
       *
       * @param request TranslateImageRequest
       * @return TranslateImageResponse
       */
      Models::TranslateImageResponse translateImage(const Models::TranslateImageRequest &request);

      /**
       * @summary 批量图片翻译接口
       *
       * @param request TranslateImageBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TranslateImageBatchResponse
       */
      Models::TranslateImageBatchResponse translateImageBatchWithOptions(const Models::TranslateImageBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量图片翻译接口
       *
       * @param request TranslateImageBatchRequest
       * @return TranslateImageBatchResponse
       */
      Models::TranslateImageBatchResponse translateImageBatch(const Models::TranslateImageBatchRequest &request);

      /**
       * @summary 搜索翻译
       *
       * @param request TranslateSearchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TranslateSearchResponse
       */
      Models::TranslateSearchResponse translateSearchWithOptions(const Models::TranslateSearchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索翻译
       *
       * @param request TranslateSearchRequest
       * @return TranslateSearchResponse
       */
      Models::TranslateSearchResponse translateSearch(const Models::TranslateSearchRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
