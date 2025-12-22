// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_GREEN20220302_HPP_
#define ALIBABACLOUD_GREEN20220302_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Green20220302Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Green20220302.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 文档审核结果
       *
       * @param request DescribeFileModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileModerationResultResponse
       */
      Models::DescribeFileModerationResultResponse describeFileModerationResultWithOptions(const Models::DescribeFileModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档审核结果
       *
       * @param request DescribeFileModerationResultRequest
       * @return DescribeFileModerationResultResponse
       */
      Models::DescribeFileModerationResultResponse describeFileModerationResult(const Models::DescribeFileModerationResultRequest &request);

      /**
       * @summary Obtains the moderation results of an Image Moderation 2.0 task.
       *
       * @description *   Billing: This operation is free of charge.
       * *   QPS limit: You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeImageModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageModerationResultResponse
       */
      Models::DescribeImageModerationResultResponse describeImageModerationResultWithOptions(const Models::DescribeImageModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the moderation results of an Image Moderation 2.0 task.
       *
       * @description *   Billing: This operation is free of charge.
       * *   QPS limit: You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeImageModerationResultRequest
       * @return DescribeImageModerationResultResponse
       */
      Models::DescribeImageModerationResultResponse describeImageModerationResult(const Models::DescribeImageModerationResultRequest &request);

      /**
       * @summary 查询检测结果辅助信息
       *
       * @param request DescribeImageResultExtRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageResultExtResponse
       */
      Models::DescribeImageResultExtResponse describeImageResultExtWithOptions(const Models::DescribeImageResultExtRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询检测结果辅助信息
       *
       * @param request DescribeImageResultExtRequest
       * @return DescribeImageResultExtResponse
       */
      Models::DescribeImageResultExtResponse describeImageResultExt(const Models::DescribeImageResultExtRequest &request);

      /**
       * @summary 查询异步多模态检测结果
       *
       * @param request DescribeMultimodalModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMultimodalModerationResultResponse
       */
      Models::DescribeMultimodalModerationResultResponse describeMultimodalModerationResultWithOptions(const Models::DescribeMultimodalModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询异步多模态检测结果
       *
       * @param request DescribeMultimodalModerationResultRequest
       * @return DescribeMultimodalModerationResultResponse
       */
      Models::DescribeMultimodalModerationResultResponse describeMultimodalModerationResult(const Models::DescribeMultimodalModerationResultRequest &request);

      /**
       * @summary 查询上传token
       *
       * @param request DescribeUploadTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUploadTokenResponse
       */
      Models::DescribeUploadTokenResponse describeUploadTokenWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询上传token
       *
       * @return DescribeUploadTokenResponse
       */
      Models::DescribeUploadTokenResponse describeUploadToken();

      /**
       * @summary Queries the moderation results based on the ReqId returned by asynchronous URL moderation.
       *
       * @description *   Billing: This operation is free of charge.
       * *   Query timeout: We recommend that you query moderation results at least 480 seconds after you send an asynchronous moderation request. Content Moderation retains moderation results for up to 3 days. After 3 days, the results are deleted.
       * *   You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeUrlModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUrlModerationResultResponse
       */
      Models::DescribeUrlModerationResultResponse describeUrlModerationResultWithOptions(const Models::DescribeUrlModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the moderation results based on the ReqId returned by asynchronous URL moderation.
       *
       * @description *   Billing: This operation is free of charge.
       * *   Query timeout: We recommend that you query moderation results at least 480 seconds after you send an asynchronous moderation request. Content Moderation retains moderation results for up to 3 days. After 3 days, the results are deleted.
       * *   You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeUrlModerationResultRequest
       * @return DescribeUrlModerationResultResponse
       */
      Models::DescribeUrlModerationResultResponse describeUrlModerationResult(const Models::DescribeUrlModerationResultRequest &request);

      /**
       * @summary 文档审核
       *
       * @param request FileModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FileModerationResponse
       */
      Models::FileModerationResponse fileModerationWithOptions(const Models::FileModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档审核
       *
       * @param request FileModerationRequest
       * @return FileModerationResponse
       */
      Models::FileModerationResponse fileModeration(const Models::FileModerationRequest &request);

      /**
       * @summary 图片异步检测
       *
       * @param request ImageAsyncModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImageAsyncModerationResponse
       */
      Models::ImageAsyncModerationResponse imageAsyncModerationWithOptions(const Models::ImageAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片异步检测
       *
       * @param request ImageAsyncModerationRequest
       * @return ImageAsyncModerationResponse
       */
      Models::ImageAsyncModerationResponse imageAsyncModeration(const Models::ImageAsyncModerationRequest &request);

      /**
       * @summary 图片批量调用
       *
       * @param request ImageBatchModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImageBatchModerationResponse
       */
      Models::ImageBatchModerationResponse imageBatchModerationWithOptions(const Models::ImageBatchModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片批量调用
       *
       * @param request ImageBatchModerationRequest
       * @return ImageBatchModerationResponse
       */
      Models::ImageBatchModerationResponse imageBatchModeration(const Models::ImageBatchModerationRequest &request);

      /**
       * @summary Identifies whether an image contains content or elements that violate relevant regulations on network content dissemination, affect the content order of a specific platform, or affect user experience. Image Moderation 2.0 supports over 90 content risk labels and over 100 risk control items. Image Moderation 2.0 of Content Moderation allows you to develop further moderation or governance measures for specific image content based on business scenarios, platform-specific content governance rules, or rich risk labels and scores of confidence levels returned by API calls.
       *
       * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/467826.html)[](https://www.aliyun.com/price/product?#/lvwang/detail/cdibag) of Image Moderation 2.0.
       *
       * @param request ImageModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImageModerationResponse
       */
      Models::ImageModerationResponse imageModerationWithOptions(const Models::ImageModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Identifies whether an image contains content or elements that violate relevant regulations on network content dissemination, affect the content order of a specific platform, or affect user experience. Image Moderation 2.0 supports over 90 content risk labels and over 100 risk control items. Image Moderation 2.0 of Content Moderation allows you to develop further moderation or governance measures for specific image content based on business scenarios, platform-specific content governance rules, or rich risk labels and scores of confidence levels returned by API calls.
       *
       * @description **Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/467826.html)[](https://www.aliyun.com/price/product?#/lvwang/detail/cdibag) of Image Moderation 2.0.
       *
       * @param request ImageModerationRequest
       * @return ImageModerationResponse
       */
      Models::ImageModerationResponse imageModeration(const Models::ImageModerationRequest &request);

      /**
       * @summary 图片审核
       *
       * @param request ImageQueueModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImageQueueModerationResponse
       */
      Models::ImageQueueModerationResponse imageQueueModerationWithOptions(const Models::ImageQueueModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图片审核
       *
       * @param request ImageQueueModerationRequest
       * @return ImageQueueModerationResponse
       */
      Models::ImageQueueModerationResponse imageQueueModeration(const Models::ImageQueueModerationRequest &request);

      /**
       * @summary Content Security Manual Review Result Callback Interface
       *
       * @param request ManualCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManualCallbackResponse
       */
      Models::ManualCallbackResponse manualCallbackWithOptions(const Models::ManualCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Content Security Manual Review Result Callback Interface
       *
       * @param request ManualCallbackRequest
       * @return ManualCallbackResponse
       */
      Models::ManualCallbackResponse manualCallback(const Models::ManualCallbackRequest &request);

      /**
       * @summary Content Security Manual Review Request Interface
       *
       * @param request ManualModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManualModerationResponse
       */
      Models::ManualModerationResponse manualModerationWithOptions(const Models::ManualModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Content Security Manual Review Request Interface
       *
       * @param request ManualModerationRequest
       * @return ManualModerationResponse
       */
      Models::ManualModerationResponse manualModeration(const Models::ManualModerationRequest &request);

      /**
       * @summary Retrieve manual review results
       *
       * @param request ManualModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManualModerationResultResponse
       */
      Models::ManualModerationResultResponse manualModerationResultWithOptions(const Models::ManualModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve manual review results
       *
       * @param request ManualModerationResultRequest
       * @return ManualModerationResultResponse
       */
      Models::ManualModerationResultResponse manualModerationResult(const Models::ManualModerationResultRequest &request);

      /**
       * @summary 同步检测接口
       *
       * @param request MultiModalGuardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultiModalGuardResponse
       */
      Models::MultiModalGuardResponse multiModalGuardWithOptions(const Models::MultiModalGuardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步检测接口
       *
       * @param request MultiModalGuardRequest
       * @return MultiModalGuardResponse
       */
      Models::MultiModalGuardResponse multiModalGuard(const Models::MultiModalGuardRequest &request);

      /**
       * @summary 多模态同步检测接口，支持图片base64字符串
       *
       * @param request MultiModalGuardForBase64Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultiModalGuardForBase64Response
       */
      Models::MultiModalGuardForBase64Response multiModalGuardForBase64WithOptions(const Models::MultiModalGuardForBase64Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 多模态同步检测接口，支持图片base64字符串
       *
       * @param request MultiModalGuardForBase64Request
       * @return MultiModalGuardForBase64Response
       */
      Models::MultiModalGuardForBase64Response multiModalGuardForBase64(const Models::MultiModalGuardForBase64Request &request);

      /**
       * @summary 多模态-异步检测
       *
       * @param request MultimodalAsyncModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultimodalAsyncModerationResponse
       */
      Models::MultimodalAsyncModerationResponse multimodalAsyncModerationWithOptions(const Models::MultimodalAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 多模态-异步检测
       *
       * @param request MultimodalAsyncModerationRequest
       * @return MultimodalAsyncModerationResponse
       */
      Models::MultimodalAsyncModerationResponse multimodalAsyncModeration(const Models::MultimodalAsyncModerationRequest &request);

      /**
       * @summary Provides moderation services for multiple business scenarios and identifies various violation risks.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/464388.html?#section-itm-m2s-ugq) of Text Moderation 2.0.
       *
       * @param request TextModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TextModerationResponse
       */
      Models::TextModerationResponse textModerationWithOptions(const Models::TextModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides moderation services for multiple business scenarios and identifies various violation risks.
       *
       * @description Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/464388.html?#section-itm-m2s-ugq) of Text Moderation 2.0.
       *
       * @param request TextModerationRequest
       * @return TextModerationResponse
       */
      Models::TextModerationResponse textModeration(const Models::TextModerationRequest &request);

      /**
       * @summary Moderates the input command and generated text of large language models (LLMs). Specific model input commands can be used to retrieve standard answers. The feature of enabling and disabling the moderation labels is also available.
       *
       * @description Before you call this operation, make sure that you have [activated the Content Moderation 2.0 service](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) and are familiar with the [billing](https://help.aliyun.com/document_detail/2671445.html?#section-6od-32j-99n) of the Text Moderation 2.0 Plus service.
       *
       * @param request TextModerationPlusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TextModerationPlusResponse
       */
      Models::TextModerationPlusResponse textModerationPlusWithOptions(const Models::TextModerationPlusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moderates the input command and generated text of large language models (LLMs). Specific model input commands can be used to retrieve standard answers. The feature of enabling and disabling the moderation labels is also available.
       *
       * @description Before you call this operation, make sure that you have [activated the Content Moderation 2.0 service](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) and are familiar with the [billing](https://help.aliyun.com/document_detail/2671445.html?#section-6od-32j-99n) of the Text Moderation 2.0 Plus service.
       *
       * @param request TextModerationPlusRequest
       * @return TextModerationPlusResponse
       */
      Models::TextModerationPlusResponse textModerationPlus(const Models::TextModerationPlusRequest &request);

      /**
       * @summary url异步检测
       *
       * @param request UrlAsyncModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UrlAsyncModerationResponse
       */
      Models::UrlAsyncModerationResponse urlAsyncModerationWithOptions(const Models::UrlAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary url异步检测
       *
       * @param request UrlAsyncModerationRequest
       * @return UrlAsyncModerationResponse
       */
      Models::UrlAsyncModerationResponse urlAsyncModeration(const Models::UrlAsyncModerationRequest &request);

      /**
       * @summary 视频检测任务提交
       *
       * @param request VideoModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VideoModerationResponse
       */
      Models::VideoModerationResponse videoModerationWithOptions(const Models::VideoModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频检测任务提交
       *
       * @param request VideoModerationRequest
       * @return VideoModerationResponse
       */
      Models::VideoModerationResponse videoModeration(const Models::VideoModerationRequest &request);

      /**
       * @summary 取消视频直播流检测
       *
       * @param request VideoModerationCancelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VideoModerationCancelResponse
       */
      Models::VideoModerationCancelResponse videoModerationCancelWithOptions(const Models::VideoModerationCancelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消视频直播流检测
       *
       * @param request VideoModerationCancelRequest
       * @return VideoModerationCancelResponse
       */
      Models::VideoModerationCancelResponse videoModerationCancel(const Models::VideoModerationCancelRequest &request);

      /**
       * @summary Get Video Detection Results
       *
       * @description This operation is free of charge. We recommend that you query moderation results at least 30 seconds after you send an asynchronous moderation request. Content Moderation retains moderation results for at most 24 hours. After 24 hours, the results are deleted.
       *
       * @param request VideoModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VideoModerationResultResponse
       */
      Models::VideoModerationResultResponse videoModerationResultWithOptions(const Models::VideoModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Video Detection Results
       *
       * @description This operation is free of charge. We recommend that you query moderation results at least 30 seconds after you send an asynchronous moderation request. Content Moderation retains moderation results for at most 24 hours. After 24 hours, the results are deleted.
       *
       * @param request VideoModerationResultRequest
       * @return VideoModerationResultResponse
       */
      Models::VideoModerationResultResponse videoModerationResult(const Models::VideoModerationResultRequest &request);

      /**
       * @summary 语音审核
       *
       * @param request VoiceModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VoiceModerationResponse
       */
      Models::VoiceModerationResponse voiceModerationWithOptions(const Models::VoiceModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 语音审核
       *
       * @param request VoiceModerationRequest
       * @return VoiceModerationResponse
       */
      Models::VoiceModerationResponse voiceModeration(const Models::VoiceModerationRequest &request);

      /**
       * @summary 取消检测
       *
       * @param request VoiceModerationCancelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VoiceModerationCancelResponse
       */
      Models::VoiceModerationCancelResponse voiceModerationCancelWithOptions(const Models::VoiceModerationCancelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消检测
       *
       * @param request VoiceModerationCancelRequest
       * @return VoiceModerationCancelResponse
       */
      Models::VoiceModerationCancelResponse voiceModerationCancel(const Models::VoiceModerationCancelRequest &request);

      /**
       * @summary Obtains the moderation results of a Voice Moderation 2.0 task.
       *
       * @param request VoiceModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VoiceModerationResultResponse
       */
      Models::VoiceModerationResultResponse voiceModerationResultWithOptions(const Models::VoiceModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the moderation results of a Voice Moderation 2.0 task.
       *
       * @param request VoiceModerationResultRequest
       * @return VoiceModerationResultResponse
       */
      Models::VoiceModerationResultResponse voiceModerationResult(const Models::VoiceModerationResultRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
