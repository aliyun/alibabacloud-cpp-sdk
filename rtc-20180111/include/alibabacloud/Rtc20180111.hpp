// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RTC20180111_HPP_
#define ALIBABACLOUD_RTC20180111_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Rtc20180111Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Rtc20180111.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a recording configuration template.
       *
       * @description # Usage notes
       * This operation adds a recording configuration template. For example, when you add a recording configuration template, you can configure parameters such as recording specifications and encoding options.
       * # QPS limits
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request AddRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRecordTemplateResponse
       */
      Models::AddRecordTemplateResponse addRecordTemplateWithOptions(const Models::AddRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a recording configuration template.
       *
       * @description # Usage notes
       * This operation adds a recording configuration template. For example, when you add a recording configuration template, you can configure parameters such as recording specifications and encoding options.
       * # QPS limits
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request AddRecordTemplateRequest
       * @return AddRecordTemplateResponse
       */
      Models::AddRecordTemplateResponse addRecordTemplate(const Models::AddRecordTemplateRequest &request);

      /**
       * @summary Creates an application agent template.
       *
       * @description ### QPS limit
       * The QPS limit for a single user is 10 calls per second for this API operation. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param tmpReq CreateAppAgentTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppAgentTemplateResponse
       */
      Models::CreateAppAgentTemplateResponse createAppAgentTemplateWithOptions(const Models::CreateAppAgentTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application agent template.
       *
       * @description ### QPS limit
       * The QPS limit for a single user is 10 calls per second for this API operation. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request CreateAppAgentTemplateRequest
       * @return CreateAppAgentTemplateResponse
       */
      Models::CreateAppAgentTemplateResponse createAppAgentTemplate(const Models::CreateAppAgentTemplateRequest &request);

      /**
       * @summary Creates a custom layout for an application.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param tmpReq CreateAppLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppLayoutResponse
       */
      Models::CreateAppLayoutResponse createAppLayoutWithOptions(const Models::CreateAppLayoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom layout for an application.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request CreateAppLayoutRequest
       * @return CreateAppLayoutResponse
       */
      Models::CreateAppLayoutResponse createAppLayout(const Models::CreateAppLayoutRequest &request);

      /**
       * @summary Creates an application recording template.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
       *
       * @param tmpReq CreateAppRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppRecordTemplateResponse
       */
      Models::CreateAppRecordTemplateResponse createAppRecordTemplateWithOptions(const Models::CreateAppRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application recording template.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
       *
       * @param request CreateAppRecordTemplateRequest
       * @return CreateAppRecordTemplateResponse
       */
      Models::CreateAppRecordTemplateResponse createAppRecordTemplate(const Models::CreateAppRecordTemplateRequest &request);

      /**
       * @summary Creates a stream forwarding template for an RTC 3.0 application.
       *
       * @description ### Usage notes
       * This operation creates a stream forwarding template for an RTC 3.0 application.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
       *
       * @param tmpReq CreateAppStreamingOutTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppStreamingOutTemplateResponse
       */
      Models::CreateAppStreamingOutTemplateResponse createAppStreamingOutTemplateWithOptions(const Models::CreateAppStreamingOutTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a stream forwarding template for an RTC 3.0 application.
       *
       * @description ### Usage notes
       * This operation creates a stream forwarding template for an RTC 3.0 application.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
       *
       * @param request CreateAppStreamingOutTemplateRequest
       * @return CreateAppStreamingOutTemplateResponse
       */
      Models::CreateAppStreamingOutTemplateResponse createAppStreamingOutTemplate(const Models::CreateAppStreamingOutTemplateRequest &request);

      /**
       * @summary Creates an application stream mixing template.
       *
       * @description ### QPS limits
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
       *
       * @param tmpReq CreateAppViewTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppViewTemplateResponse
       */
      Models::CreateAppViewTemplateResponse createAppViewTemplateWithOptions(const Models::CreateAppViewTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application stream mixing template.
       *
       * @description ### QPS limits
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
       *
       * @param request CreateAppViewTemplateRequest
       * @return CreateAppViewTemplateResponse
       */
      Models::CreateAppViewTemplateResponse createAppViewTemplate(const Models::CreateAppViewTemplateRequest &request);

      /**
       * @summary Calls CreateAutoLiveStreamRule to create an automatic single-stream relay rule.
       *
       * @description # Usage notes
       * This operation is used to create a relay rule.
       * # QPS limit
       * The per-user QPS limit of this operation is 1,000 calls per minute. If the limit is exceeded, API calls will be throttled, which may affect your business. Call the operation properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request CreateAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoLiveStreamRuleResponse
       */
      Models::CreateAutoLiveStreamRuleResponse createAutoLiveStreamRuleWithOptions(const Models::CreateAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CreateAutoLiveStreamRule to create an automatic single-stream relay rule.
       *
       * @description # Usage notes
       * This operation is used to create a relay rule.
       * # QPS limit
       * The per-user QPS limit of this operation is 1,000 calls per minute. If the limit is exceeded, API calls will be throttled, which may affect your business. Call the operation properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request CreateAutoLiveStreamRuleRequest
       * @return CreateAutoLiveStreamRuleResponse
       */
      Models::CreateAutoLiveStreamRuleResponse createAutoLiveStreamRule(const Models::CreateAutoLiveStreamRuleRequest &request);

      /**
       * @summary Creates a hotword table for meeting minutes.
       *
       * @param tmpReq CreateCloudNotePhrasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudNotePhrasesResponse
       */
      Models::CreateCloudNotePhrasesResponse createCloudNotePhrasesWithOptions(const Models::CreateCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a hotword table for meeting minutes.
       *
       * @param request CreateCloudNotePhrasesRequest
       * @return CreateCloudNotePhrasesResponse
       */
      Models::CreateCloudNotePhrasesResponse createCloudNotePhrases(const Models::CreateCloudNotePhrasesRequest &request);

      /**
       * @summary Calls CreateEventSubscribe to create a callback for subscribing to room messages.
       *
       * @description # Usage notes
       * This operation is used to create a callback for subscribing to room messages. For example, when you create a callback, you can configure parameters such as the callback URL and event type.
       * # QPS limit
       * The per-user QPS limit of this operation is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make sure that you call this operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request CreateEventSubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventSubscribeResponse
       */
      Models::CreateEventSubscribeResponse createEventSubscribeWithOptions(const Models::CreateEventSubscribeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CreateEventSubscribe to create a callback for subscribing to room messages.
       *
       * @description # Usage notes
       * This operation is used to create a callback for subscribing to room messages. For example, when you create a callback, you can configure parameters such as the callback URL and event type.
       * # QPS limit
       * The per-user QPS limit of this operation is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make sure that you call this operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request CreateEventSubscribeRequest
       * @return CreateEventSubscribeResponse
       */
      Models::CreateEventSubscribeResponse createEventSubscribe(const Models::CreateEventSubscribeRequest &request);

      /**
       * @summary Creates a bypass live streaming layout.
       *
       * @description # Usage notes
       * This operation creates a bypass live streaming layout. For example, you can configure parameters such as the number of audio mixes and the main pane.
       * # QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request CreateMPULayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMPULayoutResponse
       */
      Models::CreateMPULayoutResponse createMPULayoutWithOptions(const Models::CreateMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a bypass live streaming layout.
       *
       * @description # Usage notes
       * This operation creates a bypass live streaming layout. For example, you can configure parameters such as the number of audio mixes and the main pane.
       * # QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request CreateMPULayoutRequest
       * @return CreateMPULayoutResponse
       */
      Models::CreateMPULayoutResponse createMPULayout(const Models::CreateMPULayoutRequest &request);

      /**
       * @summary Deletes an application agent template.
       *
       * @description ### QPS limits
       * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request DeleteAppAgentTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppAgentTemplateResponse
       */
      Models::DeleteAppAgentTemplateResponse deleteAppAgentTemplateWithOptions(const Models::DeleteAppAgentTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application agent template.
       *
       * @description ### QPS limits
       * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request DeleteAppAgentTemplateRequest
       * @return DeleteAppAgentTemplateResponse
       */
      Models::DeleteAppAgentTemplateResponse deleteAppAgentTemplate(const Models::DeleteAppAgentTemplateRequest &request);

      /**
       * @summary Deletes a custom layout for an application.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
       *
       * @param tmpReq DeleteAppLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppLayoutResponse
       */
      Models::DeleteAppLayoutResponse deleteAppLayoutWithOptions(const Models::DeleteAppLayoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom layout for an application.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
       *
       * @param request DeleteAppLayoutRequest
       * @return DeleteAppLayoutResponse
       */
      Models::DeleteAppLayoutResponse deleteAppLayout(const Models::DeleteAppLayoutRequest &request);

      /**
       * @summary Deletes an application recording template.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param tmpReq DeleteAppRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppRecordTemplateResponse
       */
      Models::DeleteAppRecordTemplateResponse deleteAppRecordTemplateWithOptions(const Models::DeleteAppRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application recording template.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request DeleteAppRecordTemplateRequest
       * @return DeleteAppRecordTemplateResponse
       */
      Models::DeleteAppRecordTemplateResponse deleteAppRecordTemplate(const Models::DeleteAppRecordTemplateRequest &request);

      /**
       * @summary Deletes a stream ingest template for an RTC 3.0 application.
       *
       * @description ### Usage notes
       * This operation deletes a stream ingest template for an RTC 3.0 application.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param tmpReq DeleteAppStreamingOutTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppStreamingOutTemplateResponse
       */
      Models::DeleteAppStreamingOutTemplateResponse deleteAppStreamingOutTemplateWithOptions(const Models::DeleteAppStreamingOutTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stream ingest template for an RTC 3.0 application.
       *
       * @description ### Usage notes
       * This operation deletes a stream ingest template for an RTC 3.0 application.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request DeleteAppStreamingOutTemplateRequest
       * @return DeleteAppStreamingOutTemplateResponse
       */
      Models::DeleteAppStreamingOutTemplateResponse deleteAppStreamingOutTemplate(const Models::DeleteAppStreamingOutTemplateRequest &request);

      /**
       * @summary Deletes an application\\"s composite stream template.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API is 10 calls per second for each user. If you exceed this limit, rate limiting is triggered. This may affect your business. Call this API at a reasonable rate.
       *
       * @param tmpReq DeleteAppViewTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppViewTemplateResponse
       */
      Models::DeleteAppViewTemplateResponse deleteAppViewTemplateWithOptions(const Models::DeleteAppViewTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application\\"s composite stream template.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API is 10 calls per second for each user. If you exceed this limit, rate limiting is triggered. This may affect your business. Call this API at a reasonable rate.
       *
       * @param request DeleteAppViewTemplateRequest
       * @return DeleteAppViewTemplateResponse
       */
      Models::DeleteAppViewTemplateResponse deleteAppViewTemplate(const Models::DeleteAppViewTemplateRequest &request);

      /**
       * @summary Deletes an automatic bypass single-stream relay rule.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
       * # QPS limits
       * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DeleteAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoLiveStreamRuleResponse
       */
      Models::DeleteAutoLiveStreamRuleResponse deleteAutoLiveStreamRuleWithOptions(const Models::DeleteAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an automatic bypass single-stream relay rule.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
       * # QPS limits
       * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DeleteAutoLiveStreamRuleRequest
       * @return DeleteAutoLiveStreamRuleResponse
       */
      Models::DeleteAutoLiveStreamRuleResponse deleteAutoLiveStreamRule(const Models::DeleteAutoLiveStreamRuleRequest &request);

      /**
       * @summary Deletes a channel.
       *
       * @description # Usage notes
       * This operation deletes a channel.
       * # QPS limit
       * This operation has no QPS limit per user. Call this operation as needed. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DeleteChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChannelResponse
       */
      Models::DeleteChannelResponse deleteChannelWithOptions(const Models::DeleteChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a channel.
       *
       * @description # Usage notes
       * This operation deletes a channel.
       * # QPS limit
       * This operation has no QPS limit per user. Call this operation as needed. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DeleteChannelRequest
       * @return DeleteChannelResponse
       */
      Models::DeleteChannelResponse deleteChannel(const Models::DeleteChannelRequest &request);

      /**
       * @summary Deletes a hot word table.
       *
       * @param tmpReq DeleteCloudNotePhrasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudNotePhrasesResponse
       */
      Models::DeleteCloudNotePhrasesResponse deleteCloudNotePhrasesWithOptions(const Models::DeleteCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a hot word table.
       *
       * @param request DeleteCloudNotePhrasesRequest
       * @return DeleteCloudNotePhrasesResponse
       */
      Models::DeleteCloudNotePhrasesResponse deleteCloudNotePhrases(const Models::DeleteCloudNotePhrasesRequest &request);

      /**
       * @summary Deletes a callback for subscribing to room messages by calling DeleteEventSubscribe.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateEventSubscribe](https://help.aliyun.com/document_detail/274447.html) to create a callback for subscribing to room messages.
       * # QPS limits
       * The QPS limit of this operation is 1,000 calls per minute per user. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DeleteEventSubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventSubscribeResponse
       */
      Models::DeleteEventSubscribeResponse deleteEventSubscribeWithOptions(const Models::DeleteEventSubscribeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a callback for subscribing to room messages by calling DeleteEventSubscribe.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateEventSubscribe](https://help.aliyun.com/document_detail/274447.html) to create a callback for subscribing to room messages.
       * # QPS limits
       * The QPS limit of this operation is 1,000 calls per minute per user. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DeleteEventSubscribeRequest
       * @return DeleteEventSubscribeResponse
       */
      Models::DeleteEventSubscribeResponse deleteEventSubscribe(const Models::DeleteEventSubscribeRequest &request);

      /**
       * @summary Deletes a bypass live streaming layout.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
       * # QPS limits
       * The per-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DeleteMPULayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMPULayoutResponse
       */
      Models::DeleteMPULayoutResponse deleteMPULayoutWithOptions(const Models::DeleteMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a bypass live streaming layout.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
       * # QPS limits
       * The per-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DeleteMPULayoutRequest
       * @return DeleteMPULayoutResponse
       */
      Models::DeleteMPULayoutResponse deleteMPULayout(const Models::DeleteMPULayoutRequest &request);

      /**
       * @summary Deletes a recording configuration template.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
       * # QPS limits
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DeleteRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecordTemplateResponse
       */
      Models::DeleteRecordTemplateResponse deleteRecordTemplateWithOptions(const Models::DeleteRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a recording configuration template.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
       * # QPS limits
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DeleteRecordTemplateRequest
       * @return DeleteRecordTemplateResponse
       */
      Models::DeleteRecordTemplateResponse deleteRecordTemplate(const Models::DeleteRecordTemplateRequest &request);

      /**
       * @summary Lists the event callbacks supported by the system.
       *
       * @description ### QPS limit
       * This API supports a maximum of 10 calls per second per user. If you exceed this limit, rate limiting is applied to your API calls, which may affect your business operations. Use this API judiciously.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllCallbackResponse
       */
      Models::DescribeAllCallbackResponse describeAllCallbackWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the event callbacks supported by the system.
       *
       * @description ### QPS limit
       * This API supports a maximum of 10 calls per second per user. If you exceed this limit, rate limiting is applied to your API calls, which may affect your business operations. Use this API judiciously.
       *
       * @return DescribeAllCallbackResponse
       */
      Models::DescribeAllCallbackResponse describeAllCallback();

      /**
       * @summary Query the status of the application agent feature.
       *
       * @description ### QPS limit
       * This API operation supports a maximum of 10 queries per second per user. If you exceed this limit, rate limiting is triggered, which may affect your application. Call this API only as needed.
       *
       * @param request DescribeAppAgentFunctionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppAgentFunctionStatusResponse
       */
      Models::DescribeAppAgentFunctionStatusResponse describeAppAgentFunctionStatusWithOptions(const Models::DescribeAppAgentFunctionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the status of the application agent feature.
       *
       * @description ### QPS limit
       * This API operation supports a maximum of 10 queries per second per user. If you exceed this limit, rate limiting is triggered, which may affect your application. Call this API only as needed.
       *
       * @param request DescribeAppAgentFunctionStatusRequest
       * @return DescribeAppAgentFunctionStatusResponse
       */
      Models::DescribeAppAgentFunctionStatusResponse describeAppAgentFunctionStatus(const Models::DescribeAppAgentFunctionStatusRequest &request);

      /**
       * @summary Lists agent templates.
       *
       * @description ### Rate limits
       * The rate limit for this API operation is 10 queries per second (QPS) per user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeAppAgentTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppAgentTemplatesResponse
       */
      Models::DescribeAppAgentTemplatesResponse describeAppAgentTemplatesWithOptions(const Models::DescribeAppAgentTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists agent templates.
       *
       * @description ### Rate limits
       * The rate limit for this API operation is 10 queries per second (QPS) per user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeAppAgentTemplatesRequest
       * @return DescribeAppAgentTemplatesResponse
       */
      Models::DescribeAppAgentTemplatesResponse describeAppAgentTemplates(const Models::DescribeAppAgentTemplatesRequest &request);

      /**
       * @summary Queries the callback switch of an application.
       *
       * @description ### QPS limits
       * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API operation at a reasonable rate.
       *
       * @param request DescribeAppCallStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppCallStatusResponse
       */
      Models::DescribeAppCallStatusResponse describeAppCallStatusWithOptions(const Models::DescribeAppCallStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the callback switch of an application.
       *
       * @description ### QPS limits
       * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API operation at a reasonable rate.
       *
       * @param request DescribeAppCallStatusRequest
       * @return DescribeAppCallStatusResponse
       */
      Models::DescribeAppCallStatusResponse describeAppCallStatus(const Models::DescribeAppCallStatusRequest &request);

      /**
       * @summary Obtain the application callback key
       *
       * @description ### Queries per second (QPS) limit  
       * The queries per second (QPS) limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeAppCallbackSecretKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppCallbackSecretKeyResponse
       */
      Models::DescribeAppCallbackSecretKeyResponse describeAppCallbackSecretKeyWithOptions(const Models::DescribeAppCallbackSecretKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the application callback key
       *
       * @description ### Queries per second (QPS) limit  
       * The queries per second (QPS) limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeAppCallbackSecretKeyRequest
       * @return DescribeAppCallbackSecretKeyResponse
       */
      Models::DescribeAppCallbackSecretKeyResponse describeAppCallbackSecretKey(const Models::DescribeAppCallbackSecretKeyRequest &request);

      /**
       * @summary Invoke DescribeAppKey to query the AppKey of a specified application.
       *
       * @description ### How-To  
       * Before invoking this API, you must have already created an application in the RTC console.  
       * ### queries per second (QPS) limit  
       * The QPS limit for this API is 200 requests per minute per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppKeyResponse
       */
      Models::DescribeAppKeyResponse describeAppKeyWithOptions(const Models::DescribeAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke DescribeAppKey to query the AppKey of a specified application.
       *
       * @description ### How-To  
       * Before invoking this API, you must have already created an application in the RTC console.  
       * ### queries per second (QPS) limit  
       * The QPS limit for this API is 200 requests per minute per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeAppKeyRequest
       * @return DescribeAppKeyResponse
       */
      Models::DescribeAppKeyResponse describeAppKey(const Models::DescribeAppKeyRequest &request);

      /**
       * @summary Query custom application layouts.
       *
       * @description ### QPS limit
       * This API supports up to 10 queries per second (QPS) per user. Exceeding this limit triggers rate limiting, which may affect your business operations. Use the API judiciously.
       *
       * @param tmpReq DescribeAppLayoutsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppLayoutsResponse
       */
      Models::DescribeAppLayoutsResponse describeAppLayoutsWithOptions(const Models::DescribeAppLayoutsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query custom application layouts.
       *
       * @description ### QPS limit
       * This API supports up to 10 queries per second (QPS) per user. Exceeding this limit triggers rate limiting, which may affect your business operations. Use the API judiciously.
       *
       * @param request DescribeAppLayoutsRequest
       * @return DescribeAppLayoutsResponse
       */
      Models::DescribeAppLayoutsResponse describeAppLayouts(const Models::DescribeAppLayoutsRequest &request);

      /**
       * @summary View the application bypass switch.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API is 10 for each user. API calls that exceed this limit are subject to rate limiting, which may impact your business. We recommend that you call this API at a reasonable rate.
       *
       * @param request DescribeAppLiveStreamStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppLiveStreamStatusResponse
       */
      Models::DescribeAppLiveStreamStatusResponse describeAppLiveStreamStatusWithOptions(const Models::DescribeAppLiveStreamStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the application bypass switch.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API is 10 for each user. API calls that exceed this limit are subject to rate limiting, which may impact your business. We recommend that you call this API at a reasonable rate.
       *
       * @param request DescribeAppLiveStreamStatusRequest
       * @return DescribeAppLiveStreamStatusResponse
       */
      Models::DescribeAppLiveStreamStatusResponse describeAppLiveStreamStatus(const Models::DescribeAppLiveStreamStatusRequest &request);

      /**
       * @summary Queries the recording status of an application.
       *
       * @description ### QPS limit
       * The QPS limit for this operation is 10 calls per second per user. Exceeding this limit triggers rate limiting, which may affect your business. Call this operation only as needed.
       *
       * @param request DescribeAppRecordStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppRecordStatusResponse
       */
      Models::DescribeAppRecordStatusResponse describeAppRecordStatusWithOptions(const Models::DescribeAppRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recording status of an application.
       *
       * @description ### QPS limit
       * The QPS limit for this operation is 10 calls per second per user. Exceeding this limit triggers rate limiting, which may affect your business. Call this operation only as needed.
       *
       * @param request DescribeAppRecordStatusRequest
       * @return DescribeAppRecordStatusResponse
       */
      Models::DescribeAppRecordStatusResponse describeAppRecordStatus(const Models::DescribeAppRecordStatusRequest &request);

      /**
       * @summary Queries the list of application recording templates.
       *
       * @description ### QPS limit
       * The QPS limit for a single user calling this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API operation at a reasonable frequency.
       *
       * @param tmpReq DescribeAppRecordTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppRecordTemplatesResponse
       */
      Models::DescribeAppRecordTemplatesResponse describeAppRecordTemplatesWithOptions(const Models::DescribeAppRecordTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of application recording templates.
       *
       * @description ### QPS limit
       * The QPS limit for a single user calling this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API operation at a reasonable frequency.
       *
       * @param request DescribeAppRecordTemplatesRequest
       * @return DescribeAppRecordTemplatesResponse
       */
      Models::DescribeAppRecordTemplatesResponse describeAppRecordTemplates(const Models::DescribeAppRecordTemplatesRequest &request);

      /**
       * @summary Lists recording files.
       *
       * @description ### QPS limit
       * The QPS limit for this API is 10 requests per second per user. Exceeding this limit triggers rate limiting, which may affect your service. Call this API only when necessary.
       *
       * @param tmpReq DescribeAppRecordingFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppRecordingFilesResponse
       */
      Models::DescribeAppRecordingFilesResponse describeAppRecordingFilesWithOptions(const Models::DescribeAppRecordingFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists recording files.
       *
       * @description ### QPS limit
       * The QPS limit for this API is 10 requests per second per user. Exceeding this limit triggers rate limiting, which may affect your service. Call this API only when necessary.
       *
       * @param request DescribeAppRecordingFilesRequest
       * @return DescribeAppRecordingFilesResponse
       */
      Models::DescribeAppRecordingFilesResponse describeAppRecordingFiles(const Models::DescribeAppRecordingFilesRequest &request);

      /**
       * @summary Query the list of stream ingest templates under an RTC 3.0 application.
       *
       * @description ### How-To  
       * This API is used to view the list of stream ingest templates for an RTC 3.0 application.  
       * ### Queries per second (QPS) limit  
       * The QPS limit for this API is 10 queries per second per user. If this limit is exceeded, API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
       *
       * @param tmpReq DescribeAppStreamingOutTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppStreamingOutTemplatesResponse
       */
      Models::DescribeAppStreamingOutTemplatesResponse describeAppStreamingOutTemplatesWithOptions(const Models::DescribeAppStreamingOutTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of stream ingest templates under an RTC 3.0 application.
       *
       * @description ### How-To  
       * This API is used to view the list of stream ingest templates for an RTC 3.0 application.  
       * ### Queries per second (QPS) limit  
       * The QPS limit for this API is 10 queries per second per user. If this limit is exceeded, API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeAppStreamingOutTemplatesRequest
       * @return DescribeAppStreamingOutTemplatesResponse
       */
      Models::DescribeAppStreamingOutTemplatesResponse describeAppStreamingOutTemplates(const Models::DescribeAppStreamingOutTemplatesRequest &request);

      /**
       * @summary View the stream merging switch
       *
       * @description ### QPS limits
       * This API has a QPS limit of 10 queries per second (QPS) per user. If you exceed this limit, rate limiting is triggered, which can affect your business operations. Call the API at a reasonable rate.
       *
       * @param request DescribeAppViewStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppViewStatusResponse
       */
      Models::DescribeAppViewStatusResponse describeAppViewStatusWithOptions(const Models::DescribeAppViewStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the stream merging switch
       *
       * @description ### QPS limits
       * This API has a QPS limit of 10 queries per second (QPS) per user. If you exceed this limit, rate limiting is triggered, which can affect your business operations. Call the API at a reasonable rate.
       *
       * @param request DescribeAppViewStatusRequest
       * @return DescribeAppViewStatusResponse
       */
      Models::DescribeAppViewStatusResponse describeAppViewStatus(const Models::DescribeAppViewStatusRequest &request);

      /**
       * @summary Lists application compositing templates.
       *
       * @description ### QPS limit
       * The per-user QPS limit for this operation is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. You should call this operation only as needed.
       *
       * @param tmpReq DescribeAppViewTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppViewTemplatesResponse
       */
      Models::DescribeAppViewTemplatesResponse describeAppViewTemplatesWithOptions(const Models::DescribeAppViewTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists application compositing templates.
       *
       * @description ### QPS limit
       * The per-user QPS limit for this operation is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. You should call this operation only as needed.
       *
       * @param request DescribeAppViewTemplatesRequest
       * @return DescribeAppViewTemplatesResponse
       */
      Models::DescribeAppViewTemplatesResponse describeAppViewTemplates(const Models::DescribeAppViewTemplatesRequest &request);

      /**
       * @summary Queries the list of applications.
       *
       * @description ### Usage notes
       * This operation queries the list of applications. For example, you can obtain data such as the application ID, application name, and application type from the query results.
       * ### QPS limits
       * The QPS limit for a single user is 200 calls per minute. If this limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
       *
       * @param request DescribeAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppsResponse
       */
      Models::DescribeAppsResponse describeAppsWithOptions(const Models::DescribeAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of applications.
       *
       * @description ### Usage notes
       * This operation queries the list of applications. For example, you can obtain data such as the application ID, application name, and application type from the query results.
       * ### QPS limits
       * The QPS limit for a single user is 200 calls per minute. If this limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
       *
       * @param request DescribeAppsRequest
       * @return DescribeAppsResponse
       */
      Models::DescribeAppsResponse describeApps(const Models::DescribeAppsRequest &request);

      /**
       * @summary Queries the automatic bypass single-stream relay rules.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
       * # QPS limit
       * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoLiveStreamRuleResponse
       */
      Models::DescribeAutoLiveStreamRuleResponse describeAutoLiveStreamRuleWithOptions(const Models::DescribeAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic bypass single-stream relay rules.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
       * # QPS limit
       * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeAutoLiveStreamRuleRequest
       * @return DescribeAutoLiveStreamRuleResponse
       */
      Models::DescribeAutoLiveStreamRuleResponse describeAutoLiveStreamRule(const Models::DescribeAutoLiveStreamRuleRequest &request);

      /**
       * @summary Queries the details of a single communication session. For example, you can query the communication status and user details.
       *
       * @description ### Usage notes
       * This operation queries the details of a single communication session. For example, you can query the communication status and user details.
       * ### QPS limit
       * The QPS limit per user for this operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
       *
       * @param request DescribeCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCallResponse
       */
      Models::DescribeCallResponse describeCallWithOptions(const Models::DescribeCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single communication session. For example, you can query the communication status and user details.
       *
       * @description ### Usage notes
       * This operation queries the details of a single communication session. For example, you can query the communication status and user details.
       * ### QPS limit
       * The QPS limit per user for this operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
       *
       * @param request DescribeCallRequest
       * @return DescribeCallResponse
       */
      Models::DescribeCallResponse describeCall(const Models::DescribeCallRequest &request);

      /**
       * @summary Invoke DescribeCallList to perform a paged query of communication records created within a specified time range.
       *
       * @description ### How-To  
       * This API is used to query communication records created within a specified time range. For example, you can query information such as call duration, status, and user count.  
       * ### Rate Limiting  
       * The queries per second (QPS) limit for this API is 10 calls per second per user. If this limit is exceeded, API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeCallListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCallListResponse
       */
      Models::DescribeCallListResponse describeCallListWithOptions(const Models::DescribeCallListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke DescribeCallList to perform a paged query of communication records created within a specified time range.
       *
       * @description ### How-To  
       * This API is used to query communication records created within a specified time range. For example, you can query information such as call duration, status, and user count.  
       * ### Rate Limiting  
       * The queries per second (QPS) limit for this API is 10 calls per second per user. If this limit is exceeded, API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeCallListRequest
       * @return DescribeCallListResponse
       */
      Models::DescribeCallListResponse describeCallList(const Models::DescribeCallListRequest &request);

      /**
       * @summary Lists the event callbacks configured for an application.
       *
       * @description ### QPS limit
       * This API supports up to 10 queries per second (QPS) per user. If you exceed this limit, the system applies rate limiting to your API calls, which may affect your business operations. Plan your API calls accordingly.
       *
       * @param request DescribeCallbacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCallbacksResponse
       */
      Models::DescribeCallbacksResponse describeCallbacksWithOptions(const Models::DescribeCallbacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the event callbacks configured for an application.
       *
       * @description ### QPS limit
       * This API supports up to 10 queries per second (QPS) per user. If you exceed this limit, the system applies rate limiting to your API calls, which may affect your business operations. Plan your API calls accordingly.
       *
       * @param request DescribeCallbacksRequest
       * @return DescribeCallbacksResponse
       */
      Models::DescribeCallbacksResponse describeCallbacks(const Models::DescribeCallbacksRequest &request);

      /**
       * @summary DescribeChannel
       *
       * @description ### How-To  
       * This API is used to query online channel information.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second per user. If the limit is exceeded, Rate Limiting will be applied to your API Call, which may Impact your business. Please invoke the API reasonably.
       *
       * @param request DescribeChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelResponse
       */
      Models::DescribeChannelResponse describeChannelWithOptions(const Models::DescribeChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeChannel
       *
       * @description ### How-To  
       * This API is used to query online channel information.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second per user. If the limit is exceeded, Rate Limiting will be applied to your API Call, which may Impact your business. Please invoke the API reasonably.
       *
       * @param request DescribeChannelRequest
       * @return DescribeChannelResponse
       */
      Models::DescribeChannelResponse describeChannel(const Models::DescribeChannelRequest &request);

      /**
       * @summary This API is used to query the user list in a channel.
       *
       * @description ### How-To  
       * This API is used to query the list of users in an online channel.  
       * ### QPS Limit  
       * The queries per second (QPS) limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Invoke this API appropriately.
       *
       * @param request DescribeChannelAllUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelAllUsersResponse
       */
      Models::DescribeChannelAllUsersResponse describeChannelAllUsersWithOptions(const Models::DescribeChannelAllUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to query the user list in a channel.
       *
       * @description ### How-To  
       * This API is used to query the list of users in an online channel.  
       * ### QPS Limit  
       * The queries per second (QPS) limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Invoke this API appropriately.
       *
       * @param request DescribeChannelAllUsersRequest
       * @return DescribeChannelAllUsersResponse
       */
      Models::DescribeChannelAllUsersResponse describeChannelAllUsers(const Models::DescribeChannelAllUsersRequest &request);

      /**
       * @summary Retrieves the regional distribution statistics of a channel.
       *
       * @description ### Usage notes
       * This operation retrieves the regional distribution statistics of a channel.
       * ### QPS limit
       * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Plan your API calls accordingly.
       *
       * @param request DescribeChannelAreaDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelAreaDistributionStatDataResponse
       */
      Models::DescribeChannelAreaDistributionStatDataResponse describeChannelAreaDistributionStatDataWithOptions(const Models::DescribeChannelAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the regional distribution statistics of a channel.
       *
       * @description ### Usage notes
       * This operation retrieves the regional distribution statistics of a channel.
       * ### QPS limit
       * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Plan your API calls accordingly.
       *
       * @param request DescribeChannelAreaDistributionStatDataRequest
       * @return DescribeChannelAreaDistributionStatDataResponse
       */
      Models::DescribeChannelAreaDistributionStatDataResponse describeChannelAreaDistributionStatData(const Models::DescribeChannelAreaDistributionStatDataRequest &request);

      /**
       * @summary Queries the channel distribution statistics.
       *
       * @description ### Usage notes
       * This operation queries the channel distribution statistics. You can query the statistics by dimension, such as operating system type or SDK version.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request DescribeChannelDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelDistributionStatDataResponse
       */
      Models::DescribeChannelDistributionStatDataResponse describeChannelDistributionStatDataWithOptions(const Models::DescribeChannelDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the channel distribution statistics.
       *
       * @description ### Usage notes
       * This operation queries the channel distribution statistics. You can query the statistics by dimension, such as operating system type or SDK version.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request DescribeChannelDistributionStatDataRequest
       * @return DescribeChannelDistributionStatDataResponse
       */
      Models::DescribeChannelDistributionStatDataResponse describeChannelDistributionStatData(const Models::DescribeChannelDistributionStatDataRequest &request);

      /**
       * @summary This API is used to query channel overview data.
       *
       * @description ### How-To  
       * This API is used to query channel overview data. For example, you can query basic communication information, Trend Indicators, and other information.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second per User. If the limit is exceeded, Rate Limiting will be applied to API Calls, which may Impact your business. Invoke the API appropriately.
       *
       * @param request DescribeChannelOverallDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelOverallDataResponse
       */
      Models::DescribeChannelOverallDataResponse describeChannelOverallDataWithOptions(const Models::DescribeChannelOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to query channel overview data.
       *
       * @description ### How-To  
       * This API is used to query channel overview data. For example, you can query basic communication information, Trend Indicators, and other information.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second per User. If the limit is exceeded, Rate Limiting will be applied to API Calls, which may Impact your business. Invoke the API appropriately.
       *
       * @param request DescribeChannelOverallDataRequest
       * @return DescribeChannelOverallDataResponse
       */
      Models::DescribeChannelOverallDataResponse describeChannelOverallData(const Models::DescribeChannelOverallDataRequest &request);

      /**
       * @summary Queries the list of online users in a channel without detailed information.
       *
       * @description # Usage notes
       * This operation queries the list of online users in a channel, excluding detailed user information.
       * # QPS limit
       * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeChannelParticipantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelParticipantsResponse
       */
      Models::DescribeChannelParticipantsResponse describeChannelParticipantsWithOptions(const Models::DescribeChannelParticipantsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of online users in a channel without detailed information.
       *
       * @description # Usage notes
       * This operation queries the list of online users in a channel, excluding detailed user information.
       * # QPS limit
       * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeChannelParticipantsRequest
       * @return DescribeChannelParticipantsResponse
       */
      Models::DescribeChannelParticipantsResponse describeChannelParticipants(const Models::DescribeChannelParticipantsRequest &request);

      /**
       * @summary Retrieves the list of publishing users in a channel in descending order of online duration.
       *
       * @description ### Usage notes
       * This operation retrieves the list of publishing users in a channel in descending order of online duration. For example, you can query information such as the time when a user joined the call and the communication duration from the user list.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request DescribeChannelTopPubUserListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelTopPubUserListResponse
       */
      Models::DescribeChannelTopPubUserListResponse describeChannelTopPubUserListWithOptions(const Models::DescribeChannelTopPubUserListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of publishing users in a channel in descending order of online duration.
       *
       * @description ### Usage notes
       * This operation retrieves the list of publishing users in a channel in descending order of online duration. For example, you can query information such as the time when a user joined the call and the communication duration from the user list.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request DescribeChannelTopPubUserListRequest
       * @return DescribeChannelTopPubUserListResponse
       */
      Models::DescribeChannelTopPubUserListResponse describeChannelTopPubUserList(const Models::DescribeChannelTopPubUserListRequest &request);

      /**
       * @summary Queries the information of a user in a channel.
       *
       * @description ### Usage notes
       * This operation queries the information of a user in an online channel.
       * ### QPS limit
       * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable rate.
       *
       * @param request DescribeChannelUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelUserResponse
       */
      Models::DescribeChannelUserResponse describeChannelUserWithOptions(const Models::DescribeChannelUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a user in a channel.
       *
       * @description ### Usage notes
       * This operation queries the information of a user in an online channel.
       * ### QPS limit
       * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable rate.
       *
       * @param request DescribeChannelUserRequest
       * @return DescribeChannelUserResponse
       */
      Models::DescribeChannelUserResponse describeChannelUser(const Models::DescribeChannelUserRequest &request);

      /**
       * @summary Queries the user data in the channel overview.
       *
       * @description ### Usage notes
       * This operation queries the user data in the channel overview. For example, you can query metric data details and overview data.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
       *
       * @param request DescribeChannelUserMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelUserMetricsResponse
       */
      Models::DescribeChannelUserMetricsResponse describeChannelUserMetricsWithOptions(const Models::DescribeChannelUserMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user data in the channel overview.
       *
       * @description ### Usage notes
       * This operation queries the user data in the channel overview. For example, you can query metric data details and overview data.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
       *
       * @param request DescribeChannelUserMetricsRequest
       * @return DescribeChannelUserMetricsResponse
       */
      Models::DescribeChannelUserMetricsResponse describeChannelUserMetrics(const Models::DescribeChannelUserMetricsRequest &request);

      /**
       * @summary Queries the list of real-time online users in a channel.
       *
       * @description # Usage notes
       * This operation queries the details of online users in a channel. For example, you can query the total number of users in communication mode and live streaming mode.
       * # QPS limit
       * The queries per second (QPS) limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeChannelUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelUsersResponse
       */
      Models::DescribeChannelUsersResponse describeChannelUsersWithOptions(const Models::DescribeChannelUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of real-time online users in a channel.
       *
       * @description # Usage notes
       * This operation queries the details of online users in a channel. For example, you can query the total number of users in communication mode and live streaming mode.
       * # QPS limit
       * The queries per second (QPS) limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeChannelUsersRequest
       * @return DescribeChannelUsersResponse
       */
      Models::DescribeChannelUsersResponse describeChannelUsers(const Models::DescribeChannelUsersRequest &request);

      /**
       * @summary Queries all active channels under a single AppId.
       *
       * @description ### Usage notes
       * This operation queries all active channels under a single AppId.
       * ### QPS limit
       * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
       *
       * @param request DescribeChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelsResponse
       */
      Models::DescribeChannelsResponse describeChannelsWithOptions(const Models::DescribeChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all active channels under a single AppId.
       *
       * @description ### Usage notes
       * This operation queries all active channels under a single AppId.
       * ### QPS limit
       * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
       *
       * @param request DescribeChannelsRequest
       * @return DescribeChannelsResponse
       */
      Models::DescribeChannelsResponse describeChannels(const Models::DescribeChannelsRequest &request);

      /**
       * @summary Queries the hotword lists for meeting minutes.
       *
       * @param tmpReq DescribeCloudNotePhrasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudNotePhrasesResponse
       */
      Models::DescribeCloudNotePhrasesResponse describeCloudNotePhrasesWithOptions(const Models::DescribeCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the hotword lists for meeting minutes.
       *
       * @param request DescribeCloudNotePhrasesRequest
       * @return DescribeCloudNotePhrasesResponse
       */
      Models::DescribeCloudNotePhrasesResponse describeCloudNotePhrases(const Models::DescribeCloudNotePhrasesRequest &request);

      /**
       * @summary Meeting Summary List
       *
       * @description ### How-To  
       * This API is used to query the list of meeting summary job files that have generated summary results.  
       * ### Queries Per Second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second (QPS) per user. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param tmpReq DescribeCloudNotesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudNotesResponse
       */
      Models::DescribeCloudNotesResponse describeCloudNotesWithOptions(const Models::DescribeCloudNotesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Meeting Summary List
       *
       * @description ### How-To  
       * This API is used to query the list of meeting summary job files that have generated summary results.  
       * ### Queries Per Second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second (QPS) per user. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeCloudNotesRequest
       * @return DescribeCloudNotesResponse
       */
      Models::DescribeCloudNotesResponse describeCloudNotes(const Models::DescribeCloudNotesRequest &request);

      /**
       * @summary Queries the status of a recording task.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request DescribeCloudRecordStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudRecordStatusResponse
       */
      Models::DescribeCloudRecordStatusResponse describeCloudRecordStatusWithOptions(const Models::DescribeCloudRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a recording task.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request DescribeCloudRecordStatusRequest
       * @return DescribeCloudRecordStatusResponse
       */
      Models::DescribeCloudRecordStatusResponse describeCloudRecordStatus(const Models::DescribeCloudRecordStatusRequest &request);

      /**
       * @summary Retrieves a list of end-to-end user events.
       *
       * @description ### Usage notes
       * This operation retrieves a list of end-to-end user events. For example, you can obtain information such as the event name and event type from the event list.
       * ### QPS limits
       * The QPS limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
       *
       * @param request DescribeEndPointEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEndPointEventListResponse
       */
      Models::DescribeEndPointEventListResponse describeEndPointEventListWithOptions(const Models::DescribeEndPointEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of end-to-end user events.
       *
       * @description ### Usage notes
       * This operation retrieves a list of end-to-end user events. For example, you can obtain information such as the event name and event type from the event list.
       * ### QPS limits
       * The QPS limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
       *
       * @param request DescribeEndPointEventListRequest
       * @return DescribeEndPointEventListResponse
       */
      Models::DescribeEndPointEventListResponse describeEndPointEventList(const Models::DescribeEndPointEventListRequest &request);

      /**
       * @summary Retrieves end-to-end metric data.
       *
       * @description ### Usage notes
       * This operation retrieves end-to-end metric data. For example, you can retrieve metric information for subscribers and publishers.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the number of calls per second exceeds the limit, throttling is triggered, which may affect your business. Make API calls at a reasonable frequency.
       *
       * @param request DescribeEndPointMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEndPointMetricDataResponse
       */
      Models::DescribeEndPointMetricDataResponse describeEndPointMetricDataWithOptions(const Models::DescribeEndPointMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves end-to-end metric data.
       *
       * @description ### Usage notes
       * This operation retrieves end-to-end metric data. For example, you can retrieve metric information for subscribers and publishers.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the number of calls per second exceeds the limit, throttling is triggered, which may affect your business. Make API calls at a reasonable frequency.
       *
       * @param request DescribeEndPointMetricDataRequest
       * @return DescribeEndPointMetricDataResponse
       */
      Models::DescribeEndPointMetricDataResponse describeEndPointMetricData(const Models::DescribeEndPointMetricDataRequest &request);

      /**
       * @summary Invoke the DescribeFaultDiagnosisFactorDistributionStat API to obtain the distribution of factors impacting abnormal diagnosis.
       *
       * @description ### How-To  
       * This API is used to retrieve the distribution of factors impacting abnormal diagnosis. When using this API, you can query data from the last 48 hours, with each query covering a time range of no more than 24 hours.
       * ### QPS Limit  
       * The queries per second (QPS) limit for this API is 10 per user. If this limit is exceeded, API calls will be subject to rate limiting, which may impact your service. Please call the API responsibly.
       *
       * @param request DescribeFaultDiagnosisFactorDistributionStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaultDiagnosisFactorDistributionStatResponse
       */
      Models::DescribeFaultDiagnosisFactorDistributionStatResponse describeFaultDiagnosisFactorDistributionStatWithOptions(const Models::DescribeFaultDiagnosisFactorDistributionStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the DescribeFaultDiagnosisFactorDistributionStat API to obtain the distribution of factors impacting abnormal diagnosis.
       *
       * @description ### How-To  
       * This API is used to retrieve the distribution of factors impacting abnormal diagnosis. When using this API, you can query data from the last 48 hours, with each query covering a time range of no more than 24 hours.
       * ### QPS Limit  
       * The queries per second (QPS) limit for this API is 10 per user. If this limit is exceeded, API calls will be subject to rate limiting, which may impact your service. Please call the API responsibly.
       *
       * @param request DescribeFaultDiagnosisFactorDistributionStatRequest
       * @return DescribeFaultDiagnosisFactorDistributionStatResponse
       */
      Models::DescribeFaultDiagnosisFactorDistributionStatResponse describeFaultDiagnosisFactorDistributionStat(const Models::DescribeFaultDiagnosisFactorDistributionStatRequest &request);

      /**
       * @summary Retrieves the overview data of exception diagnostics.
       *
       * @description ### Usage notes
       * This operation retrieves the overview data of exception diagnostics. When you call this operation, you can query data from the last 48 hours, and the query time range cannot exceed 24 hours.
       * ### QPS limits
       * The queries per second (QPS) limit on this operation is 10 per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
       *
       * @param request DescribeFaultDiagnosisOverallDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaultDiagnosisOverallDataResponse
       */
      Models::DescribeFaultDiagnosisOverallDataResponse describeFaultDiagnosisOverallDataWithOptions(const Models::DescribeFaultDiagnosisOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the overview data of exception diagnostics.
       *
       * @description ### Usage notes
       * This operation retrieves the overview data of exception diagnostics. When you call this operation, you can query data from the last 48 hours, and the query time range cannot exceed 24 hours.
       * ### QPS limits
       * The queries per second (QPS) limit on this operation is 10 per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
       *
       * @param request DescribeFaultDiagnosisOverallDataRequest
       * @return DescribeFaultDiagnosisOverallDataResponse
       */
      Models::DescribeFaultDiagnosisOverallDataResponse describeFaultDiagnosisOverallData(const Models::DescribeFaultDiagnosisOverallDataRequest &request);

      /**
       * @summary [responses_200_schema_properties_UserDetail_properties_Duration_type]integer
       *
       * @description [responses_200_schema_properties_UserDetail_properties_CreatedTs_description]Call creation time, represented as a UNIX timestamp in seconds.
       *
       * @param request DescribeFaultDiagnosisUserDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaultDiagnosisUserDetailResponse
       */
      Models::DescribeFaultDiagnosisUserDetailResponse describeFaultDiagnosisUserDetailWithOptions(const Models::DescribeFaultDiagnosisUserDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary [responses_200_schema_properties_UserDetail_properties_Duration_type]integer
       *
       * @description [responses_200_schema_properties_UserDetail_properties_CreatedTs_description]Call creation time, represented as a UNIX timestamp in seconds.
       *
       * @param request DescribeFaultDiagnosisUserDetailRequest
       * @return DescribeFaultDiagnosisUserDetailResponse
       */
      Models::DescribeFaultDiagnosisUserDetailResponse describeFaultDiagnosisUserDetail(const Models::DescribeFaultDiagnosisUserDetailRequest &request);

      /**
       * @summary Queries the detailed user list for fault diagnosis.
       *
       * @description ### Usage notes
       * This operation is used to retrieve the detailed user list for fault diagnosis. When you call this operation, you can query data from the last 48 hours, and the query time range cannot exceed 24 hours.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
       *
       * @param request DescribeFaultDiagnosisUserListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFaultDiagnosisUserListResponse
       */
      Models::DescribeFaultDiagnosisUserListResponse describeFaultDiagnosisUserListWithOptions(const Models::DescribeFaultDiagnosisUserListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed user list for fault diagnosis.
       *
       * @description ### Usage notes
       * This operation is used to retrieve the detailed user list for fault diagnosis. When you call this operation, you can query data from the last 48 hours, and the query time range cannot exceed 24 hours.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
       *
       * @param request DescribeFaultDiagnosisUserListRequest
       * @return DescribeFaultDiagnosisUserListResponse
       */
      Models::DescribeFaultDiagnosisUserListResponse describeFaultDiagnosisUserList(const Models::DescribeFaultDiagnosisUserListRequest &request);

      /**
       * @summary Call DescribeMPULayoutInfoList to retrieve layout parameters for a bypass live streaming task.
       *
       * @description # Usage notes
       * Before calling this operation, call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
       * # QPS limit
       * The per-user QPS limit for this operation is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeMPULayoutInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMPULayoutInfoListResponse
       */
      Models::DescribeMPULayoutInfoListResponse describeMPULayoutInfoListWithOptions(const Models::DescribeMPULayoutInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeMPULayoutInfoList to retrieve layout parameters for a bypass live streaming task.
       *
       * @description # Usage notes
       * Before calling this operation, call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
       * # QPS limit
       * The per-user QPS limit for this operation is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeMPULayoutInfoListRequest
       * @return DescribeMPULayoutInfoListResponse
       */
      Models::DescribeMPULayoutInfoListResponse describeMPULayoutInfoList(const Models::DescribeMPULayoutInfoListRequest &request);

      /**
       * @summary This API is used to obtain the list of publishing users in a communication session based on the subscriber.
       *
       * @description ### How-To  
       * This API is used to obtain the list of publishing users in a communication session based on the subscriber. For example, you can retrieve detailed information about both the subscriber and the publishing users.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 requests per second per user. If this limit is exceeded, API calls will be subject to rate limiting, which may affect your business. Please invoke the API appropriately.
       *
       * @param request DescribePubUserListBySubUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePubUserListBySubUserResponse
       */
      Models::DescribePubUserListBySubUserResponse describePubUserListBySubUserWithOptions(const Models::DescribePubUserListBySubUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to obtain the list of publishing users in a communication session based on the subscriber.
       *
       * @description ### How-To  
       * This API is used to obtain the list of publishing users in a communication session based on the subscriber. For example, you can retrieve detailed information about both the subscriber and the publishing users.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 requests per second per user. If this limit is exceeded, API calls will be subject to rate limiting, which may affect your business. Please invoke the API appropriately.
       *
       * @param request DescribePubUserListBySubUserRequest
       * @return DescribePubUserListBySubUserResponse
       */
      Models::DescribePubUserListBySubUserResponse describePubUserListBySubUser(const Models::DescribePubUserListBySubUserRequest &request);

      /**
       * @summary This API is used to obtain the downlink experience quality metrics of a user in a single communication session.
       *
       * @description ### How-To  
       * This API is used to obtain the downlink experience quality metrics of a user in a single communication session. For example, you can retrieve information such as the metric types that impact communication experience and audio/video trend indicators.  
       * ### QPS Limit  
       * The queries per second (QPS) limit for this API is 10 per user. If this limit is exceeded, API calls will be subject to rate limiting, which may affect your business. Please invoke the API appropriately.
       *
       * @param request DescribeQoeMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQoeMetricDataResponse
       */
      Models::DescribeQoeMetricDataResponse describeQoeMetricDataWithOptions(const Models::DescribeQoeMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to obtain the downlink experience quality metrics of a user in a single communication session.
       *
       * @description ### How-To  
       * This API is used to obtain the downlink experience quality metrics of a user in a single communication session. For example, you can retrieve information such as the metric types that impact communication experience and audio/video trend indicators.  
       * ### QPS Limit  
       * The queries per second (QPS) limit for this API is 10 per user. If this limit is exceeded, API calls will be subject to rate limiting, which may affect your business. Please invoke the API appropriately.
       *
       * @param request DescribeQoeMetricDataRequest
       * @return DescribeQoeMetricDataResponse
       */
      Models::DescribeQoeMetricDataResponse describeQoeMetricData(const Models::DescribeQoeMetricDataRequest &request);

      /**
       * @summary Queries the regional distribution data of quality statistics.
       *
       * @description ### Usage notes
       * This operation queries the regional distribution data of quality statistics. When you call this operation, the following limits apply:
       * - You can query data within any time range in the last 365 days, excluding the current day.
       * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
       *
       * @param request DescribeQualityAreaDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQualityAreaDistributionStatDataResponse
       */
      Models::DescribeQualityAreaDistributionStatDataResponse describeQualityAreaDistributionStatDataWithOptions(const Models::DescribeQualityAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regional distribution data of quality statistics.
       *
       * @description ### Usage notes
       * This operation queries the regional distribution data of quality statistics. When you call this operation, the following limits apply:
       * - You can query data within any time range in the last 365 days, excluding the current day.
       * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
       *
       * @param request DescribeQualityAreaDistributionStatDataRequest
       * @return DescribeQualityAreaDistributionStatDataResponse
       */
      Models::DescribeQualityAreaDistributionStatDataResponse describeQualityAreaDistributionStatData(const Models::DescribeQualityAreaDistributionStatDataRequest &request);

      /**
       * @summary This API is used to obtain the distribution data of quality statistics.
       *
       * @description ### How-To
       * This API is used to obtain the distribution data of quality statistics. The following limits apply when using this API:
       * - You can query data for any period within the last 365 days (excluding the current day).
       * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.
       * ### Queries per second (QPS) limit
       * The QPS limit for this API is 10 queries per second (QPS) per user. If you exceed this limit, your API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API reasonably.
       *
       * @param request DescribeQualityDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQualityDistributionStatDataResponse
       */
      Models::DescribeQualityDistributionStatDataResponse describeQualityDistributionStatDataWithOptions(const Models::DescribeQualityDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to obtain the distribution data of quality statistics.
       *
       * @description ### How-To
       * This API is used to obtain the distribution data of quality statistics. The following limits apply when using this API:
       * - You can query data for any period within the last 365 days (excluding the current day).
       * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.
       * ### Queries per second (QPS) limit
       * The QPS limit for this API is 10 queries per second (QPS) per user. If you exceed this limit, your API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API reasonably.
       *
       * @param request DescribeQualityDistributionStatDataRequest
       * @return DescribeQualityDistributionStatDataResponse
       */
      Models::DescribeQualityDistributionStatDataResponse describeQualityDistributionStatData(const Models::DescribeQualityDistributionStatDataRequest &request);

      /**
       * @summary Retrieves the distribution data of operating systems and SDK versions in quality statistics.
       *
       * @description ### Usage notes
       * This operation retrieves the distribution data of operating systems and SDK versions in quality statistics. The following limits apply when you call this operation:
       * - You can query data within the last 365 days, excluding the current day.
       * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
       *
       * @param request DescribeQualityOsSdkVersionDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQualityOsSdkVersionDistributionStatDataResponse
       */
      Models::DescribeQualityOsSdkVersionDistributionStatDataResponse describeQualityOsSdkVersionDistributionStatDataWithOptions(const Models::DescribeQualityOsSdkVersionDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the distribution data of operating systems and SDK versions in quality statistics.
       *
       * @description ### Usage notes
       * This operation retrieves the distribution data of operating systems and SDK versions in quality statistics. The following limits apply when you call this operation:
       * - You can query data within the last 365 days, excluding the current day.
       * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
       *
       * @param request DescribeQualityOsSdkVersionDistributionStatDataRequest
       * @return DescribeQualityOsSdkVersionDistributionStatDataResponse
       */
      Models::DescribeQualityOsSdkVersionDistributionStatDataResponse describeQualityOsSdkVersionDistributionStatData(const Models::DescribeQualityOsSdkVersionDistributionStatDataRequest &request);

      /**
       * @summary This API is used to obtain overview data of quality statistics.
       *
       * @description ### How-To  
       * This API is used to obtain overview data of quality statistics. The following restrictions apply when using this API:  
       * - You can query data for any time range within the last 365 days (excluding the current day).  
       * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second per user. If you exceed this limit, your API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeQualityOverallDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQualityOverallDataResponse
       */
      Models::DescribeQualityOverallDataResponse describeQualityOverallDataWithOptions(const Models::DescribeQualityOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to obtain overview data of quality statistics.
       *
       * @description ### How-To  
       * This API is used to obtain overview data of quality statistics. The following restrictions apply when using this API:  
       * - You can query data for any time range within the last 365 days (excluding the current day).  
       * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second per user. If you exceed this limit, your API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeQualityOverallDataRequest
       * @return DescribeQualityOverallDataResponse
       */
      Models::DescribeQualityOverallDataResponse describeQualityOverallData(const Models::DescribeQualityOverallDataRequest &request);

      /**
       * @summary Calls DescribeRecordFiles to query the list of files generated by recording.
       *
       * @description # Usage notes
       * This operation is used to query the list of files generated by recording. For example, you can query parameters such as the creation time and recording duration of files generated by recording.
       * # QPS limit
       * The per-user QPS limit of this operation is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this operation reasonably. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeRecordFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordFilesResponse
       */
      Models::DescribeRecordFilesResponse describeRecordFilesWithOptions(const Models::DescribeRecordFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeRecordFiles to query the list of files generated by recording.
       *
       * @description # Usage notes
       * This operation is used to query the list of files generated by recording. For example, you can query parameters such as the creation time and recording duration of files generated by recording.
       * # QPS limit
       * The per-user QPS limit of this operation is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this operation reasonably. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeRecordFilesRequest
       * @return DescribeRecordFilesResponse
       */
      Models::DescribeRecordFilesResponse describeRecordFiles(const Models::DescribeRecordFilesRequest &request);

      /**
       * @summary Queries a list of recording template configurations.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording template.
       * # QPS limit
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeRecordTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordTemplatesResponse
       */
      Models::DescribeRecordTemplatesResponse describeRecordTemplatesWithOptions(const Models::DescribeRecordTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of recording template configurations.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording template.
       * # QPS limit
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeRecordTemplatesRequest
       * @return DescribeRecordTemplatesResponse
       */
      Models::DescribeRecordTemplatesResponse describeRecordTemplates(const Models::DescribeRecordTemplatesRequest &request);

      /**
       * @summary Queries the list of channel communication records.
       *
       * @param request DescribeRtcChannelListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcChannelListResponse
       */
      Models::DescribeRtcChannelListResponse describeRtcChannelListWithOptions(const Models::DescribeRtcChannelListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of channel communication records.
       *
       * @param request DescribeRtcChannelListRequest
       * @return DescribeRtcChannelListResponse
       */
      Models::DescribeRtcChannelListResponse describeRtcChannelList(const Models::DescribeRtcChannelListRequest &request);

      /**
       * @summary Queries the details of communication records in a channel. You can query data within the last 180 days.
       *
       * @param request DescribeRtcChannelMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcChannelMetricResponse
       */
      Models::DescribeRtcChannelMetricResponse describeRtcChannelMetricWithOptions(const Models::DescribeRtcChannelMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of communication records in a channel. You can query data within the last 180 days.
       *
       * @param request DescribeRtcChannelMetricRequest
       * @return DescribeRtcChannelMetricResponse
       */
      Models::DescribeRtcChannelMetricResponse describeRtcChannelMetric(const Models::DescribeRtcChannelMetricRequest &request);

      /**
       * @summary Retrieves the total communication duration for an application within a specified time range. Data is aggregated by audio and video specifications.
       *
       * @description > The maximum query time range is 30 days.
       *
       * @param request DescribeRtcDurationDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcDurationDataResponse
       */
      Models::DescribeRtcDurationDataResponse describeRtcDurationDataWithOptions(const Models::DescribeRtcDurationDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the total communication duration for an application within a specified time range. Data is aggregated by audio and video specifications.
       *
       * @description > The maximum query time range is 30 days.
       *
       * @param request DescribeRtcDurationDataRequest
       * @return DescribeRtcDurationDataResponse
       */
      Models::DescribeRtcDurationDataResponse describeRtcDurationData(const Models::DescribeRtcDurationDataRequest &request);

      /**
       * @summary Queries the peak number of concurrent channels of an application in a specified time range.
       *
       * @description > The maximum time range that can be queried is 30 days.
       *
       * @param request DescribeRtcPeakChannelCntDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcPeakChannelCntDataResponse
       */
      Models::DescribeRtcPeakChannelCntDataResponse describeRtcPeakChannelCntDataWithOptions(const Models::DescribeRtcPeakChannelCntDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the peak number of concurrent channels of an application in a specified time range.
       *
       * @description > The maximum time range that can be queried is 30 days.
       *
       * @param request DescribeRtcPeakChannelCntDataRequest
       * @return DescribeRtcPeakChannelCntDataResponse
       */
      Models::DescribeRtcPeakChannelCntDataResponse describeRtcPeakChannelCntData(const Models::DescribeRtcPeakChannelCntDataRequest &request);

      /**
       * @summary Queries the number of active users of an application within a specified time range, that is, the number of user terminals that engaged in communication.
       *
       * @description > The maximum time span between the start time and the end time of a data query is 30 days.
       *
       * @param request DescribeRtcUserCntDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcUserCntDataResponse
       */
      Models::DescribeRtcUserCntDataResponse describeRtcUserCntDataWithOptions(const Models::DescribeRtcUserCntDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of active users of an application within a specified time range, that is, the number of user terminals that engaged in communication.
       *
       * @description > The maximum time span between the start time and the end time of a data query is 30 days.
       *
       * @param request DescribeRtcUserCntDataRequest
       * @return DescribeRtcUserCntDataResponse
       */
      Models::DescribeRtcUserCntDataResponse describeRtcUserCntData(const Models::DescribeRtcUserCntDataRequest &request);

      /**
       * @summary Queries the bypass streaming status.
       *
       * @description ### QPS limit
       * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request DescribeStreamingOutStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamingOutStatusResponse
       */
      Models::DescribeStreamingOutStatusResponse describeStreamingOutStatusWithOptions(const Models::DescribeStreamingOutStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bypass streaming status.
       *
       * @description ### QPS limit
       * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request DescribeStreamingOutStatusRequest
       * @return DescribeStreamingOutStatusResponse
       */
      Models::DescribeStreamingOutStatusResponse describeStreamingOutStatus(const Models::DescribeStreamingOutStatusRequest &request);

      /**
       * @summary Built-in system layouts
       *
       * @description ### QPS limit
       * The per-user QPS limit for this API is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. Call the API responsibly.
       *
       * @param request DescribeSystemLayoutListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemLayoutListResponse
       */
      Models::DescribeSystemLayoutListResponse describeSystemLayoutListWithOptions(const Models::DescribeSystemLayoutListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Built-in system layouts
       *
       * @description ### QPS limit
       * The per-user QPS limit for this API is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. Call the API responsibly.
       *
       * @param request DescribeSystemLayoutListRequest
       * @return DescribeSystemLayoutListResponse
       */
      Models::DescribeSystemLayoutListResponse describeSystemLayoutList(const Models::DescribeSystemLayoutListRequest &request);

      /**
       * @summary This API is used to retrieve the regional distribution data of usage statistics.
       *
       * @description ### How-To
       * This API is used to retrieve the regional distribution data of usage statistics. The following restrictions apply when using this API:
       * - You can query data for any period within the last 365 days (excluding the current day).
       * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.
       * ### QPS Limit
       * The queries per second (QPS) limit for this API is 10 requests per second per user. If you exceed this limit, your API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeUsageAreaDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsageAreaDistributionStatDataResponse
       */
      Models::DescribeUsageAreaDistributionStatDataResponse describeUsageAreaDistributionStatDataWithOptions(const Models::DescribeUsageAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to retrieve the regional distribution data of usage statistics.
       *
       * @description ### How-To
       * This API is used to retrieve the regional distribution data of usage statistics. The following restrictions apply when using this API:
       * - You can query data for any period within the last 365 days (excluding the current day).
       * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.
       * ### QPS Limit
       * The queries per second (QPS) limit for this API is 10 requests per second per user. If you exceed this limit, your API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeUsageAreaDistributionStatDataRequest
       * @return DescribeUsageAreaDistributionStatDataResponse
       */
      Models::DescribeUsageAreaDistributionStatDataResponse describeUsageAreaDistributionStatData(const Models::DescribeUsageAreaDistributionStatDataRequest &request);

      /**
       * @summary Queries the distribution data of usage statistics.
       *
       * @description ### Usage notes
       * This operation queries the distribution data of usage statistics. When you call this operation, the following limits apply:
       * - You can query data within any time range in the last 365 days, excluding the current day.
       * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
       *
       * @param request DescribeUsageDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsageDistributionStatDataResponse
       */
      Models::DescribeUsageDistributionStatDataResponse describeUsageDistributionStatDataWithOptions(const Models::DescribeUsageDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution data of usage statistics.
       *
       * @description ### Usage notes
       * This operation queries the distribution data of usage statistics. When you call this operation, the following limits apply:
       * - You can query data within any time range in the last 365 days, excluding the current day.
       * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
       *
       * @param request DescribeUsageDistributionStatDataRequest
       * @return DescribeUsageDistributionStatDataResponse
       */
      Models::DescribeUsageDistributionStatDataResponse describeUsageDistributionStatData(const Models::DescribeUsageDistributionStatDataRequest &request);

      /**
       * @summary This API is used to obtain the distribution data of operating systems and SDK versions in usage statistics.
       *
       * @description ### How-To  
       * This API is used to obtain the distribution data of operating systems and SDK versions in usage statistics. When using this API, the following restrictions apply:  
       * - You can query data for any period within the last 365 days (excluding the current day).  
       * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.  
       * ### Rate Limiting  
       * The queries per second (QPS) limit for this API is 10 requests per second per user. If you exceed this limit, your API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeUsageOsSdkVersionDistributionStatDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsageOsSdkVersionDistributionStatDataResponse
       */
      Models::DescribeUsageOsSdkVersionDistributionStatDataResponse describeUsageOsSdkVersionDistributionStatDataWithOptions(const Models::DescribeUsageOsSdkVersionDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to obtain the distribution data of operating systems and SDK versions in usage statistics.
       *
       * @description ### How-To  
       * This API is used to obtain the distribution data of operating systems and SDK versions in usage statistics. When using this API, the following restrictions apply:  
       * - You can query data for any period within the last 365 days (excluding the current day).  
       * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.  
       * ### Rate Limiting  
       * The queries per second (QPS) limit for this API is 10 requests per second per user. If you exceed this limit, your API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
       *
       * @param request DescribeUsageOsSdkVersionDistributionStatDataRequest
       * @return DescribeUsageOsSdkVersionDistributionStatDataResponse
       */
      Models::DescribeUsageOsSdkVersionDistributionStatDataResponse describeUsageOsSdkVersionDistributionStatData(const Models::DescribeUsageOsSdkVersionDistributionStatDataRequest &request);

      /**
       * @summary Queries the overview data of usage statistics.
       *
       * @description ### Usage notes
       * This operation retrieves the overview data of usage statistics. The following limits apply when you call this operation:
       * - You can query data for any time range within the last 365 days, excluding the current day.
       * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
       *
       * @param request DescribeUsageOverallDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsageOverallDataResponse
       */
      Models::DescribeUsageOverallDataResponse describeUsageOverallDataWithOptions(const Models::DescribeUsageOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the overview data of usage statistics.
       *
       * @description ### Usage notes
       * This operation retrieves the overview data of usage statistics. The following limits apply when you call this operation:
       * - You can query data for any time range within the last 365 days, excluding the current day.
       * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
       * ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
       *
       * @param request DescribeUsageOverallDataRequest
       * @return DescribeUsageOverallDataResponse
       */
      Models::DescribeUsageOverallDataResponse describeUsageOverallData(const Models::DescribeUsageOverallDataRequest &request);

      /**
       * @summary Calls DescribeUserInfoInChannel to query the real-time information of a user in a channel.
       *
       * @description # Usage notes
       * This operation is used to query the real-time information of a user in a channel. For example, you can query information such as the user role type and the time of joining the meeting.
       * # QPS limit
       * The per-user QPS limit of this operation is 100 times per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeUserInfoInChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserInfoInChannelResponse
       */
      Models::DescribeUserInfoInChannelResponse describeUserInfoInChannelWithOptions(const Models::DescribeUserInfoInChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeUserInfoInChannel to query the real-time information of a user in a channel.
       *
       * @description # Usage notes
       * This operation is used to query the real-time information of a user in a channel. For example, you can query information such as the user role type and the time of joining the meeting.
       * # QPS limit
       * The per-user QPS limit of this operation is 100 times per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DescribeUserInfoInChannelRequest
       * @return DescribeUserInfoInChannelResponse
       */
      Models::DescribeUserInfoInChannelResponse describeUserInfoInChannel(const Models::DescribeUserInfoInChannelRequest &request);

      /**
       * @summary Disables the automatic bypass single-stream relay rule.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
       * # QPS limit
       * The QPS limit per user is 1,000 requests per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DisableAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAutoLiveStreamRuleResponse
       */
      Models::DisableAutoLiveStreamRuleResponse disableAutoLiveStreamRuleWithOptions(const Models::DisableAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the automatic bypass single-stream relay rule.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
       * # QPS limit
       * The QPS limit per user is 1,000 requests per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request DisableAutoLiveStreamRuleRequest
       * @return DisableAutoLiveStreamRuleResponse
       */
      Models::DisableAutoLiveStreamRuleResponse disableAutoLiveStreamRule(const Models::DisableAutoLiveStreamRuleRequest &request);

      /**
       * @summary Enables the automatic bypass single-stream relay rule.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
       * # QPS limit
       * The QPS limit per user for this operation is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request EnableAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAutoLiveStreamRuleResponse
       */
      Models::EnableAutoLiveStreamRuleResponse enableAutoLiveStreamRuleWithOptions(const Models::EnableAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the automatic bypass single-stream relay rule.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
       * # QPS limit
       * The QPS limit per user for this operation is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request EnableAutoLiveStreamRuleRequest
       * @return EnableAutoLiveStreamRuleResponse
       */
      Models::EnableAutoLiveStreamRuleResponse enableAutoLiveStreamRule(const Models::EnableAutoLiveStreamRuleRequest &request);

      /**
       * @summary GetAgent.
       *
       * @param request GetAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgentWithOptions(const Models::GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetAgent.
       *
       * @param request GetAgentRequest
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgent(const Models::GetAgentRequest &request);

      /**
       * @summary Retrieves the status of a bypass transcoding task.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a bypass transcoding task.
       * # QPS limit
       * The QPS limit for a single user is 4,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request GetMPUTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMPUTaskStatusResponse
       */
      Models::GetMPUTaskStatusResponse getMPUTaskStatusWithOptions(const Models::GetMPUTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the status of a bypass transcoding task.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a bypass transcoding task.
       * # QPS limit
       * The QPS limit for a single user is 4,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request GetMPUTaskStatusRequest
       * @return GetMPUTaskStatusResponse
       */
      Models::GetMPUTaskStatusResponse getMPUTaskStatus(const Models::GetMPUTaskStatusRequest &request);

      /**
       * @summary Modifies the name of a specified application.
       *
       * @description #### Usage notes
       * This operation modifies the name of a specified application.
       * #### QPS limit
       * The queries per second (QPS) limit per user for this operation is 200 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
       *
       * @param request ModifyAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppResponse
       */
      Models::ModifyAppResponse modifyAppWithOptions(const Models::ModifyAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a specified application.
       *
       * @description #### Usage notes
       * This operation modifies the name of a specified application.
       * #### QPS limit
       * The queries per second (QPS) limit per user for this operation is 200 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
       *
       * @param request ModifyAppRequest
       * @return ModifyAppResponse
       */
      Models::ModifyAppResponse modifyApp(const Models::ModifyAppRequest &request);

      /**
       * @summary Modifies the agent feature switch for an application.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit per user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request ModifyAppAgentFunctionStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppAgentFunctionStatusResponse
       */
      Models::ModifyAppAgentFunctionStatusResponse modifyAppAgentFunctionStatusWithOptions(const Models::ModifyAppAgentFunctionStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the agent feature switch for an application.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit per user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request ModifyAppAgentFunctionStatusRequest
       * @return ModifyAppAgentFunctionStatusResponse
       */
      Models::ModifyAppAgentFunctionStatusResponse modifyAppAgentFunctionStatus(const Models::ModifyAppAgentFunctionStatusRequest &request);

      /**
       * @summary Updates an application agent template.
       *
       * @description ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API at a reasonable rate.
       *
       * @param tmpReq ModifyAppAgentTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppAgentTemplateResponse
       */
      Models::ModifyAppAgentTemplateResponse modifyAppAgentTemplateWithOptions(const Models::ModifyAppAgentTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an application agent template.
       *
       * @description ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API at a reasonable rate.
       *
       * @param request ModifyAppAgentTemplateRequest
       * @return ModifyAppAgentTemplateResponse
       */
      Models::ModifyAppAgentTemplateResponse modifyAppAgentTemplate(const Models::ModifyAppAgentTemplateRequest &request);

      /**
       * @summary Updates the callback event switch for an application.
       *
       * @description ### QPS limits
       * The QPS limit per user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
       *
       * @param request ModifyAppCallbackStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppCallbackStatusResponse
       */
      Models::ModifyAppCallbackStatusResponse modifyAppCallbackStatusWithOptions(const Models::ModifyAppCallbackStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the callback event switch for an application.
       *
       * @description ### QPS limits
       * The QPS limit per user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
       *
       * @param request ModifyAppCallbackStatusRequest
       * @return ModifyAppCallbackStatusResponse
       */
      Models::ModifyAppCallbackStatusResponse modifyAppCallbackStatus(const Models::ModifyAppCallbackStatusRequest &request);

      /**
       * @summary Modify a custom application layout.
       *
       * @description ### QPS limits
       * This API supports a maximum of 10 calls per second per user. Exceeding this limit triggers rate limiting, which may impact your business operations. Use the API judiciously.
       *
       * @param tmpReq ModifyAppLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppLayoutResponse
       */
      Models::ModifyAppLayoutResponse modifyAppLayoutWithOptions(const Models::ModifyAppLayoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify a custom application layout.
       *
       * @description ### QPS limits
       * This API supports a maximum of 10 calls per second per user. Exceeding this limit triggers rate limiting, which may impact your business operations. Use the API judiciously.
       *
       * @param request ModifyAppLayoutRequest
       * @return ModifyAppLayoutResponse
       */
      Models::ModifyAppLayoutResponse modifyAppLayout(const Models::ModifyAppLayoutRequest &request);

      /**
       * @summary Modify the bypass toggle of an application
       *
       * @description ### Queries per second (QPS) limit  
       * The queries per second (QPS) limit for this API is 10 per user per second. If the limit is exceeded, API calls will be subject to Rate Limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request ModifyAppLiveStreamStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppLiveStreamStatusResponse
       */
      Models::ModifyAppLiveStreamStatusResponse modifyAppLiveStreamStatusWithOptions(const Models::ModifyAppLiveStreamStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the bypass toggle of an application
       *
       * @description ### Queries per second (QPS) limit  
       * The queries per second (QPS) limit for this API is 10 per user per second. If the limit is exceeded, API calls will be subject to Rate Limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request ModifyAppLiveStreamStatusRequest
       * @return ModifyAppLiveStreamStatusResponse
       */
      Models::ModifyAppLiveStreamStatusResponse modifyAppLiveStreamStatus(const Models::ModifyAppLiveStreamStatusRequest &request);

      /**
       * @summary Modifies the recording switch of an application.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
       *
       * @param request ModifyAppRecordStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppRecordStatusResponse
       */
      Models::ModifyAppRecordStatusResponse modifyAppRecordStatusWithOptions(const Models::ModifyAppRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the recording switch of an application.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
       *
       * @param request ModifyAppRecordStatusRequest
       * @return ModifyAppRecordStatusResponse
       */
      Models::ModifyAppRecordStatusResponse modifyAppRecordStatus(const Models::ModifyAppRecordStatusRequest &request);

      /**
       * @summary Modify an application recording template.
       *
       * @description ### QPS limit
       * This API supports up to 10 calls per second per user. If you exceed this limit, rate limiting is triggered, which might affect your service. Call the API at a reasonable frequency.
       *
       * @param tmpReq ModifyAppRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppRecordTemplateResponse
       */
      Models::ModifyAppRecordTemplateResponse modifyAppRecordTemplateWithOptions(const Models::ModifyAppRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify an application recording template.
       *
       * @description ### QPS limit
       * This API supports up to 10 calls per second per user. If you exceed this limit, rate limiting is triggered, which might affect your service. Call the API at a reasonable frequency.
       *
       * @param request ModifyAppRecordTemplateRequest
       * @return ModifyAppRecordTemplateResponse
       */
      Models::ModifyAppRecordTemplateResponse modifyAppRecordTemplate(const Models::ModifyAppRecordTemplateRequest &request);

      /**
       * @summary Modify the stream ingest template for an RTC 3.0 application.
       *
       * @description ### How-To  
       * This API modifies the stream ingest template for an RTC 3.0 application.  
       * ### QPS Limit  
       * The queries per second (QPS) limit for this API is 10 per user. If you exceed this limit, your API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param tmpReq ModifyAppStreamingOutTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppStreamingOutTemplateResponse
       */
      Models::ModifyAppStreamingOutTemplateResponse modifyAppStreamingOutTemplateWithOptions(const Models::ModifyAppStreamingOutTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the stream ingest template for an RTC 3.0 application.
       *
       * @description ### How-To  
       * This API modifies the stream ingest template for an RTC 3.0 application.  
       * ### QPS Limit  
       * The queries per second (QPS) limit for this API is 10 per user. If you exceed this limit, your API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request ModifyAppStreamingOutTemplateRequest
       * @return ModifyAppStreamingOutTemplateResponse
       */
      Models::ModifyAppStreamingOutTemplateResponse modifyAppStreamingOutTemplate(const Models::ModifyAppStreamingOutTemplateRequest &request);

      /**
       * @summary Modifies the merging switch.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request ModifyAppViewStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppViewStatusResponse
       */
      Models::ModifyAppViewStatusResponse modifyAppViewStatusWithOptions(const Models::ModifyAppViewStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the merging switch.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request ModifyAppViewStatusRequest
       * @return ModifyAppViewStatusResponse
       */
      Models::ModifyAppViewStatusResponse modifyAppViewStatus(const Models::ModifyAppViewStatusRequest &request);

      /**
       * @summary Update an application view template.
       *
       * @description ### QPS limits
       * This API supports up to 10 calls per second per user. Exceeding this limit triggers rate limiting, which may affect your business. Use this API with caution.
       *
       * @param tmpReq ModifyAppViewTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppViewTemplateResponse
       */
      Models::ModifyAppViewTemplateResponse modifyAppViewTemplateWithOptions(const Models::ModifyAppViewTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update an application view template.
       *
       * @description ### QPS limits
       * This API supports up to 10 calls per second per user. Exceeding this limit triggers rate limiting, which may affect your business. Use this API with caution.
       *
       * @param request ModifyAppViewTemplateRequest
       * @return ModifyAppViewTemplateResponse
       */
      Models::ModifyAppViewTemplateResponse modifyAppViewTemplate(const Models::ModifyAppViewTemplateRequest &request);

      /**
       * @summary Updates the callback configuration of an application.
       *
       * @description ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
       *
       * @param tmpReq ModifyCallbackMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCallbackMetaResponse
       */
      Models::ModifyCallbackMetaResponse modifyCallbackMetaWithOptions(const Models::ModifyCallbackMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the callback configuration of an application.
       *
       * @description ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
       *
       * @param request ModifyCallbackMetaRequest
       * @return ModifyCallbackMetaResponse
       */
      Models::ModifyCallbackMetaResponse modifyCallbackMeta(const Models::ModifyCallbackMetaRequest &request);

      /**
       * @summary Updates the hotwords table for meeting minutes.
       *
       * @param tmpReq ModifyCloudNotePhrasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCloudNotePhrasesResponse
       */
      Models::ModifyCloudNotePhrasesResponse modifyCloudNotePhrasesWithOptions(const Models::ModifyCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the hotwords table for meeting minutes.
       *
       * @param request ModifyCloudNotePhrasesRequest
       * @return ModifyCloudNotePhrasesResponse
       */
      Models::ModifyCloudNotePhrasesResponse modifyCloudNotePhrases(const Models::ModifyCloudNotePhrasesRequest &request);

      /**
       * @summary Modifies a bypass live streaming layout.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
       * # QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request ModifyMPULayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMPULayoutResponse
       */
      Models::ModifyMPULayoutResponse modifyMPULayoutWithOptions(const Models::ModifyMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a bypass live streaming layout.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
       * # QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request ModifyMPULayoutRequest
       * @return ModifyMPULayoutResponse
       */
      Models::ModifyMPULayoutResponse modifyMPULayout(const Models::ModifyMPULayoutRequest &request);

      /**
       * @summary Sets the stream properties.
       *
       * @description ### QPS limit
       * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param tmpReq ModifyStreamingPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStreamingPropertyResponse
       */
      Models::ModifyStreamingPropertyResponse modifyStreamingPropertyWithOptions(const Models::ModifyStreamingPropertyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the stream properties.
       *
       * @description ### QPS limit
       * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request ModifyStreamingPropertyRequest
       * @return ModifyStreamingPropertyResponse
       */
      Models::ModifyStreamingPropertyResponse modifyStreamingProperty(const Models::ModifyStreamingPropertyRequest &request);

      /**
       * @summary Configures the mixed stream layout.
       *
       * @description ### QPS limit
       * The QPS limit per user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable rate.
       *
       * @param tmpReq ModifyViewLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyViewLayoutResponse
       */
      Models::ModifyViewLayoutResponse modifyViewLayoutWithOptions(const Models::ModifyViewLayoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the mixed stream layout.
       *
       * @description ### QPS limit
       * The QPS limit per user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable rate.
       *
       * @param request ModifyViewLayoutRequest
       * @return ModifyViewLayoutResponse
       */
      Models::ModifyViewLayoutResponse modifyViewLayout(const Models::ModifyViewLayoutRequest &request);

      /**
       * @summary NotifyAgent
       *
       * @param tmpReq NotifyAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return NotifyAgentResponse
       */
      Models::NotifyAgentResponse notifyAgentWithOptions(const Models::NotifyAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary NotifyAgent
       *
       * @param request NotifyAgentRequest
       * @return NotifyAgentResponse
       */
      Models::NotifyAgentResponse notifyAgent(const Models::NotifyAgentRequest &request);

      /**
       * @summary Call the RemoveTerminals operation to remove specified end users from a channel.
       *
       * @description # Usage notes
       * This API removes specified end users from a channel.
       * # QPS limit
       * The queries per second (QPS) limit for this API is 1,000 calls per minute per user. If you exceed the limit, API calls are subject to rate limiting, which may affect your business. Call this API at a reasonable rate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request RemoveTerminalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTerminalsResponse
       */
      Models::RemoveTerminalsResponse removeTerminalsWithOptions(const Models::RemoveTerminalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the RemoveTerminals operation to remove specified end users from a channel.
       *
       * @description # Usage notes
       * This API removes specified end users from a channel.
       * # QPS limit
       * The queries per second (QPS) limit for this API is 1,000 calls per minute per user. If you exceed the limit, API calls are subject to rate limiting, which may affect your business. Call this API at a reasonable rate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request RemoveTerminalsRequest
       * @return RemoveTerminalsResponse
       */
      Models::RemoveTerminalsResponse removeTerminals(const Models::RemoveTerminalsRequest &request);

      /**
       * @summary RemoveUsers
       *
       * @description ### How-To  
       * This API is used to kick users out of an online channel.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request RemoveUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsersWithOptions(const Models::RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RemoveUsers
       *
       * @description ### How-To  
       * This API is used to kick users out of an online channel.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request RemoveUsersRequest
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsers(const Models::RemoveUsersRequest &request);

      /**
       * @summary Cancels a SIP invite.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API is 10 per user. If you exceed this limit, API calls are subject to rate limiting, which may affect your business. Call this API at a reasonable frequency.
       *
       * @param request RtcCancelSipInviteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RtcCancelSipInviteResponse
       */
      Models::RtcCancelSipInviteResponse rtcCancelSipInviteWithOptions(const Models::RtcCancelSipInviteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a SIP invite.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API is 10 per user. If you exceed this limit, API calls are subject to rate limiting, which may affect your business. Call this API at a reasonable frequency.
       *
       * @param request RtcCancelSipInviteRequest
       * @return RtcCancelSipInviteResponse
       */
      Models::RtcCancelSipInviteResponse rtcCancelSipInvite(const Models::RtcCancelSipInviteRequest &request);

      /**
       * @summary Sends DTMF key signals to a target OneRTC SIP call in a specified channel.
       *
       * @param request RtcSendSipDtmfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RtcSendSipDtmfResponse
       */
      Models::RtcSendSipDtmfResponse rtcSendSipDtmfWithOptions(const Models::RtcSendSipDtmfRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends DTMF key signals to a target OneRTC SIP call in a specified channel.
       *
       * @param request RtcSendSipDtmfRequest
       * @return RtcSendSipDtmfResponse
       */
      Models::RtcSendSipDtmfResponse rtcSendSipDtmf(const Models::RtcSendSipDtmfRequest &request);

      /**
       * @summary Invites a SIP endpoint to join a channel.
       *
       * @description ### Rate limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request RtcSipInviteMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RtcSipInviteMemberResponse
       */
      Models::RtcSipInviteMemberResponse rtcSipInviteMemberWithOptions(const Models::RtcSipInviteMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invites a SIP endpoint to join a channel.
       *
       * @description ### Rate limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request RtcSipInviteMemberRequest
       * @return RtcSipInviteMemberResponse
       */
      Models::RtcSipInviteMemberResponse rtcSipInviteMember(const Models::RtcSipInviteMemberRequest &request);

      /**
       * @summary Mutes or unmutes the microphone for a SIP endpoint.
       *
       * @description ### QPS limits
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request RtcSipMuteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RtcSipMuteResponse
       */
      Models::RtcSipMuteResponse rtcSipMuteWithOptions(const Models::RtcSipMuteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mutes or unmutes the microphone for a SIP endpoint.
       *
       * @description ### QPS limits
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
       *
       * @param request RtcSipMuteRequest
       * @return RtcSipMuteResponse
       */
      Models::RtcSipMuteResponse rtcSipMute(const Models::RtcSipMuteRequest &request);

      /**
       * @summary Starts an AI agent.
       *
       * @param tmpReq StartAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAgentResponse
       */
      Models::StartAgentResponse startAgentWithOptions(const Models::StartAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an AI agent.
       *
       * @param request StartAgentRequest
       * @return StartAgentResponse
       */
      Models::StartAgentResponse startAgent(const Models::StartAgentRequest &request);

      /**
       * @summary Starts an event callback.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for this API is 10 calls per second per user. If you exceed the limit, API calls are subject to rate limiting, which may affect your business. Call the API at a reasonable rate.
       *
       * @param tmpReq StartCategoryCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCategoryCallbackResponse
       */
      Models::StartCategoryCallbackResponse startCategoryCallbackWithOptions(const Models::StartCategoryCallbackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an event callback.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for this API is 10 calls per second per user. If you exceed the limit, API calls are subject to rate limiting, which may affect your business. Call the API at a reasonable rate.
       *
       * @param request StartCategoryCallbackRequest
       * @return StartCategoryCallbackResponse
       */
      Models::StartCategoryCallbackResponse startCategoryCallback(const Models::StartCategoryCallbackRequest &request);

      /**
       * @summary Starts an intelligent meeting minutes task.
       *
       * @description ### Usage notes
       * This operation starts a meeting minutes task for an online channel. If you need meeting minutes and subtitles, enable all features.
       * ### QPS limits
       * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable frequency.
       * > Concurrency limits
       * > - Only one meeting minutes task can run in the same channel at a time.
       * > - You can start and stop meeting minutes tasks multiple times in the same channel, but the TaskId must be different each time.
       *
       * @param tmpReq StartCloudNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCloudNoteResponse
       */
      Models::StartCloudNoteResponse startCloudNoteWithOptions(const Models::StartCloudNoteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an intelligent meeting minutes task.
       *
       * @description ### Usage notes
       * This operation starts a meeting minutes task for an online channel. If you need meeting minutes and subtitles, enable all features.
       * ### QPS limits
       * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable frequency.
       * > Concurrency limits
       * > - Only one meeting minutes task can run in the same channel at a time.
       * > - You can start and stop meeting minutes tasks multiple times in the same channel, but the TaskId must be different each time.
       *
       * @param request StartCloudNoteRequest
       * @return StartCloudNoteResponse
       */
      Models::StartCloudNoteResponse startCloudNote(const Models::StartCloudNoteRequest &request);

      /**
       * @summary Starts a cloud recording task.
       *
       * @description ### Usage notes
       * This operation starts a cloud recording task for an online channel.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param tmpReq StartCloudRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCloudRecordResponse
       */
      Models::StartCloudRecordResponse startCloudRecordWithOptions(const Models::StartCloudRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a cloud recording task.
       *
       * @description ### Usage notes
       * This operation starts a cloud recording task for an online channel.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request StartCloudRecordRequest
       * @return StartCloudRecordResponse
       */
      Models::StartCloudRecordResponse startCloudRecord(const Models::StartCloudRecordRequest &request);

      /**
       * @summary Starts a bypass relaying task.
       *
       * @description # Usage notes
       * This operation is used to start a bypass relaying task. When you use the bypass relaying service, ApsaraVideo Live has the following limits:
       * <props="china">- For the concurrency limit on tasks, see [Concurrency limits](https://help.aliyun.com/document_detail/71050.html#section-eaz-anq-a47). If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex) two weeks in advance.
       * <props="intl">- For the concurrency limit on tasks, see [Concurrency limits](https://www.alibabacloud.com/help/rtc-61399/latest/60e652#section-eaz-anq-a47). If you have special requirements, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex) two weeks in advance.
       * - If the transcoding feature is disabled, each account can concurrently push up to 20 original-quality live streams per live streaming accelerated domain name by default. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
       * - If the transcoding feature is enabled, each account can concurrently push up to 10 transcoded live streams per live streaming accelerated domain name by default. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
       * # QPS limit
       * The QPS limit for a single user calling this operation is 500 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request StartMPUTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartMPUTaskResponse
       */
      Models::StartMPUTaskResponse startMPUTaskWithOptions(const Models::StartMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a bypass relaying task.
       *
       * @description # Usage notes
       * This operation is used to start a bypass relaying task. When you use the bypass relaying service, ApsaraVideo Live has the following limits:
       * <props="china">- For the concurrency limit on tasks, see [Concurrency limits](https://help.aliyun.com/document_detail/71050.html#section-eaz-anq-a47). If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex) two weeks in advance.
       * <props="intl">- For the concurrency limit on tasks, see [Concurrency limits](https://www.alibabacloud.com/help/rtc-61399/latest/60e652#section-eaz-anq-a47). If you have special requirements, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex) two weeks in advance.
       * - If the transcoding feature is disabled, each account can concurrently push up to 20 original-quality live streams per live streaming accelerated domain name by default. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
       * - If the transcoding feature is enabled, each account can concurrently push up to 10 transcoded live streams per live streaming accelerated domain name by default. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
       * # QPS limit
       * The QPS limit for a single user calling this operation is 500 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request StartMPUTaskRequest
       * @return StartMPUTaskResponse
       */
      Models::StartMPUTaskResponse startMPUTask(const Models::StartMPUTaskRequest &request);

      /**
       * @summary Starts a video recording task.
       *
       * @description # Usage notes
       * - Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
       * <props="china">- By default, you can start a maximum of 100 recording tasks at the same time. If the limit is exceeded, new recording tasks become unavailable. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
       * <props="intl">- By default, you can start a maximum of 100 recording tasks at the same time. If the limit is exceeded, new recording tasks become unavailable. If you have special requirements, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * # QPS limit
       * The QPS limit for a single user is 500 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request StartRecordTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRecordTaskResponse
       */
      Models::StartRecordTaskResponse startRecordTaskWithOptions(const Models::StartRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a video recording task.
       *
       * @description # Usage notes
       * - Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
       * <props="china">- By default, you can start a maximum of 100 recording tasks at the same time. If the limit is exceeded, new recording tasks become unavailable. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
       * <props="intl">- By default, you can start a maximum of 100 recording tasks at the same time. If the limit is exceeded, new recording tasks become unavailable. If you have special requirements, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
       * # QPS limit
       * The QPS limit for a single user is 500 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request StartRecordTaskRequest
       * @return StartRecordTaskResponse
       */
      Models::StartRecordTaskResponse startRecordTask(const Models::StartRecordTaskRequest &request);

      /**
       * @summary Starts a bypass streaming task.
       *
       * @description ### Usage notes
       * This operation starts a bypass streaming task for an online channel.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param tmpReq StartStreamingOutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartStreamingOutResponse
       */
      Models::StartStreamingOutResponse startStreamingOutWithOptions(const Models::StartStreamingOutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a bypass streaming task.
       *
       * @description ### Usage notes
       * This operation starts a bypass streaming task for an online channel.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
       *
       * @param request StartStreamingOutRequest
       * @return StartStreamingOutResponse
       */
      Models::StartStreamingOutResponse startStreamingOut(const Models::StartStreamingOutRequest &request);

      /**
       * @summary Starts stream mixing.
       *
       * @description ### QPS limits
       * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API operation at a reasonable frequency.
       *
       * @param tmpReq StartViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartViewResponse
       */
      Models::StartViewResponse startViewWithOptions(const Models::StartViewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts stream mixing.
       *
       * @description ### QPS limits
       * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API operation at a reasonable frequency.
       *
       * @param request StartViewRequest
       * @return StartViewResponse
       */
      Models::StartViewResponse startView(const Models::StartViewRequest &request);

      /**
       * @summary Stops an AI agent.
       *
       * @param request StopAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAgentResponse
       */
      Models::StopAgentResponse stopAgentWithOptions(const Models::StopAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an AI agent.
       *
       * @param request StopAgentRequest
       * @return StopAgentResponse
       */
      Models::StopAgentResponse stopAgent(const Models::StopAgentRequest &request);

      /**
       * @summary Disables an event callback.
       *
       * @description ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
       *
       * @param tmpReq StopCategoryCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCategoryCallbackResponse
       */
      Models::StopCategoryCallbackResponse stopCategoryCallbackWithOptions(const Models::StopCategoryCallbackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an event callback.
       *
       * @description ### QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
       *
       * @param request StopCategoryCallbackRequest
       * @return StopCategoryCallbackResponse
       */
      Models::StopCategoryCallbackResponse stopCategoryCallback(const Models::StopCategoryCallbackRequest &request);

      /**
       * @summary This API is used by the server to actively shut down a channel.
       *
       * @description ### How-To  
       * This API is used by the server to actively shut down an online channel.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your service. Invoke this API appropriately.
       *
       * @param request StopChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopChannelResponse
       */
      Models::StopChannelResponse stopChannelWithOptions(const Models::StopChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used by the server to actively shut down a channel.
       *
       * @description ### How-To  
       * This API is used by the server to actively shut down an online channel.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your service. Invoke this API appropriately.
       *
       * @param request StopChannelRequest
       * @return StopChannelResponse
       */
      Models::StopChannelResponse stopChannel(const Models::StopChannelRequest &request);

      /**
       * @summary Stops an intelligent meeting minutes task.
       *
       * @description ### Usage notes
       * This operation stops a meeting minutes task for an online channel.
       * ### QPS limits
       * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable rate.
       *
       * @param request StopCloudNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCloudNoteResponse
       */
      Models::StopCloudNoteResponse stopCloudNoteWithOptions(const Models::StopCloudNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an intelligent meeting minutes task.
       *
       * @description ### Usage notes
       * This operation stops a meeting minutes task for an online channel.
       * ### QPS limits
       * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable rate.
       *
       * @param request StopCloudNoteRequest
       * @return StopCloudNoteResponse
       */
      Models::StopCloudNoteResponse stopCloudNote(const Models::StopCloudNoteRequest &request);

      /**
       * @summary StopCloudRecord
       *
       * @description ### How-To  
       * This API is used to stop an online channel cloud recording job.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second (QPS) per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request StopCloudRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCloudRecordResponse
       */
      Models::StopCloudRecordResponse stopCloudRecordWithOptions(const Models::StopCloudRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StopCloudRecord
       *
       * @description ### How-To  
       * This API is used to stop an online channel cloud recording job.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second (QPS) per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
       *
       * @param request StopCloudRecordRequest
       * @return StopCloudRecordResponse
       */
      Models::StopCloudRecordResponse stopCloudRecord(const Models::StopCloudRecordRequest &request);

      /**
       * @summary Calls the StopMPUTask operation to stop a stream relay task.
       *
       * @description # Usage notes
       * - Before you call this operation, you must have called [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a stream relay task.
       * - If you need to stop a stream relay task and the stream relay task is abnormal (the StopMPUTask operation is not called to stop the task), the stream relay task is automatically stopped 2 minutes after the last user leaves the channel. After the task is stopped, if you need to resume stream relay, you need to call the [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) operation again.
       * # QPS limit
       * The QPS limit per user for this operation is 500 times per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the operation properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request StopMPUTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMPUTaskResponse
       */
      Models::StopMPUTaskResponse stopMPUTaskWithOptions(const Models::StopMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the StopMPUTask operation to stop a stream relay task.
       *
       * @description # Usage notes
       * - Before you call this operation, you must have called [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a stream relay task.
       * - If you need to stop a stream relay task and the stream relay task is abnormal (the StopMPUTask operation is not called to stop the task), the stream relay task is automatically stopped 2 minutes after the last user leaves the channel. After the task is stopped, if you need to resume stream relay, you need to call the [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) operation again.
       * # QPS limit
       * The QPS limit per user for this operation is 500 times per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the operation properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request StopMPUTaskRequest
       * @return StopMPUTaskResponse
       */
      Models::StopMPUTaskResponse stopMPUTask(const Models::StopMPUTaskRequest &request);

      /**
       * @summary Calls the StopRecordTask operation to stop a video recording task.
       *
       * @description # Usage notes
       * Before you call this operation, you must call the [StartRecordTask](https://help.aliyun.com/document_detail/193528.html) operation to start a video recording task.
       * # QPS limit
       * You can call this operation up to 4,000 times per minute per user. If the number of calls per minute exceeds the limit, throttling is triggered, which may affect your business. Call this operation as required. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request StopRecordTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRecordTaskResponse
       */
      Models::StopRecordTaskResponse stopRecordTaskWithOptions(const Models::StopRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the StopRecordTask operation to stop a video recording task.
       *
       * @description # Usage notes
       * Before you call this operation, you must call the [StartRecordTask](https://help.aliyun.com/document_detail/193528.html) operation to start a video recording task.
       * # QPS limit
       * You can call this operation up to 4,000 times per minute per user. If the number of calls per minute exceeds the limit, throttling is triggered, which may affect your business. Call this operation as required. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request StopRecordTaskRequest
       * @return StopRecordTaskResponse
       */
      Models::StopRecordTaskResponse stopRecordTask(const Models::StopRecordTaskRequest &request);

      /**
       * @summary StopStreamingOut
       *
       * @description ### How-To  
       * This API is used to stop a bypass stream ingest job for an online channel.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second (QPS) per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Invoke this API appropriately.
       *
       * @param request StopStreamingOutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopStreamingOutResponse
       */
      Models::StopStreamingOutResponse stopStreamingOutWithOptions(const Models::StopStreamingOutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StopStreamingOut
       *
       * @description ### How-To  
       * This API is used to stop a bypass stream ingest job for an online channel.  
       * ### queries per second (QPS) Limit  
       * The QPS limit for this API is 10 queries per second (QPS) per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Invoke this API appropriately.
       *
       * @param request StopStreamingOutRequest
       * @return StopStreamingOutResponse
       */
      Models::StopStreamingOutResponse stopStreamingOut(const Models::StopStreamingOutRequest &request);

      /**
       * @summary Stop stream mixing.
       *
       * @description ### QPS limit
       * The QPS limit for this API is 10 requests per second per user. Exceeding this limit triggers rate limiting, which can affect your application. Therefore, call the API judiciously.
       *
       * @param request StopViewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopViewResponse
       */
      Models::StopViewResponse stopViewWithOptions(const Models::StopViewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stop stream mixing.
       *
       * @description ### QPS limit
       * The QPS limit for this API is 10 requests per second per user. Exceeding this limit triggers rate limiting, which can affect your application. Therefore, call the API judiciously.
       *
       * @param request StopViewRequest
       * @return StopViewResponse
       */
      Models::StopViewResponse stopView(const Models::StopViewRequest &request);

      /**
       * @summary Update an AI Agent
       *
       * @param tmpReq UpdateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgentWithOptions(const Models::UpdateAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update an AI Agent
       *
       * @param request UpdateAgentRequest
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgent(const Models::UpdateAgentRequest &request);

      /**
       * @summary Modifies an automatic bypass single-stream relay rule.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
       * # QPS limits
       * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request UpdateAutoLiveStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAutoLiveStreamRuleResponse
       */
      Models::UpdateAutoLiveStreamRuleResponse updateAutoLiveStreamRuleWithOptions(const Models::UpdateAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an automatic bypass single-stream relay rule.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
       * # QPS limits
       * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request UpdateAutoLiveStreamRuleRequest
       * @return UpdateAutoLiveStreamRuleResponse
       */
      Models::UpdateAutoLiveStreamRuleResponse updateAutoLiveStreamRule(const Models::UpdateAutoLiveStreamRuleRequest &request);

      /**
       * @summary Updates a cloud recording task.
       *
       * @description ### Usage
       * Updates a cloud recording task for an online channel.
       * ### QPS limit
       * This API supports up to 10 requests per second per user. Exceeding this limit triggers rate limiting, which may affect your service. Call the API responsibly.
       *
       * @param tmpReq UpdateCloudRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudRecordResponse
       */
      Models::UpdateCloudRecordResponse updateCloudRecordWithOptions(const Models::UpdateCloudRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a cloud recording task.
       *
       * @description ### Usage
       * Updates a cloud recording task for an online channel.
       * ### QPS limit
       * This API supports up to 10 requests per second per user. Exceeding this limit triggers rate limiting, which may affect your service. Call the API responsibly.
       *
       * @param request UpdateCloudRecordRequest
       * @return UpdateCloudRecordResponse
       */
      Models::UpdateCloudRecordResponse updateCloudRecord(const Models::UpdateCloudRecordRequest &request);

      /**
       * @summary Call UpdateMPUTask to update a bypass relay task.
       *
       * @description # Usage notes
       * - Before calling this API, you must have called [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a bypass relay task.
       * - This API must be called while the task is running normally. Calls are invalid when the task has not started, has ended, or is in an abnormal state. You can call [GetMPUTaskStatus](https://help.aliyun.com/document_detail/93181.html) to obtain the task running status.
       * # QPS limit
       * The per-user QPS limit of this API is 4,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Please call reasonably. For more information, see [QPS Limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request UpdateMPUTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMPUTaskResponse
       */
      Models::UpdateMPUTaskResponse updateMPUTaskWithOptions(const Models::UpdateMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call UpdateMPUTask to update a bypass relay task.
       *
       * @description # Usage notes
       * - Before calling this API, you must have called [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a bypass relay task.
       * - This API must be called while the task is running normally. Calls are invalid when the task has not started, has ended, or is in an abnormal state. You can call [GetMPUTaskStatus](https://help.aliyun.com/document_detail/93181.html) to obtain the task running status.
       * # QPS limit
       * The per-user QPS limit of this API is 4,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Please call reasonably. For more information, see [QPS Limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request UpdateMPUTaskRequest
       * @return UpdateMPUTaskResponse
       */
      Models::UpdateMPUTaskResponse updateMPUTask(const Models::UpdateMPUTaskRequest &request);

      /**
       * @summary Updates a video recording task.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [StartRecordTask](https://help.aliyun.com/document_detail/193528.html) to start a video recording task.
       * # QPS limits
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request UpdateRecordTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecordTaskResponse
       */
      Models::UpdateRecordTaskResponse updateRecordTaskWithOptions(const Models::UpdateRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a video recording task.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [StartRecordTask](https://help.aliyun.com/document_detail/193528.html) to start a video recording task.
       * # QPS limits
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request UpdateRecordTaskRequest
       * @return UpdateRecordTaskResponse
       */
      Models::UpdateRecordTaskResponse updateRecordTask(const Models::UpdateRecordTaskRequest &request);

      /**
       * @summary Updates a recording configuration template.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
       * # QPS limits
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request UpdateRecordTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecordTemplateResponse
       */
      Models::UpdateRecordTemplateResponse updateRecordTemplateWithOptions(const Models::UpdateRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a recording configuration template.
       *
       * @description # Usage notes
       * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
       * # QPS limits
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
       *
       * @param request UpdateRecordTemplateRequest
       * @return UpdateRecordTemplateResponse
       */
      Models::UpdateRecordTemplateResponse updateRecordTemplate(const Models::UpdateRecordTemplateRequest &request);

      /**
       * @summary Updates a bypass live streaming task.
       *
       * @description ### Usage notes
       * This operation updates a bypass live streaming task for an online channel.
       * ### QPS limit
       * The QPS limit for a single user is 10 requests per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency.
       *
       * @param tmpReq UpdateStreamingOutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateStreamingOutResponse
       */
      Models::UpdateStreamingOutResponse updateStreamingOutWithOptions(const Models::UpdateStreamingOutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a bypass live streaming task.
       *
       * @description ### Usage notes
       * This operation updates a bypass live streaming task for an online channel.
       * ### QPS limit
       * The QPS limit for a single user is 10 requests per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency.
       *
       * @param request UpdateStreamingOutRequest
       * @return UpdateStreamingOutResponse
       */
      Models::UpdateStreamingOutResponse updateStreamingOut(const Models::UpdateStreamingOutRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
