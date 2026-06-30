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
       * @summary Document review results
       *
       * @param request DescribeFileModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileModerationResultResponse
       */
      Models::DescribeFileModerationResultResponse describeFileModerationResultWithOptions(const Models::DescribeFileModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Document review results
       *
       * @param request DescribeFileModerationResultRequest
       * @return DescribeFileModerationResultResponse
       */
      Models::DescribeFileModerationResultResponse describeFileModerationResult(const Models::DescribeFileModerationResultRequest &request);

      /**
       * @summary Retrieves the results of an Image Moderation Pro task.
       *
       * @description - Billing information: This operation is not billed.
       * - QPS limit: This operation is limited to 100 queries per second (QPS) for each user. If you exceed this limit, your API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeImageModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageModerationResultResponse
       */
      Models::DescribeImageModerationResultResponse describeImageModerationResultWithOptions(const Models::DescribeImageModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the results of an Image Moderation Pro task.
       *
       * @description - Billing information: This operation is not billed.
       * - QPS limit: This operation is limited to 100 queries per second (QPS) for each user. If you exceed this limit, your API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeImageModerationResultRequest
       * @return DescribeImageModerationResultResponse
       */
      Models::DescribeImageModerationResultResponse describeImageModerationResult(const Models::DescribeImageModerationResultRequest &request);

      /**
       * @summary The enhanced image moderation auxiliary information API operation retrieves additional auxiliary information detected by the enhanced image moderation API operation, including OCR results and custom image library hit information.
       *
       * @description This API operation must be used with the enhanced image moderation API. After you call the enhanced image moderation API operation, you can call this API operation to obtain additional detection information. This API operation is free of charge.
       *
       * @param request DescribeImageResultExtRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageResultExtResponse
       */
      Models::DescribeImageResultExtResponse describeImageResultExtWithOptions(const Models::DescribeImageResultExtRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The enhanced image moderation auxiliary information API operation retrieves additional auxiliary information detected by the enhanced image moderation API operation, including OCR results and custom image library hit information.
       *
       * @description This API operation must be used with the enhanced image moderation API. After you call the enhanced image moderation API operation, you can call this API operation to obtain additional detection information. This API operation is free of charge.
       *
       * @param request DescribeImageResultExtRequest
       * @return DescribeImageResultExtResponse
       */
      Models::DescribeImageResultExtResponse describeImageResultExt(const Models::DescribeImageResultExtRequest &request);

      /**
       * @summary Query the results of an asynchronous multimodal moderation task.
       *
       * @description - Billing information: This API call is free.
       * - Query timeout: Wait 30 seconds after you submit an asynchronous moderation task before querying the result. Do not wait longer than 24 hours, or the result will be automatically deleted.
       * - This API has a per-user rate limiting limit of 10 requests per second. Exceeding this limit triggers rate limiting, which may affect your service. Call the API responsibly.
       *
       * @param request DescribeMultimodalModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMultimodalModerationResultResponse
       */
      Models::DescribeMultimodalModerationResultResponse describeMultimodalModerationResultWithOptions(const Models::DescribeMultimodalModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the results of an asynchronous multimodal moderation task.
       *
       * @description - Billing information: This API call is free.
       * - Query timeout: Wait 30 seconds after you submit an asynchronous moderation task before querying the result. Do not wait longer than 24 hours, or the result will be automatically deleted.
       * - This API has a per-user rate limiting limit of 10 requests per second. Exceeding this limit triggers rate limiting, which may affect your service. Call the API responsibly.
       *
       * @param request DescribeMultimodalModerationResultRequest
       * @return DescribeMultimodalModerationResultResponse
       */
      Models::DescribeMultimodalModerationResultResponse describeMultimodalModerationResult(const Models::DescribeMultimodalModerationResultRequest &request);

      /**
       * @summary Retrieves an upload token.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUploadTokenResponse
       */
      Models::DescribeUploadTokenResponse describeUploadTokenWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an upload token.
       *
       * @return DescribeUploadTokenResponse
       */
      Models::DescribeUploadTokenResponse describeUploadToken();

      /**
       * @summary Queries moderation results based on the ReqId returned by asynchronous URL moderation.
       *
       * @description - Billing information: This operation is free of charge.
       * - Query timeout: We recommend that you set the query interval to 480 seconds (query the results 480 seconds after you submit the asynchronous moderation task). The maximum timeout period is 3 days. After this period, the results are automatically deleted.
       * - The QPS limit for this operation is 100 queries per second (QPS) per user. If the limit is exceeded, your API calls will be throttled, which may affect your business. Make sure you call the operation at a reasonable rate.
       *
       * @param request DescribeUrlModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUrlModerationResultResponse
       */
      Models::DescribeUrlModerationResultResponse describeUrlModerationResultWithOptions(const Models::DescribeUrlModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries moderation results based on the ReqId returned by asynchronous URL moderation.
       *
       * @description - Billing information: This operation is free of charge.
       * - Query timeout: We recommend that you set the query interval to 480 seconds (query the results 480 seconds after you submit the asynchronous moderation task). The maximum timeout period is 3 days. After this period, the results are automatically deleted.
       * - The QPS limit for this operation is 100 queries per second (QPS) per user. If the limit is exceeded, your API calls will be throttled, which may affect your business. Make sure you call the operation at a reasonable rate.
       *
       * @param request DescribeUrlModerationResultRequest
       * @return DescribeUrlModerationResultResponse
       */
      Models::DescribeUrlModerationResultResponse describeUrlModerationResult(const Models::DescribeUrlModerationResultRequest &request);

      /**
       * @summary Moderates document content.
       *
       * @param request FileModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FileModerationResponse
       */
      Models::FileModerationResponse fileModerationWithOptions(const Models::FileModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moderates document content.
       *
       * @param request FileModerationRequest
       * @return FileModerationResponse
       */
      Models::FileModerationResponse fileModeration(const Models::FileModerationRequest &request);

      /**
       * @summary This API is used for asynchronous image moderation. Asynchronous moderation tasks do not return detection results in real time. You can obtain the detection results using a callback or by polling. The detection results are retained for up to three days.
       *
       * @description - The following image formats are supported: PNG, JPG, JPEG, BMP, WEBP, TIFF, ICO, HEIC, and SVG.
       * - The image size cannot exceed 10 MB. The recommended image resolution is greater than 200 × 200 pixels. A low resolution may compromise the accuracy of the Content Moderation algorithm.
       * - The timeout period for image downloads is 3 seconds. If an image download exceeds this duration, a download timeout error is returned.
       *
       * @param request ImageAsyncModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImageAsyncModerationResponse
       */
      Models::ImageAsyncModerationResponse imageAsyncModerationWithOptions(const Models::ImageAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used for asynchronous image moderation. Asynchronous moderation tasks do not return detection results in real time. You can obtain the detection results using a callback or by polling. The detection results are retained for up to three days.
       *
       * @description - The following image formats are supported: PNG, JPG, JPEG, BMP, WEBP, TIFF, ICO, HEIC, and SVG.
       * - The image size cannot exceed 10 MB. The recommended image resolution is greater than 200 × 200 pixels. A low resolution may compromise the accuracy of the Content Moderation algorithm.
       * - The timeout period for image downloads is 3 seconds. If an image download exceeds this duration, a download timeout error is returned.
       *
       * @param request ImageAsyncModerationRequest
       * @return ImageAsyncModerationResponse
       */
      Models::ImageAsyncModerationResponse imageAsyncModeration(const Models::ImageAsyncModerationRequest &request);

      /**
       * @summary Batch Invocation of Images
       *
       * @param request ImageBatchModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImageBatchModerationResponse
       */
      Models::ImageBatchModerationResponse imageBatchModerationWithOptions(const Models::ImageBatchModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch Invocation of Images
       *
       * @param request ImageBatchModerationRequest
       * @return ImageBatchModerationResponse
       */
      Models::ImageBatchModerationResponse imageBatchModeration(const Models::ImageBatchModerationRequest &request);

      /**
       * @summary Image moderation
       *
       * @description Before you call this operation, complete the following steps:
       * 1. [Activate AI Guardrails-Enhanced Edition](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn).
       * 2. Understand the [billing methods and pricing](https://help.aliyun.com/document_detail/467826.html?#section-h06-qz6-1pt) of the enhanced image moderation feature.
       * 3. For more information about API usage and parameters, see the [API reference](https://help.aliyun.com/document_detail/467829.html).
       *
       * @param request ImageModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImageModerationResponse
       */
      Models::ImageModerationResponse imageModerationWithOptions(const Models::ImageModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Image moderation
       *
       * @description Before you call this operation, complete the following steps:
       * 1. [Activate AI Guardrails-Enhanced Edition](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn).
       * 2. Understand the [billing methods and pricing](https://help.aliyun.com/document_detail/467826.html?#section-h06-qz6-1pt) of the enhanced image moderation feature.
       * 3. For more information about API usage and parameters, see the [API reference](https://help.aliyun.com/document_detail/467829.html).
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
       * @summary The channel callback API for manual review results in Content Moderation.
       *
       * @param request ManualCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManualCallbackResponse
       */
      Models::ManualCallbackResponse manualCallbackWithOptions(const Models::ManualCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The channel callback API for manual review results in Content Moderation.
       *
       * @param request ManualCallbackRequest
       * @return ManualCallbackResponse
       */
      Models::ManualCallbackResponse manualCallback(const Models::ManualCallbackRequest &request);

      /**
       * @summary Interface for submitting Content Moderation manual review requests
       *
       * @param request ManualModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManualModerationResponse
       */
      Models::ManualModerationResponse manualModerationWithOptions(const Models::ManualModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Interface for submitting Content Moderation manual review requests
       *
       * @param request ManualModerationRequest
       * @return ManualModerationResponse
       */
      Models::ManualModerationResponse manualModeration(const Models::ManualModerationRequest &request);

      /**
       * @summary Retrieves the manual review result.
       *
       * @param request ManualModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManualModerationResultResponse
       */
      Models::ManualModerationResultResponse manualModerationResultWithOptions(const Models::ManualModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the manual review result.
       *
       * @param request ManualModerationResultRequest
       * @return ManualModerationResultResponse
       */
      Models::ManualModerationResultResponse manualModerationResult(const Models::ManualModerationResultRequest &request);

      /**
       * @summary This is the synchronous detection API for the multi-modal agent.
       *
       * @description This is the AI Guardrails agent.
       *
       * @param request MultiModalAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultiModalAgentResponse
       */
      Models::MultiModalAgentResponse multiModalAgentWithOptions(const Models::MultiModalAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This is the synchronous detection API for the multi-modal agent.
       *
       * @description This is the AI Guardrails agent.
       *
       * @param request MultiModalAgentRequest
       * @return MultiModalAgentResponse
       */
      Models::MultiModalAgentResponse multiModalAgent(const Models::MultiModalAgentRequest &request);

      /**
       * @summary API for synchronous detection
       *
       * @param request MultiModalGuardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultiModalGuardResponse
       */
      Models::MultiModalGuardResponse multiModalGuardWithOptions(const Models::MultiModalGuardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API for synchronous detection
       *
       * @param request MultiModalGuardRequest
       * @return MultiModalGuardResponse
       */
      Models::MultiModalGuardResponse multiModalGuard(const Models::MultiModalGuardRequest &request);

      /**
       * @summary An asynchronous multimodal AI safety guardrail API for audio and video. It provides comprehensive detection of non-compliant content, sensitive content, prompt injection attacks, malicious files, and malicious URLs.
       *
       * @description If an API is subject to billing, add the following sentence in bold: "Before using this API, ensure that you fully understand the billing methods and pricing of the XXX product." The word "pricing" must be a hyperlink to https\\://www\\.aliyun.com/price/product#/ecs/detail.
       *
       * @param request MultiModalGuardAsyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultiModalGuardAsyncResponse
       */
      Models::MultiModalGuardAsyncResponse multiModalGuardAsyncWithOptions(const Models::MultiModalGuardAsyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An asynchronous multimodal AI safety guardrail API for audio and video. It provides comprehensive detection of non-compliant content, sensitive content, prompt injection attacks, malicious files, and malicious URLs.
       *
       * @description If an API is subject to billing, add the following sentence in bold: "Before using this API, ensure that you fully understand the billing methods and pricing of the XXX product." The word "pricing" must be a hyperlink to https\\://www\\.aliyun.com/price/product#/ecs/detail.
       *
       * @param request MultiModalGuardAsyncRequest
       * @return MultiModalGuardAsyncResponse
       */
      Models::MultiModalGuardAsyncResponse multiModalGuardAsync(const Models::MultiModalGuardAsyncRequest &request);

      /**
       * @summary This AI Security Guardrail API retrieves asynchronous multimodal results from both audio and video.
       *
       * @description For APIs that incur charges, add the following sentence in bold at the beginning of the description: "Before you use this API, make sure that you fully understand the billing methods and pricing of the XXX product." Link the word \\"pricing\\" to https\\://www\\.aliyun.com/price/product#/ecs/detail.
       *
       * @param request MultiModalGuardAsyncResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultiModalGuardAsyncResultResponse
       */
      Models::MultiModalGuardAsyncResultResponse multiModalGuardAsyncResultWithOptions(const Models::MultiModalGuardAsyncResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This AI Security Guardrail API retrieves asynchronous multimodal results from both audio and video.
       *
       * @description For APIs that incur charges, add the following sentence in bold at the beginning of the description: "Before you use this API, make sure that you fully understand the billing methods and pricing of the XXX product." Link the word \\"pricing\\" to https\\://www\\.aliyun.com/price/product#/ecs/detail.
       *
       * @param request MultiModalGuardAsyncResultRequest
       * @return MultiModalGuardAsyncResultResponse
       */
      Models::MultiModalGuardAsyncResultResponse multiModalGuardAsyncResult(const Models::MultiModalGuardAsyncResultRequest &request);

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
       * @summary Provides a WebSocket-based multimodal detection API for AI safety guardrails. This API supports content compliance detection, sensitive content detection, prompt attack detection, malicious file detection, malicious URL detection, and other comprehensive detection capabilities.
       *
       * @param request MultiModalGuardWsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultiModalGuardWsResponse
       */
      Models::MultiModalGuardWsResponse multiModalGuardWsWithOptions(const Models::MultiModalGuardWsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides a WebSocket-based multimodal detection API for AI safety guardrails. This API supports content compliance detection, sensitive content detection, prompt attack detection, malicious file detection, malicious URL detection, and other comprehensive detection capabilities.
       *
       * @param request MultiModalGuardWsRequest
       * @return MultiModalGuardWsResponse
       */
      Models::MultiModalGuardWsResponse multiModalGuardWs(const Models::MultiModalGuardWsRequest &request);

      /**
       * @summary Multimodal-Asynchronous Detection
       *
       * @description The asynchronous URL moderation service supports two billing methods: pay-as-you-go and resource plan usage.
       * - After you activate the enhanced text moderation service, the default billing method is pay-as-you-go. You are billed daily based on actual usage. No charges apply if you do not invoke the service.
       * - If your moderation volume is large or your moderation needs are relatively stable, purchase a resource plan in advance. Larger resource plans offer greater discounts. You can stack multiple resource plans.
       *
       * @param request MultimodalAsyncModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MultimodalAsyncModerationResponse
       */
      Models::MultimodalAsyncModerationResponse multimodalAsyncModerationWithOptions(const Models::MultimodalAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Multimodal-Asynchronous Detection
       *
       * @description The asynchronous URL moderation service supports two billing methods: pay-as-you-go and resource plan usage.
       * - After you activate the enhanced text moderation service, the default billing method is pay-as-you-go. You are billed daily based on actual usage. No charges apply if you do not invoke the service.
       * - If your moderation volume is large or your moderation needs are relatively stable, purchase a resource plan in advance. Larger resource plans offer greater discounts. You can stack multiple resource plans.
       *
       * @param request MultimodalAsyncModerationRequest
       * @return MultimodalAsyncModerationResponse
       */
      Models::MultimodalAsyncModerationResponse multimodalAsyncModeration(const Models::MultimodalAsyncModerationRequest &request);

      /**
       * @summary This service uses dynamic policies and models to defend against adversarial content. It provides moderation services for various business scenarios and detects different types of violations.
       *
       * @description Before you use this operation, review the [billing methods and pricing](https://help.aliyun.com/document_detail/464388.html?#section-itm-m2s-ugq) for Text Moderation Plus.
       *
       * @param request TextModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TextModerationResponse
       */
      Models::TextModerationResponse textModerationWithOptions(const Models::TextModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This service uses dynamic policies and models to defend against adversarial content. It provides moderation services for various business scenarios and detects different types of violations.
       *
       * @description Before you use this operation, review the [billing methods and pricing](https://help.aliyun.com/document_detail/464388.html?#section-itm-m2s-ugq) for Text Moderation Plus.
       *
       * @param request TextModerationRequest
       * @return TextModerationResponse
       */
      Models::TextModerationResponse textModeration(const Models::TextModerationRequest &request);

      /**
       * @summary Text Moderation Plus is an upgraded service that moderates the input instructions and generated text of large language models (LLMs). This service can retrieve standard answers for specific input instructions and lets you enable or disable moderation labels.
       *
       * @description Before you use this API, [activate AI Guardrails Pro](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) and make sure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/2671445.html?#section-6od-32j-99n) for Text Moderation Plus.
       *
       * @param request TextModerationPlusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TextModerationPlusResponse
       */
      Models::TextModerationPlusResponse textModerationPlusWithOptions(const Models::TextModerationPlusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Text Moderation Plus is an upgraded service that moderates the input instructions and generated text of large language models (LLMs). This service can retrieve standard answers for specific input instructions and lets you enable or disable moderation labels.
       *
       * @description Before you use this API, [activate AI Guardrails Pro](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) and make sure that you understand the [billing methods and pricing](https://help.aliyun.com/document_detail/2671445.html?#section-6od-32j-99n) for Text Moderation Plus.
       *
       * @param request TextModerationPlusRequest
       * @return TextModerationPlusResponse
       */
      Models::TextModerationPlusResponse textModerationPlus(const Models::TextModerationPlusRequest &request);

      /**
       * @summary The URL asynchronous moderation service detects threats such as fraud, pornography, and gambling in URLs to protect the content ecosystem of your platform.
       *
       * @description The URL asynchronous moderation service supports the pay-as-you-go and resource plan billing methods.
       * - After you activate the enhanced edition of Text Moderation, the default billing method is pay-as-you-go. You are charged CNY 30 per 10,000 calls based on your daily usage. No fees are incurred if you do not call the service.
       * - If you have many moderation requests or relatively fixed moderation requirements, we recommend that you purchase resource plans in advance. The larger the resource plan you purchase, the greater the discount you receive. You can purchase and use multiple resource plans.
       *
       * @param request UrlAsyncModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UrlAsyncModerationResponse
       */
      Models::UrlAsyncModerationResponse urlAsyncModerationWithOptions(const Models::UrlAsyncModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The URL asynchronous moderation service detects threats such as fraud, pornography, and gambling in URLs to protect the content ecosystem of your platform.
       *
       * @description The URL asynchronous moderation service supports the pay-as-you-go and resource plan billing methods.
       * - After you activate the enhanced edition of Text Moderation, the default billing method is pay-as-you-go. You are charged CNY 30 per 10,000 calls based on your daily usage. No fees are incurred if you do not call the service.
       * - If you have many moderation requests or relatively fixed moderation requirements, we recommend that you purchase resource plans in advance. The larger the resource plan you purchase, the greater the discount you receive. You can purchase and use multiple resource plans.
       *
       * @param request UrlAsyncModerationRequest
       * @return UrlAsyncModerationResponse
       */
      Models::UrlAsyncModerationResponse urlAsyncModeration(const Models::UrlAsyncModerationRequest &request);

      /**
       * @summary The enhanced video moderation feature of Content Moderation detects threats and non-compliant content in video files. Use this operation to submit a moderation task.
       *
       * @description Before you call this operation, make sure that you have activated the [enhanced Content Moderation](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) service and understand the [billing methods](https://help.aliyun.com/document_detail/2505807.html) and [pricing](https://www.aliyun.com/price/product?#/lvwang/detail/cdibag) of the enhanced video moderation feature.
       *
       * @param request VideoModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VideoModerationResponse
       */
      Models::VideoModerationResponse videoModerationWithOptions(const Models::VideoModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The enhanced video moderation feature of Content Moderation detects threats and non-compliant content in video files. Use this operation to submit a moderation task.
       *
       * @description Before you call this operation, make sure that you have activated the [enhanced Content Moderation](https://common-buy.aliyun.com/?commodityCode=lvwang_cip_public_cn) service and understand the [billing methods](https://help.aliyun.com/document_detail/2505807.html) and [pricing](https://www.aliyun.com/price/product?#/lvwang/detail/cdibag) of the enhanced video moderation feature.
       *
       * @param request VideoModerationRequest
       * @return VideoModerationResponse
       */
      Models::VideoModerationResponse videoModeration(const Models::VideoModerationRequest &request);

      /**
       * @summary Cancels an ApsaraVideo Live moderation task.
       *
       * @param request VideoModerationCancelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VideoModerationCancelResponse
       */
      Models::VideoModerationCancelResponse videoModerationCancelWithOptions(const Models::VideoModerationCancelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an ApsaraVideo Live moderation task.
       *
       * @param request VideoModerationCancelRequest
       * @return VideoModerationCancelResponse
       */
      Models::VideoModerationCancelResponse videoModerationCancel(const Models::VideoModerationCancelRequest &request);

      /**
       * @summary Retrieves the task result of an enhanced video content moderation node.
       *
       * @description This operation is not billed. Set the query interval to 30 seconds (that is, query the results 30 seconds after submitting the asynchronous moderation task). The maximum query window is 24 hours. After 24 hours, the results are automatically deleted.
       *
       * @param request VideoModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VideoModerationResultResponse
       */
      Models::VideoModerationResultResponse videoModerationResultWithOptions(const Models::VideoModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the task result of an enhanced video content moderation node.
       *
       * @description This operation is not billed. Set the query interval to 30 seconds (that is, query the results 30 seconds after submitting the asynchronous moderation task). The maximum query window is 24 hours. After 24 hours, the results are automatically deleted.
       *
       * @param request VideoModerationResultRequest
       * @return VideoModerationResultResponse
       */
      Models::VideoModerationResultResponse videoModerationResult(const Models::VideoModerationResultRequest &request);

      /**
       * @summary Submits a task for enhanced voice moderation.
       *
       * @param request VoiceModerationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VoiceModerationResponse
       */
      Models::VoiceModerationResponse voiceModerationWithOptions(const Models::VoiceModerationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a task for enhanced voice moderation.
       *
       * @param request VoiceModerationRequest
       * @return VoiceModerationResponse
       */
      Models::VoiceModerationResponse voiceModeration(const Models::VoiceModerationRequest &request);

      /**
       * @summary This operation cancels an enhanced voice moderation task.
       *
       * @param request VoiceModerationCancelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VoiceModerationCancelResponse
       */
      Models::VoiceModerationCancelResponse voiceModerationCancelWithOptions(const Models::VoiceModerationCancelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation cancels an enhanced voice moderation task.
       *
       * @param request VoiceModerationCancelRequest
       * @return VoiceModerationCancelResponse
       */
      Models::VoiceModerationCancelResponse voiceModerationCancel(const Models::VoiceModerationCancelRequest &request);

      /**
       * @summary Retrieve the detection results for enhanced voice moderation.
       *
       * @param request VoiceModerationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VoiceModerationResultResponse
       */
      Models::VoiceModerationResultResponse voiceModerationResultWithOptions(const Models::VoiceModerationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the detection results for enhanced voice moderation.
       *
       * @param request VoiceModerationResultRequest
       * @return VoiceModerationResultResponse
       */
      Models::VoiceModerationResultResponse voiceModerationResult(const Models::VoiceModerationResultRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
