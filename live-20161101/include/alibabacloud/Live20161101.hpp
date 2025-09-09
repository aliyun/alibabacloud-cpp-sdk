// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_LIVE20161101_HPP_
#define ALIBABACLOUD_LIVE20161101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Live20161101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Live20161101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a component to a production studio.
       *
       * @description Before you call this operation to add a component to a production studio, you must first create the production studio and learn about the production studio layouts. You can call this operation to add three types of components: image, text, and subtitle. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddCasterComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterComponentResponse
       */
      Models::AddCasterComponentResponse addCasterComponentWithOptions(const Models::AddCasterComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a component to a production studio.
       *
       * @description Before you call this operation to add a component to a production studio, you must first create the production studio and learn about the production studio layouts. You can call this operation to add three types of components: image, text, and subtitle. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddCasterComponentRequest
       * @return AddCasterComponentResponse
       */
      Models::AddCasterComponentResponse addCasterComponent(const Models::AddCasterComponentRequest &request);

      /**
       * @summary Adds an episode to a production studio.
       *
       * @description To call this operation, you must obtain the production studio ID in advance. The production studio ID is generated after the production studio is created.
       * *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
       * *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
       * >  You can find the ID of the production studio in the Instance ID/Name column.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddCasterEpisodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterEpisodeResponse
       */
      Models::AddCasterEpisodeResponse addCasterEpisodeWithOptions(const Models::AddCasterEpisodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an episode to a production studio.
       *
       * @description To call this operation, you must obtain the production studio ID in advance. The production studio ID is generated after the production studio is created.
       * *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
       * *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
       * >  You can find the ID of the production studio in the Instance ID/Name column.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddCasterEpisodeRequest
       * @return AddCasterEpisodeResponse
       */
      Models::AddCasterEpisodeResponse addCasterEpisode(const Models::AddCasterEpisodeRequest &request);

      /**
       * @summary Adds an episode list to a production studio.
       *
       * @description You need to create a production studio and obtain the production studio configurations before you call this operation to create an episode list in the production studio. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddCasterEpisodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterEpisodeGroupResponse
       */
      Models::AddCasterEpisodeGroupResponse addCasterEpisodeGroupWithOptions(const Models::AddCasterEpisodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an episode list to a production studio.
       *
       * @description You need to create a production studio and obtain the production studio configurations before you call this operation to create an episode list in the production studio. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddCasterEpisodeGroupRequest
       * @return AddCasterEpisodeGroupResponse
       */
      Models::AddCasterEpisodeGroupResponse addCasterEpisodeGroup(const Models::AddCasterEpisodeGroupRequest &request);

      /**
       * @summary Adds information about an episode list in a production studio.
       *
       * @description You need to create a production studio and add an episode list to the production studio before you call this operation to add information about the episode list in the production studio. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddCasterEpisodeGroupContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterEpisodeGroupContentResponse
       */
      Models::AddCasterEpisodeGroupContentResponse addCasterEpisodeGroupContentWithOptions(const Models::AddCasterEpisodeGroupContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds information about an episode list in a production studio.
       *
       * @description You need to create a production studio and add an episode list to the production studio before you call this operation to add information about the episode list in the production studio. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddCasterEpisodeGroupContentRequest
       * @return AddCasterEpisodeGroupContentResponse
       */
      Models::AddCasterEpisodeGroupContentResponse addCasterEpisodeGroupContent(const Models::AddCasterEpisodeGroupContentRequest &request);

      /**
       * @summary Adds a layout for a production studio.
       *
       * @description First, create a director desk and add video resources to the director desk, then call this interface to add the director desk layout. To create a director desk using the API, refer to [Create Director Desk](https://help.aliyun.com/document_detail/69338.html).
       * ## QPS Limitation 
       * The per-user QPS limit for this interface is 10 times/second. Exceeding this limit will result in API calls being throttled, which may impact your business operations. Please use the API reasonably. For more information, see [QPS Limitation](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddCasterLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterLayoutResponse
       */
      Models::AddCasterLayoutResponse addCasterLayoutWithOptions(const Models::AddCasterLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a layout for a production studio.
       *
       * @description First, create a director desk and add video resources to the director desk, then call this interface to add the director desk layout. To create a director desk using the API, refer to [Create Director Desk](https://help.aliyun.com/document_detail/69338.html).
       * ## QPS Limitation 
       * The per-user QPS limit for this interface is 10 times/second. Exceeding this limit will result in API calls being throttled, which may impact your business operations. Please use the API reasonably. For more information, see [QPS Limitation](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddCasterLayoutRequest
       * @return AddCasterLayoutResponse
       */
      Models::AddCasterLayoutResponse addCasterLayout(const Models::AddCasterLayoutRequest &request);

      /**
       * @summary Adds the episode list for carousel playback in a production studio.
       *
       * @description Create a production studio, add input sources to the production studio, and then call this operation to add the episode list for carousel playback in the production studio. This operation supports videos and components as episodes. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddCasterProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterProgramResponse
       */
      Models::AddCasterProgramResponse addCasterProgramWithOptions(const Models::AddCasterProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds the episode list for carousel playback in a production studio.
       *
       * @description Create a production studio, add input sources to the production studio, and then call this operation to add the episode list for carousel playback in the production studio. This operation supports videos and components as episodes. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddCasterProgramRequest
       * @return AddCasterProgramResponse
       */
      Models::AddCasterProgramResponse addCasterProgram(const Models::AddCasterProgramRequest &request);

      /**
       * @summary Adds an input source to a production studio. The number of input sources is limited by the number of input channels of the production studio.
       *
       * @description ##
       * Create a production studio, and then call this operation to add a video source to the production studio. The number of video sources is limited by the number of input channels of the production studio. For information about how to create a production studio by calling an API operation, see [CreateCaster](https://help.aliyun.com/document_detail/69338.html).
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddCasterVideoResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterVideoResourceResponse
       */
      Models::AddCasterVideoResourceResponse addCasterVideoResourceWithOptions(const Models::AddCasterVideoResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an input source to a production studio. The number of input sources is limited by the number of input channels of the production studio.
       *
       * @description ##
       * Create a production studio, and then call this operation to add a video source to the production studio. The number of video sources is limited by the number of input channels of the production studio. For information about how to create a production studio by calling an API operation, see [CreateCaster](https://help.aliyun.com/document_detail/69338.html).
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddCasterVideoResourceRequest
       * @return AddCasterVideoResourceResponse
       */
      Models::AddCasterVideoResourceResponse addCasterVideoResource(const Models::AddCasterVideoResourceRequest &request);

      /**
       * @summary Adds a custom transcoding configuration for a streaming domain.
       *
       * @description This operation supports the following types of custom transcoding templates:
       * *   h264: H.264
       * *   h264-nbhd: H.264 Narrowband HD™
       * *   h265: H.265
       * *   h265-nbhd: H.265 Narrowband HD™
       * *   audio: audio-only
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddCustomLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomLiveStreamTranscodeResponse
       */
      Models::AddCustomLiveStreamTranscodeResponse addCustomLiveStreamTranscodeWithOptions(const Models::AddCustomLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a custom transcoding configuration for a streaming domain.
       *
       * @description This operation supports the following types of custom transcoding templates:
       * *   h264: H.264
       * *   h264-nbhd: H.264 Narrowband HD™
       * *   h265: H.265
       * *   h265-nbhd: H.265 Narrowband HD™
       * *   audio: audio-only
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddCustomLiveStreamTranscodeRequest
       * @return AddCustomLiveStreamTranscodeResponse
       */
      Models::AddCustomLiveStreamTranscodeResponse addCustomLiveStreamTranscode(const Models::AddCustomLiveStreamTranscodeRequest &request);

      /**
       * @summary Adds a subtitle rule.
       *
       * @description *   After you call the [AddLiveAISubtitle](https://help.aliyun.com/document_detail/2848222.html) operation to add a subtitle template, you can call this operation to create a subtitle rule for the template.
       * *   You must add "_Subtitle template name" after the stream name in the streaming URL to play the subtitle stream.
       *     *   RTMP: rtmp://example.aliyundoc.com/app/stream_{Subtitle template name}?auth_key={Access token}
       *     *   FLV: http://example.aliyundoc.com/app/stream_{Subtitle template name}.flv?auth_key={Access token}
       *     *   M3U8: http://example.aliyundoc.com/app/stream_{Subtitle template name}.m3u8?auth_key={Access token}
       * >  The live subtitles feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveAIProduceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveAIProduceRulesResponse
       */
      Models::AddLiveAIProduceRulesResponse addLiveAIProduceRulesWithOptions(const Models::AddLiveAIProduceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a subtitle rule.
       *
       * @description *   After you call the [AddLiveAISubtitle](https://help.aliyun.com/document_detail/2848222.html) operation to add a subtitle template, you can call this operation to create a subtitle rule for the template.
       * *   You must add "_Subtitle template name" after the stream name in the streaming URL to play the subtitle stream.
       *     *   RTMP: rtmp://example.aliyundoc.com/app/stream_{Subtitle template name}?auth_key={Access token}
       *     *   FLV: http://example.aliyundoc.com/app/stream_{Subtitle template name}.flv?auth_key={Access token}
       *     *   M3U8: http://example.aliyundoc.com/app/stream_{Subtitle template name}.m3u8?auth_key={Access token}
       * >  The live subtitles feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveAIProduceRulesRequest
       * @return AddLiveAIProduceRulesResponse
       */
      Models::AddLiveAIProduceRulesResponse addLiveAIProduceRules(const Models::AddLiveAIProduceRulesRequest &request);

      /**
       * @summary Adds a subtitle template.
       *
       * @description ## Instructions
       * - This interface supports adding live caption template configurations, with templates configurable to describe caption content, layout, and more. 
       * - After adding caption templates, you also need to call the [AddLiveAIProduceRules](https://help.aliyun.com/document_detail/2799676.html) interface to add caption rules. Restarting the stream will then enable captions in the broadcast. 
       * - Real-time captions are currently supported in Beijing, Shanghai, Singapore, Indonesia, and Saudi regions.
       * >Notice: The real-time caption feature is currently in beta testing. Each user can add up to 300 caption templates. 
       * ## QPS Limit 
       * The QPS limit for this interface per user is 60 requests/second. Exceeding this limit will result in API throttling, which may impact your services. Please use judiciously. For more information, refer to [QPS Limitations](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq AddLiveAISubtitleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveAISubtitleResponse
       */
      Models::AddLiveAISubtitleResponse addLiveAISubtitleWithOptions(const Models::AddLiveAISubtitleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a subtitle template.
       *
       * @description ## Instructions
       * - This interface supports adding live caption template configurations, with templates configurable to describe caption content, layout, and more. 
       * - After adding caption templates, you also need to call the [AddLiveAIProduceRules](https://help.aliyun.com/document_detail/2799676.html) interface to add caption rules. Restarting the stream will then enable captions in the broadcast. 
       * - Real-time captions are currently supported in Beijing, Shanghai, Singapore, Indonesia, and Saudi regions.
       * >Notice: The real-time caption feature is currently in beta testing. Each user can add up to 300 caption templates. 
       * ## QPS Limit 
       * The QPS limit for this interface per user is 60 requests/second. Exceeding this limit will result in API throttling, which may impact your services. Please use judiciously. For more information, refer to [QPS Limitations](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddLiveAISubtitleRequest
       * @return AddLiveAISubtitleResponse
       */
      Models::AddLiveAISubtitleResponse addLiveAISubtitle(const Models::AddLiveAISubtitleRequest &request);

      /**
       * @summary Configure APP recording, with output saved to OSS.
       *
       * @description The live stream recording feature allows you to record a live stream and stores the recordings in a specified location. You can view the recordings whenever you want to. Recordings that are stored in OSS support multiple formats, such as Transport Stream (TS), MP4, Flash Video (FLV), and Common Media Application Format (CMAF). You can use different recording policies, including automatic recording, on-demand recording, and manual recording. By calling this operation, you can configure the recording template. For more information about live stream recording, see [Live stream recording](https://help.aliyun.com/document_detail/199357.html).
       * A configuration is identified by the DomainName, AppName, and StreamName parameters all together. If you try to call this operation to add a configuration that has the same DomainName, AppName, and StreamName parameters as an existing configuration, an error indicating that the configuration already exists is returned.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveAppRecordConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveAppRecordConfigResponse
       */
      Models::AddLiveAppRecordConfigResponse addLiveAppRecordConfigWithOptions(const Models::AddLiveAppRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configure APP recording, with output saved to OSS.
       *
       * @description The live stream recording feature allows you to record a live stream and stores the recordings in a specified location. You can view the recordings whenever you want to. Recordings that are stored in OSS support multiple formats, such as Transport Stream (TS), MP4, Flash Video (FLV), and Common Media Application Format (CMAF). You can use different recording policies, including automatic recording, on-demand recording, and manual recording. By calling this operation, you can configure the recording template. For more information about live stream recording, see [Live stream recording](https://help.aliyun.com/document_detail/199357.html).
       * A configuration is identified by the DomainName, AppName, and StreamName parameters all together. If you try to call this operation to add a configuration that has the same DomainName, AppName, and StreamName parameters as an existing configuration, an error indicating that the configuration already exists is returned.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveAppRecordConfigRequest
       * @return AddLiveAppRecordConfigResponse
       */
      Models::AddLiveAppRecordConfigResponse addLiveAppRecordConfig(const Models::AddLiveAppRecordConfigRequest &request);

      /**
       * @summary Configures the snapshot feature for a streaming domain. The captured snapshots are stored in Object Storage Service (OSS). The configuration takes effect after you restart stream ingest.
       *
       * @description *   Before you call this operation, make sure that you fully understand the billing method and pricing of live stream snapshots in ApsaraVideo Live. For more information, see [Billing of live stream snapshots](https://help.aliyun.com/document_detail/195286.html).
       * *   Make sure that Object Storage Service (OSS) is activated and a specific bucket is created. This way, ApsaraVideo Live can store live stream snapshots in the bucket. For more information, see [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
       * *   If you store snapshots in OSS, storage fees are generated. For more information, see [Storage fees](https://help.aliyun.com/document_detail/173534.html).
       * *   The OSS bucket must reside in the same region as the live center of the streaming domain. Cross-region snapshot capture is not supported.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveAppSnapshotConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveAppSnapshotConfigResponse
       */
      Models::AddLiveAppSnapshotConfigResponse addLiveAppSnapshotConfigWithOptions(const Models::AddLiveAppSnapshotConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the snapshot feature for a streaming domain. The captured snapshots are stored in Object Storage Service (OSS). The configuration takes effect after you restart stream ingest.
       *
       * @description *   Before you call this operation, make sure that you fully understand the billing method and pricing of live stream snapshots in ApsaraVideo Live. For more information, see [Billing of live stream snapshots](https://help.aliyun.com/document_detail/195286.html).
       * *   Make sure that Object Storage Service (OSS) is activated and a specific bucket is created. This way, ApsaraVideo Live can store live stream snapshots in the bucket. For more information, see [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
       * *   If you store snapshots in OSS, storage fees are generated. For more information, see [Storage fees](https://help.aliyun.com/document_detail/173534.html).
       * *   The OSS bucket must reside in the same region as the live center of the streaming domain. Cross-region snapshot capture is not supported.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveAppSnapshotConfigRequest
       * @return AddLiveAppSnapshotConfigResponse
       */
      Models::AddLiveAppSnapshotConfigResponse addLiveAppSnapshotConfig(const Models::AddLiveAppSnapshotConfigRequest &request);

      /**
       * @summary Adds an audio moderation configuration.
       *
       * @description *   The content moderation feature detects undesirable sensitive content in the audio from live streams and returns callbacks to notify you of the violations. Then, you can manually review the content and take actions accordingly.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveAudioAuditConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveAudioAuditConfigResponse
       */
      Models::AddLiveAudioAuditConfigResponse addLiveAudioAuditConfigWithOptions(const Models::AddLiveAudioAuditConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an audio moderation configuration.
       *
       * @description *   The content moderation feature detects undesirable sensitive content in the audio from live streams and returns callbacks to notify you of the violations. Then, you can manually review the content and take actions accordingly.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveAudioAuditConfigRequest
       * @return AddLiveAudioAuditConfigResponse
       */
      Models::AddLiveAudioAuditConfigResponse addLiveAudioAuditConfig(const Models::AddLiveAudioAuditConfigRequest &request);

      /**
       * @summary Configures callbacks for audio moderation results.
       *
       * @description *   The content moderation feature returns the audio moderation results based on the configured callback template.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveAudioAuditNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveAudioAuditNotifyConfigResponse
       */
      Models::AddLiveAudioAuditNotifyConfigResponse addLiveAudioAuditNotifyConfigWithOptions(const Models::AddLiveAudioAuditNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures callbacks for audio moderation results.
       *
       * @description *   The content moderation feature returns the audio moderation results based on the configured callback template.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveAudioAuditNotifyConfigRequest
       * @return AddLiveAudioAuditNotifyConfigResponse
       */
      Models::AddLiveAudioAuditNotifyConfigResponse addLiveAudioAuditNotifyConfig(const Models::AddLiveAudioAuditNotifyConfigRequest &request);

      /**
       * @summary Adds a configuration of live center stream relay.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveCenterTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveCenterTransferResponse
       */
      Models::AddLiveCenterTransferResponse addLiveCenterTransferWithOptions(const Models::AddLiveCenterTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a configuration of live center stream relay.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveCenterTransferRequest
       * @return AddLiveCenterTransferResponse
       */
      Models::AddLiveCenterTransferResponse addLiveCenterTransfer(const Models::AddLiveCenterTransferRequest &request);

      /**
       * @summary Configures callbacks for video moderation results. As a result, a callback URL that is used to receive the callback notifications is added.
       *
       * @description *   The automated review feature sends notifications about violations to the callback URL in real time. Then, you can manually review the content and take actions accordingly.
       * *   Only some live centers support the automated review feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request AddLiveDetectNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveDetectNotifyConfigResponse
       */
      Models::AddLiveDetectNotifyConfigResponse addLiveDetectNotifyConfigWithOptions(const Models::AddLiveDetectNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures callbacks for video moderation results. As a result, a callback URL that is used to receive the callback notifications is added.
       *
       * @description *   The automated review feature sends notifications about violations to the callback URL in real time. Then, you can manually review the content and take actions accordingly.
       * *   Only some live centers support the automated review feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request AddLiveDetectNotifyConfigRequest
       * @return AddLiveDetectNotifyConfigResponse
       */
      Models::AddLiveDetectNotifyConfigResponse addLiveDetectNotifyConfig(const Models::AddLiveDetectNotifyConfigRequest &request);

      /**
       * @summary Adds a domain name to ApsaraVideo Live. This operation allows you to add only one domain name at a time.
       *
       * @description *   You must activate ApsaraVideo Live before you add a domain name. For more information, see [Activate ApsaraVideo Live](https://help.aliyun.com/document_detail/195292.html).
       * *   ApsaraVideo Live verifies the ownership of a new domain name that you add. After the verification is passed, the domain name is added to ApsaraVideo Live. ApsaraVideo Live allows you to use a Domain Name System (DNS) record or a verification file to verify the ownership of a domain name. For more information, see [Verify the ownership of a domain name](https://help.aliyun.com/document_detail/184466.html).
       * *   To use ApsaraVideo Live to ingest and play streams, you must add an ingest domain and a streaming domain. You can add only one domain name at a time.
       * *   After you add a domain name, you must configure a CNAME record for the domain name. For more information, see [Add a CNAME record](https://help.aliyun.com/document_detail/84929.html).
       * *   After you add an ingest domain and a streaming domain, you must associate the streaming domain with the ingest domain. For more information, see [Associate a streaming domain with an ingest domain](https://help.aliyun.com/document_detail/199338.html).
       * >  From February 19, 2019, domain names that are added by calling the AddLiveDomain operation do not support live center ingest. Domain names that are added by using Alibaba Cloud CDN also do not support live center ingest. When you call the AddLiveDomain operation, you can set the LiveDomainType parameter to liveEdge to add an ingest domain that uses edge ingest or set the LiveDomainType parameter to liveVideo to add a streaming domain. You can associate a streaming domain with an ingest domain by calling the AddLiveDomainMapping operation. Domain names added before February 19, 2019, for which live center ingest was configured, are not affected.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveDomainResponse
       */
      Models::AddLiveDomainResponse addLiveDomainWithOptions(const Models::AddLiveDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain name to ApsaraVideo Live. This operation allows you to add only one domain name at a time.
       *
       * @description *   You must activate ApsaraVideo Live before you add a domain name. For more information, see [Activate ApsaraVideo Live](https://help.aliyun.com/document_detail/195292.html).
       * *   ApsaraVideo Live verifies the ownership of a new domain name that you add. After the verification is passed, the domain name is added to ApsaraVideo Live. ApsaraVideo Live allows you to use a Domain Name System (DNS) record or a verification file to verify the ownership of a domain name. For more information, see [Verify the ownership of a domain name](https://help.aliyun.com/document_detail/184466.html).
       * *   To use ApsaraVideo Live to ingest and play streams, you must add an ingest domain and a streaming domain. You can add only one domain name at a time.
       * *   After you add a domain name, you must configure a CNAME record for the domain name. For more information, see [Add a CNAME record](https://help.aliyun.com/document_detail/84929.html).
       * *   After you add an ingest domain and a streaming domain, you must associate the streaming domain with the ingest domain. For more information, see [Associate a streaming domain with an ingest domain](https://help.aliyun.com/document_detail/199338.html).
       * >  From February 19, 2019, domain names that are added by calling the AddLiveDomain operation do not support live center ingest. Domain names that are added by using Alibaba Cloud CDN also do not support live center ingest. When you call the AddLiveDomain operation, you can set the LiveDomainType parameter to liveEdge to add an ingest domain that uses edge ingest or set the LiveDomainType parameter to liveVideo to add a streaming domain. You can associate a streaming domain with an ingest domain by calling the AddLiveDomainMapping operation. Domain names added before February 19, 2019, for which live center ingest was configured, are not affected.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveDomainRequest
       * @return AddLiveDomainResponse
       */
      Models::AddLiveDomainResponse addLiveDomain(const Models::AddLiveDomainRequest &request);

      /**
       * @summary Creates the mapping between a streaming domain and an ingest domain.
       *
       * @description Call the [AddLiveDomain](https://help.aliyun.com/document_detail/88327.html) operation to add a streaming domain and an ingest domain, and then call this operation to create the mapping between the two domain names.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddLiveDomainMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveDomainMappingResponse
       */
      Models::AddLiveDomainMappingResponse addLiveDomainMappingWithOptions(const Models::AddLiveDomainMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates the mapping between a streaming domain and an ingest domain.
       *
       * @description Call the [AddLiveDomain](https://help.aliyun.com/document_detail/88327.html) operation to add a streaming domain and an ingest domain, and then call this operation to create the mapping between the two domain names.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddLiveDomainMappingRequest
       * @return AddLiveDomainMappingResponse
       */
      Models::AddLiveDomainMappingResponse addLiveDomainMapping(const Models::AddLiveDomainMappingRequest &request);

      /**
       * @summary Maps a sub-streaming domain to a main streaming domain.
       *
       * @description You can call the [AddLiveDomain](https://help.aliyun.com/document_detail/88327.html) operation to add a main streaming domain and a sub-streaming domain and then call this operation to map the sub-streaming domain to the main streaming domain.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveDomainPlayMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveDomainPlayMappingResponse
       */
      Models::AddLiveDomainPlayMappingResponse addLiveDomainPlayMappingWithOptions(const Models::AddLiveDomainPlayMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Maps a sub-streaming domain to a main streaming domain.
       *
       * @description You can call the [AddLiveDomain](https://help.aliyun.com/document_detail/88327.html) operation to add a main streaming domain and a sub-streaming domain and then call this operation to map the sub-streaming domain to the main streaming domain.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveDomainPlayMappingRequest
       * @return AddLiveDomainPlayMappingResponse
       */
      Models::AddLiveDomainPlayMappingResponse addLiveDomainPlayMapping(const Models::AddLiveDomainPlayMappingRequest &request);

      /**
       * @summary Mutes one or more users.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq AddLiveMessageGroupBandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveMessageGroupBandResponse
       */
      Models::AddLiveMessageGroupBandResponse addLiveMessageGroupBandWithOptions(const Models::AddLiveMessageGroupBandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mutes one or more users.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveMessageGroupBandRequest
       * @return AddLiveMessageGroupBandResponse
       */
      Models::AddLiveMessageGroupBandResponse addLiveMessageGroupBand(const Models::AddLiveMessageGroupBandRequest &request);

      /**
       * @summary Adds a live stream encapsulation configuration.
       *
       * @description *   The first time you configure encapsulation for a domain name, domain acceleration is automatically configured and takes effect in 3 to 5 minutes.
       * *   If the streaming domain resides in a region outside China, including Singapore, Germany (Frankfurt), Japan (Tokyo), and Indonesia (Jakarta), you may encounter high latency issues. We recommend that you test and verify whether the settings meet expectations.
       * *   You can call this operation to add a live stream encapsulation configuration. The configuration takes effect only after you re-ingest the stream.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 300 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLivePackageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLivePackageConfigResponse
       */
      Models::AddLivePackageConfigResponse addLivePackageConfigWithOptions(const Models::AddLivePackageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a live stream encapsulation configuration.
       *
       * @description *   The first time you configure encapsulation for a domain name, domain acceleration is automatically configured and takes effect in 3 to 5 minutes.
       * *   If the streaming domain resides in a region outside China, including Singapore, Germany (Frankfurt), Japan (Tokyo), and Indonesia (Jakarta), you may encounter high latency issues. We recommend that you test and verify whether the settings meet expectations.
       * *   You can call this operation to add a live stream encapsulation configuration. The configuration takes effect only after you re-ingest the stream.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 300 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLivePackageConfigRequest
       * @return AddLivePackageConfigResponse
       */
      Models::AddLivePackageConfigResponse addLivePackageConfig(const Models::AddLivePackageConfigRequest &request);

      /**
       * @summary Creates a stream pulling configuration for a live stream, which includes parameters such as the origin URL, start time, and end time.
       *
       * @description *   Before you call this operation, make sure that you fully understand the billing method and pricing of stream pulling in ApsaraVideo Live. For more information, see [Billing of standard streaming](https://help.aliyun.com/document_detail/195284.html).
       * *   Stream pulling refers to the process of pulling live streams from third-party streaming URLs to a live center of ApsaraVideo Live for CDN acceleration.
       * *   You can call this operation only for regular stream pulling. That is, you can specify the start time and end time to pull live streams.
       * *   Regular stream pulling and triggered stream pulling are supported in the ApsaraVideo Live console. For more information, see [Configure stream pulling](https://help.aliyun.com/document_detail/199452.html).
       * *   You can specify custom values for the AppName and StreamName parameters. Streaming URLs that are generated vary based on different values of the AppName and StreamName parameters. You can use the [URL generator](https://help.aliyun.com/document_detail/197400.html) to generate a streaming URL.
       * *   A configuration is identified by the DomainName, AppName, and StreamName parameters all together. If you try to call this operation to add a configuration that has the same DomainName, AppName, and StreamName parameters as an existing configuration, an error indicating that the configuration already exists is returned.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLivePullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLivePullStreamInfoConfigResponse
       */
      Models::AddLivePullStreamInfoConfigResponse addLivePullStreamInfoConfigWithOptions(const Models::AddLivePullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a stream pulling configuration for a live stream, which includes parameters such as the origin URL, start time, and end time.
       *
       * @description *   Before you call this operation, make sure that you fully understand the billing method and pricing of stream pulling in ApsaraVideo Live. For more information, see [Billing of standard streaming](https://help.aliyun.com/document_detail/195284.html).
       * *   Stream pulling refers to the process of pulling live streams from third-party streaming URLs to a live center of ApsaraVideo Live for CDN acceleration.
       * *   You can call this operation only for regular stream pulling. That is, you can specify the start time and end time to pull live streams.
       * *   Regular stream pulling and triggered stream pulling are supported in the ApsaraVideo Live console. For more information, see [Configure stream pulling](https://help.aliyun.com/document_detail/199452.html).
       * *   You can specify custom values for the AppName and StreamName parameters. Streaming URLs that are generated vary based on different values of the AppName and StreamName parameters. You can use the [URL generator](https://help.aliyun.com/document_detail/197400.html) to generate a streaming URL.
       * *   A configuration is identified by the DomainName, AppName, and StreamName parameters all together. If you try to call this operation to add a configuration that has the same DomainName, AppName, and StreamName parameters as an existing configuration, an error indicating that the configuration already exists is returned.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLivePullStreamInfoConfigRequest
       * @return AddLivePullStreamInfoConfigResponse
       */
      Models::AddLivePullStreamInfoConfigResponse addLivePullStreamInfoConfig(const Models::AddLivePullStreamInfoConfigRequest &request);

      /**
       * @summary Configures recording callbacks for a domain name.
       *
       * @description Before you call this operation to configure recording callbacks for a domain name, you can query whether the domain name already has recording callbacks configured. For more information, see [DescribeLiveRecordNotifyConfig](https://help.aliyun.com/document_detail/2847893.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveRecordNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveRecordNotifyConfigResponse
       */
      Models::AddLiveRecordNotifyConfigResponse addLiveRecordNotifyConfigWithOptions(const Models::AddLiveRecordNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures recording callbacks for a domain name.
       *
       * @description Before you call this operation to configure recording callbacks for a domain name, you can query whether the domain name already has recording callbacks configured. For more information, see [DescribeLiveRecordNotifyConfig](https://help.aliyun.com/document_detail/2847893.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveRecordNotifyConfigRequest
       * @return AddLiveRecordNotifyConfigResponse
       */
      Models::AddLiveRecordNotifyConfigResponse addLiveRecordNotifyConfig(const Models::AddLiveRecordNotifyConfigRequest &request);

      /**
       * @summary Adds a Live-to-VOD configuration to store recordings in the media library of ApsaraVideo VOD.
       *
       * @description You can call this operation to configure the Live-to-VOD feature to store recordings in the media library of ApsaraVideo VOD.
       * >  You cannot configure the Live-to-VOD feature by using a Finance Cloud account.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveRecordVodConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveRecordVodConfigResponse
       */
      Models::AddLiveRecordVodConfigResponse addLiveRecordVodConfigWithOptions(const Models::AddLiveRecordVodConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a Live-to-VOD configuration to store recordings in the media library of ApsaraVideo VOD.
       *
       * @description You can call this operation to configure the Live-to-VOD feature to store recordings in the media library of ApsaraVideo VOD.
       * >  You cannot configure the Live-to-VOD feature by using a Finance Cloud account.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveRecordVodConfigRequest
       * @return AddLiveRecordVodConfigResponse
       */
      Models::AddLiveRecordVodConfigResponse addLiveRecordVodConfig(const Models::AddLiveRecordVodConfigRequest &request);

      /**
       * @summary Adds a video moderation configuration for live streams in an application under a domain name.
       *
       * @description - The live streaming audit function identifies and reviews违规sensitive content at the domain and App level, and promptly notifies users of such violations via callbacks. Users can then review the content and take appropriate actions.
       * - Currently, only some live streaming centers support intelligent auditing. For a list of live streaming centers that support this feature, please refer to [Service Regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS Limitation 
       * The QPS limit for this API per user is 30 requests/second. Exceeding this limit will result in API throttling, which may impact your services. Please use the API judiciously. For more information, see [QPS Limitations](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddLiveSnapshotDetectPornConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveSnapshotDetectPornConfigResponse
       */
      Models::AddLiveSnapshotDetectPornConfigResponse addLiveSnapshotDetectPornConfigWithOptions(const Models::AddLiveSnapshotDetectPornConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a video moderation configuration for live streams in an application under a domain name.
       *
       * @description - The live streaming audit function identifies and reviews违规sensitive content at the domain and App level, and promptly notifies users of such violations via callbacks. Users can then review the content and take appropriate actions.
       * - Currently, only some live streaming centers support intelligent auditing. For a list of live streaming centers that support this feature, please refer to [Service Regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS Limitation 
       * The QPS limit for this API per user is 30 requests/second. Exceeding this limit will result in API throttling, which may impact your services. Please use the API judiciously. For more information, see [QPS Limitations](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddLiveSnapshotDetectPornConfigRequest
       * @return AddLiveSnapshotDetectPornConfigResponse
       */
      Models::AddLiveSnapshotDetectPornConfigResponse addLiveSnapshotDetectPornConfig(const Models::AddLiveSnapshotDetectPornConfigRequest &request);

      /**
       * @summary Configures snapshot callbacks.
       *
       * @description ### QPS Limit 
       * The QPS limit for this API per user is 30 times/second. Exceeding this limit will result in API calls being throttled, which may impact your business operations. Please use the API reasonably. For more information, please refer to [QPS Limitation](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddLiveSnapshotNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveSnapshotNotifyConfigResponse
       */
      Models::AddLiveSnapshotNotifyConfigResponse addLiveSnapshotNotifyConfigWithOptions(const Models::AddLiveSnapshotNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures snapshot callbacks.
       *
       * @description ### QPS Limit 
       * The QPS limit for this API per user is 30 times/second. Exceeding this limit will result in API calls being throttled, which may impact your business operations. Please use the API reasonably. For more information, please refer to [QPS Limitation](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddLiveSnapshotNotifyConfigRequest
       * @return AddLiveSnapshotNotifyConfigResponse
       */
      Models::AddLiveSnapshotNotifyConfigResponse addLiveSnapshotNotifyConfig(const Models::AddLiveSnapshotNotifyConfigRequest &request);

      /**
       * @summary Invoke AddLiveStreamMerge to add primary and backup stream merging configuration.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveStreamMergeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveStreamMergeResponse
       */
      Models::AddLiveStreamMergeResponse addLiveStreamMergeWithOptions(const Models::AddLiveStreamMergeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke AddLiveStreamMerge to add primary and backup stream merging configuration.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveStreamMergeRequest
       * @return AddLiveStreamMergeResponse
       */
      Models::AddLiveStreamMergeResponse addLiveStreamMerge(const Models::AddLiveStreamMergeRequest &request);

      /**
       * @summary Adds transcoding configurations for a streaming domain.
       *
       * @description You must obtain the customer master key (CMK) in Key Management Service (KMS) before you call this operation to add transcoding configurations. Only standard transcoding templates and Narrowband HD™ transcoding templates are supported for this operation.
       * ## QPS limits
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request AddLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveStreamTranscodeResponse
       */
      Models::AddLiveStreamTranscodeResponse addLiveStreamTranscodeWithOptions(const Models::AddLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds transcoding configurations for a streaming domain.
       *
       * @description You must obtain the customer master key (CMK) in Key Management Service (KMS) before you call this operation to add transcoding configurations. Only standard transcoding templates and Narrowband HD™ transcoding templates are supported for this operation.
       * ## QPS limits
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request AddLiveStreamTranscodeRequest
       * @return AddLiveStreamTranscodeResponse
       */
      Models::AddLiveStreamTranscodeResponse addLiveStreamTranscode(const Models::AddLiveStreamTranscodeRequest &request);

      /**
       * @summary Creates a watermark template.
       *
       * @description *   You can call this operation to create a watermark template and configure information such as the watermark content and layout in the template.
       * *   After you create a watermark template, you must also call the [AddLiveStreamWatermarkRule](https://help.aliyun.com/document_detail/2848100.html) operation to add a watermark rule. A live stream in progress can contain the watermark only after the stream is re-ingested.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveStreamWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveStreamWatermarkResponse
       */
      Models::AddLiveStreamWatermarkResponse addLiveStreamWatermarkWithOptions(const Models::AddLiveStreamWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a watermark template.
       *
       * @description *   You can call this operation to create a watermark template and configure information such as the watermark content and layout in the template.
       * *   After you create a watermark template, you must also call the [AddLiveStreamWatermarkRule](https://help.aliyun.com/document_detail/2848100.html) operation to add a watermark rule. A live stream in progress can contain the watermark only after the stream is re-ingested.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddLiveStreamWatermarkRequest
       * @return AddLiveStreamWatermarkResponse
       */
      Models::AddLiveStreamWatermarkResponse addLiveStreamWatermark(const Models::AddLiveStreamWatermarkRequest &request);

      /**
       * @summary Adds a watermark rule.
       *
       * @description After calling the [AddLiveStreamWatermark](https://help.aliyun.com/document_detail/469416.html) API to add a watermark template, you can use this interface to add watermark rules. 
       * ## QPS Limit
       *  The QPS limit for this interface per user is 60 times/second. Exceeding the limit will result in API calls being throttled, which may impact your business. Please use it reasonably. For more information, see [QPS Limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddLiveStreamWatermarkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveStreamWatermarkRuleResponse
       */
      Models::AddLiveStreamWatermarkRuleResponse addLiveStreamWatermarkRuleWithOptions(const Models::AddLiveStreamWatermarkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a watermark rule.
       *
       * @description After calling the [AddLiveStreamWatermark](https://help.aliyun.com/document_detail/469416.html) API to add a watermark template, you can use this interface to add watermark rules. 
       * ## QPS Limit
       *  The QPS limit for this interface per user is 60 times/second. Exceeding the limit will result in API calls being throttled, which may impact your business. Please use it reasonably. For more information, see [QPS Limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddLiveStreamWatermarkRuleRequest
       * @return AddLiveStreamWatermarkRuleResponse
       */
      Models::AddLiveStreamWatermarkRuleResponse addLiveStreamWatermarkRule(const Models::AddLiveStreamWatermarkRuleRequest &request);

      /**
       * @summary Adds episodes to an episode list.
       *
       * @description Create a production studio, add a layout and components to the production studio, and then call this operation to add episodes. If no episode list exists in the production studio, this operation creates an episode list for the production studio. For more information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddPlaylistItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPlaylistItemsResponse
       */
      Models::AddPlaylistItemsResponse addPlaylistItemsWithOptions(const Models::AddPlaylistItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds episodes to an episode list.
       *
       * @description Create a production studio, add a layout and components to the production studio, and then call this operation to add episodes. If no episode list exists in the production studio, this operation creates an episode list for the production studio. For more information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddPlaylistItemsRequest
       * @return AddPlaylistItemsResponse
       */
      Models::AddPlaylistItemsResponse addPlaylistItems(const Models::AddPlaylistItemsRequest &request);

      /**
       * @summary Creates a Real-Time Streaming (RTS) transcoding configuration for a streaming domain.
       *
       * @description You can call this operation to add an RTS transcoding configuration. This operation supports four template types: h264, h264-nbhd, h264-origin, and audio.
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddRtsLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRtsLiveStreamTranscodeResponse
       */
      Models::AddRtsLiveStreamTranscodeResponse addRtsLiveStreamTranscodeWithOptions(const Models::AddRtsLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Real-Time Streaming (RTS) transcoding configuration for a streaming domain.
       *
       * @description You can call this operation to add an RTS transcoding configuration. This operation supports four template types: h264, h264-nbhd, h264-origin, and audio.
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddRtsLiveStreamTranscodeRequest
       * @return AddRtsLiveStreamTranscodeResponse
       */
      Models::AddRtsLiveStreamTranscodeResponse addRtsLiveStreamTranscode(const Models::AddRtsLiveStreamTranscodeRequest &request);

      /**
       * @summary Adds an episode to an episode list.
       *
       * @description You must create a production studio in the new playlist mode and add media resources to the production studio before you can call this operation. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * You can add up to 1,000 episodes to an episode list.
       * > 
       * *   When you select media resources from ApsaraVideo VOD, we recommend that you select resources that are stored in hosted OSS buckets. Resources stored in non-hosted OSS buckets have a validity period. Pay attention to the validity if you select resources that are stored in non-hosted OSS buckets.
       * *   When you add media resources to a production studio, we recommend that you select resources from ApsaraVideo Live and ApsaraVideo VOD. If you add a third-party stream by specifying a streaming URL, there is a possibility that the stream fails to be played. You must pay attention to the quality and validity of the third-party stream.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddShowIntoShowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddShowIntoShowListResponse
       */
      Models::AddShowIntoShowListResponse addShowIntoShowListWithOptions(const Models::AddShowIntoShowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an episode to an episode list.
       *
       * @description You must create a production studio in the new playlist mode and add media resources to the production studio before you can call this operation. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * You can add up to 1,000 episodes to an episode list.
       * > 
       * *   When you select media resources from ApsaraVideo VOD, we recommend that you select resources that are stored in hosted OSS buckets. Resources stored in non-hosted OSS buckets have a validity period. Pay attention to the validity if you select resources that are stored in non-hosted OSS buckets.
       * *   When you add media resources to a production studio, we recommend that you select resources from ApsaraVideo Live and ApsaraVideo VOD. If you add a third-party stream by specifying a streaming URL, there is a possibility that the stream fails to be played. You must pay attention to the quality and validity of the third-party stream.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddShowIntoShowListRequest
       * @return AddShowIntoShowListResponse
       */
      Models::AddShowIntoShowListResponse addShowIntoShowList(const Models::AddShowIntoShowListRequest &request);

      /**
       * @summary Configures a layout for a virtual studio.
       *
       * @description You can call this operation to configure a common layout or a studio layout for a virtual studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddStudioLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddStudioLayoutResponse
       */
      Models::AddStudioLayoutResponse addStudioLayoutWithOptions(const Models::AddStudioLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a layout for a virtual studio.
       *
       * @description You can call this operation to configure a common layout or a studio layout for a virtual studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddStudioLayoutRequest
       * @return AddStudioLayoutResponse
       */
      Models::AddStudioLayoutResponse addStudioLayout(const Models::AddStudioLayoutRequest &request);

      /**
       * @summary Inserts supplemental enhancement information (SEI) to transcoded streams.
       *
       * @description Obtain the streaming domain, and then call this operation to insert SEI to the transcoded streams. Make sure that the stream name is the name of the source stream. This way, the SEI is inserted to all the transcoded streams.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddTrancodeSEIRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTrancodeSEIResponse
       */
      Models::AddTrancodeSEIResponse addTrancodeSEIWithOptions(const Models::AddTrancodeSEIRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Inserts supplemental enhancement information (SEI) to transcoded streams.
       *
       * @description Obtain the streaming domain, and then call this operation to insert SEI to the transcoded streams. Make sure that the stream name is the name of the source stream. This way, the SEI is inserted to all the transcoded streams.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request AddTrancodeSEIRequest
       * @return AddTrancodeSEIResponse
       */
      Models::AddTrancodeSEIResponse addTrancodeSEI(const Models::AddTrancodeSEIRequest &request);

      /**
       * @summary Mutes a group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq BanLiveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BanLiveMessageGroupResponse
       */
      Models::BanLiveMessageGroupResponse banLiveMessageGroupWithOptions(const Models::BanLiveMessageGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mutes a group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request BanLiveMessageGroupRequest
       * @return BanLiveMessageGroupResponse
       */
      Models::BanLiveMessageGroupResponse banLiveMessageGroup(const Models::BanLiveMessageGroupRequest &request);

      /**
       * @summary Deletes the configurations of multiple domain names at a time.
       *
       * @description Obtain the domain names for which you want to delete the configurations, and then call this operation to delete the configurations of these domain domains at a time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request BatchDeleteLiveDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteLiveDomainConfigsResponse
       */
      Models::BatchDeleteLiveDomainConfigsResponse batchDeleteLiveDomainConfigsWithOptions(const Models::BatchDeleteLiveDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configurations of multiple domain names at a time.
       *
       * @description Obtain the domain names for which you want to delete the configurations, and then call this operation to delete the configurations of these domain domains at a time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request BatchDeleteLiveDomainConfigsRequest
       * @return BatchDeleteLiveDomainConfigsResponse
       */
      Models::BatchDeleteLiveDomainConfigsResponse batchDeleteLiveDomainConfigs(const Models::BatchDeleteLiveDomainConfigsRequest &request);

      /**
       * @summary 根据一个或多个用户uid查询用户是否在线
       *
       * @description ## Usage notes
       * You can query whether up to 20 users are online at a time.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request BatchGetOnlineUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetOnlineUsersResponse
       */
      Models::BatchGetOnlineUsersResponse batchGetOnlineUsersWithOptions(const Models::BatchGetOnlineUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据一个或多个用户uid查询用户是否在线
       *
       * @description ## Usage notes
       * You can query whether up to 20 users are online at a time.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request BatchGetOnlineUsersRequest
       * @return BatchGetOnlineUsersResponse
       */
      Models::BatchGetOnlineUsersResponse batchGetOnlineUsers(const Models::BatchGetOnlineUsersRequest &request);

      /**
       * @summary Configures multiple domain names at a time.
       *
       * @description Obtain the domain names that you want to configure, and then call this operation to configure the domain names in batches.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request BatchSetLiveDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetLiveDomainConfigsResponse
       */
      Models::BatchSetLiveDomainConfigsResponse batchSetLiveDomainConfigsWithOptions(const Models::BatchSetLiveDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures multiple domain names at a time.
       *
       * @description Obtain the domain names that you want to configure, and then call this operation to configure the domain names in batches.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request BatchSetLiveDomainConfigsRequest
       * @return BatchSetLiveDomainConfigsResponse
       */
      Models::BatchSetLiveDomainConfigsResponse batchSetLiveDomainConfigs(const Models::BatchSetLiveDomainConfigsRequest &request);

      /**
       * @summary Unmutes a message group.
       *
       * @description ## QPS限制
       * 本接口的单用户QPS限制为100次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。更多信息，请参见[QPS限制](https://help.aliyun.com/document_detail/343507.html)。
       *
       * @param request CancelMuteAllGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelMuteAllGroupUserResponse
       */
      Models::CancelMuteAllGroupUserResponse cancelMuteAllGroupUserWithOptions(const Models::CancelMuteAllGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unmutes a message group.
       *
       * @description ## QPS限制
       * 本接口的单用户QPS限制为100次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。更多信息，请参见[QPS限制](https://help.aliyun.com/document_detail/343507.html)。
       *
       * @param request CancelMuteAllGroupUserRequest
       * @return CancelMuteAllGroupUserResponse
       */
      Models::CancelMuteAllGroupUserResponse cancelMuteAllGroupUser(const Models::CancelMuteAllGroupUserRequest &request);

      /**
       * @summary Unmutes members in a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq CancelMuteGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelMuteGroupUserResponse
       */
      Models::CancelMuteGroupUserResponse cancelMuteGroupUserWithOptions(const Models::CancelMuteGroupUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unmutes members in a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CancelMuteGroupUserRequest
       * @return CancelMuteGroupUserResponse
       */
      Models::CancelMuteGroupUserResponse cancelMuteGroupUser(const Models::CancelMuteGroupUserRequest &request);

      /**
       * @summary Changes the resource group to which a domain name belongs. In this case, you move the domain name from the original resource group to another resource group.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ChangeLiveDomainResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeLiveDomainResourceGroupResponse
       */
      Models::ChangeLiveDomainResourceGroupResponse changeLiveDomainResourceGroupWithOptions(const Models::ChangeLiveDomainResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a domain name belongs. In this case, you move the domain name from the original resource group to another resource group.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ChangeLiveDomainResourceGroupRequest
       * @return ChangeLiveDomainResourceGroupResponse
       */
      Models::ChangeLiveDomainResourceGroupResponse changeLiveDomainResourceGroup(const Models::ChangeLiveDomainResourceGroupRequest &request);

      /**
       * @summary Queries whether a user is in an interactive messaging group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq CheckLiveMessageUsersInGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckLiveMessageUsersInGroupResponse
       */
      Models::CheckLiveMessageUsersInGroupResponse checkLiveMessageUsersInGroupWithOptions(const Models::CheckLiveMessageUsersInGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a user is in an interactive messaging group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CheckLiveMessageUsersInGroupRequest
       * @return CheckLiveMessageUsersInGroupResponse
       */
      Models::CheckLiveMessageUsersInGroupResponse checkLiveMessageUsersInGroup(const Models::CheckLiveMessageUsersInGroupRequest &request);

      /**
       * @summary Queries whether one or more specified users are online.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq CheckLiveMessageUsersOnlineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckLiveMessageUsersOnlineResponse
       */
      Models::CheckLiveMessageUsersOnlineResponse checkLiveMessageUsersOnlineWithOptions(const Models::CheckLiveMessageUsersOnlineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether one or more specified users are online.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CheckLiveMessageUsersOnlineRequest
       * @return CheckLiveMessageUsersOnlineResponse
       */
      Models::CheckLiveMessageUsersOnlineResponse checkLiveMessageUsersOnline(const Models::CheckLiveMessageUsersOnlineRequest &request);

      /**
       * @summary Disables time shifting for a domain name, or an application or a live stream under the domain name.
       *
       * @description Obtain the streaming domain, and then call this operation to disable time shifting for the streaming domain or an application or a live stream under the streaming domain.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CloseLiveShiftRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseLiveShiftResponse
       */
      Models::CloseLiveShiftResponse closeLiveShiftWithOptions(const Models::CloseLiveShiftRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables time shifting for a domain name, or an application or a live stream under the domain name.
       *
       * @description Obtain the streaming domain, and then call this operation to disable time shifting for the streaming domain or an application or a live stream under the streaming domain.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CloseLiveShiftRequest
       * @return CloseLiveShiftResponse
       */
      Models::CloseLiveShiftResponse closeLiveShift(const Models::CloseLiveShiftRequest &request);

      /**
       * @summary Duplicates a production studio.
       *
       * @description You can call this operation to duplicate a production studio. This way, a new, identical production studio is created.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CopyCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyCasterResponse
       */
      Models::CopyCasterResponse copyCasterWithOptions(const Models::CopyCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Duplicates a production studio.
       *
       * @description You can call this operation to duplicate a production studio. This way, a new, identical production studio is created.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CopyCasterRequest
       * @return CopyCasterResponse
       */
      Models::CopyCasterResponse copyCaster(const Models::CopyCasterRequest &request);

      /**
       * @summary Applies the configuration of a PVW scene to a PGM scene.
       *
       * @description *   Streaming fees and transcoding fees are calculated based on the corresponding output resolutions and durations. For more information, see [Billing of production studios](https://help.aliyun.com/document_detail/64531.html).
       * *   You can call this operation to apply the configuration of a source scene to a destination scene. This operation takes effect only if the source scene is a PVW scene and the destination scene is a PGM scene. A PVW scene is a preview scene, and a PGM scene is a program scene.
       * *   The PVW scene and PGM scene must be in the same production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CopyCasterSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyCasterSceneConfigResponse
       */
      Models::CopyCasterSceneConfigResponse copyCasterSceneConfigWithOptions(const Models::CopyCasterSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies the configuration of a PVW scene to a PGM scene.
       *
       * @description *   Streaming fees and transcoding fees are calculated based on the corresponding output resolutions and durations. For more information, see [Billing of production studios](https://help.aliyun.com/document_detail/64531.html).
       * *   You can call this operation to apply the configuration of a source scene to a destination scene. This operation takes effect only if the source scene is a PVW scene and the destination scene is a PGM scene. A PVW scene is a preview scene, and a PGM scene is a program scene.
       * *   The PVW scene and PGM scene must be in the same production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CopyCasterSceneConfigRequest
       * @return CopyCasterSceneConfigResponse
       */
      Models::CopyCasterSceneConfigResponse copyCasterSceneConfig(const Models::CopyCasterSceneConfigRequest &request);

      /**
       * @summary Creates a production studio.
       *
       * @description You must enable the production studio feature before you can call this operation to create a production studio. For more information, see [Enable the production studio feature](https://help.aliyun.com/document_detail/60361.html).
       * You can call this operation to create production studios in general mode or playlist mode. Production studios in playlist mode can be used for carousel playback.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCasterResponse
       */
      Models::CreateCasterResponse createCasterWithOptions(const Models::CreateCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a production studio.
       *
       * @description You must enable the production studio feature before you can call this operation to create a production studio. For more information, see [Enable the production studio feature](https://help.aliyun.com/document_detail/60361.html).
       * You can call this operation to create production studios in general mode or playlist mode. Production studios in playlist mode can be used for carousel playback.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateCasterRequest
       * @return CreateCasterResponse
       */
      Models::CreateCasterResponse createCaster(const Models::CreateCasterRequest &request);

      /**
       * @summary Creates a custom stream mixing template.
       *
       * @description After you call this operation to create a custom template, record the template name. When you call the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation to create a stream mixing task, you can set the MixStreamTemplate parameter to the name of the custom template. This way, you can use the custom template for stream mixing.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomTemplateResponse
       */
      Models::CreateCustomTemplateResponse createCustomTemplateWithOptions(const Models::CreateCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom stream mixing template.
       *
       * @description After you call this operation to create a custom template, record the template name. When you call the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation to create a stream mixing task, you can set the MixStreamTemplate parameter to the name of the custom template. This way, you can use the custom template for stream mixing.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateCustomTemplateRequest
       * @return CreateCustomTemplateResponse
       */
      Models::CreateCustomTemplateResponse createCustomTemplate(const Models::CreateCustomTemplateRequest &request);

      /**
       * @summary Creates an edge transcoding task.
       *
       * @description *   You can call this operation to create an edge transcoding task.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeTranscodeJobResponse
       */
      Models::CreateEdgeTranscodeJobResponse createEdgeTranscodeJobWithOptions(const Models::CreateEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an edge transcoding task.
       *
       * @description *   You can call this operation to create an edge transcoding task.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateEdgeTranscodeJobRequest
       * @return CreateEdgeTranscodeJobResponse
       */
      Models::CreateEdgeTranscodeJobResponse createEdgeTranscodeJob(const Models::CreateEdgeTranscodeJobRequest &request);

      /**
       * @summary Creates a callback to subscribe to channel or user events.
       *
       * @description You can call this operation to create a callback to subscribe to channel or user events. When you create a callback, you can configure parameters such as the callback URL and event type.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateEventSubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventSubResponse
       */
      Models::CreateEventSubResponse createEventSubWithOptions(const Models::CreateEventSubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a callback to subscribe to channel or user events.
       *
       * @description You can call this operation to create a callback to subscribe to channel or user events. When you create a callback, you can configure parameters such as the callback URL and event type.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateEventSubRequest
       * @return CreateEventSubResponse
       */
      Models::CreateEventSubResponse createEventSub(const Models::CreateEventSubRequest &request);

      /**
       * @summary Creates a lightweight virtual studio template.
       *
       * @description >  The lightweight virtual studio feature is in invitational preview. You can add up to 300 virtual studio templates.
       *
       * @param tmpReq CreateLiveAIStudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveAIStudioResponse
       */
      Models::CreateLiveAIStudioResponse createLiveAIStudioWithOptions(const Models::CreateLiveAIStudioRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lightweight virtual studio template.
       *
       * @description >  The lightweight virtual studio feature is in invitational preview. You can add up to 300 virtual studio templates.
       *
       * @param request CreateLiveAIStudioRequest
       * @return CreateLiveAIStudioResponse
       */
      Models::CreateLiveAIStudioResponse createLiveAIStudio(const Models::CreateLiveAIStudioRequest &request);

      /**
       * @summary Adds a stream delay configuration.
       *
       * @description Stream delay is different from latency caused by streaming protocols. Stream delay is a feature that allows you to delay the playback of a live stream that is processed in the cloud.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLiveDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveDelayConfigResponse
       */
      Models::CreateLiveDelayConfigResponse createLiveDelayConfigWithOptions(const Models::CreateLiveDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a stream delay configuration.
       *
       * @description Stream delay is different from latency caused by streaming protocols. Stream delay is a feature that allows you to delay the playback of a live stream that is processed in the cloud.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLiveDelayConfigRequest
       * @return CreateLiveDelayConfigResponse
       */
      Models::CreateLiveDelayConfigResponse createLiveDelayConfig(const Models::CreateLiveDelayConfigRequest &request);

      /**
       * @summary Creates an interactive messaging application.
       *
       * @description *   When you call other operations to manage the interactive messaging application, you must specify the same data center in which the application is created.
       * *   You can create up to 300 interactive messaging applications in an Alibaba Cloud account.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLiveMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveMessageAppResponse
       */
      Models::CreateLiveMessageAppResponse createLiveMessageAppWithOptions(const Models::CreateLiveMessageAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an interactive messaging application.
       *
       * @description *   When you call other operations to manage the interactive messaging application, you must specify the same data center in which the application is created.
       * *   You can create up to 300 interactive messaging applications in an Alibaba Cloud account.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLiveMessageAppRequest
       * @return CreateLiveMessageAppResponse
       */
      Models::CreateLiveMessageAppResponse createLiveMessageApp(const Models::CreateLiveMessageAppRequest &request);

      /**
       * @summary Creates an interactive messaging group.
       *
       * @description *   Before you call this operation, make sure that you have called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create an interactive messaging application.
       * *   You can create up to 5,000 interactive messaging groups in an interactive messaging application.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq CreateLiveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveMessageGroupResponse
       */
      Models::CreateLiveMessageGroupResponse createLiveMessageGroupWithOptions(const Models::CreateLiveMessageGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an interactive messaging group.
       *
       * @description *   Before you call this operation, make sure that you have called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create an interactive messaging application.
       * *   You can create up to 5,000 interactive messaging groups in an interactive messaging application.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLiveMessageGroupRequest
       * @return CreateLiveMessageGroupResponse
       */
      Models::CreateLiveMessageGroupResponse createLiveMessageGroup(const Models::CreateLiveMessageGroupRequest &request);

      /**
       * @summary Creates a Global Accelerator (GA) instance and binds it to an acceleration circuit.
       *
       * @description *   You can call this operation to create a GA instance and bind it to an acceleration circuit. The granularity is at the stream level. You need to specify the access points where the acceleration circuit starts and ends.
       * *   The settings take effect only if the value of AppName and the value of StreamName are the same as the application name and stream name that are specified in the streaming URL.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLivePrivateLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivePrivateLineResponse
       */
      Models::CreateLivePrivateLineResponse createLivePrivateLineWithOptions(const Models::CreateLivePrivateLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Global Accelerator (GA) instance and binds it to an acceleration circuit.
       *
       * @description *   You can call this operation to create a GA instance and bind it to an acceleration circuit. The granularity is at the stream level. You need to specify the access points where the acceleration circuit starts and ends.
       * *   The settings take effect only if the value of AppName and the value of StreamName are the same as the application name and stream name that are specified in the streaming URL.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLivePrivateLineRequest
       * @return CreateLivePrivateLineResponse
       */
      Models::CreateLivePrivateLineResponse createLivePrivateLine(const Models::CreateLivePrivateLineRequest &request);

      /**
       * @summary Creates a pulled-stream relay task.
       *
       * @description >  The pulled-stream relay feature is in public preview. You can use it free of charge. After the public preview ends, fees will be charged. The specific end time will be announced.
       * *   You can call this operation to create a pulled-stream relay task.
       * *   The pulled source can be a live stream or video-on-demand (VOD) resources.
       * *   After a task is created, it starts at the specified start time and ends at the specified end time. A task that ends is automatically deleted.
       * *   Make sure that the destination URL specified in the task is not used by another task. Otherwise, conflicts occur and stream ingest fails.
       * *   The events for pulled-stream relay callbacks include state changes of a pulled-stream relay task and exit of a pulled-stream relay task. For more information, see [Pulled-stream relay callbacks](https://help.aliyun.com/document_detail/2846768.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq CreateLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivePullToPushResponse
       */
      Models::CreateLivePullToPushResponse createLivePullToPushWithOptions(const Models::CreateLivePullToPushRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pulled-stream relay task.
       *
       * @description >  The pulled-stream relay feature is in public preview. You can use it free of charge. After the public preview ends, fees will be charged. The specific end time will be announced.
       * *   You can call this operation to create a pulled-stream relay task.
       * *   The pulled source can be a live stream or video-on-demand (VOD) resources.
       * *   After a task is created, it starts at the specified start time and ends at the specified end time. A task that ends is automatically deleted.
       * *   Make sure that the destination URL specified in the task is not used by another task. Otherwise, conflicts occur and stream ingest fails.
       * *   The events for pulled-stream relay callbacks include state changes of a pulled-stream relay task and exit of a pulled-stream relay task. For more information, see [Pulled-stream relay callbacks](https://help.aliyun.com/document_detail/2846768.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLivePullToPushRequest
       * @return CreateLivePullToPushResponse
       */
      Models::CreateLivePullToPushResponse createLivePullToPush(const Models::CreateLivePullToPushRequest &request);

      /**
       * @summary Configures real-time log delivery for a domain name.
       *
       * @description ##
       * Obtain the streaming domain, and then call this operation to configure real-time log delivery for the streaming domain.
       * This operation is applicable to only streaming domains. If you want to configure real-time log delivery for an ingest domain, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CreateLiveRealTimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveRealTimeLogDeliveryResponse
       */
      Models::CreateLiveRealTimeLogDeliveryResponse createLiveRealTimeLogDeliveryWithOptions(const Models::CreateLiveRealTimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures real-time log delivery for a domain name.
       *
       * @description ##
       * Obtain the streaming domain, and then call this operation to configure real-time log delivery for the streaming domain.
       * This operation is applicable to only streaming domains. If you want to configure real-time log delivery for an ingest domain, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CreateLiveRealTimeLogDeliveryRequest
       * @return CreateLiveRealTimeLogDeliveryResponse
       */
      Models::CreateLiveRealTimeLogDeliveryResponse createLiveRealTimeLogDelivery(const Models::CreateLiveRealTimeLogDeliveryRequest &request);

      /**
       * @summary Creates a monitoring session.
       *
       * @description You can call this operation to create a monitoring session. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLiveStreamMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveStreamMonitorResponse
       */
      Models::CreateLiveStreamMonitorResponse createLiveStreamMonitorWithOptions(const Models::CreateLiveStreamMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a monitoring session.
       *
       * @description You can call this operation to create a monitoring session. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLiveStreamMonitorRequest
       * @return CreateLiveStreamMonitorResponse
       */
      Models::CreateLiveStreamMonitorResponse createLiveStreamMonitor(const Models::CreateLiveStreamMonitorRequest &request);

      /**
       * @summary Creates an M3U8 index file for a recording in a specified time period.
       *
       * @description You must have configured Object Storage Service (OSS) before you call this operation. For more information, see [Configure OSS](https://help.aliyun.com/document_detail/84932.html). ApsaraVideo Live allows you to record a live stream in the M3U8 format and store the M3U8 file in OSS. You can edit the TS segments that are included in the stored M3U8 file in real time.
       * > 
       * *   You can create an index file only after a live stream is ingested. If no live stream is available within the specified time range or the name of the specified live stream is invalid, the index file fails to be created.
       * *   The time range that is specified by the StartTime and EndTime parameters must be the duration of at least one TS segment. The default duration of a TS segment is 30 seconds.
       * *   ApsaraVideo Live stores the information about TS segments for only three months. You can create M3U8 index files only for the recordings of the last three months.
       * *   OSS stores TS segments for a time period that is specified by the storage configuration in OSS. For more information, see [Configure lifecycle rules](https://help.aliyun.com/document_detail/31904.html).
       * *   ApsaraVideo Live stores the information about M3U8 index files for six months. You can query the information about only the M3U8 index files that were created in the last six months.
       * *   OSS stores M3U8 index files for a time period that is specified by the storage configuration in OSS.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 45 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLiveStreamRecordIndexFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveStreamRecordIndexFilesResponse
       */
      Models::CreateLiveStreamRecordIndexFilesResponse createLiveStreamRecordIndexFilesWithOptions(const Models::CreateLiveStreamRecordIndexFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an M3U8 index file for a recording in a specified time period.
       *
       * @description You must have configured Object Storage Service (OSS) before you call this operation. For more information, see [Configure OSS](https://help.aliyun.com/document_detail/84932.html). ApsaraVideo Live allows you to record a live stream in the M3U8 format and store the M3U8 file in OSS. You can edit the TS segments that are included in the stored M3U8 file in real time.
       * > 
       * *   You can create an index file only after a live stream is ingested. If no live stream is available within the specified time range or the name of the specified live stream is invalid, the index file fails to be created.
       * *   The time range that is specified by the StartTime and EndTime parameters must be the duration of at least one TS segment. The default duration of a TS segment is 30 seconds.
       * *   ApsaraVideo Live stores the information about TS segments for only three months. You can create M3U8 index files only for the recordings of the last three months.
       * *   OSS stores TS segments for a time period that is specified by the storage configuration in OSS. For more information, see [Configure lifecycle rules](https://help.aliyun.com/document_detail/31904.html).
       * *   ApsaraVideo Live stores the information about M3U8 index files for six months. You can query the information about only the M3U8 index files that were created in the last six months.
       * *   OSS stores M3U8 index files for a time period that is specified by the storage configuration in OSS.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 45 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateLiveStreamRecordIndexFilesRequest
       * @return CreateLiveStreamRecordIndexFilesResponse
       */
      Models::CreateLiveStreamRecordIndexFilesResponse createLiveStreamRecordIndexFiles(const Models::CreateLiveStreamRecordIndexFilesRequest &request);

      /**
       * @summary Creates an interactive messaging application.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq CreateMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMessageAppResponse
       */
      Models::CreateMessageAppResponse createMessageAppWithOptions(const Models::CreateMessageAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an interactive messaging application.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CreateMessageAppRequest
       * @return CreateMessageAppResponse
       */
      Models::CreateMessageAppResponse createMessageApp(const Models::CreateMessageAppRequest &request);

      /**
       * @summary Creates a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq CreateMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMessageGroupResponse
       */
      Models::CreateMessageGroupResponse createMessageGroupWithOptions(const Models::CreateMessageGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CreateMessageGroupRequest
       * @return CreateMessageGroupResponse
       */
      Models::CreateMessageGroupResponse createMessageGroup(const Models::CreateMessageGroupRequest &request);

      /**
       * @summary Creates a stream mixing task.
       *
       * @description You can call this operation to create a stream mixing task. This operation supports preset layouts and custom layouts.
       * If you have any questions or suggestions about the use of the stream mixing feature, you are welcome to search the group ID 34935990 in DingTalk to join the developer group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateMixStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMixStreamResponse
       */
      Models::CreateMixStreamResponse createMixStreamWithOptions(const Models::CreateMixStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a stream mixing task.
       *
       * @description You can call this operation to create a stream mixing task. This operation supports preset layouts and custom layouts.
       * If you have any questions or suggestions about the use of the stream mixing feature, you are welcome to search the group ID 34935990 in DingTalk to join the developer group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateMixStreamRequest
       * @return CreateMixStreamResponse
       */
      Models::CreateMixStreamResponse createMixStream(const Models::CreateMixStreamRequest &request);

      /**
       * @summary 创建房间whip协议推流地址
       *
       * @param request CreateRTCWhipStreamAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRTCWhipStreamAddressResponse
       */
      Models::CreateRTCWhipStreamAddressResponse createRTCWhipStreamAddressWithOptions(const Models::CreateRTCWhipStreamAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建房间whip协议推流地址
       *
       * @param request CreateRTCWhipStreamAddressRequest
       * @return CreateRTCWhipStreamAddressResponse
       */
      Models::CreateRTCWhipStreamAddressResponse createRTCWhipStreamAddress(const Models::CreateRTCWhipStreamAddressRequest &request);

      /**
       * @summary Creates a Real-Time Messaging Protocol (RTMP) ingest URL for a channel.
       *
       * @description ### [](#)Usage notes
       * To use the interactive streaming feature, you must use ApsaraVideo Real-time Communication (ARTC) SDK to join a channel and ingest streams over Real-Time Communication (RTC). In specific scenarios, you can ingest streams over Real-Time Messaging Protocol (RTMP) by using tools such as Open Broadcaster Software (OBS). Then, ApsaraVideo Live automatically converts the RTMP streams to RTC streams and distributes the RTC streams to viewers. You can call this operation to generate an ingest URL in the RTMP format. After you ingest RTMP streams, ApsaraVideo Live automatically converts the streams to RTC streams. Do not call this operation if you require only regular live streaming. To quickly ingest RTMP streams and start live streaming, see [Get started with ApsaraVideo Live](https://help.aliyun.com/document_detail/198676.html).
       * ## [](#)Procedure
       * 1.  Call this operation to generate an ingest URL in the RTMP format.
       * 2.  Ingest a stream by using the ingest URL. Other users in the channel can watch the stream.
       * 3.  Stop ingesting the stream. Other users in the channel see that the user who ingested the stream leaves the channel.
       * > 
       * *   You can repeat Steps 2 and 3 within the validity period of the ingest URL.
       * *   We recommend that you call the [DescribeChannelParticipants](https://help.aliyun.com/document_detail/610801.html) operation to query online users in the channel at regular intervals. This way, you can check whether the user who ingests the stream is still in the channel. If the user who ingests the stream is not in the channel, the stream may be interrupted. In this case, we recommend that you stop ingesting the stream and perform Step 2.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CreateRoomRealTimeStreamAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoomRealTimeStreamAddressResponse
       */
      Models::CreateRoomRealTimeStreamAddressResponse createRoomRealTimeStreamAddressWithOptions(const Models::CreateRoomRealTimeStreamAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Real-Time Messaging Protocol (RTMP) ingest URL for a channel.
       *
       * @description ### [](#)Usage notes
       * To use the interactive streaming feature, you must use ApsaraVideo Real-time Communication (ARTC) SDK to join a channel and ingest streams over Real-Time Communication (RTC). In specific scenarios, you can ingest streams over Real-Time Messaging Protocol (RTMP) by using tools such as Open Broadcaster Software (OBS). Then, ApsaraVideo Live automatically converts the RTMP streams to RTC streams and distributes the RTC streams to viewers. You can call this operation to generate an ingest URL in the RTMP format. After you ingest RTMP streams, ApsaraVideo Live automatically converts the streams to RTC streams. Do not call this operation if you require only regular live streaming. To quickly ingest RTMP streams and start live streaming, see [Get started with ApsaraVideo Live](https://help.aliyun.com/document_detail/198676.html).
       * ## [](#)Procedure
       * 1.  Call this operation to generate an ingest URL in the RTMP format.
       * 2.  Ingest a stream by using the ingest URL. Other users in the channel can watch the stream.
       * 3.  Stop ingesting the stream. Other users in the channel see that the user who ingested the stream leaves the channel.
       * > 
       * *   You can repeat Steps 2 and 3 within the validity period of the ingest URL.
       * *   We recommend that you call the [DescribeChannelParticipants](https://help.aliyun.com/document_detail/610801.html) operation to query online users in the channel at regular intervals. This way, you can check whether the user who ingests the stream is still in the channel. If the user who ingests the stream is not in the channel, the stream may be interrupted. In this case, we recommend that you stop ingesting the stream and perform Step 2.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CreateRoomRealTimeStreamAddressRequest
       * @return CreateRoomRealTimeStreamAddressResponse
       */
      Models::CreateRoomRealTimeStreamAddressResponse createRoomRealTimeStreamAddress(const Models::CreateRoomRealTimeStreamAddressRequest &request);

      /**
       * @summary Creates a live subtitle task to transcribe an audio stream to text in real time.
       *
       * @description You can call this operation to create a live subtitle task that transcribes audio in a live stream to text in real time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateRtcAsrTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRtcAsrTaskResponse
       */
      Models::CreateRtcAsrTaskResponse createRtcAsrTaskWithOptions(const Models::CreateRtcAsrTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a live subtitle task to transcribe an audio stream to text in real time.
       *
       * @description You can call this operation to create a live subtitle task that transcribes audio in a live stream to text in real time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateRtcAsrTaskRequest
       * @return CreateRtcAsrTaskResponse
       */
      Models::CreateRtcAsrTaskResponse createRtcAsrTask(const Models::CreateRtcAsrTaskRequest &request);

      /**
       * @summary Creates a subscription to mixed-stream relay events.
       *
       * @description You can call this operation to create a subscription to mixed-stream relay events. You can configure parameters such as the callback URL, application to which you want to subscribe, and channel information when you create a subscription.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateRtcMPUEventSubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRtcMPUEventSubResponse
       */
      Models::CreateRtcMPUEventSubResponse createRtcMPUEventSubWithOptions(const Models::CreateRtcMPUEventSubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription to mixed-stream relay events.
       *
       * @description You can call this operation to create a subscription to mixed-stream relay events. You can configure parameters such as the callback URL, application to which you want to subscribe, and channel information when you create a subscription.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request CreateRtcMPUEventSubRequest
       * @return CreateRtcMPUEventSubResponse
       */
      Models::CreateRtcMPUEventSubResponse createRtcMPUEventSub(const Models::CreateRtcMPUEventSubRequest &request);

      /**
       * @summary Deletes a production studio.
       *
       * @description *   You can delete only production studios that are closed.
       * *   When a production studio is deleted, the scenes, components, and layouts of the production studio are also deleted.
       * *   You cannot recover a deleted production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterResponse
       */
      Models::DeleteCasterResponse deleteCasterWithOptions(const Models::DeleteCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a production studio.
       *
       * @description *   You can delete only production studios that are closed.
       * *   When a production studio is deleted, the scenes, components, and layouts of the production studio are also deleted.
       * *   You cannot recover a deleted production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCasterRequest
       * @return DeleteCasterResponse
       */
      Models::DeleteCasterResponse deleteCaster(const Models::DeleteCasterRequest &request);

      /**
       * @summary Deletes a component in a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to delete a component in the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCasterComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterComponentResponse
       */
      Models::DeleteCasterComponentResponse deleteCasterComponentWithOptions(const Models::DeleteCasterComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a component in a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to delete a component in the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCasterComponentRequest
       * @return DeleteCasterComponentResponse
       */
      Models::DeleteCasterComponentResponse deleteCasterComponent(const Models::DeleteCasterComponentRequest &request);

      /**
       * @summary Deletes an episode in a production studio.
       *
       * @description Before you call this operation to delete an episode in a production studio, you must obtain the ID of the production studio and the ID of the episode.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCasterEpisodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterEpisodeResponse
       */
      Models::DeleteCasterEpisodeResponse deleteCasterEpisodeWithOptions(const Models::DeleteCasterEpisodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an episode in a production studio.
       *
       * @description Before you call this operation to delete an episode in a production studio, you must obtain the ID of the production studio and the ID of the episode.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCasterEpisodeRequest
       * @return DeleteCasterEpisodeResponse
       */
      Models::DeleteCasterEpisodeResponse deleteCasterEpisode(const Models::DeleteCasterEpisodeRequest &request);

      /**
       * @summary Deletes an episode list in a production studio.
       *
       * @description Before you call this operation to delete an episode list in a production studio, make sure that you have called the [AddCasterEpisodeGroup](https://help.aliyun.com/document_detail/2848071.html) operation to add the episode list in the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCasterEpisodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterEpisodeGroupResponse
       */
      Models::DeleteCasterEpisodeGroupResponse deleteCasterEpisodeGroupWithOptions(const Models::DeleteCasterEpisodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an episode list in a production studio.
       *
       * @description Before you call this operation to delete an episode list in a production studio, make sure that you have called the [AddCasterEpisodeGroup](https://help.aliyun.com/document_detail/2848071.html) operation to add the episode list in the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCasterEpisodeGroupRequest
       * @return DeleteCasterEpisodeGroupResponse
       */
      Models::DeleteCasterEpisodeGroupResponse deleteCasterEpisodeGroup(const Models::DeleteCasterEpisodeGroupRequest &request);

      /**
       * @summary Deletes a layout in a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation to create a production studio and then call this operation to delete a layout in the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteCasterLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterLayoutResponse
       */
      Models::DeleteCasterLayoutResponse deleteCasterLayoutWithOptions(const Models::DeleteCasterLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a layout in a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation to create a production studio and then call this operation to delete a layout in the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteCasterLayoutRequest
       * @return DeleteCasterLayoutResponse
       */
      Models::DeleteCasterLayoutResponse deleteCasterLayout(const Models::DeleteCasterLayoutRequest &request);

      /**
       * @summary Deletes the episode list for carousel playback in a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to delete the episode list for carousel playback in the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCasterProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterProgramResponse
       */
      Models::DeleteCasterProgramResponse deleteCasterProgramWithOptions(const Models::DeleteCasterProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the episode list for carousel playback in a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to delete the episode list for carousel playback in the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCasterProgramRequest
       * @return DeleteCasterProgramResponse
       */
      Models::DeleteCasterProgramResponse deleteCasterProgram(const Models::DeleteCasterProgramRequest &request);

      /**
       * @summary Deletes the settings of a scene.
       *
       * @description You can call this operation to delete the settings of a scene, such as the component setting, layout setting, or both of them.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteCasterSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterSceneConfigResponse
       */
      Models::DeleteCasterSceneConfigResponse deleteCasterSceneConfigWithOptions(const Models::DeleteCasterSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the settings of a scene.
       *
       * @description You can call this operation to delete the settings of a scene, such as the component setting, layout setting, or both of them.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteCasterSceneConfigRequest
       * @return DeleteCasterSceneConfigResponse
       */
      Models::DeleteCasterSceneConfigResponse deleteCasterSceneConfig(const Models::DeleteCasterSceneConfigRequest &request);

      /**
       * @summary Removes an input source from a production studio.
       *
       * @description Before you call this operation to remove an input source from a production studio, make sure that you have called the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation to create the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteCasterVideoResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterVideoResourceResponse
       */
      Models::DeleteCasterVideoResourceResponse deleteCasterVideoResourceWithOptions(const Models::DeleteCasterVideoResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an input source from a production studio.
       *
       * @description Before you call this operation to remove an input source from a production studio, make sure that you have called the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation to create the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteCasterVideoResourceRequest
       * @return DeleteCasterVideoResourceResponse
       */
      Models::DeleteCasterVideoResourceResponse deleteCasterVideoResource(const Models::DeleteCasterVideoResourceRequest &request);

      /**
       * @summary Deletes a channel.
       *
       * @description ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChannelResponse
       */
      Models::DeleteChannelResponse deleteChannelWithOptions(const Models::DeleteChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a channel.
       *
       * @description ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteChannelRequest
       * @return DeleteChannelResponse
       */
      Models::DeleteChannelResponse deleteChannel(const Models::DeleteChannelRequest &request);

      /**
       * @summary Deletes a custom stream mixing template.
       *
       * @description Obtain the name of the custom stream mixing template that you want to delete, and then call this operation to delete the template.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomTemplateResponse
       */
      Models::DeleteCustomTemplateResponse deleteCustomTemplateWithOptions(const Models::DeleteCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom stream mixing template.
       *
       * @description Obtain the name of the custom stream mixing template that you want to delete, and then call this operation to delete the template.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteCustomTemplateRequest
       * @return DeleteCustomTemplateResponse
       */
      Models::DeleteCustomTemplateResponse deleteCustomTemplate(const Models::DeleteCustomTemplateRequest &request);

      /**
       * @summary Deletes an edge transcoding task.
       *
       * @description *   You can call this operation to delete an edge transcoding task.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeTranscodeJobResponse
       */
      Models::DeleteEdgeTranscodeJobResponse deleteEdgeTranscodeJobWithOptions(const Models::DeleteEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an edge transcoding task.
       *
       * @description *   You can call this operation to delete an edge transcoding task.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteEdgeTranscodeJobRequest
       * @return DeleteEdgeTranscodeJobResponse
       */
      Models::DeleteEdgeTranscodeJobResponse deleteEdgeTranscodeJob(const Models::DeleteEdgeTranscodeJobRequest &request);

      /**
       * @summary Deletes a callback that is used to subscribe to channel or user events.
       *
       * @description Before you call this operation, make sure that you have called the [CreateEventSubscribe](https://help.aliyun.com/document_detail/2848209.html) operation to create a callback that is used to subscribe to channel or user events.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteEventSubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventSubResponse
       */
      Models::DeleteEventSubResponse deleteEventSubWithOptions(const Models::DeleteEventSubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a callback that is used to subscribe to channel or user events.
       *
       * @description Before you call this operation, make sure that you have called the [CreateEventSubscribe](https://help.aliyun.com/document_detail/2848209.html) operation to create a callback that is used to subscribe to channel or user events.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteEventSubRequest
       * @return DeleteEventSubResponse
       */
      Models::DeleteEventSubResponse deleteEventSub(const Models::DeleteEventSubRequest &request);

      /**
       * @summary Deletes a subtitle rule.
       *
       * @description You can call this operation to delete a specified subtitle rule.
       * >  The live subtitles feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveAIProduceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAIProduceRulesResponse
       */
      Models::DeleteLiveAIProduceRulesResponse deleteLiveAIProduceRulesWithOptions(const Models::DeleteLiveAIProduceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a subtitle rule.
       *
       * @description You can call this operation to delete a specified subtitle rule.
       * >  The live subtitles feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveAIProduceRulesRequest
       * @return DeleteLiveAIProduceRulesResponse
       */
      Models::DeleteLiveAIProduceRulesResponse deleteLiveAIProduceRules(const Models::DeleteLiveAIProduceRulesRequest &request);

      /**
       * @summary Deletes a virtual studio template.
       *
       * @description To delete a virtual studio template, you must first unbind the rules. Otherwise, an error occurs.
       * >  The lightweight virtual studio feature is in invitational preview. You can add up to 300 virtual studio templates.
       *
       * @param request DeleteLiveAIStudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAIStudioResponse
       */
      Models::DeleteLiveAIStudioResponse deleteLiveAIStudioWithOptions(const Models::DeleteLiveAIStudioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual studio template.
       *
       * @description To delete a virtual studio template, you must first unbind the rules. Otherwise, an error occurs.
       * >  The lightweight virtual studio feature is in invitational preview. You can add up to 300 virtual studio templates.
       *
       * @param request DeleteLiveAIStudioRequest
       * @return DeleteLiveAIStudioResponse
       */
      Models::DeleteLiveAIStudioResponse deleteLiveAIStudio(const Models::DeleteLiveAIStudioRequest &request);

      /**
       * @summary Deletes a specified subtitle template.
       *
       * @description You can call this operation to delete a specified subtitle template for live streaming.
       * >  The live subtitles feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveAISubtitleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAISubtitleResponse
       */
      Models::DeleteLiveAISubtitleResponse deleteLiveAISubtitleWithOptions(const Models::DeleteLiveAISubtitleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified subtitle template.
       *
       * @description You can call this operation to delete a specified subtitle template for live streaming.
       * >  The live subtitles feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveAISubtitleRequest
       * @return DeleteLiveAISubtitleResponse
       */
      Models::DeleteLiveAISubtitleResponse deleteLiveAISubtitle(const Models::DeleteLiveAISubtitleRequest &request);

      /**
       * @summary Deletes a recording configuration at the application level.
       *
       * @description Obtain the main streaming domain, and then call this operation to delete a recording configuration at the application level.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveAppRecordConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAppRecordConfigResponse
       */
      Models::DeleteLiveAppRecordConfigResponse deleteLiveAppRecordConfigWithOptions(const Models::DeleteLiveAppRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a recording configuration at the application level.
       *
       * @description Obtain the main streaming domain, and then call this operation to delete a recording configuration at the application level.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveAppRecordConfigRequest
       * @return DeleteLiveAppRecordConfigResponse
       */
      Models::DeleteLiveAppRecordConfigResponse deleteLiveAppRecordConfig(const Models::DeleteLiveAppRecordConfigRequest &request);

      /**
       * @summary Deletes the snapshot configuration for live streams in an application. The deletion takes effect after you restart stream ingest.
       *
       * @description You can call this operation to delete the snapshot configuration for live streams in an application. The deletion takes effect after you restart stream ingest.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveAppSnapshotConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAppSnapshotConfigResponse
       */
      Models::DeleteLiveAppSnapshotConfigResponse deleteLiveAppSnapshotConfigWithOptions(const Models::DeleteLiveAppSnapshotConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the snapshot configuration for live streams in an application. The deletion takes effect after you restart stream ingest.
       *
       * @description You can call this operation to delete the snapshot configuration for live streams in an application. The deletion takes effect after you restart stream ingest.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveAppSnapshotConfigRequest
       * @return DeleteLiveAppSnapshotConfigResponse
       */
      Models::DeleteLiveAppSnapshotConfigResponse deleteLiveAppSnapshotConfig(const Models::DeleteLiveAppSnapshotConfigRequest &request);

      /**
       * @summary Deletes an audio moderation configuration.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to delete an audio moderation configuration.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveAudioAuditConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAudioAuditConfigResponse
       */
      Models::DeleteLiveAudioAuditConfigResponse deleteLiveAudioAuditConfigWithOptions(const Models::DeleteLiveAudioAuditConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an audio moderation configuration.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to delete an audio moderation configuration.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveAudioAuditConfigRequest
       * @return DeleteLiveAudioAuditConfigResponse
       */
      Models::DeleteLiveAudioAuditConfigResponse deleteLiveAudioAuditConfig(const Models::DeleteLiveAudioAuditConfigRequest &request);

      /**
       * @summary Deletes the configuration of callbacks for audio moderation results.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to delete the configuration of callbacks for audio moderation results.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveAudioAuditNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAudioAuditNotifyConfigResponse
       */
      Models::DeleteLiveAudioAuditNotifyConfigResponse deleteLiveAudioAuditNotifyConfigWithOptions(const Models::DeleteLiveAudioAuditNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of callbacks for audio moderation results.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to delete the configuration of callbacks for audio moderation results.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveAudioAuditNotifyConfigRequest
       * @return DeleteLiveAudioAuditNotifyConfigResponse
       */
      Models::DeleteLiveAudioAuditNotifyConfigResponse deleteLiveAudioAuditNotifyConfig(const Models::DeleteLiveAudioAuditNotifyConfigRequest &request);

      /**
       * @summary Deletes a configuration of live center stream relay.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveCenterTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveCenterTransferResponse
       */
      Models::DeleteLiveCenterTransferResponse deleteLiveCenterTransferWithOptions(const Models::DeleteLiveCenterTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a configuration of live center stream relay.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveCenterTransferRequest
       * @return DeleteLiveCenterTransferResponse
       */
      Models::DeleteLiveCenterTransferResponse deleteLiveCenterTransfer(const Models::DeleteLiveCenterTransferRequest &request);

      /**
       * @summary Deletes a stream delay configuration.
       *
       * @description You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveDelayConfigResponse
       */
      Models::DeleteLiveDelayConfigResponse deleteLiveDelayConfigWithOptions(const Models::DeleteLiveDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stream delay configuration.
       *
       * @description You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveDelayConfigRequest
       * @return DeleteLiveDelayConfigResponse
       */
      Models::DeleteLiveDelayConfigResponse deleteLiveDelayConfig(const Models::DeleteLiveDelayConfigRequest &request);

      /**
       * @summary Deletes the configuration of callbacks for video moderation results.
       *
       * @description ## [](#)Usage notes
       * *   Obtain the main streaming domain, and then call this operation to delete the configuration of callbacks for video moderation results.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveDetectNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveDetectNotifyConfigResponse
       */
      Models::DeleteLiveDetectNotifyConfigResponse deleteLiveDetectNotifyConfigWithOptions(const Models::DeleteLiveDetectNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of callbacks for video moderation results.
       *
       * @description ## [](#)Usage notes
       * *   Obtain the main streaming domain, and then call this operation to delete the configuration of callbacks for video moderation results.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveDetectNotifyConfigRequest
       * @return DeleteLiveDetectNotifyConfigResponse
       */
      Models::DeleteLiveDetectNotifyConfigResponse deleteLiveDetectNotifyConfig(const Models::DeleteLiveDetectNotifyConfigRequest &request);

      /**
       * @summary Removes a domain name from ApsaraVideo Live.
       *
       * @description *   After you successfully call the DeleteLiveDomain operation, all records of the specified domain name are deleted. Exercise caution when you perform this operation.
       * *   We recommend that you restore to an A record for the domain name at the DNS provider before you remove the domain name. Otherwise, the domain name may become inaccessible. If your domain name is registered with Alibaba Cloud, log on to the [Alibaba Cloud DNS console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdns.console.aliyun.com%2F%3Fspm%3Da2c4g.11186623.0.0.3cda841fcvk7Qs\\&lang=zh) and navigate to the **Domain Name Resolution** page. Find the domain name and then click **DNS Settings** in the Actions column. On the page that appears, change the CNAME record to an A record. If your domain name is registered with another DNS provider, configure similar settings on the platform of that DNS provider.
       * *   If you want to only suspend the use of the domain name, we recommend that you call the [StopLiveDomain](https://help.aliyun.com/document_detail/88329.html) operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveDomainResponse
       */
      Models::DeleteLiveDomainResponse deleteLiveDomainWithOptions(const Models::DeleteLiveDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a domain name from ApsaraVideo Live.
       *
       * @description *   After you successfully call the DeleteLiveDomain operation, all records of the specified domain name are deleted. Exercise caution when you perform this operation.
       * *   We recommend that you restore to an A record for the domain name at the DNS provider before you remove the domain name. Otherwise, the domain name may become inaccessible. If your domain name is registered with Alibaba Cloud, log on to the [Alibaba Cloud DNS console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdns.console.aliyun.com%2F%3Fspm%3Da2c4g.11186623.0.0.3cda841fcvk7Qs\\&lang=zh) and navigate to the **Domain Name Resolution** page. Find the domain name and then click **DNS Settings** in the Actions column. On the page that appears, change the CNAME record to an A record. If your domain name is registered with another DNS provider, configure similar settings on the platform of that DNS provider.
       * *   If you want to only suspend the use of the domain name, we recommend that you call the [StopLiveDomain](https://help.aliyun.com/document_detail/88329.html) operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveDomainRequest
       * @return DeleteLiveDomainResponse
       */
      Models::DeleteLiveDomainResponse deleteLiveDomain(const Models::DeleteLiveDomainRequest &request);

      /**
       * @summary Deletes the mapping between a streaming domain and an ingest domain.
       *
       * @description Make sure that the streaming domain has been mapped to the ingest domain before you call this operation to delete the mapping. For more information about how to map a streaming domain to an ingest domain, see [AddLiveDomainMapping](https://help.aliyun.com/document_detail/88782.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveDomainMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveDomainMappingResponse
       */
      Models::DeleteLiveDomainMappingResponse deleteLiveDomainMappingWithOptions(const Models::DeleteLiveDomainMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the mapping between a streaming domain and an ingest domain.
       *
       * @description Make sure that the streaming domain has been mapped to the ingest domain before you call this operation to delete the mapping. For more information about how to map a streaming domain to an ingest domain, see [AddLiveDomainMapping](https://help.aliyun.com/document_detail/88782.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveDomainMappingRequest
       * @return DeleteLiveDomainMappingResponse
       */
      Models::DeleteLiveDomainMappingResponse deleteLiveDomainMapping(const Models::DeleteLiveDomainMappingRequest &request);

      /**
       * @summary Deletes the mapping between a main streaming domain and a sub-streaming domain.
       *
       * @description Before you call this operation, make sure that the mapping between the main streaming domain and the sub-streaming domain is created. For more information about how to call an operation to create the mapping between a main streaming domain and a sub-streaming domain, see [AddLiveDomainPlayMapping](https://help.aliyun.com/document_detail/173091.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveDomainPlayMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveDomainPlayMappingResponse
       */
      Models::DeleteLiveDomainPlayMappingResponse deleteLiveDomainPlayMappingWithOptions(const Models::DeleteLiveDomainPlayMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the mapping between a main streaming domain and a sub-streaming domain.
       *
       * @description Before you call this operation, make sure that the mapping between the main streaming domain and the sub-streaming domain is created. For more information about how to call an operation to create the mapping between a main streaming domain and a sub-streaming domain, see [AddLiveDomainPlayMapping](https://help.aliyun.com/document_detail/173091.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveDomainPlayMappingRequest
       * @return DeleteLiveDomainPlayMappingResponse
       */
      Models::DeleteLiveDomainPlayMappingResponse deleteLiveDomainPlayMapping(const Models::DeleteLiveDomainPlayMappingRequest &request);

      /**
       * @summary Deletes the configuration of edge stream relay.
       *
       * @description You can call the DeleteLiveEdgeTransfer operation to delete the configuration of edge stream relay for a specific domain name. Ingested streams that are already relayed based on the configuration are not affected. The following table describes the scenarios in which edge stream relay takes effect or not.
       * |Scenario|Analysis|Result|
       * |---|---|---|
       * |1\\. You ingest a stream after you call the SetLiveEdgeTransfer operation to configure edge stream relay. Then, you call the DeleteLiveEdgeTransfer operation to delete the configuration.|The configuration of edge stream relay is available when you ingest the stream.|The ingested stream is not affected, and stream relay is not interrupted.|
       * |2\\. You call the DeleteLiveEdgeTransfer operation to delete the configuration of edge stream relay after you ingest a stream. Then, you disconnect and resume the ingested stream.|The configuration of edge stream relay is not available after you resume the ingested stream.|Edge stream relay does not take effect.|
       * |3\\. You call the DeleteLiveEdgeTransfer operation before you ingest a stream.|The configuration of edge stream relay is not available.|Edge stream relay does not take effect.|
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveEdgeTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveEdgeTransferResponse
       */
      Models::DeleteLiveEdgeTransferResponse deleteLiveEdgeTransferWithOptions(const Models::DeleteLiveEdgeTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of edge stream relay.
       *
       * @description You can call the DeleteLiveEdgeTransfer operation to delete the configuration of edge stream relay for a specific domain name. Ingested streams that are already relayed based on the configuration are not affected. The following table describes the scenarios in which edge stream relay takes effect or not.
       * |Scenario|Analysis|Result|
       * |---|---|---|
       * |1\\. You ingest a stream after you call the SetLiveEdgeTransfer operation to configure edge stream relay. Then, you call the DeleteLiveEdgeTransfer operation to delete the configuration.|The configuration of edge stream relay is available when you ingest the stream.|The ingested stream is not affected, and stream relay is not interrupted.|
       * |2\\. You call the DeleteLiveEdgeTransfer operation to delete the configuration of edge stream relay after you ingest a stream. Then, you disconnect and resume the ingested stream.|The configuration of edge stream relay is not available after you resume the ingested stream.|Edge stream relay does not take effect.|
       * |3\\. You call the DeleteLiveEdgeTransfer operation before you ingest a stream.|The configuration of edge stream relay is not available.|Edge stream relay does not take effect.|
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveEdgeTransferRequest
       * @return DeleteLiveEdgeTransferResponse
       */
      Models::DeleteLiveEdgeTransferResponse deleteLiveEdgeTransfer(const Models::DeleteLiveEdgeTransferRequest &request);

      /**
       * @summary Deletes a configuration of triggered stream pulling.
       *
       * @description This operation is application to triggered stream pulling. You can call this operation to delete a configuration of triggered stream pulling. If you set the AppName parameter to ali_all_app, configurations of triggered stream pulling for all applications under the domain name are deleted.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveLazyPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveLazyPullStreamInfoConfigResponse
       */
      Models::DeleteLiveLazyPullStreamInfoConfigResponse deleteLiveLazyPullStreamInfoConfigWithOptions(const Models::DeleteLiveLazyPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a configuration of triggered stream pulling.
       *
       * @description This operation is application to triggered stream pulling. You can call this operation to delete a configuration of triggered stream pulling. If you set the AppName parameter to ali_all_app, configurations of triggered stream pulling for all applications under the domain name are deleted.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveLazyPullStreamInfoConfigRequest
       * @return DeleteLiveLazyPullStreamInfoConfigResponse
       */
      Models::DeleteLiveLazyPullStreamInfoConfigResponse deleteLiveLazyPullStreamInfoConfig(const Models::DeleteLiveLazyPullStreamInfoConfigRequest &request);

      /**
       * @summary Deletes an interactive messaging group.
       *
       * @description *   Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * *   After you delete an interactive messaging group, it is no longer available. Every user in the group is notified that the group is closed.
       * *   After you delete an interactive messaging group, messages in the group are retained for 30 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveMessageGroupResponse
       */
      Models::DeleteLiveMessageGroupResponse deleteLiveMessageGroupWithOptions(const Models::DeleteLiveMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an interactive messaging group.
       *
       * @description *   Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * *   After you delete an interactive messaging group, it is no longer available. Every user in the group is notified that the group is closed.
       * *   After you delete an interactive messaging group, messages in the group are retained for 30 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveMessageGroupRequest
       * @return DeleteLiveMessageGroupResponse
       */
      Models::DeleteLiveMessageGroupResponse deleteLiveMessageGroup(const Models::DeleteLiveMessageGroupRequest &request);

      /**
       * @summary Deletes a message that was sent to an interactive messaging group.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveMessageGroupMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveMessageGroupMessageResponse
       */
      Models::DeleteLiveMessageGroupMessageResponse deleteLiveMessageGroupMessageWithOptions(const Models::DeleteLiveMessageGroupMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a message that was sent to an interactive messaging group.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveMessageGroupMessageRequest
       * @return DeleteLiveMessageGroupMessageResponse
       */
      Models::DeleteLiveMessageGroupMessageResponse deleteLiveMessageGroupMessage(const Models::DeleteLiveMessageGroupMessageRequest &request);

      /**
       * @summary Deletes a message that is sent to a user.
       *
       * @description ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveMessageUserMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveMessageUserMessageResponse
       */
      Models::DeleteLiveMessageUserMessageResponse deleteLiveMessageUserMessageWithOptions(const Models::DeleteLiveMessageUserMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a message that is sent to a user.
       *
       * @description ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveMessageUserMessageRequest
       * @return DeleteLiveMessageUserMessageResponse
       */
      Models::DeleteLiveMessageUserMessageResponse deleteLiveMessageUserMessage(const Models::DeleteLiveMessageUserMessageRequest &request);

      /**
       * @description You can call this operation to delete a live stream encapsulation configuration. The deletion takes effect after you re-ingest the stream.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 300 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLivePackageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivePackageConfigResponse
       */
      Models::DeleteLivePackageConfigResponse deleteLivePackageConfigWithOptions(const Models::DeleteLivePackageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description You can call this operation to delete a live stream encapsulation configuration. The deletion takes effect after you re-ingest the stream.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 300 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLivePackageConfigRequest
       * @return DeleteLivePackageConfigResponse
       */
      Models::DeleteLivePackageConfigResponse deleteLivePackageConfig(const Models::DeleteLivePackageConfigRequest &request);

      /**
       * @summary Unbinds a Global Accelerator (GA) instance from an acceleration circuit.
       *
       * @description After you unbind a GA instance from an acceleration circuit, your stream ingest and streaming are no longer accelerated by the GA instance. The GA instance still exists. If you want to release the GA instance, delete it in the GA console.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLivePrivateLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivePrivateLineResponse
       */
      Models::DeleteLivePrivateLineResponse deleteLivePrivateLineWithOptions(const Models::DeleteLivePrivateLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a Global Accelerator (GA) instance from an acceleration circuit.
       *
       * @description After you unbind a GA instance from an acceleration circuit, your stream ingest and streaming are no longer accelerated by the GA instance. The GA instance still exists. If you want to release the GA instance, delete it in the GA console.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLivePrivateLineRequest
       * @return DeleteLivePrivateLineResponse
       */
      Models::DeleteLivePrivateLineResponse deleteLivePrivateLine(const Models::DeleteLivePrivateLineRequest &request);

      /**
       * @summary Deletes a stream pulling configuration.
       *
       * @description This operation is applicable to regular stream pulling. You can call this operation to delete a configuration of regular stream pulling.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLivePullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivePullStreamInfoConfigResponse
       */
      Models::DeleteLivePullStreamInfoConfigResponse deleteLivePullStreamInfoConfigWithOptions(const Models::DeleteLivePullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stream pulling configuration.
       *
       * @description This operation is applicable to regular stream pulling. You can call this operation to delete a configuration of regular stream pulling.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLivePullStreamInfoConfigRequest
       * @return DeleteLivePullStreamInfoConfigResponse
       */
      Models::DeleteLivePullStreamInfoConfigResponse deleteLivePullStreamInfoConfig(const Models::DeleteLivePullStreamInfoConfigRequest &request);

      /**
       * @summary Deletes a pulled-stream relay task.
       *
       * @description *   You can call this operation to delete a pulled-stream relay task.
       * *   If you delete a running task, the task is immediately stopped and cannot be restarted.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivePullToPushResponse
       */
      Models::DeleteLivePullToPushResponse deleteLivePullToPushWithOptions(const Models::DeleteLivePullToPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pulled-stream relay task.
       *
       * @description *   You can call this operation to delete a pulled-stream relay task.
       * *   If you delete a running task, the task is immediately stopped and cannot be restarted.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLivePullToPushRequest
       * @return DeleteLivePullToPushResponse
       */
      Models::DeleteLivePullToPushResponse deleteLivePullToPush(const Models::DeleteLivePullToPushRequest &request);

      /**
       * @summary Deletes the Logstore that is specified by a configuration of real-time log delivery.
       *
       * @description *   You can call this operation to delete the Logstore that is specified by a configuration of real-time log delivery. Make sure that all parameters meet the requirements when you call this operation.
       * *   You can call the [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) operation to query the Project, Logstore, and Region parameters.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveRealTimeLogLogstoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveRealTimeLogLogstoreResponse
       */
      Models::DeleteLiveRealTimeLogLogstoreResponse deleteLiveRealTimeLogLogstoreWithOptions(const Models::DeleteLiveRealTimeLogLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the Logstore that is specified by a configuration of real-time log delivery.
       *
       * @description *   You can call this operation to delete the Logstore that is specified by a configuration of real-time log delivery. Make sure that all parameters meet the requirements when you call this operation.
       * *   You can call the [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) operation to query the Project, Logstore, and Region parameters.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveRealTimeLogLogstoreRequest
       * @return DeleteLiveRealTimeLogLogstoreResponse
       */
      Models::DeleteLiveRealTimeLogLogstoreResponse deleteLiveRealTimeLogLogstore(const Models::DeleteLiveRealTimeLogLogstoreRequest &request);

      /**
       * @summary Deletes the configurations of real-time log delivery for one or more domain names.
       *
       * @description *
       * *   This operation is applicable to only streaming domains. If you want to configure real-tome log delivery for an ingest domain, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * *   You can call the [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) to query the Project, Logstore, and Region parameters.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveRealtimeLogDeliveryResponse
       */
      Models::DeleteLiveRealtimeLogDeliveryResponse deleteLiveRealtimeLogDeliveryWithOptions(const Models::DeleteLiveRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configurations of real-time log delivery for one or more domain names.
       *
       * @description *
       * *   This operation is applicable to only streaming domains. If you want to configure real-tome log delivery for an ingest domain, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * *   You can call the [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) to query the Project, Logstore, and Region parameters.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveRealtimeLogDeliveryRequest
       * @return DeleteLiveRealtimeLogDeliveryResponse
       */
      Models::DeleteLiveRealtimeLogDeliveryResponse deleteLiveRealtimeLogDelivery(const Models::DeleteLiveRealtimeLogDeliveryRequest &request);

      /**
       * @summary Deletes the configuration of callbacks for live stream recording under a domain name.
       *
       * @description Obtain the main streaming domain, and then call this operation to delete the configuration of callbacks for live stream recording under the main streaming domain.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveRecordNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveRecordNotifyConfigResponse
       */
      Models::DeleteLiveRecordNotifyConfigResponse deleteLiveRecordNotifyConfigWithOptions(const Models::DeleteLiveRecordNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of callbacks for live stream recording under a domain name.
       *
       * @description Obtain the main streaming domain, and then call this operation to delete the configuration of callbacks for live stream recording under the main streaming domain.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveRecordNotifyConfigRequest
       * @return DeleteLiveRecordNotifyConfigResponse
       */
      Models::DeleteLiveRecordNotifyConfigResponse deleteLiveRecordNotifyConfig(const Models::DeleteLiveRecordNotifyConfigRequest &request);

      /**
       * @summary Deletes a Live-to-VOD configuration.
       *
       * @description Obtain the main streaming domain, and then call this operation to delete a Live-to-VOD configuration.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveRecordVodConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveRecordVodConfigResponse
       */
      Models::DeleteLiveRecordVodConfigResponse deleteLiveRecordVodConfigWithOptions(const Models::DeleteLiveRecordVodConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Live-to-VOD configuration.
       *
       * @description Obtain the main streaming domain, and then call this operation to delete a Live-to-VOD configuration.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveRecordVodConfigRequest
       * @return DeleteLiveRecordVodConfigResponse
       */
      Models::DeleteLiveRecordVodConfigResponse deleteLiveRecordVodConfig(const Models::DeleteLiveRecordVodConfigRequest &request);

      /**
       * @summary Deletes a video moderation configuration.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to delete a video moderation configuration.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveSnapshotDetectPornConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveSnapshotDetectPornConfigResponse
       */
      Models::DeleteLiveSnapshotDetectPornConfigResponse deleteLiveSnapshotDetectPornConfigWithOptions(const Models::DeleteLiveSnapshotDetectPornConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a video moderation configuration.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to delete a video moderation configuration.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveSnapshotDetectPornConfigRequest
       * @return DeleteLiveSnapshotDetectPornConfigResponse
       */
      Models::DeleteLiveSnapshotDetectPornConfigResponse deleteLiveSnapshotDetectPornConfig(const Models::DeleteLiveSnapshotDetectPornConfigRequest &request);

      /**
       * @summary Deletes the configuration of snapshot callbacks.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveSnapshotNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveSnapshotNotifyConfigResponse
       */
      Models::DeleteLiveSnapshotNotifyConfigResponse deleteLiveSnapshotNotifyConfigWithOptions(const Models::DeleteLiveSnapshotNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of snapshot callbacks.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveSnapshotNotifyConfigRequest
       * @return DeleteLiveSnapshotNotifyConfigResponse
       */
      Models::DeleteLiveSnapshotNotifyConfigResponse deleteLiveSnapshotNotifyConfig(const Models::DeleteLiveSnapshotNotifyConfigRequest &request);

      /**
       * @summary Deletes domain configurations in the canary release environment.
       *
       * @description ## [](#)Usage notes
       * Before you call this operation to delete a domain configuration in the canary release environment, you can call the [DescribeLiveDomainStagingConfig](https://help.aliyun.com/document_detail/297374.html) operation to obtain the configuration ID.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveSpecificStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveSpecificStagingConfigResponse
       */
      Models::DeleteLiveSpecificStagingConfigResponse deleteLiveSpecificStagingConfigWithOptions(const Models::DeleteLiveSpecificStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes domain configurations in the canary release environment.
       *
       * @description ## [](#)Usage notes
       * Before you call this operation to delete a domain configuration in the canary release environment, you can call the [DescribeLiveDomainStagingConfig](https://help.aliyun.com/document_detail/297374.html) operation to obtain the configuration ID.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveSpecificStagingConfigRequest
       * @return DeleteLiveSpecificStagingConfigResponse
       */
      Models::DeleteLiveSpecificStagingConfigResponse deleteLiveSpecificStagingConfig(const Models::DeleteLiveSpecificStagingConfigRequest &request);

      /**
       * @summary Deletes a configuration of stream-level region blocking.
       *
       * @description You can call this operation to delete a configuration of stream-level region blocking.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamBlockResponse
       */
      Models::DeleteLiveStreamBlockResponse deleteLiveStreamBlockWithOptions(const Models::DeleteLiveStreamBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a configuration of stream-level region blocking.
       *
       * @description You can call this operation to delete a configuration of stream-level region blocking.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamBlockRequest
       * @return DeleteLiveStreamBlockResponse
       */
      Models::DeleteLiveStreamBlockResponse deleteLiveStreamBlock(const Models::DeleteLiveStreamBlockRequest &request);

      /**
       * @summary Deletes an active mixed stream.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamMergeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamMergeResponse
       */
      Models::DeleteLiveStreamMergeResponse deleteLiveStreamMergeWithOptions(const Models::DeleteLiveStreamMergeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an active mixed stream.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamMergeRequest
       * @return DeleteLiveStreamMergeResponse
       */
      Models::DeleteLiveStreamMergeResponse deleteLiveStreamMerge(const Models::DeleteLiveStreamMergeRequest &request);

      /**
       * @summary Deletes a monitoring session.
       *
       * @description Before you call this operation, obtain the monitoring session ID from the response parameter **MonitorId** of the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation.
       * >  You cannot delete a monitoring session that is in the started state. If you try to delete it, a 400 error is reported.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamMonitorResponse
       */
      Models::DeleteLiveStreamMonitorResponse deleteLiveStreamMonitorWithOptions(const Models::DeleteLiveStreamMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a monitoring session.
       *
       * @description Before you call this operation, obtain the monitoring session ID from the response parameter **MonitorId** of the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation.
       * >  You cannot delete a monitoring session that is in the started state. If you try to delete it, a 400 error is reported.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamMonitorRequest
       * @return DeleteLiveStreamMonitorResponse
       */
      Models::DeleteLiveStreamMonitorResponse deleteLiveStreamMonitor(const Models::DeleteLiveStreamMonitorRequest &request);

      /**
       * @summary Deletes live stream recordings.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamRecordIndexFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamRecordIndexFilesResponse
       */
      Models::DeleteLiveStreamRecordIndexFilesResponse deleteLiveStreamRecordIndexFilesWithOptions(const Models::DeleteLiveStreamRecordIndexFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes live stream recordings.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamRecordIndexFilesRequest
       * @return DeleteLiveStreamRecordIndexFilesResponse
       */
      Models::DeleteLiveStreamRecordIndexFilesResponse deleteLiveStreamRecordIndexFiles(const Models::DeleteLiveStreamRecordIndexFilesRequest &request);

      /**
       * @summary Deletes a transcoding configuration.
       *
       * @description Standard transcoding templates, Narrowband HD™ transcoding templates, and custom transcoding templates are supported for this operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamTranscodeResponse
       */
      Models::DeleteLiveStreamTranscodeResponse deleteLiveStreamTranscodeWithOptions(const Models::DeleteLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a transcoding configuration.
       *
       * @description Standard transcoding templates, Narrowband HD™ transcoding templates, and custom transcoding templates are supported for this operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamTranscodeRequest
       * @return DeleteLiveStreamTranscodeResponse
       */
      Models::DeleteLiveStreamTranscodeResponse deleteLiveStreamTranscode(const Models::DeleteLiveStreamTranscodeRequest &request);

      /**
       * @summary Deletes a specified watermark template.
       *
       * @description This interface supports deleting the watermark template with the specified TemplateId for live streaming. 
       * ## QPS Limitation
       *  The per-user QPS limit for this interface is 60 times/second. Exceeding this limit will result in API throttling, which may impact your business operations. Please use it reasonably. For more information, please refer to [QPS Limitation](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveStreamWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamWatermarkResponse
       */
      Models::DeleteLiveStreamWatermarkResponse deleteLiveStreamWatermarkWithOptions(const Models::DeleteLiveStreamWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified watermark template.
       *
       * @description This interface supports deleting the watermark template with the specified TemplateId for live streaming. 
       * ## QPS Limitation
       *  The per-user QPS limit for this interface is 60 times/second. Exceeding this limit will result in API throttling, which may impact your business operations. Please use it reasonably. For more information, please refer to [QPS Limitation](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveStreamWatermarkRequest
       * @return DeleteLiveStreamWatermarkResponse
       */
      Models::DeleteLiveStreamWatermarkResponse deleteLiveStreamWatermark(const Models::DeleteLiveStreamWatermarkRequest &request);

      /**
       * @summary Deletes a watermark rule.
       *
       * @description You can call this operation to delete a watermark rule with a specified ID.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamWatermarkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamWatermarkRuleResponse
       */
      Models::DeleteLiveStreamWatermarkRuleResponse deleteLiveStreamWatermarkRuleWithOptions(const Models::DeleteLiveStreamWatermarkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a watermark rule.
       *
       * @description You can call this operation to delete a watermark rule with a specified ID.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamWatermarkRuleRequest
       * @return DeleteLiveStreamWatermarkRuleResponse
       */
      Models::DeleteLiveStreamWatermarkRuleResponse deleteLiveStreamWatermarkRule(const Models::DeleteLiveStreamWatermarkRuleRequest &request);

      /**
       * @summary Deletes the callback configuration for stream ingest under an ingest domain.
       *
       * @description Obtain the ingest domain, and then call this operation to delete the callback configuration for stream ingest under the ingest domain.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamsNotifyUrlConfigResponse
       */
      Models::DeleteLiveStreamsNotifyUrlConfigResponse deleteLiveStreamsNotifyUrlConfigWithOptions(const Models::DeleteLiveStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the callback configuration for stream ingest under an ingest domain.
       *
       * @description Obtain the ingest domain, and then call this operation to delete the callback configuration for stream ingest under the ingest domain.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveStreamsNotifyUrlConfigRequest
       * @return DeleteLiveStreamsNotifyUrlConfigResponse
       */
      Models::DeleteLiveStreamsNotifyUrlConfigResponse deleteLiveStreamsNotifyUrlConfig(const Models::DeleteLiveStreamsNotifyUrlConfigRequest &request);

      /**
       * @summary Deletes an interactive messaging application.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMessageAppResponse
       */
      Models::DeleteMessageAppResponse deleteMessageAppWithOptions(const Models::DeleteMessageAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an interactive messaging application.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteMessageAppRequest
       * @return DeleteMessageAppResponse
       */
      Models::DeleteMessageAppResponse deleteMessageApp(const Models::DeleteMessageAppRequest &request);

      /**
       * @summary Deletes a stream mixing task.
       *
       * @description You can call the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation to create a stream mixing task and then call this operation to delete the stream mixing task. If you no longer need a mixed stream, be sure to delete it. Mixed streams that are not deleted are continuously ingested.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteMixStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMixStreamResponse
       */
      Models::DeleteMixStreamResponse deleteMixStreamWithOptions(const Models::DeleteMixStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stream mixing task.
       *
       * @description You can call the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation to create a stream mixing task and then call this operation to delete the stream mixing task. If you no longer need a mixed stream, be sure to delete it. Mixed streams that are not deleted are continuously ingested.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteMixStreamRequest
       * @return DeleteMixStreamResponse
       */
      Models::DeleteMixStreamResponse deleteMixStream(const Models::DeleteMixStreamRequest &request);

      /**
       * @summary Deletes an episode list.
       *
       * @description Before you call this operation to delete an episode list, make sure that you have called the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to create the episode list.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeletePlaylistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePlaylistResponse
       */
      Models::DeletePlaylistResponse deletePlaylistWithOptions(const Models::DeletePlaylistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an episode list.
       *
       * @description Before you call this operation to delete an episode list, make sure that you have called the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to create the episode list.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeletePlaylistRequest
       * @return DeletePlaylistResponse
       */
      Models::DeletePlaylistResponse deletePlaylist(const Models::DeletePlaylistRequest &request);

      /**
       * @summary Removes episodes from an episode list.
       *
       * @description Before you call this operation to remove an episode, make sure that you have called the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add the episode.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeletePlaylistItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePlaylistItemsResponse
       */
      Models::DeletePlaylistItemsResponse deletePlaylistItemsWithOptions(const Models::DeletePlaylistItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes episodes from an episode list.
       *
       * @description Before you call this operation to remove an episode, make sure that you have called the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add the episode.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeletePlaylistItemsRequest
       * @return DeletePlaylistItemsResponse
       */
      Models::DeletePlaylistItemsResponse deletePlaylistItems(const Models::DeletePlaylistItemsRequest &request);

      /**
       * @summary Deletes a live subtitle task.
       *
       * @description You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteRtcAsrTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRtcAsrTaskResponse
       */
      Models::DeleteRtcAsrTaskResponse deleteRtcAsrTaskWithOptions(const Models::DeleteRtcAsrTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a live subtitle task.
       *
       * @description You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteRtcAsrTaskRequest
       * @return DeleteRtcAsrTaskResponse
       */
      Models::DeleteRtcAsrTaskResponse deleteRtcAsrTask(const Models::DeleteRtcAsrTaskRequest &request);

      /**
       * @summary Deletes a subscription to mixed-stream relay events.
       *
       * @description *   You can call this operation to delete a subscription to mixed-stream relay events.
       * *   Before you call this operation, make sure that you have called the CreateRtcMPUEventSub operation to create the subscription.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteRtcMPUEventSubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRtcMPUEventSubResponse
       */
      Models::DeleteRtcMPUEventSubResponse deleteRtcMPUEventSubWithOptions(const Models::DeleteRtcMPUEventSubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a subscription to mixed-stream relay events.
       *
       * @description *   You can call this operation to delete a subscription to mixed-stream relay events.
       * *   Before you call this operation, make sure that you have called the CreateRtcMPUEventSub operation to create the subscription.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteRtcMPUEventSubRequest
       * @return DeleteRtcMPUEventSubResponse
       */
      Models::DeleteRtcMPUEventSubResponse deleteRtcMPUEventSub(const Models::DeleteRtcMPUEventSubRequest &request);

      /**
       * @summary Deletes the configuration of authentication for snapshot callbacks.
       *
       * @description You can call this operation to delete the configuration of authentication for snapshot callbacks for a main streaming domain. For an ongoing live stream, the deletion takes effect after you re-ingest the stream. Snapshot callbacks for the stream are no longer authenticated.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteSnapshotCallbackAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotCallbackAuthResponse
       */
      Models::DeleteSnapshotCallbackAuthResponse deleteSnapshotCallbackAuthWithOptions(const Models::DeleteSnapshotCallbackAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of authentication for snapshot callbacks.
       *
       * @description You can call this operation to delete the configuration of authentication for snapshot callbacks for a main streaming domain. For an ongoing live stream, the deletion takes effect after you re-ingest the stream. Snapshot callbacks for the stream are no longer authenticated.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteSnapshotCallbackAuthRequest
       * @return DeleteSnapshotCallbackAuthResponse
       */
      Models::DeleteSnapshotCallbackAuthResponse deleteSnapshotCallbackAuth(const Models::DeleteSnapshotCallbackAuthRequest &request);

      /**
       * @summary Deletes snapshots.
       *
       * @description You can delete only snapshots that were captured in the last year.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteSnapshotFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotFilesResponse
       */
      Models::DeleteSnapshotFilesResponse deleteSnapshotFilesWithOptions(const Models::DeleteSnapshotFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes snapshots.
       *
       * @description You can delete only snapshots that were captured in the last year.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteSnapshotFilesRequest
       * @return DeleteSnapshotFilesResponse
       */
      Models::DeleteSnapshotFilesResponse deleteSnapshotFiles(const Models::DeleteSnapshotFilesRequest &request);

      /**
       * @summary Deletes a layout in a virtual studio.
       *
       * @description You can call this operation to delete a layout in a virtual studio. You can delete only one layout in a call.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteStudioLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStudioLayoutResponse
       */
      Models::DeleteStudioLayoutResponse deleteStudioLayoutWithOptions(const Models::DeleteStudioLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a layout in a virtual studio.
       *
       * @description You can call this operation to delete a layout in a virtual studio. You can delete only one layout in a call.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteStudioLayoutRequest
       * @return DeleteStudioLayoutResponse
       */
      Models::DeleteStudioLayoutResponse deleteStudioLayout(const Models::DeleteStudioLayoutRequest &request);

      /**
       * @summary Queries scheduled tasks that are used to start and stop playing an episode list at specified points in time.
       *
       * @description You can call this operation to query scheduled tasks that are used to start and stop playing an episode list at specified points in time. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeAutoShowListTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoShowListTasksResponse
       */
      Models::DescribeAutoShowListTasksResponse describeAutoShowListTasksWithOptions(const Models::DescribeAutoShowListTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scheduled tasks that are used to start and stop playing an episode list at specified points in time.
       *
       * @description You can call this operation to query scheduled tasks that are used to start and stop playing an episode list at specified points in time. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeAutoShowListTasksRequest
       * @return DescribeAutoShowListTasksResponse
       */
      Models::DescribeAutoShowListTasksResponse describeAutoShowListTasks(const Models::DescribeAutoShowListTasksRequest &request);

      /**
       * @summary Queries the channels of a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to query the channels of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterChannelsResponse
       */
      Models::DescribeCasterChannelsResponse describeCasterChannelsWithOptions(const Models::DescribeCasterChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the channels of a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to query the channels of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterChannelsRequest
       * @return DescribeCasterChannelsResponse
       */
      Models::DescribeCasterChannelsResponse describeCasterChannels(const Models::DescribeCasterChannelsRequest &request);

      /**
       * @summary Queries the components of a production studio.
       *
       * @description You can call the [AddCasterComponent](https://help.aliyun.com/document_detail/2848030.html) operation to add components to a production studio and then call this operation to query the components of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterComponentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterComponentsResponse
       */
      Models::DescribeCasterComponentsResponse describeCasterComponentsWithOptions(const Models::DescribeCasterComponentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the components of a production studio.
       *
       * @description You can call the [AddCasterComponent](https://help.aliyun.com/document_detail/2848030.html) operation to add components to a production studio and then call this operation to query the components of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterComponentsRequest
       * @return DescribeCasterComponentsResponse
       */
      Models::DescribeCasterComponentsResponse describeCasterComponents(const Models::DescribeCasterComponentsRequest &request);

      /**
       * @summary Queries the configurations of a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to query the configurations of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterConfigResponse
       */
      Models::DescribeCasterConfigResponse describeCasterConfigWithOptions(const Models::DescribeCasterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to query the configurations of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterConfigRequest
       * @return DescribeCasterConfigResponse
       */
      Models::DescribeCasterConfigResponse describeCasterConfig(const Models::DescribeCasterConfigRequest &request);

      /**
       * @summary Queries a specified layout or all layouts of a production studio.
       *
       * @description You can call this operation to query layouts of a production studio. If no layout ID is specified, the operation returns all layouts of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterLayoutsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterLayoutsResponse
       */
      Models::DescribeCasterLayoutsResponse describeCasterLayoutsWithOptions(const Models::DescribeCasterLayoutsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specified layout or all layouts of a production studio.
       *
       * @description You can call this operation to query layouts of a production studio. If no layout ID is specified, the operation returns all layouts of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterLayoutsRequest
       * @return DescribeCasterLayoutsResponse
       */
      Models::DescribeCasterLayoutsResponse describeCasterLayouts(const Models::DescribeCasterLayoutsRequest &request);

      /**
       * @summary Queries the information about the episode list for carousel playback in a production studio.
       *
       * @description You can call this operation to query episodes in the episode list for carousel playback. The supported types of episodes include video resource and component.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterProgramResponse
       */
      Models::DescribeCasterProgramResponse describeCasterProgramWithOptions(const Models::DescribeCasterProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the episode list for carousel playback in a production studio.
       *
       * @description You can call this operation to query episodes in the episode list for carousel playback. The supported types of episodes include video resource and component.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterProgramRequest
       * @return DescribeCasterProgramResponse
       */
      Models::DescribeCasterProgramResponse describeCasterProgram(const Models::DescribeCasterProgramRequest &request);

      /**
       * @summary Queries the audio configurations of a scene.
       *
       * @description ## [](#)Usage notes
       * You can call the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation to create a production studio and then call this operation to query the audio configurations of a scene in the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeCasterSceneAudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterSceneAudioResponse
       */
      Models::DescribeCasterSceneAudioResponse describeCasterSceneAudioWithOptions(const Models::DescribeCasterSceneAudioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audio configurations of a scene.
       *
       * @description ## [](#)Usage notes
       * You can call the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation to create a production studio and then call this operation to query the audio configurations of a scene in the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeCasterSceneAudioRequest
       * @return DescribeCasterSceneAudioResponse
       */
      Models::DescribeCasterSceneAudioResponse describeCasterSceneAudio(const Models::DescribeCasterSceneAudioRequest &request);

      /**
       * @summary Queries the scenes of a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation to create a production studio and then call this operation to query the scenes of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeCasterScenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterScenesResponse
       */
      Models::DescribeCasterScenesResponse describeCasterScenesWithOptions(const Models::DescribeCasterScenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scenes of a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation to create a production studio and then call this operation to query the scenes of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeCasterScenesRequest
       * @return DescribeCasterScenesResponse
       */
      Models::DescribeCasterScenesResponse describeCasterScenes(const Models::DescribeCasterScenesRequest &request);

      /**
       * @summary Queries the streaming URLs of a production studio.
       *
       * @description You must create a production studio before calling this operation to query the information.
       * ## QPS limit
       * A single user can perform a maximum of 15 queries per second (QPS). Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation. For more information about what a single user means and the QPS details, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live#topic-2136805).
       *
       * @param request DescribeCasterStreamUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterStreamUrlResponse
       */
      Models::DescribeCasterStreamUrlResponse describeCasterStreamUrlWithOptions(const Models::DescribeCasterStreamUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the streaming URLs of a production studio.
       *
       * @description You must create a production studio before calling this operation to query the information.
       * ## QPS limit
       * A single user can perform a maximum of 15 queries per second (QPS). Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation. For more information about what a single user means and the QPS details, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live#topic-2136805).
       *
       * @param request DescribeCasterStreamUrlRequest
       * @return DescribeCasterStreamUrlResponse
       */
      Models::DescribeCasterStreamUrlResponse describeCasterStreamUrl(const Models::DescribeCasterStreamUrlRequest &request);

      /**
       * @summary Queries the input sources of a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to query the input sources of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterVideoResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterVideoResourcesResponse
       */
      Models::DescribeCasterVideoResourcesResponse describeCasterVideoResourcesWithOptions(const Models::DescribeCasterVideoResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the input sources of a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to query the input sources of the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCasterVideoResourcesRequest
       * @return DescribeCasterVideoResourcesResponse
       */
      Models::DescribeCasterVideoResourcesResponse describeCasterVideoResources(const Models::DescribeCasterVideoResourcesRequest &request);

      /**
       * @summary Queries the list of production studios.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848012.html) operation to create a production studio and then call this operation to query the production studio list. The status of a production studio can be idle or streaming.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCastersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCastersResponse
       */
      Models::DescribeCastersResponse describeCastersWithOptions(const Models::DescribeCastersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of production studios.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848012.html) operation to create a production studio and then call this operation to query the production studio list. The status of a production studio can be idle or streaming.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeCastersRequest
       * @return DescribeCastersResponse
       */
      Models::DescribeCastersResponse describeCasters(const Models::DescribeCastersRequest &request);

      /**
       * @summary Queries online users in a channel.
       *
       * @description You can call this operation to query online users in a channel. The returned result does not include details about the users.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeChannelParticipantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelParticipantsResponse
       */
      Models::DescribeChannelParticipantsResponse describeChannelParticipantsWithOptions(const Models::DescribeChannelParticipantsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries online users in a channel.
       *
       * @description You can call this operation to query online users in a channel. The returned result does not include details about the users.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeChannelParticipantsRequest
       * @return DescribeChannelParticipantsResponse
       */
      Models::DescribeChannelParticipantsResponse describeChannelParticipants(const Models::DescribeChannelParticipantsRequest &request);

      /**
       * @summary Queries the details of online users in a channel.
       *
       * @description You can call this operation to query information about online users in a channel, such as the total number of users during live streaming.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeChannelUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChannelUsersResponse
       */
      Models::DescribeChannelUsersResponse describeChannelUsersWithOptions(const Models::DescribeChannelUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of online users in a channel.
       *
       * @description You can call this operation to query information about online users in a channel, such as the total number of users during live streaming.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeChannelUsersRequest
       * @return DescribeChannelUsersResponse
       */
      Models::DescribeChannelUsersResponse describeChannelUsers(const Models::DescribeChannelUsersRequest &request);

      /**
       * @summary Queries the resource usage data of specific domain names in a specified billable region.
       *
       * @description * You can query the resource usage data of up to 100 domain names at a time. Separate multiple domain names with commas (,). If you do not specify the DomainName parameter, the resource usage data of all domain names within your Alibaba Cloud account is returned.
       * * The resource usage data includes network traffic that is measured in bytes, bandwidth that is measured in bit/s, and the number of requests.
       * * If you do not specify the Interval parameter, you can query the resource usage data in the last 12 months that spans a period of up to 31 days per call. If you specify a time range of 1 to 3 days in a call, the time interval between the entries that are returned is 1 hour. If you specify a time range of more than 3 days in a call, the time interval between the entries that are returned is 1 day.
       * * The following table describes the maximum time range per query, the time period within which historical data is available, and the data delay if you specify the Interval parameter.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|90 days|366 days|04:00 on the next day|
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeDomainUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainUsageDataResponse
       */
      Models::DescribeDomainUsageDataResponse describeDomainUsageDataWithOptions(const Models::DescribeDomainUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource usage data of specific domain names in a specified billable region.
       *
       * @description * You can query the resource usage data of up to 100 domain names at a time. Separate multiple domain names with commas (,). If you do not specify the DomainName parameter, the resource usage data of all domain names within your Alibaba Cloud account is returned.
       * * The resource usage data includes network traffic that is measured in bytes, bandwidth that is measured in bit/s, and the number of requests.
       * * If you do not specify the Interval parameter, you can query the resource usage data in the last 12 months that spans a period of up to 31 days per call. If you specify a time range of 1 to 3 days in a call, the time interval between the entries that are returned is 1 hour. If you specify a time range of more than 3 days in a call, the time interval between the entries that are returned is 1 day.
       * * The following table describes the maximum time range per query, the time period within which historical data is available, and the data delay if you specify the Interval parameter.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|90 days|366 days|04:00 on the next day|
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeDomainUsageDataRequest
       * @return DescribeDomainUsageDataResponse
       */
      Models::DescribeDomainUsageDataResponse describeDomainUsageData(const Models::DescribeDomainUsageDataRequest &request);

      /**
       * @summary Obtains domain integrity.
       *
       * @description You can call this operation to obtain domain integrity.
       * ## [](#qps-)QPS limits
       * You can call this API operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeDomainWithIntegrityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainWithIntegrityResponse
       */
      Models::DescribeDomainWithIntegrityResponse describeDomainWithIntegrityWithOptions(const Models::DescribeDomainWithIntegrityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains domain integrity.
       *
       * @description You can call this operation to obtain domain integrity.
       * ## [](#qps-)QPS limits
       * You can call this API operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeDomainWithIntegrityRequest
       * @return DescribeDomainWithIntegrityResponse
       */
      Models::DescribeDomainWithIntegrityResponse describeDomainWithIntegrity(const Models::DescribeDomainWithIntegrityRequest &request);

      /**
       * @summary Queries the information about HTTP Live Streaming (HLS) streams, such as the number of online users and bandwidth.
       *
       * @description You can call this operation to query the information about HTTP Live Streaming (HLS) streams, such as the number of online users and bandwidth.
       * *   The number of online users for an HLS stream is counted based on the universally unique identifiers (UUIDs) of users that are placed after the M3U8 URL.
       * *   You can query the data of up to 100 domain names in a single request. If the DomainName parameter is left empty, the data of all domain names under the account is queried.
       *
       * @param request DescribeHlsLiveStreamRealTimeBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHlsLiveStreamRealTimeBpsDataResponse
       */
      Models::DescribeHlsLiveStreamRealTimeBpsDataResponse describeHlsLiveStreamRealTimeBpsDataWithOptions(const Models::DescribeHlsLiveStreamRealTimeBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about HTTP Live Streaming (HLS) streams, such as the number of online users and bandwidth.
       *
       * @description You can call this operation to query the information about HTTP Live Streaming (HLS) streams, such as the number of online users and bandwidth.
       * *   The number of online users for an HLS stream is counted based on the universally unique identifiers (UUIDs) of users that are placed after the M3U8 URL.
       * *   You can query the data of up to 100 domain names in a single request. If the DomainName parameter is left empty, the data of all domain names under the account is queried.
       *
       * @param request DescribeHlsLiveStreamRealTimeBpsDataRequest
       * @return DescribeHlsLiveStreamRealTimeBpsDataResponse
       */
      Models::DescribeHlsLiveStreamRealTimeBpsDataResponse describeHlsLiveStreamRealTimeBpsData(const Models::DescribeHlsLiveStreamRealTimeBpsDataRequest &request);

      /**
       * @summary Queries subtitle rules.
       *
       * @description You can call this operation to query subtitle rules. Make sure that the parameter settings meet the requirements.
       * >  The live subtitles feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveAIProduceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveAIProduceRulesResponse
       */
      Models::DescribeLiveAIProduceRulesResponse describeLiveAIProduceRulesWithOptions(const Models::DescribeLiveAIProduceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries subtitle rules.
       *
       * @description You can call this operation to query subtitle rules. Make sure that the parameter settings meet the requirements.
       * >  The live subtitles feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveAIProduceRulesRequest
       * @return DescribeLiveAIProduceRulesResponse
       */
      Models::DescribeLiveAIProduceRulesResponse describeLiveAIProduceRules(const Models::DescribeLiveAIProduceRulesRequest &request);

      /**
       * @summary Queries the virtual studio templates within your Alibaba Cloud account.
       *
       * @param request DescribeLiveAIStudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveAIStudioResponse
       */
      Models::DescribeLiveAIStudioResponse describeLiveAIStudioWithOptions(const Models::DescribeLiveAIStudioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual studio templates within your Alibaba Cloud account.
       *
       * @param request DescribeLiveAIStudioRequest
       * @return DescribeLiveAIStudioResponse
       */
      Models::DescribeLiveAIStudioResponse describeLiveAIStudio(const Models::DescribeLiveAIStudioRequest &request);

      /**
       * @summary Queries subtitle templates.
       *
       * @description This interface supports querying the list of subtitle template information with specified pagination parameters. Ensure that the parameter settings meet the requirements when calling.
       * >Notice: The real-time subtitle function is currently in the beta testing phase, and each user can add up to 300 subtitle templates. 
       * ## QPS Limit 
       * The QPS limit for this interface per user is 60 times/second. Exceeding this limit will result in API calls being throttled, which may impact your business operations. Please use it reasonably. For more information, refer to [QPS Limitation](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveAISubtitleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveAISubtitleResponse
       */
      Models::DescribeLiveAISubtitleResponse describeLiveAISubtitleWithOptions(const Models::DescribeLiveAISubtitleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries subtitle templates.
       *
       * @description This interface supports querying the list of subtitle template information with specified pagination parameters. Ensure that the parameter settings meet the requirements when calling.
       * >Notice: The real-time subtitle function is currently in the beta testing phase, and each user can add up to 300 subtitle templates. 
       * ## QPS Limit 
       * The QPS limit for this interface per user is 60 times/second. Exceeding this limit will result in API calls being throttled, which may impact your business operations. Please use it reasonably. For more information, refer to [QPS Limitation](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveAISubtitleRequest
       * @return DescribeLiveAISubtitleResponse
       */
      Models::DescribeLiveAISubtitleResponse describeLiveAISubtitle(const Models::DescribeLiveAISubtitleRequest &request);

      /**
       * @summary Queries audio moderation configurations.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to query audio moderation configurations.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveAudioAuditConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveAudioAuditConfigResponse
       */
      Models::DescribeLiveAudioAuditConfigResponse describeLiveAudioAuditConfigWithOptions(const Models::DescribeLiveAudioAuditConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries audio moderation configurations.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to query audio moderation configurations.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveAudioAuditConfigRequest
       * @return DescribeLiveAudioAuditConfigResponse
       */
      Models::DescribeLiveAudioAuditConfigResponse describeLiveAudioAuditConfig(const Models::DescribeLiveAudioAuditConfigRequest &request);

      /**
       * @summary Queries the configuration of callbacks for audio moderation results.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to query the configuration of callbacks for audio moderation results.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveAudioAuditNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveAudioAuditNotifyConfigResponse
       */
      Models::DescribeLiveAudioAuditNotifyConfigResponse describeLiveAudioAuditNotifyConfigWithOptions(const Models::DescribeLiveAudioAuditNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of callbacks for audio moderation results.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to query the configuration of callbacks for audio moderation results.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveAudioAuditNotifyConfigRequest
       * @return DescribeLiveAudioAuditNotifyConfigResponse
       */
      Models::DescribeLiveAudioAuditNotifyConfigResponse describeLiveAudioAuditNotifyConfig(const Models::DescribeLiveAudioAuditNotifyConfigRequest &request);

      /**
       * @param request DescribeLiveCdnDiagnoseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveCdnDiagnoseInfoResponse
       */
      Models::DescribeLiveCdnDiagnoseInfoResponse describeLiveCdnDiagnoseInfoWithOptions(const Models::DescribeLiveCdnDiagnoseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeLiveCdnDiagnoseInfoRequest
       * @return DescribeLiveCdnDiagnoseInfoResponse
       */
      Models::DescribeLiveCdnDiagnoseInfoResponse describeLiveCdnDiagnoseInfo(const Models::DescribeLiveCdnDiagnoseInfoRequest &request);

      /**
       * @summary Queries the audio and video frame rates and bitrates of a stream in a live center.
       *
       * @description The time granularity for the returned data is 5 seconds. The maximum time range to query is 3 hours. You can query data in the last 30 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveCenterStreamRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveCenterStreamRateDataResponse
       */
      Models::DescribeLiveCenterStreamRateDataResponse describeLiveCenterStreamRateDataWithOptions(const Models::DescribeLiveCenterStreamRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audio and video frame rates and bitrates of a stream in a live center.
       *
       * @description The time granularity for the returned data is 5 seconds. The maximum time range to query is 3 hours. You can query data in the last 30 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveCenterStreamRateDataRequest
       * @return DescribeLiveCenterStreamRateDataResponse
       */
      Models::DescribeLiveCenterStreamRateDataResponse describeLiveCenterStreamRateData(const Models::DescribeLiveCenterStreamRateDataRequest &request);

      /**
       * @summary Queries the information about a configuration of live center stream relay.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveCenterTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveCenterTransferResponse
       */
      Models::DescribeLiveCenterTransferResponse describeLiveCenterTransferWithOptions(const Models::DescribeLiveCenterTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a configuration of live center stream relay.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveCenterTransferRequest
       * @return DescribeLiveCenterTransferResponse
       */
      Models::DescribeLiveCenterTransferResponse describeLiveCenterTransfer(const Models::DescribeLiveCenterTransferRequest &request);

      /**
       * @summary Queries the details of a certificate.
       *
       * @description You can obtain the certificate name on the [Certificates](https://help.aliyun.com/document_detail/2584962.html) page of the ApsaraVideo Live console and then call this operation to query the certificate details.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveCertificateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveCertificateDetailResponse
       */
      Models::DescribeLiveCertificateDetailResponse describeLiveCertificateDetailWithOptions(const Models::DescribeLiveCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a certificate.
       *
       * @description You can obtain the certificate name on the [Certificates](https://help.aliyun.com/document_detail/2584962.html) page of the ApsaraVideo Live console and then call this operation to query the certificate details.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveCertificateDetailRequest
       * @return DescribeLiveCertificateDetailResponse
       */
      Models::DescribeLiveCertificateDetailResponse describeLiveCertificateDetail(const Models::DescribeLiveCertificateDetailRequest &request);

      /**
       * @summary Queries the certificates of one or more specified domain names or all certificates within your Alibaba Cloud account.
       *
       * @description If you specify one or more domain names in the request, the certificates of the domain names are returned. If you do not specify a domain name in the request, all certificates within your Alibaba Cloud account are returned.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveCertificateListResponse
       */
      Models::DescribeLiveCertificateListResponse describeLiveCertificateListWithOptions(const Models::DescribeLiveCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificates of one or more specified domain names or all certificates within your Alibaba Cloud account.
       *
       * @description If you specify one or more domain names in the request, the certificates of the domain names are returned. If you do not specify a domain name in the request, all certificates within your Alibaba Cloud account are returned.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveCertificateListRequest
       * @return DescribeLiveCertificateListResponse
       */
      Models::DescribeLiveCertificateListResponse describeLiveCertificateList(const Models::DescribeLiveCertificateListRequest &request);

      /**
       * @summary Queries the information about a stream delay configuration.
       *
       * @description ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDelayConfigResponse
       */
      Models::DescribeLiveDelayConfigResponse describeLiveDelayConfigWithOptions(const Models::DescribeLiveDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a stream delay configuration.
       *
       * @description ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDelayConfigRequest
       * @return DescribeLiveDelayConfigResponse
       */
      Models::DescribeLiveDelayConfigResponse describeLiveDelayConfig(const Models::DescribeLiveDelayConfigRequest &request);

      /**
       * @summary Queries the stream delay usage data.
       *
       * @description *   You can call this operation to query your stream delay usage data. The default time granularity is 1 hour.
       * *   The maximum time range for a query is 31 days.
       * *   The minimum time granularity for a query is 1 hour.
       * *   You can query the data in the last 31 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDelayedStreamingUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDelayedStreamingUsageResponse
       */
      Models::DescribeLiveDelayedStreamingUsageResponse describeLiveDelayedStreamingUsageWithOptions(const Models::DescribeLiveDelayedStreamingUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stream delay usage data.
       *
       * @description *   You can call this operation to query your stream delay usage data. The default time granularity is 1 hour.
       * *   The maximum time range for a query is 31 days.
       * *   The minimum time granularity for a query is 1 hour.
       * *   You can query the data in the last 31 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDelayedStreamingUsageRequest
       * @return DescribeLiveDelayedStreamingUsageResponse
       */
      Models::DescribeLiveDelayedStreamingUsageResponse describeLiveDelayedStreamingUsage(const Models::DescribeLiveDelayedStreamingUsageRequest &request);

      /**
       * @summary Queries the configuration of callbacks for video moderation results.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to query the configuration of callbacks for video moderation results.
       * *   Only some live centers support the automated review feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request DescribeLiveDetectNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDetectNotifyConfigResponse
       */
      Models::DescribeLiveDetectNotifyConfigResponse describeLiveDetectNotifyConfigWithOptions(const Models::DescribeLiveDetectNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of callbacks for video moderation results.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to query the configuration of callbacks for video moderation results.
       * *   Only some live centers support the automated review feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request DescribeLiveDetectNotifyConfigRequest
       * @return DescribeLiveDetectNotifyConfigResponse
       */
      Models::DescribeLiveDetectNotifyConfigResponse describeLiveDetectNotifyConfig(const Models::DescribeLiveDetectNotifyConfigRequest &request);

      /**
       * @summary Queries the usage data of content moderation.
       *
       * @description *   The minimum data granularity is 5 minutes. If you do not specify the `StartTime` parameter, data in the last 24 hours is queried.
       * *   You can query data in the last 90 days.
       * *   You can call this operation to query the bandwidth at each interval.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDetectPornDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDetectPornDataResponse
       */
      Models::DescribeLiveDetectPornDataResponse describeLiveDetectPornDataWithOptions(const Models::DescribeLiveDetectPornDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage data of content moderation.
       *
       * @description *   The minimum data granularity is 5 minutes. If you do not specify the `StartTime` parameter, data in the last 24 hours is queried.
       * *   You can query data in the last 90 days.
       * *   You can call this operation to query the bandwidth at each interval.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDetectPornDataRequest
       * @return DescribeLiveDetectPornDataResponse
       */
      Models::DescribeLiveDetectPornDataResponse describeLiveDetectPornData(const Models::DescribeLiveDetectPornDataRequest &request);

      /**
       * @summary Queries the bandwidth data for one or more streaming domains.
       *
       * @description *   You can specify both the StartTime and EndTime parameters to query the data in the specified period of time. If you do not specify the StartTime and EndTime parameters, the data of the last hour is queried by default.
       * *   If you specify only the StartTime parameter but not the EndTime parameter, the data of the hour following the specified start time is queried.
       * *   If you specify only the EndTime parameter but not the StartTime parameter, the data of the hour preceding the specified end time is queried.
       * *   You can query the data in the last 90 days.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainBpsDataResponse
       */
      Models::DescribeLiveDomainBpsDataResponse describeLiveDomainBpsDataWithOptions(const Models::DescribeLiveDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth data for one or more streaming domains.
       *
       * @description *   You can specify both the StartTime and EndTime parameters to query the data in the specified period of time. If you do not specify the StartTime and EndTime parameters, the data of the last hour is queried by default.
       * *   If you specify only the StartTime parameter but not the EndTime parameter, the data of the hour following the specified start time is queried.
       * *   If you specify only the EndTime parameter but not the StartTime parameter, the data of the hour preceding the specified end time is queried.
       * *   You can query the data in the last 90 days.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainBpsDataRequest
       * @return DescribeLiveDomainBpsDataResponse
       */
      Models::DescribeLiveDomainBpsDataResponse describeLiveDomainBpsData(const Models::DescribeLiveDomainBpsDataRequest &request);

      /**
       * @summary Queries the bandwidth and traffic data by protocol for one or more domain names.
       *
       * @description You can query data in the last 90 days. You can specify up to 500 domain names. Separate multiple domain names with commas (,). The data of multiple domain names is aggregated and returned. The following section describes the time granularities of the data entries returned depending on the time range specified by the **StartTime** and **EndTime** parameters:
       * *   If the time range is smaller than or equal to 3 days, the time granularity is 5 minutes.
       * *   If the time range is larger than 3 days but smaller than or equal to 31 days, the time granularity is 1 hour.
       * *   If the time range is larger than 31 days, the time granularity is 1 day.
       * >  If neither the **StartTime** nor the **EndTime** parameter is specified, the data of the last 24 hours is returned.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainBpsDataByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainBpsDataByLayerResponse
       */
      Models::DescribeLiveDomainBpsDataByLayerResponse describeLiveDomainBpsDataByLayerWithOptions(const Models::DescribeLiveDomainBpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth and traffic data by protocol for one or more domain names.
       *
       * @description You can query data in the last 90 days. You can specify up to 500 domain names. Separate multiple domain names with commas (,). The data of multiple domain names is aggregated and returned. The following section describes the time granularities of the data entries returned depending on the time range specified by the **StartTime** and **EndTime** parameters:
       * *   If the time range is smaller than or equal to 3 days, the time granularity is 5 minutes.
       * *   If the time range is larger than 3 days but smaller than or equal to 31 days, the time granularity is 1 hour.
       * *   If the time range is larger than 31 days, the time granularity is 1 day.
       * >  If neither the **StartTime** nor the **EndTime** parameter is specified, the data of the last 24 hours is returned.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainBpsDataByLayerRequest
       * @return DescribeLiveDomainBpsDataByLayerResponse
       */
      Models::DescribeLiveDomainBpsDataByLayerResponse describeLiveDomainBpsDataByLayer(const Models::DescribeLiveDomainBpsDataByLayerRequest &request);

      /**
       * @summary Queries the accelerated domain names that match a certificate.
       *
       * @description You can call this operation to query the accelerated domain names that match a certificate.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainByCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainByCertificateResponse
       */
      Models::DescribeLiveDomainByCertificateResponse describeLiveDomainByCertificateWithOptions(const Models::DescribeLiveDomainByCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accelerated domain names that match a certificate.
       *
       * @description You can call this operation to query the accelerated domain names that match a certificate.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainByCertificateRequest
       * @return DescribeLiveDomainByCertificateResponse
       */
      Models::DescribeLiveDomainByCertificateResponse describeLiveDomainByCertificate(const Models::DescribeLiveDomainByCertificateRequest &request);

      /**
       * @summary Queries certificate information about a domain name.
       *
       * @description Obtain a domain name, and then call this operation to query certificate information about the domain name.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainCertificateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainCertificateInfoResponse
       */
      Models::DescribeLiveDomainCertificateInfoResponse describeLiveDomainCertificateInfoWithOptions(const Models::DescribeLiveDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries certificate information about a domain name.
       *
       * @description Obtain a domain name, and then call this operation to query certificate information about the domain name.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainCertificateInfoRequest
       * @return DescribeLiveDomainCertificateInfoResponse
       */
      Models::DescribeLiveDomainCertificateInfoResponse describeLiveDomainCertificateInfo(const Models::DescribeLiveDomainCertificateInfoRequest &request);

      /**
       * @summary Queries one or more configurations of a domain name.
       *
       * @description You can call this operation to query multiple configurations at a time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainConfigsResponse
       */
      Models::DescribeLiveDomainConfigsResponse describeLiveDomainConfigsWithOptions(const Models::DescribeLiveDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more configurations of a domain name.
       *
       * @description You can call this operation to query multiple configurations at a time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainConfigsRequest
       * @return DescribeLiveDomainConfigsResponse
       */
      Models::DescribeLiveDomainConfigsResponse describeLiveDomainConfigs(const Models::DescribeLiveDomainConfigsRequest &request);

      /**
       * @summary Queries the basic information about a domain name.
       *
       * @description ## [](#)Usage notes
       * You can call this operation to query the basic information about an ingest domain or a streaming domain. If you want to query a newly added domain name, wait a few minutes until the configuration of the domain name is completed in ApsaraVideo Live.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainDetailResponse
       */
      Models::DescribeLiveDomainDetailResponse describeLiveDomainDetailWithOptions(const Models::DescribeLiveDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about a domain name.
       *
       * @description ## [](#)Usage notes
       * You can call this operation to query the basic information about an ingest domain or a streaming domain. If you want to query a newly added domain name, wait a few minutes until the configuration of the domain name is completed in ApsaraVideo Live.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainDetailRequest
       * @return DescribeLiveDomainDetailResponse
       */
      Models::DescribeLiveDomainDetailResponse describeLiveDomainDetail(const Models::DescribeLiveDomainDetailRequest &request);

      /**
       * @summary 直播离线日志查询地址
       *
       * @param request DescribeLiveDomainEdgeLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainEdgeLogResponse
       */
      Models::DescribeLiveDomainEdgeLogResponse describeLiveDomainEdgeLogWithOptions(const Models::DescribeLiveDomainEdgeLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 直播离线日志查询地址
       *
       * @param request DescribeLiveDomainEdgeLogRequest
       * @return DescribeLiveDomainEdgeLogResponse
       */
      Models::DescribeLiveDomainEdgeLogResponse describeLiveDomainEdgeLog(const Models::DescribeLiveDomainEdgeLogRequest &request);

      /**
       * @summary Queries the frame rates and bitrates of all live streams under an ingest domain.
       *
       * @description You can call this operation to query the real-time bitrates and frame rates of live streams, which helps you evaluate the stream ingest quality. A delay exists in data collection and statistics. We recommend that you query the data of more than 5 minutes ago.
       * >  Use this operation to replace the deprecated DescribeLiveStreamsFrameRateAndBitRateData operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainFrameRateAndBitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainFrameRateAndBitRateDataResponse
       */
      Models::DescribeLiveDomainFrameRateAndBitRateDataResponse describeLiveDomainFrameRateAndBitRateDataWithOptions(const Models::DescribeLiveDomainFrameRateAndBitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the frame rates and bitrates of all live streams under an ingest domain.
       *
       * @description You can call this operation to query the real-time bitrates and frame rates of live streams, which helps you evaluate the stream ingest quality. A delay exists in data collection and statistics. We recommend that you query the data of more than 5 minutes ago.
       * >  Use this operation to replace the deprecated DescribeLiveStreamsFrameRateAndBitRateData operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainFrameRateAndBitRateDataRequest
       * @return DescribeLiveDomainFrameRateAndBitRateDataResponse
       */
      Models::DescribeLiveDomainFrameRateAndBitRateDataResponse describeLiveDomainFrameRateAndBitRateData(const Models::DescribeLiveDomainFrameRateAndBitRateDataRequest &request);

      /**
       * @summary Queries the maximum numbers of ingested and transcoded streams for a streaming domain.
       *
       * @description This operation applies only to main streaming domains.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainLimitResponse
       */
      Models::DescribeLiveDomainLimitResponse describeLiveDomainLimitWithOptions(const Models::DescribeLiveDomainLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum numbers of ingested and transcoded streams for a streaming domain.
       *
       * @description This operation applies only to main streaming domains.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainLimitRequest
       * @return DescribeLiveDomainLimitResponse
       */
      Models::DescribeLiveDomainLimitResponse describeLiveDomainLimit(const Models::DescribeLiveDomainLimitRequest &request);

      /**
       * @summary Queries the address from which you can download the raw access logs of a domain name.
       *
       * @description *   You can call this operation to query the offline logs of a single domain name.
       * *   The StartTime and EndTime parameters are optional. You can specify both the parameters to query logs that are generated within the specified time period.
       * *   If you do not specify the StartTime and EndTime parameters, logs that are generated in the last 24 hours are queried by default.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainLogResponse
       */
      Models::DescribeLiveDomainLogResponse describeLiveDomainLogWithOptions(const Models::DescribeLiveDomainLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the address from which you can download the raw access logs of a domain name.
       *
       * @description *   You can call this operation to query the offline logs of a single domain name.
       * *   The StartTime and EndTime parameters are optional. You can specify both the parameters to query logs that are generated within the specified time period.
       * *   If you do not specify the StartTime and EndTime parameters, logs that are generated in the last 24 hours are queried by default.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainLogRequest
       * @return DescribeLiveDomainLogResponse
       */
      Models::DescribeLiveDomainLogResponse describeLiveDomainLog(const Models::DescribeLiveDomainLogRequest &request);

      /**
       * @summary 直播离线日志扩展接口(大客定制)
       *
       * @param request DescribeLiveDomainLogExTtlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainLogExTtlResponse
       */
      Models::DescribeLiveDomainLogExTtlResponse describeLiveDomainLogExTtlWithOptions(const Models::DescribeLiveDomainLogExTtlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 直播离线日志扩展接口(大客定制)
       *
       * @param request DescribeLiveDomainLogExTtlRequest
       * @return DescribeLiveDomainLogExTtlResponse
       */
      Models::DescribeLiveDomainLogExTtlResponse describeLiveDomainLogExTtl(const Models::DescribeLiveDomainLogExTtlRequest &request);

      /**
       * @summary Queries the mappings of an ingest domain, a main streaming domain, or a sub-streaming domain.
       *
       * @description Obtain the ingest domain, main streaming domain, or sub-streaming domain, and then call this operation to query the mappings of the domain name.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 500 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainMappingResponse
       */
      Models::DescribeLiveDomainMappingResponse describeLiveDomainMappingWithOptions(const Models::DescribeLiveDomainMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the mappings of an ingest domain, a main streaming domain, or a sub-streaming domain.
       *
       * @description Obtain the ingest domain, main streaming domain, or sub-streaming domain, and then call this operation to query the mappings of the domain name.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 500 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainMappingRequest
       * @return DescribeLiveDomainMappingResponse
       */
      Models::DescribeLiveDomainMappingResponse describeLiveDomainMapping(const Models::DescribeLiveDomainMappingRequest &request);

      /**
       * @summary Queries the live monitoring usage data for one or more domain names.
       *
       * @description *   You can specify one or more domain names. Separate multiple domain names with commas (,).
       * *   You can query data in the last 90 days.
       * *   The data is queried by hour or day.
       * *   The maximum time range for a query is 31 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainMonitoringUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainMonitoringUsageDataResponse
       */
      Models::DescribeLiveDomainMonitoringUsageDataResponse describeLiveDomainMonitoringUsageDataWithOptions(const Models::DescribeLiveDomainMonitoringUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the live monitoring usage data for one or more domain names.
       *
       * @description *   You can specify one or more domain names. Separate multiple domain names with commas (,).
       * *   You can query data in the last 90 days.
       * *   The data is queried by hour or day.
       * *   The maximum time range for a query is 31 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainMonitoringUsageDataRequest
       * @return DescribeLiveDomainMonitoringUsageDataResponse
       */
      Models::DescribeLiveDomainMonitoringUsageDataResponse describeLiveDomainMonitoringUsageData(const Models::DescribeLiveDomainMonitoringUsageDataRequest &request);

      /**
       * @summary Queries the configuration status of dual-stream disaster recovery.
       *
       * @param request DescribeLiveDomainMultiStreamConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainMultiStreamConfigResponse
       */
      Models::DescribeLiveDomainMultiStreamConfigResponse describeLiveDomainMultiStreamConfigWithOptions(const Models::DescribeLiveDomainMultiStreamConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration status of dual-stream disaster recovery.
       *
       * @param request DescribeLiveDomainMultiStreamConfigRequest
       * @return DescribeLiveDomainMultiStreamConfigResponse
       */
      Models::DescribeLiveDomainMultiStreamConfigResponse describeLiveDomainMultiStreamConfig(const Models::DescribeLiveDomainMultiStreamConfigRequest &request);

      /**
       * @summary Queries the number of online users at a specified point in time for all live streams under a specified domain name.
       *
       * @description You can call this operation to collect statistics on the number of online users for only Flash Video (FLV), Real-Time Streaming (RTS), and Real-Time Messaging Protocol (RTMP) streams, but not HTTP Live Streaming (HLS) streams. A delay exists in data collection and statistics. We recommend that you query the data of more than 5 minutes ago.
       * >  Use this operation to replace the deprecated DescribeLiveStreamOnlineUserNum operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 200 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainOnlineUserNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainOnlineUserNumResponse
       */
      Models::DescribeLiveDomainOnlineUserNumResponse describeLiveDomainOnlineUserNumWithOptions(const Models::DescribeLiveDomainOnlineUserNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of online users at a specified point in time for all live streams under a specified domain name.
       *
       * @description You can call this operation to collect statistics on the number of online users for only Flash Video (FLV), Real-Time Streaming (RTS), and Real-Time Messaging Protocol (RTMP) streams, but not HTTP Live Streaming (HLS) streams. A delay exists in data collection and statistics. We recommend that you query the data of more than 5 minutes ago.
       * >  Use this operation to replace the deprecated DescribeLiveStreamOnlineUserNum operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 200 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainOnlineUserNumRequest
       * @return DescribeLiveDomainOnlineUserNumResponse
       */
      Models::DescribeLiveDomainOnlineUserNumResponse describeLiveDomainOnlineUserNum(const Models::DescribeLiveDomainOnlineUserNumRequest &request);

      /**
       * @summary Queries the HTTP status codes that are returned within a specified period of time under an ingest domain.
       *
       * @description *   This operation is used to monitor data. The returned data cannot be used as a reference to calculate resource usage for billing.
       * *   You can query data within the previous 90 days.
       * *   The data is delayed for 3 to 5 minutes.
       * ## [](#qps-)QPS limits
       * You can call this API operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainPublishErrorCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainPublishErrorCodeResponse
       */
      Models::DescribeLiveDomainPublishErrorCodeResponse describeLiveDomainPublishErrorCodeWithOptions(const Models::DescribeLiveDomainPublishErrorCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the HTTP status codes that are returned within a specified period of time under an ingest domain.
       *
       * @description *   This operation is used to monitor data. The returned data cannot be used as a reference to calculate resource usage for billing.
       * *   You can query data within the previous 90 days.
       * *   The data is delayed for 3 to 5 minutes.
       * ## [](#qps-)QPS limits
       * You can call this API operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainPublishErrorCodeRequest
       * @return DescribeLiveDomainPublishErrorCodeResponse
       */
      Models::DescribeLiveDomainPublishErrorCodeResponse describeLiveDomainPublishErrorCode(const Models::DescribeLiveDomainPublishErrorCodeRequest &request);

      /**
       * @summary Queries the bandwidth data for one or more ingest domains.
       *
       * @description *   The bandwidth unit is bit/s.
       * *   You can specify multiple domain names by separating them with commas (,).
       * *   If you do not specify the StartTime or EndTime parameter, the data of the last 24 hours is queried. You can specify both the StartTime and EndTime parameters to query the data of a specific time range.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainPushBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainPushBpsDataResponse
       */
      Models::DescribeLiveDomainPushBpsDataResponse describeLiveDomainPushBpsDataWithOptions(const Models::DescribeLiveDomainPushBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth data for one or more ingest domains.
       *
       * @description *   The bandwidth unit is bit/s.
       * *   You can specify multiple domain names by separating them with commas (,).
       * *   If you do not specify the StartTime or EndTime parameter, the data of the last 24 hours is queried. You can specify both the StartTime and EndTime parameters to query the data of a specific time range.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainPushBpsDataRequest
       * @return DescribeLiveDomainPushBpsDataResponse
       */
      Models::DescribeLiveDomainPushBpsDataResponse describeLiveDomainPushBpsData(const Models::DescribeLiveDomainPushBpsDataRequest &request);

      /**
       * @summary Queries the network traffic data for one or more ingest domains.
       *
       * @description *   The traffic unit is bytes.
       * *   You can specify multiple domain names by separating them with commas (,).
       * *   If you do not specify the StartTime or EndTime parameter, the data of the last 24 hours is queried. You can specify both the StartTime and EndTime parameters to query the data of a specific time range.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainPushTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainPushTrafficDataResponse
       */
      Models::DescribeLiveDomainPushTrafficDataResponse describeLiveDomainPushTrafficDataWithOptions(const Models::DescribeLiveDomainPushTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network traffic data for one or more ingest domains.
       *
       * @description *   The traffic unit is bytes.
       * *   You can specify multiple domain names by separating them with commas (,).
       * *   If you do not specify the StartTime or EndTime parameter, the data of the last 24 hours is queried. You can specify both the StartTime and EndTime parameters to query the data of a specific time range.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainPushTrafficDataRequest
       * @return DescribeLiveDomainPushTrafficDataResponse
       */
      Models::DescribeLiveDomainPushTrafficDataResponse describeLiveDomainPushTrafficData(const Models::DescribeLiveDomainPushTrafficDataRequest &request);

      /**
       * @summary Queries the data of page views (PVs) and unique visitors (UVs) of a streaming domain.
       *
       * @description *   You can call this operation to query the geographical distribution of viewers, the visitor ranking of a streaming domain, and the number of independent requests from IP addresses under a streaming domain within a specified time period.
       * *   If you do not specify the StartTime or EndTime parameter, the data of the last 24 hours is queried. You can specify both the StartTime and EndTime parameters to query the data of a specific time range.
       * *   You can specify only one streaming domain in each request.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainPvUvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainPvUvDataResponse
       */
      Models::DescribeLiveDomainPvUvDataResponse describeLiveDomainPvUvDataWithOptions(const Models::DescribeLiveDomainPvUvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data of page views (PVs) and unique visitors (UVs) of a streaming domain.
       *
       * @description *   You can call this operation to query the geographical distribution of viewers, the visitor ranking of a streaming domain, and the number of independent requests from IP addresses under a streaming domain within a specified time period.
       * *   If you do not specify the StartTime or EndTime parameter, the data of the last 24 hours is queried. You can specify both the StartTime and EndTime parameters to query the data of a specific time range.
       * *   You can specify only one streaming domain in each request.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainPvUvDataRequest
       * @return DescribeLiveDomainPvUvDataResponse
       */
      Models::DescribeLiveDomainPvUvDataResponse describeLiveDomainPvUvData(const Models::DescribeLiveDomainPvUvDataRequest &request);

      /**
       * @summary Queries the bandwidth data that is collected every minute for one or more domain names.
       *
       * @description *   You can call this operation to query the bandwidth usage of one or more specified domain names.
       * *   You can query data in the last seven days. The time range that is specified by the StartTime and EndTime parameters cannot exceed 24 hours for a query.
       * *   If you specify neither the StartTime parameter nor the EndTime parameter, the data of the last hour is returned.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainRealTimeBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainRealTimeBpsDataResponse
       */
      Models::DescribeLiveDomainRealTimeBpsDataResponse describeLiveDomainRealTimeBpsDataWithOptions(const Models::DescribeLiveDomainRealTimeBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth data that is collected every minute for one or more domain names.
       *
       * @description *   You can call this operation to query the bandwidth usage of one or more specified domain names.
       * *   You can query data in the last seven days. The time range that is specified by the StartTime and EndTime parameters cannot exceed 24 hours for a query.
       * *   If you specify neither the StartTime parameter nor the EndTime parameter, the data of the last hour is returned.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainRealTimeBpsDataRequest
       * @return DescribeLiveDomainRealTimeBpsDataResponse
       */
      Models::DescribeLiveDomainRealTimeBpsDataResponse describeLiveDomainRealTimeBpsData(const Models::DescribeLiveDomainRealTimeBpsDataRequest &request);

      /**
       * @summary Queries the proportions of HTTP status codes returned for one or more domain names. Data is collected every minute.
       *
       * @description The following table describes the time granularities supported by this operation.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|Usually 4 hours|
       * |1 day|Unlimited|366 days|After 04:00 on the next day|
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainRealTimeHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeLiveDomainRealTimeHttpCodeDataResponse describeLiveDomainRealTimeHttpCodeDataWithOptions(const Models::DescribeLiveDomainRealTimeHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the proportions of HTTP status codes returned for one or more domain names. Data is collected every minute.
       *
       * @description The following table describes the time granularities supported by this operation.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|Usually 4 hours|
       * |1 day|Unlimited|366 days|After 04:00 on the next day|
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainRealTimeHttpCodeDataRequest
       * @return DescribeLiveDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeLiveDomainRealTimeHttpCodeDataResponse describeLiveDomainRealTimeHttpCodeData(const Models::DescribeLiveDomainRealTimeHttpCodeDataRequest &request);

      /**
       * @summary Queries the network traffic data that is collected in real time for one or more domain names.
       *
       * @description *   You can call this operation to query the real-time traffic in a region for an Internet service provider (ISP) within a specified period of time under one or more streaming domains.
       * *   If you do not specify the StartTime parameter or the EndTime parameter, the data of the last hour is returned. You can specify both the StartTime and EndTime parameters to query the data of a specific time range.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * This operation does not have a queries per second (QPS) limit on a single user. You can call this operation based on your business requirements.
       *
       * @param request DescribeLiveDomainRealTimeTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainRealTimeTrafficDataResponse
       */
      Models::DescribeLiveDomainRealTimeTrafficDataResponse describeLiveDomainRealTimeTrafficDataWithOptions(const Models::DescribeLiveDomainRealTimeTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network traffic data that is collected in real time for one or more domain names.
       *
       * @description *   You can call this operation to query the real-time traffic in a region for an Internet service provider (ISP) within a specified period of time under one or more streaming domains.
       * *   If you do not specify the StartTime parameter or the EndTime parameter, the data of the last hour is returned. You can specify both the StartTime and EndTime parameters to query the data of a specific time range.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * This operation does not have a queries per second (QPS) limit on a single user. You can call this operation based on your business requirements.
       *
       * @param request DescribeLiveDomainRealTimeTrafficDataRequest
       * @return DescribeLiveDomainRealTimeTrafficDataResponse
       */
      Models::DescribeLiveDomainRealTimeTrafficDataResponse describeLiveDomainRealTimeTrafficData(const Models::DescribeLiveDomainRealTimeTrafficDataRequest &request);

      /**
       * @summary Queries the information about real-time log delivery for a domain name.
       *
       * @description You can call this operation to query the status of real-time log delivery for a domain name. Make sure that the parameter settings meet the requirements.
       * ## QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainRealtimeLogDeliveryResponse
       */
      Models::DescribeLiveDomainRealtimeLogDeliveryResponse describeLiveDomainRealtimeLogDeliveryWithOptions(const Models::DescribeLiveDomainRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about real-time log delivery for a domain name.
       *
       * @description You can call this operation to query the status of real-time log delivery for a domain name. Make sure that the parameter settings meet the requirements.
       * ## QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainRealtimeLogDeliveryRequest
       * @return DescribeLiveDomainRealtimeLogDeliveryResponse
       */
      Models::DescribeLiveDomainRealtimeLogDeliveryResponse describeLiveDomainRealtimeLogDelivery(const Models::DescribeLiveDomainRealtimeLogDeliveryRequest &request);

      /**
       * @summary Queries the numbers of live recording channels and container format conversions.
       *
       * @description *   You can call this operation to query the number of concurrent recording channels on each day and event tracking data at different time intervals. This way, you can measure the peak number of concurrent recording channels on each day or month.
       * *   The number of time shifting channels is not included in the number of recording channels.
       * *   You can query data by domain name or query data for multiple domain names at a time. If you specify multiple domain names, separate them with commas (,).
       * *   If you set the data granularity to 1 minute, the maximum time range to query is 24 hours. You can query data in the last 60 days.
       * *   If you set the data granularity to 1 hour, the maximum time range to query is 31 days. You can query data in the last 180 days.
       * *   If you set the data granularity to 1 day, the maximum time range to query is 90 days. You can query data in the last 366 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainRecordUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainRecordUsageDataResponse
       */
      Models::DescribeLiveDomainRecordUsageDataResponse describeLiveDomainRecordUsageDataWithOptions(const Models::DescribeLiveDomainRecordUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the numbers of live recording channels and container format conversions.
       *
       * @description *   You can call this operation to query the number of concurrent recording channels on each day and event tracking data at different time intervals. This way, you can measure the peak number of concurrent recording channels on each day or month.
       * *   The number of time shifting channels is not included in the number of recording channels.
       * *   You can query data by domain name or query data for multiple domain names at a time. If you specify multiple domain names, separate them with commas (,).
       * *   If you set the data granularity to 1 minute, the maximum time range to query is 24 hours. You can query data in the last 60 days.
       * *   If you set the data granularity to 1 hour, the maximum time range to query is 31 days. You can query data in the last 180 days.
       * *   If you set the data granularity to 1 day, the maximum time range to query is 90 days. You can query data in the last 366 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainRecordUsageDataRequest
       * @return DescribeLiveDomainRecordUsageDataResponse
       */
      Models::DescribeLiveDomainRecordUsageDataResponse describeLiveDomainRecordUsageData(const Models::DescribeLiveDomainRecordUsageDataRequest &request);

      /**
       * @summary Queries the number of snapshots for one or more streaming domains.
       *
       * @description *   You can call this operation to collect statistics on the total number of snapshots on a day.
       * *   You can query data in the last 90 days.
       * ## [](#qps-)QPS limit
       * This operation does not have a queries per second (QPS) limit on a single user. You can call this operation based on your business requirements.
       *
       * @param request DescribeLiveDomainSnapshotDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainSnapshotDataResponse
       */
      Models::DescribeLiveDomainSnapshotDataResponse describeLiveDomainSnapshotDataWithOptions(const Models::DescribeLiveDomainSnapshotDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of snapshots for one or more streaming domains.
       *
       * @description *   You can call this operation to collect statistics on the total number of snapshots on a day.
       * *   You can query data in the last 90 days.
       * ## [](#qps-)QPS limit
       * This operation does not have a queries per second (QPS) limit on a single user. You can call this operation based on your business requirements.
       *
       * @param request DescribeLiveDomainSnapshotDataRequest
       * @return DescribeLiveDomainSnapshotDataResponse
       */
      Models::DescribeLiveDomainSnapshotDataResponse describeLiveDomainSnapshotData(const Models::DescribeLiveDomainSnapshotDataRequest &request);

      /**
       * @summary Queries the feature configurations of an accelerated domain name in the canary release environment.
       *
       * @description ## [](#)Usage notes
       * You can call this operation to query the feature configurations of an accelerated domain name in the canary release environment.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainStagingConfigResponse
       */
      Models::DescribeLiveDomainStagingConfigResponse describeLiveDomainStagingConfigWithOptions(const Models::DescribeLiveDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the feature configurations of an accelerated domain name in the canary release environment.
       *
       * @description ## [](#)Usage notes
       * You can call this operation to query the feature configurations of an accelerated domain name in the canary release environment.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainStagingConfigRequest
       * @return DescribeLiveDomainStagingConfigResponse
       */
      Models::DescribeLiveDomainStagingConfigResponse describeLiveDomainStagingConfig(const Models::DescribeLiveDomainStagingConfigRequest &request);

      /**
       * @summary Queries the transcoding length for one or more domain names.
       *
       * @description *   You can call this operation to collect the transcoding usage data at each time interval.
       * *   You can specify multiple domain names by separating them with commas (,).
       * *   You can query data in the last 90 days.
       * *   The time granularity of data is 1 hour or 1 day.
       * *   For information about the billing of different transcoding types and transcoding resolutions, see the description about billing of different transcoding specifications in transcoding bills in the [Billing of live stream transcoding](https://help.aliyun.com/document_detail/90424.html) section of the ApsaraVideo Live pricing page.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainStreamTranscodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainStreamTranscodeDataResponse
       */
      Models::DescribeLiveDomainStreamTranscodeDataResponse describeLiveDomainStreamTranscodeDataWithOptions(const Models::DescribeLiveDomainStreamTranscodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the transcoding length for one or more domain names.
       *
       * @description *   You can call this operation to collect the transcoding usage data at each time interval.
       * *   You can specify multiple domain names by separating them with commas (,).
       * *   You can query data in the last 90 days.
       * *   The time granularity of data is 1 hour or 1 day.
       * *   For information about the billing of different transcoding types and transcoding resolutions, see the description about billing of different transcoding specifications in transcoding bills in the [Billing of live stream transcoding](https://help.aliyun.com/document_detail/90424.html) section of the ApsaraVideo Live pricing page.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainStreamTranscodeDataRequest
       * @return DescribeLiveDomainStreamTranscodeDataResponse
       */
      Models::DescribeLiveDomainStreamTranscodeDataResponse describeLiveDomainStreamTranscodeData(const Models::DescribeLiveDomainStreamTranscodeDataRequest &request);

      /**
       * @summary Queries the resource usage data of time shifting for one or more domain names.
       *
       * @description *   You can call this operation to query the time shifting usage data at each time interval.
       * *   You can query data in the last 90 days.
       * *   The time interval is 1 hour.
       * *   The maximum time range for a query is 31 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainTimeShiftDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainTimeShiftDataResponse
       */
      Models::DescribeLiveDomainTimeShiftDataResponse describeLiveDomainTimeShiftDataWithOptions(const Models::DescribeLiveDomainTimeShiftDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource usage data of time shifting for one or more domain names.
       *
       * @description *   You can call this operation to query the time shifting usage data at each time interval.
       * *   You can query data in the last 90 days.
       * *   The time interval is 1 hour.
       * *   The maximum time range for a query is 31 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainTimeShiftDataRequest
       * @return DescribeLiveDomainTimeShiftDataResponse
       */
      Models::DescribeLiveDomainTimeShiftDataResponse describeLiveDomainTimeShiftData(const Models::DescribeLiveDomainTimeShiftDataRequest &request);

      /**
       * @summary Queries the network traffic data for one or more domain names.
       *
       * @description *   If you do not specify the StartTime or EndTime parameter, the data of the last 24 hours is returned.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainTrafficDataResponse
       */
      Models::DescribeLiveDomainTrafficDataResponse describeLiveDomainTrafficDataWithOptions(const Models::DescribeLiveDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network traffic data for one or more domain names.
       *
       * @description *   If you do not specify the StartTime or EndTime parameter, the data of the last 24 hours is returned.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveDomainTrafficDataRequest
       * @return DescribeLiveDomainTrafficDataResponse
       */
      Models::DescribeLiveDomainTrafficDataResponse describeLiveDomainTrafficData(const Models::DescribeLiveDomainTrafficDataRequest &request);

      /**
       * @param request DescribeLiveDomainTranscodeParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainTranscodeParamsResponse
       */
      Models::DescribeLiveDomainTranscodeParamsResponse describeLiveDomainTranscodeParamsWithOptions(const Models::DescribeLiveDomainTranscodeParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeLiveDomainTranscodeParamsRequest
       * @return DescribeLiveDomainTranscodeParamsResponse
       */
      Models::DescribeLiveDomainTranscodeParamsResponse describeLiveDomainTranscodeParams(const Models::DescribeLiveDomainTranscodeParamsRequest &request);

      /**
       * @description ### [](#)Usage notes
       * *   You can query data in the previous 90 days.
       * *   The maximum time range to query is 31 days.
       * ### [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDrmUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDrmUsageDataResponse
       */
      Models::DescribeLiveDrmUsageDataResponse describeLiveDrmUsageDataWithOptions(const Models::DescribeLiveDrmUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description ### [](#)Usage notes
       * *   You can query data in the previous 90 days.
       * *   The maximum time range to query is 31 days.
       * ### [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDrmUsageDataRequest
       * @return DescribeLiveDrmUsageDataResponse
       */
      Models::DescribeLiveDrmUsageDataResponse describeLiveDrmUsageData(const Models::DescribeLiveDrmUsageDataRequest &request);

      /**
       * @summary Queries the configuration of edge stream relay.
       *
       * @description Obtain the ingest domain, and then call this operation to query the configuration of edge stream relay.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveEdgeTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveEdgeTransferResponse
       */
      Models::DescribeLiveEdgeTransferResponse describeLiveEdgeTransferWithOptions(const Models::DescribeLiveEdgeTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of edge stream relay.
       *
       * @description Obtain the ingest domain, and then call this operation to query the configuration of edge stream relay.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveEdgeTransferRequest
       * @return DescribeLiveEdgeTransferResponse
       */
      Models::DescribeLiveEdgeTransferResponse describeLiveEdgeTransfer(const Models::DescribeLiveEdgeTransferRequest &request);

      /**
       * @summary Queries the co-streaming usage data.
       *
       * @description *   The maximum time range for a query is 31 days.
       * *   The minimum time granularity for a query is 5 minutes.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveGrtnDurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveGrtnDurationResponse
       */
      Models::DescribeLiveGrtnDurationResponse describeLiveGrtnDurationWithOptions(const Models::DescribeLiveGrtnDurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the co-streaming usage data.
       *
       * @description *   The maximum time range for a query is 31 days.
       * *   The minimum time granularity for a query is 5 minutes.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveGrtnDurationRequest
       * @return DescribeLiveGrtnDurationResponse
       */
      Models::DescribeLiveGrtnDurationResponse describeLiveGrtnDuration(const Models::DescribeLiveGrtnDurationRequest &request);

      /**
       * @summary Queries the information about all certificates that you have configured.
       *
       * @description You can call this operation to query the information about all certificates that you have configured.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveHttpsDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveHttpsDomainListResponse
       */
      Models::DescribeLiveHttpsDomainListResponse describeLiveHttpsDomainListWithOptions(const Models::DescribeLiveHttpsDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all certificates that you have configured.
       *
       * @description You can call this operation to query the information about all certificates that you have configured.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveHttpsDomainListRequest
       * @return DescribeLiveHttpsDomainListResponse
       */
      Models::DescribeLiveHttpsDomainListResponse describeLiveHttpsDomainList(const Models::DescribeLiveHttpsDomainListRequest &request);

      /**
       * @summary Queries the metric data of ApsaraVideo Real-time Communication (ARTC).
       *
       * @description *   You can query data in the last 30 days. The time range for a query cannot exceed 24 hours.
       * *   The time granularity for a query is 5 minutes.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveInteractionMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveInteractionMetricDataResponse
       */
      Models::DescribeLiveInteractionMetricDataResponse describeLiveInteractionMetricDataWithOptions(const Models::DescribeLiveInteractionMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metric data of ApsaraVideo Real-time Communication (ARTC).
       *
       * @description *   You can query data in the last 30 days. The time range for a query cannot exceed 24 hours.
       * *   The time granularity for a query is 5 minutes.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveInteractionMetricDataRequest
       * @return DescribeLiveInteractionMetricDataResponse
       */
      Models::DescribeLiveInteractionMetricDataResponse describeLiveInteractionMetricData(const Models::DescribeLiveInteractionMetricDataRequest &request);

      /**
       * @summary Checks whether a specified IP address belongs to an Alibaba Cloud point of presence (POP).
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveIpInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveIpInfoResponse
       */
      Models::DescribeLiveIpInfoResponse describeLiveIpInfoWithOptions(const Models::DescribeLiveIpInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a specified IP address belongs to an Alibaba Cloud point of presence (POP).
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveIpInfoRequest
       * @return DescribeLiveIpInfoResponse
       */
      Models::DescribeLiveIpInfoResponse describeLiveIpInfo(const Models::DescribeLiveIpInfoRequest &request);

      /**
       * @summary Queries the configurations of triggered stream pulling for a streaming domain.
       *
       * @description ##
       * This operation is applicable to regular stream pulling. You can call this operation to query the configurations of regular stream pulling for a domain name.
       * ## QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveLazyPullStreamConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveLazyPullStreamConfigResponse
       */
      Models::DescribeLiveLazyPullStreamConfigResponse describeLiveLazyPullStreamConfigWithOptions(const Models::DescribeLiveLazyPullStreamConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of triggered stream pulling for a streaming domain.
       *
       * @description ##
       * This operation is applicable to regular stream pulling. You can call this operation to query the configurations of regular stream pulling for a domain name.
       * ## QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveLazyPullStreamConfigRequest
       * @return DescribeLiveLazyPullStreamConfigResponse
       */
      Models::DescribeLiveLazyPullStreamConfigResponse describeLiveLazyPullStreamConfig(const Models::DescribeLiveLazyPullStreamConfigRequest &request);

      /**
       * @summary Query Interactive Message App
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveMessageAppResponse
       */
      Models::DescribeLiveMessageAppResponse describeLiveMessageAppWithOptions(const Models::DescribeLiveMessageAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Interactive Message App
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveMessageAppRequest
       * @return DescribeLiveMessageAppResponse
       */
      Models::DescribeLiveMessageAppResponse describeLiveMessageApp(const Models::DescribeLiveMessageAppRequest &request);

      /**
       * @summary Queries the information about an interactive messaging group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848162.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveMessageGroupResponse
       */
      Models::DescribeLiveMessageGroupResponse describeLiveMessageGroupWithOptions(const Models::DescribeLiveMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an interactive messaging group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848162.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveMessageGroupRequest
       * @return DescribeLiveMessageGroupResponse
       */
      Models::DescribeLiveMessageGroupResponse describeLiveMessageGroup(const Models::DescribeLiveMessageGroupRequest &request);

      /**
       * @summary Queries the mute status of users.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveMessageGroupBandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveMessageGroupBandResponse
       */
      Models::DescribeLiveMessageGroupBandResponse describeLiveMessageGroupBandWithOptions(const Models::DescribeLiveMessageGroupBandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the mute status of users.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveMessageGroupBandRequest
       * @return DescribeLiveMessageGroupBandResponse
       */
      Models::DescribeLiveMessageGroupBandResponse describeLiveMessageGroupBand(const Models::DescribeLiveMessageGroupBandRequest &request);

      /**
       * @description Obtain the main streaming domain, and then call this operation to query live stream encapsulation configurations.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 300 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePackageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePackageConfigResponse
       */
      Models::DescribeLivePackageConfigResponse describeLivePackageConfigWithOptions(const Models::DescribeLivePackageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description Obtain the main streaming domain, and then call this operation to query live stream encapsulation configurations.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 300 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePackageConfigRequest
       * @return DescribeLivePackageConfigResponse
       */
      Models::DescribeLivePackageConfigResponse describeLivePackageConfig(const Models::DescribeLivePackageConfigRequest &request);

      /**
       * @summary Queries available access points where acceleration circuits start.
       *
       * @description Before you call the CreateLivePrivateLine operation, you can call this operation to query available acceleration regions, which are access points where acceleration circuits start.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePrivateLineAreasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePrivateLineAreasResponse
       */
      Models::DescribeLivePrivateLineAreasResponse describeLivePrivateLineAreasWithOptions(const Models::DescribeLivePrivateLineAreasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available access points where acceleration circuits start.
       *
       * @description Before you call the CreateLivePrivateLine operation, you can call this operation to query available acceleration regions, which are access points where acceleration circuits start.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePrivateLineAreasRequest
       * @return DescribeLivePrivateLineAreasResponse
       */
      Models::DescribeLivePrivateLineAreasResponse describeLivePrivateLineAreas(const Models::DescribeLivePrivateLineAreasRequest &request);

      /**
       * @summary Queries the binding information between Global Accelerator (GA) instances and acceleration circuits.
       *
       * @description If you set the IsGaInstance parameter to yes, the status of GA instances is queried. If you set the IsGaInstance parameter to no, the binding information between GA instances and acceleration circuits is queried.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePrivateLineAvailGARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePrivateLineAvailGAResponse
       */
      Models::DescribeLivePrivateLineAvailGAResponse describeLivePrivateLineAvailGAWithOptions(const Models::DescribeLivePrivateLineAvailGARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding information between Global Accelerator (GA) instances and acceleration circuits.
       *
       * @description If you set the IsGaInstance parameter to yes, the status of GA instances is queried. If you set the IsGaInstance parameter to no, the binding information between GA instances and acceleration circuits is queried.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePrivateLineAvailGARequest
       * @return DescribeLivePrivateLineAvailGAResponse
       */
      Models::DescribeLivePrivateLineAvailGAResponse describeLivePrivateLineAvailGA(const Models::DescribeLivePrivateLineAvailGARequest &request);

      /**
       * @summary Queries the production studio usage data.
       *
       * @description The minimum time granularity for a query is 1 hour. The maximum time range for a query is 31 days. You can query the production studio usage data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveProducerUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveProducerUsageDataResponse
       */
      Models::DescribeLiveProducerUsageDataResponse describeLiveProducerUsageDataWithOptions(const Models::DescribeLiveProducerUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the production studio usage data.
       *
       * @description The minimum time granularity for a query is 1 hour. The maximum time range for a query is 31 days. You can query the production studio usage data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveProducerUsageDataRequest
       * @return DescribeLiveProducerUsageDataResponse
       */
      Models::DescribeLiveProducerUsageDataResponse describeLiveProducerUsageData(const Models::DescribeLiveProducerUsageDataRequest &request);

      /**
       * @summary Queries the stream pulling configurations for a domain name.
       *
       * @description ##
       * This operation is applicable to regular stream pulling. You can call this operation to query the regular stream pulling configurations for a domain name.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLivePullStreamConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePullStreamConfigResponse
       */
      Models::DescribeLivePullStreamConfigResponse describeLivePullStreamConfigWithOptions(const Models::DescribeLivePullStreamConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stream pulling configurations for a domain name.
       *
       * @description ##
       * This operation is applicable to regular stream pulling. You can call this operation to query the regular stream pulling configurations for a domain name.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLivePullStreamConfigRequest
       * @return DescribeLivePullStreamConfigResponse
       */
      Models::DescribeLivePullStreamConfigResponse describeLivePullStreamConfig(const Models::DescribeLivePullStreamConfigRequest &request);

      /**
       * @summary Queries pulled-stream relay tasks.
       *
       * @description *   You can call this operation to query the information about a pulled-stream relay task.
       * *   This operation allows you to query the configurations and status of a task with a specified ID.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePullToPushResponse
       */
      Models::DescribeLivePullToPushResponse describeLivePullToPushWithOptions(const Models::DescribeLivePullToPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries pulled-stream relay tasks.
       *
       * @description *   You can call this operation to query the information about a pulled-stream relay task.
       * *   This operation allows you to query the configurations and status of a task with a specified ID.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePullToPushRequest
       * @return DescribeLivePullToPushResponse
       */
      Models::DescribeLivePullToPushResponse describeLivePullToPush(const Models::DescribeLivePullToPushRequest &request);

      /**
       * @summary Queries pulled-stream relay tasks. Fuzzy match is supported.
       *
       * @description *   You can call this operation to query pulled-stream relay tasks.
       * *   You can query tasks by page. Fuzzy search is supported based on task IDs, task names, and destination URLs.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePullToPushListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePullToPushListResponse
       */
      Models::DescribeLivePullToPushListResponse describeLivePullToPushListWithOptions(const Models::DescribeLivePullToPushListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries pulled-stream relay tasks. Fuzzy match is supported.
       *
       * @description *   You can call this operation to query pulled-stream relay tasks.
       * *   You can query tasks by page. Fuzzy search is supported based on task IDs, task names, and destination URLs.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePullToPushListRequest
       * @return DescribeLivePullToPushListResponse
       */
      Models::DescribeLivePullToPushListResponse describeLivePullToPushList(const Models::DescribeLivePullToPushListRequest &request);

      /**
       * @summary Queries the stream relay logs, which are available for download.
       *
       * @description *   The time granularity of the data is 1 hour.
       * *   You can query data in the last 31 days.
       * *   If you do not specify the StartTime or EndTime parameter, the data of the last 24 hours is queried. You can specify both the StartTime and EndTime parameters to query the data of a specific time range.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePushProxyLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePushProxyLogResponse
       */
      Models::DescribeLivePushProxyLogResponse describeLivePushProxyLogWithOptions(const Models::DescribeLivePushProxyLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stream relay logs, which are available for download.
       *
       * @description *   The time granularity of the data is 1 hour.
       * *   You can query data in the last 31 days.
       * *   If you do not specify the StartTime or EndTime parameter, the data of the last 24 hours is queried. You can specify both the StartTime and EndTime parameters to query the data of a specific time range.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePushProxyLogRequest
       * @return DescribeLivePushProxyLogResponse
       */
      Models::DescribeLivePushProxyLogResponse describeLivePushProxyLog(const Models::DescribeLivePushProxyLogRequest &request);

      /**
       * @summary Queries the usage data of live center stream relay.
       *
       * @description *   You can call this operation to query the usage data of live center stream relay.
       * *   The maximum time range for a query is 31 days.
       * *   The minimum time granularity for a query is 1 day.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePushProxyUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePushProxyUsageDataResponse
       */
      Models::DescribeLivePushProxyUsageDataResponse describeLivePushProxyUsageDataWithOptions(const Models::DescribeLivePushProxyUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage data of live center stream relay.
       *
       * @description *   You can call this operation to query the usage data of live center stream relay.
       * *   The maximum time range for a query is 31 days.
       * *   The minimum time granularity for a query is 1 day.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLivePushProxyUsageDataRequest
       * @return DescribeLivePushProxyUsageDataResponse
       */
      Models::DescribeLivePushProxyUsageDataResponse describeLivePushProxyUsageData(const Models::DescribeLivePushProxyUsageDataRequest &request);

      /**
       * @summary Queries the number of real-time log deliveries.
       *
       * @description *   You can collect statistics on the number of real-time log deliveries. The number of failed real-time log deliveries and the number of successful real-time log deliveries are counted.
       * *   You can query the data by UID.
       * *   You are charged for both successful and failed real-time log deliveries.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveRealtimeDeliveryAccRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRealtimeDeliveryAccResponse
       */
      Models::DescribeLiveRealtimeDeliveryAccResponse describeLiveRealtimeDeliveryAccWithOptions(const Models::DescribeLiveRealtimeDeliveryAccRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of real-time log deliveries.
       *
       * @description *   You can collect statistics on the number of real-time log deliveries. The number of failed real-time log deliveries and the number of successful real-time log deliveries are counted.
       * *   You can query the data by UID.
       * *   You are charged for both successful and failed real-time log deliveries.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveRealtimeDeliveryAccRequest
       * @return DescribeLiveRealtimeDeliveryAccResponse
       */
      Models::DescribeLiveRealtimeDeliveryAccResponse describeLiveRealtimeDeliveryAcc(const Models::DescribeLiveRealtimeDeliveryAccRequest &request);

      /**
       * @summary Queries the status of authorization for real-time log delivery.
       *
       * @description You can call this operation to query the status of authorization for real-time log delivery.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveRealtimeLogAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRealtimeLogAuthorizedResponse
       */
      Models::DescribeLiveRealtimeLogAuthorizedResponse describeLiveRealtimeLogAuthorizedWithOptions(const Models::DescribeLiveRealtimeLogAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of authorization for real-time log delivery.
       *
       * @description You can call this operation to query the status of authorization for real-time log delivery.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveRealtimeLogAuthorizedRequest
       * @return DescribeLiveRealtimeLogAuthorizedResponse
       */
      Models::DescribeLiveRealtimeLogAuthorizedResponse describeLiveRealtimeLogAuthorized(const Models::DescribeLiveRealtimeLogAuthorizedRequest &request);

      /**
       * @summary Queries all recording configurations of an application for a streaming domain.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the recording configurations of all applications under the main streaming domain.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveRecordConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRecordConfigResponse
       */
      Models::DescribeLiveRecordConfigResponse describeLiveRecordConfigWithOptions(const Models::DescribeLiveRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all recording configurations of an application for a streaming domain.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the recording configurations of all applications under the main streaming domain.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveRecordConfigRequest
       * @return DescribeLiveRecordConfigResponse
       */
      Models::DescribeLiveRecordConfigResponse describeLiveRecordConfig(const Models::DescribeLiveRecordConfigRequest &request);

      /**
       * @summary Queries the configuration of callbacks for live stream recording under a domain name.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the configuration of callbacks for live stream recording under the domain name.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveRecordNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRecordNotifyConfigResponse
       */
      Models::DescribeLiveRecordNotifyConfigResponse describeLiveRecordNotifyConfigWithOptions(const Models::DescribeLiveRecordNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of callbacks for live stream recording under a domain name.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the configuration of callbacks for live stream recording under the domain name.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveRecordNotifyConfigRequest
       * @return DescribeLiveRecordNotifyConfigResponse
       */
      Models::DescribeLiveRecordNotifyConfigResponse describeLiveRecordNotifyConfig(const Models::DescribeLiveRecordNotifyConfigRequest &request);

      /**
       * @summary Queries the recording callback records that are stored in Object Storage Service (OSS).
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveRecordNotifyRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRecordNotifyRecordsResponse
       */
      Models::DescribeLiveRecordNotifyRecordsResponse describeLiveRecordNotifyRecordsWithOptions(const Models::DescribeLiveRecordNotifyRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recording callback records that are stored in Object Storage Service (OSS).
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveRecordNotifyRecordsRequest
       * @return DescribeLiveRecordNotifyRecordsResponse
       */
      Models::DescribeLiveRecordNotifyRecordsResponse describeLiveRecordNotifyRecords(const Models::DescribeLiveRecordNotifyRecordsRequest &request);

      /**
       * @summary Queries Live-to-VOD configurations.
       *
       * @description ## [](#)Usage notes
       * Obtain the streaming domain, and then call this operation to query the Live-to-VOD configurations.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveRecordVodConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRecordVodConfigsResponse
       */
      Models::DescribeLiveRecordVodConfigsResponse describeLiveRecordVodConfigsWithOptions(const Models::DescribeLiveRecordVodConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Live-to-VOD configurations.
       *
       * @description ## [](#)Usage notes
       * Obtain the streaming domain, and then call this operation to query the Live-to-VOD configurations.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveRecordVodConfigsRequest
       * @return DescribeLiveRecordVodConfigsResponse
       */
      Models::DescribeLiveRecordVodConfigsResponse describeLiveRecordVodConfigs(const Models::DescribeLiveRecordVodConfigsRequest &request);

      /**
       * @summary Queries the time shifting configurations under a domain name.
       *
       * @description This operation is applicable to the streaming domains.
       * ## QPS limit
       * A single user can perform a maximum of 10 queries per second (QPS). Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation. For more information about what a single user means and the QPS details, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live#topic-2136805).
       *
       * @param request DescribeLiveShiftConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveShiftConfigsResponse
       */
      Models::DescribeLiveShiftConfigsResponse describeLiveShiftConfigsWithOptions(const Models::DescribeLiveShiftConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time shifting configurations under a domain name.
       *
       * @description This operation is applicable to the streaming domains.
       * ## QPS limit
       * A single user can perform a maximum of 10 queries per second (QPS). Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation. For more information about what a single user means and the QPS details, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live#topic-2136805).
       *
       * @param request DescribeLiveShiftConfigsRequest
       * @return DescribeLiveShiftConfigsResponse
       */
      Models::DescribeLiveShiftConfigsResponse describeLiveShiftConfigs(const Models::DescribeLiveShiftConfigsRequest &request);

      /**
       * @summary Queries the snapshot configurations of a streaming domain.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the snapshot configurations.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveSnapshotConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveSnapshotConfigResponse
       */
      Models::DescribeLiveSnapshotConfigResponse describeLiveSnapshotConfigWithOptions(const Models::DescribeLiveSnapshotConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the snapshot configurations of a streaming domain.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the snapshot configurations.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveSnapshotConfigRequest
       * @return DescribeLiveSnapshotConfigResponse
       */
      Models::DescribeLiveSnapshotConfigResponse describeLiveSnapshotConfig(const Models::DescribeLiveSnapshotConfigRequest &request);

      /**
       * @summary Queries video moderation configurations.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to query video moderation configurations. The configurations can be sorted in ascending or descending order.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveSnapshotDetectPornConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveSnapshotDetectPornConfigResponse
       */
      Models::DescribeLiveSnapshotDetectPornConfigResponse describeLiveSnapshotDetectPornConfigWithOptions(const Models::DescribeLiveSnapshotDetectPornConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries video moderation configurations.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to query video moderation configurations. The configurations can be sorted in ascending or descending order.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveSnapshotDetectPornConfigRequest
       * @return DescribeLiveSnapshotDetectPornConfigResponse
       */
      Models::DescribeLiveSnapshotDetectPornConfigResponse describeLiveSnapshotDetectPornConfig(const Models::DescribeLiveSnapshotDetectPornConfigRequest &request);

      /**
       * @summary Queries the configuration of snapshot callbacks.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveSnapshotNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveSnapshotNotifyConfigResponse
       */
      Models::DescribeLiveSnapshotNotifyConfigResponse describeLiveSnapshotNotifyConfigWithOptions(const Models::DescribeLiveSnapshotNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of snapshot callbacks.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveSnapshotNotifyConfigRequest
       * @return DescribeLiveSnapshotNotifyConfigResponse
       */
      Models::DescribeLiveSnapshotNotifyConfigResponse describeLiveSnapshotNotifyConfig(const Models::DescribeLiveSnapshotNotifyConfigRequest &request);

      /**
       * @summary Queries the authentication status of an active stream.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamAuthCheckingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamAuthCheckingResponse
       */
      Models::DescribeLiveStreamAuthCheckingResponse describeLiveStreamAuthCheckingWithOptions(const Models::DescribeLiveStreamAuthCheckingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authentication status of an active stream.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamAuthCheckingRequest
       * @return DescribeLiveStreamAuthCheckingResponse
       */
      Models::DescribeLiveStreamAuthCheckingResponse describeLiveStreamAuthChecking(const Models::DescribeLiveStreamAuthCheckingRequest &request);

      /**
       * @summary Queries the frame rates and bitrates of a Real-Time Messaging Protocol (RTMP) stream within a specified time period. You can call this operation to query historical data.
       *
       * @description This operation allows you to query the frame rates and bitrates of an RTMP stream within a specified time period. You can call this operation to query historical data.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamBitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamBitRateDataResponse
       */
      Models::DescribeLiveStreamBitRateDataResponse describeLiveStreamBitRateDataWithOptions(const Models::DescribeLiveStreamBitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the frame rates and bitrates of a Real-Time Messaging Protocol (RTMP) stream within a specified time period. You can call this operation to query historical data.
       *
       * @description This operation allows you to query the frame rates and bitrates of an RTMP stream within a specified time period. You can call this operation to query historical data.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamBitRateDataRequest
       * @return DescribeLiveStreamBitRateDataResponse
       */
      Models::DescribeLiveStreamBitRateDataResponse describeLiveStreamBitRateData(const Models::DescribeLiveStreamBitRateDataRequest &request);

      /**
       * @summary Queries the numbers of online source streams and transcoded streams.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the numbers of online source streams and transcoded streams. The streams that are returned by calling this operation are encoded in H.264 or H.265.
       * ## [](#qps-)QPS limit
       * You can call this operation once per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamCountResponse
       */
      Models::DescribeLiveStreamCountResponse describeLiveStreamCountWithOptions(const Models::DescribeLiveStreamCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the numbers of online source streams and transcoded streams.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the numbers of online source streams and transcoded streams. The streams that are returned by calling this operation are encoded in H.264 or H.265.
       * ## [](#qps-)QPS limit
       * You can call this operation once per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamCountRequest
       * @return DescribeLiveStreamCountResponse
       */
      Models::DescribeLiveStreamCountResponse describeLiveStreamCount(const Models::DescribeLiveStreamCountRequest &request);

      /**
       * @summary Queries the live streaming latency.
       *
       * @description Obtain the streaming domain, and then call this operation to query the live streaming latency.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamDelayConfigResponse
       */
      Models::DescribeLiveStreamDelayConfigResponse describeLiveStreamDelayConfigWithOptions(const Models::DescribeLiveStreamDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the live streaming latency.
       *
       * @description Obtain the streaming domain, and then call this operation to query the live streaming latency.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamDelayConfigRequest
       * @return DescribeLiveStreamDelayConfigResponse
       */
      Models::DescribeLiveStreamDelayConfigResponse describeLiveStreamDelayConfig(const Models::DescribeLiveStreamDelayConfigRequest &request);

      /**
       * @summary Queries the audio and video frame rates and bitrates of a Real-Time Messaging Protocol (RTMP) stream.
       *
       * @description *   You can call this operation to query a set of audio and video frame rates and bitrates of an RTMP stream within a specified time range.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * *   You can query data in the last 90 days.
       * *   The data is delayed for 3 to 5 minutes.
       * *   The maximum time range that you can specify is 1 hour.
       *
       * @param request DescribeLiveStreamDetailFrameRateAndBitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamDetailFrameRateAndBitRateDataResponse
       */
      Models::DescribeLiveStreamDetailFrameRateAndBitRateDataResponse describeLiveStreamDetailFrameRateAndBitRateDataWithOptions(const Models::DescribeLiveStreamDetailFrameRateAndBitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audio and video frame rates and bitrates of a Real-Time Messaging Protocol (RTMP) stream.
       *
       * @description *   You can call this operation to query a set of audio and video frame rates and bitrates of an RTMP stream within a specified time range.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * *   You can query data in the last 90 days.
       * *   The data is delayed for 3 to 5 minutes.
       * *   The maximum time range that you can specify is 1 hour.
       *
       * @param request DescribeLiveStreamDetailFrameRateAndBitRateDataRequest
       * @return DescribeLiveStreamDetailFrameRateAndBitRateDataResponse
       */
      Models::DescribeLiveStreamDetailFrameRateAndBitRateDataResponse describeLiveStreamDetailFrameRateAndBitRateData(const Models::DescribeLiveStreamDetailFrameRateAndBitRateDataRequest &request);

      /**
       * @summary Queries the number of historical online users for a live stream.
       *
       * @description *   The data returned by this operation is delayed for an average of 2 to 5 minutes.
       * *   This operation queries the number of historical online users for only Flash Video (FLV) and Real-Time Messaging Protocol (RTMP) streams.
       * *   This operation does not query the number of viewers that are watching transcoded streams.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamHistoryUserNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamHistoryUserNumResponse
       */
      Models::DescribeLiveStreamHistoryUserNumResponse describeLiveStreamHistoryUserNumWithOptions(const Models::DescribeLiveStreamHistoryUserNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of historical online users for a live stream.
       *
       * @description *   The data returned by this operation is delayed for an average of 2 to 5 minutes.
       * *   This operation queries the number of historical online users for only Flash Video (FLV) and Real-Time Messaging Protocol (RTMP) streams.
       * *   This operation does not query the number of viewers that are watching transcoded streams.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamHistoryUserNumRequest
       * @return DescribeLiveStreamHistoryUserNumResponse
       */
      Models::DescribeLiveStreamHistoryUserNumResponse describeLiveStreamHistoryUserNum(const Models::DescribeLiveStreamHistoryUserNumRequest &request);

      /**
       * @summary Invoke DescribeLiveStreamMerge to query the primary-standby stream merging configuration.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamMergeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamMergeResponse
       */
      Models::DescribeLiveStreamMergeResponse describeLiveStreamMergeWithOptions(const Models::DescribeLiveStreamMergeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke DescribeLiveStreamMerge to query the primary-standby stream merging configuration.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamMergeRequest
       * @return DescribeLiveStreamMergeResponse
       */
      Models::DescribeLiveStreamMergeResponse describeLiveStreamMerge(const Models::DescribeLiveStreamMergeRequest &request);

      /**
       * @summary Queries the monitoring data of streams for a specified domain name. Up to 5,000 rows of data can be returned per call.
       *
       * @description If you call this operation to query the monitoring data of streams under a domain name for the first time, you must [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex) for backend configuration. Provide the following information in the ticket:
       * *   The domain name that you want to query
       * *   The maximum number of concurrent streams under the domain name
       * *   The maximum number of concurrent online users in each stream
       * *   The protocols used for the client requests
       * >  The review is expected to be completed within one business day after you submit the ticket.
       * ## [](#)Usage limits
       * *   By default, statistics on the number of viewers who watch streams over the HTTP Live Streaming (HLS) protocol cannot be collected.
       * *   You can specify only one domain name in each call.
       * *   The maximum time range to query is 24 hours.
       * *   The minimum data granularity to query is 1 minute.
       * *   You can query data in the last 31 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamMetricDetailDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamMetricDetailDataResponse
       */
      Models::DescribeLiveStreamMetricDetailDataResponse describeLiveStreamMetricDetailDataWithOptions(const Models::DescribeLiveStreamMetricDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of streams for a specified domain name. Up to 5,000 rows of data can be returned per call.
       *
       * @description If you call this operation to query the monitoring data of streams under a domain name for the first time, you must [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex) for backend configuration. Provide the following information in the ticket:
       * *   The domain name that you want to query
       * *   The maximum number of concurrent streams under the domain name
       * *   The maximum number of concurrent online users in each stream
       * *   The protocols used for the client requests
       * >  The review is expected to be completed within one business day after you submit the ticket.
       * ## [](#)Usage limits
       * *   By default, statistics on the number of viewers who watch streams over the HTTP Live Streaming (HLS) protocol cannot be collected.
       * *   You can specify only one domain name in each call.
       * *   The maximum time range to query is 24 hours.
       * *   The minimum data granularity to query is 1 minute.
       * *   You can query data in the last 31 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamMetricDetailDataRequest
       * @return DescribeLiveStreamMetricDetailDataResponse
       */
      Models::DescribeLiveStreamMetricDetailDataResponse describeLiveStreamMetricDetailData(const Models::DescribeLiveStreamMetricDetailDataRequest &request);

      /**
       * @summary Queries the list of created monitoring sessions.
       *
       * @description [Create monitoring sessions](https://help.aliyun.com/document_detail/2848129.html) before you call this operation to query the monitoring session list. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamMonitorListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamMonitorListResponse
       */
      Models::DescribeLiveStreamMonitorListResponse describeLiveStreamMonitorListWithOptions(const Models::DescribeLiveStreamMonitorListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of created monitoring sessions.
       *
       * @description [Create monitoring sessions](https://help.aliyun.com/document_detail/2848129.html) before you call this operation to query the monitoring session list. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamMonitorListRequest
       * @return DescribeLiveStreamMonitorListResponse
       */
      Models::DescribeLiveStreamMonitorListResponse describeLiveStreamMonitorList(const Models::DescribeLiveStreamMonitorListRequest &request);

      /**
       * @summary Queries prefetch tasks in the last three days.
       *
       * @description You can call this operation to query prefetch tasks in the last three days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamPreloadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamPreloadTasksResponse
       */
      Models::DescribeLiveStreamPreloadTasksResponse describeLiveStreamPreloadTasksWithOptions(const Models::DescribeLiveStreamPreloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries prefetch tasks in the last three days.
       *
       * @description You can call this operation to query prefetch tasks in the last three days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamPreloadTasksRequest
       * @return DescribeLiveStreamPreloadTasksResponse
       */
      Models::DescribeLiveStreamPreloadTasksResponse describeLiveStreamPreloadTasks(const Models::DescribeLiveStreamPreloadTasksRequest &request);

      /**
       * @summary Queries the stream ingest data of a specified domain name at the application level and the stream level.
       *
       * @description *   You can query data of a single domain name in each request. If you specify multiple domain names, an error is returned.
       * *   The maximum time range to query is 24 hours.
       * *   The minimum data granularity to query is 1 minute.
       * *   You can query data in the last 31 days.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamPushMetricDetailDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamPushMetricDetailDataResponse
       */
      Models::DescribeLiveStreamPushMetricDetailDataResponse describeLiveStreamPushMetricDetailDataWithOptions(const Models::DescribeLiveStreamPushMetricDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stream ingest data of a specified domain name at the application level and the stream level.
       *
       * @description *   You can query data of a single domain name in each request. If you specify multiple domain names, an error is returned.
       * *   The maximum time range to query is 24 hours.
       * *   The minimum data granularity to query is 1 minute.
       * *   You can query data in the last 31 days.
       * *   This operation is used to monitor data. The data returned by this operation cannot be used as a reference to calculate resource usage for billing.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamPushMetricDetailDataRequest
       * @return DescribeLiveStreamPushMetricDetailDataResponse
       */
      Models::DescribeLiveStreamPushMetricDetailDataResponse describeLiveStreamPushMetricDetailData(const Models::DescribeLiveStreamPushMetricDetailDataRequest &request);

      /**
       * @summary Queries the recordings of a live stream.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the recordings of the live stream.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request DescribeLiveStreamRecordContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamRecordContentResponse
       */
      Models::DescribeLiveStreamRecordContentResponse describeLiveStreamRecordContentWithOptions(const Models::DescribeLiveStreamRecordContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recordings of a live stream.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the recordings of the live stream.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request DescribeLiveStreamRecordContentRequest
       * @return DescribeLiveStreamRecordContentResponse
       */
      Models::DescribeLiveStreamRecordContentResponse describeLiveStreamRecordContent(const Models::DescribeLiveStreamRecordContentRequest &request);

      /**
       * @summary Queries the information about an index file.
       *
       * @description ApsaraVideo Live stores the information about M3U8 index files for six months. You can query the information about only the M3U8 index files that were created in the last six months. OSS stores M3U8 index files for a time period that is specified by the storage configuration in OSS.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamRecordIndexFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamRecordIndexFileResponse
       */
      Models::DescribeLiveStreamRecordIndexFileResponse describeLiveStreamRecordIndexFileWithOptions(const Models::DescribeLiveStreamRecordIndexFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an index file.
       *
       * @description ApsaraVideo Live stores the information about M3U8 index files for six months. You can query the information about only the M3U8 index files that were created in the last six months. OSS stores M3U8 index files for a time period that is specified by the storage configuration in OSS.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamRecordIndexFileRequest
       * @return DescribeLiveStreamRecordIndexFileResponse
       */
      Models::DescribeLiveStreamRecordIndexFileResponse describeLiveStreamRecordIndexFile(const Models::DescribeLiveStreamRecordIndexFileRequest &request);

      /**
       * @summary Queries all index files within a specific time period.
       *
       * @description *   ApsaraVideo Live stores the information about M3U8 index files for six months. You can query the information about only the M3U8 index files that were created in the last six months.
       * *   OSS stores M3U8 index files for a time period that is specified by the storage configuration in OSS.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamRecordIndexFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamRecordIndexFilesResponse
       */
      Models::DescribeLiveStreamRecordIndexFilesResponse describeLiveStreamRecordIndexFilesWithOptions(const Models::DescribeLiveStreamRecordIndexFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all index files within a specific time period.
       *
       * @description *   ApsaraVideo Live stores the information about M3U8 index files for six months. You can query the information about only the M3U8 index files that were created in the last six months.
       * *   OSS stores M3U8 index files for a time period that is specified by the storage configuration in OSS.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamRecordIndexFilesRequest
       * @return DescribeLiveStreamRecordIndexFilesResponse
       */
      Models::DescribeLiveStreamRecordIndexFilesResponse describeLiveStreamRecordIndexFiles(const Models::DescribeLiveStreamRecordIndexFilesRequest &request);

      /**
       * @summary Queries the snapshots that were captured within a specific time period.
       *
       * @description You can query only snapshots that were captured in the last year.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamSnapshotInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamSnapshotInfoResponse
       */
      Models::DescribeLiveStreamSnapshotInfoResponse describeLiveStreamSnapshotInfoWithOptions(const Models::DescribeLiveStreamSnapshotInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the snapshots that were captured within a specific time period.
       *
       * @description You can query only snapshots that were captured in the last year.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamSnapshotInfoRequest
       * @return DescribeLiveStreamSnapshotInfoResponse
       */
      Models::DescribeLiveStreamSnapshotInfoResponse describeLiveStreamSnapshotInfo(const Models::DescribeLiveStreamSnapshotInfoRequest &request);

      /**
       * @summary Queries the status of a stream in real time.
       *
       * @description Obtain the streaming domain, and then call this operation to query the status of a stream in real time. If the stream is in the offline status, you can check the stream ingest callback to learn about the reason that causes the offline status. This operation does not provide detailed information.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamStateResponse
       */
      Models::DescribeLiveStreamStateResponse describeLiveStreamStateWithOptions(const Models::DescribeLiveStreamStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a stream in real time.
       *
       * @description Obtain the streaming domain, and then call this operation to query the status of a stream in real time. If the stream is in the offline status, you can check the stream ingest callback to learn about the reason that causes the offline status. This operation does not provide detailed information.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamStateRequest
       * @return DescribeLiveStreamStateResponse
       */
      Models::DescribeLiveStreamStateResponse describeLiveStreamState(const Models::DescribeLiveStreamStateRequest &request);

      /**
       * @summary Queries the transcoding configurations of a streaming domain.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the transcoding configurations.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamTranscodeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamTranscodeInfoResponse
       */
      Models::DescribeLiveStreamTranscodeInfoResponse describeLiveStreamTranscodeInfoWithOptions(const Models::DescribeLiveStreamTranscodeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the transcoding configurations of a streaming domain.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the transcoding configurations.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamTranscodeInfoRequest
       * @return DescribeLiveStreamTranscodeInfoResponse
       */
      Models::DescribeLiveStreamTranscodeInfoResponse describeLiveStreamTranscodeInfo(const Models::DescribeLiveStreamTranscodeInfoRequest &request);

      /**
       * @summary Queries the transcoding data of a specified domain name at the application level and the stream level.
       *
       * @description *   The maximum time range for a query is 24 hours.
       * *   The minimum time granularity for a query is 5 minutes.
       * *   You can query data in the last 31 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamTranscodeMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamTranscodeMetricDataResponse
       */
      Models::DescribeLiveStreamTranscodeMetricDataResponse describeLiveStreamTranscodeMetricDataWithOptions(const Models::DescribeLiveStreamTranscodeMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the transcoding data of a specified domain name at the application level and the stream level.
       *
       * @description *   The maximum time range for a query is 24 hours.
       * *   The minimum time granularity for a query is 5 minutes.
       * *   You can query data in the last 31 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamTranscodeMetricDataRequest
       * @return DescribeLiveStreamTranscodeMetricDataResponse
       */
      Models::DescribeLiveStreamTranscodeMetricDataResponse describeLiveStreamTranscodeMetricData(const Models::DescribeLiveStreamTranscodeMetricDataRequest &request);

      /**
       * @summary Queries the number of transcoded streams in real time.
       *
       * @description You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamTranscodeStreamNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamTranscodeStreamNumResponse
       */
      Models::DescribeLiveStreamTranscodeStreamNumResponse describeLiveStreamTranscodeStreamNumWithOptions(const Models::DescribeLiveStreamTranscodeStreamNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of transcoded streams in real time.
       *
       * @description You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamTranscodeStreamNumRequest
       * @return DescribeLiveStreamTranscodeStreamNumResponse
       */
      Models::DescribeLiveStreamTranscodeStreamNumResponse describeLiveStreamTranscodeStreamNum(const Models::DescribeLiveStreamTranscodeStreamNumRequest &request);

      /**
       * @summary Queries watermark rules.
       *
       * @description When you call this operation, you can specify the PageNumber and PageSize parameters to view watermark rules on separate pages. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamWatermarkRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamWatermarkRulesResponse
       */
      Models::DescribeLiveStreamWatermarkRulesResponse describeLiveStreamWatermarkRulesWithOptions(const Models::DescribeLiveStreamWatermarkRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries watermark rules.
       *
       * @description When you call this operation, you can specify the PageNumber and PageSize parameters to view watermark rules on separate pages. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamWatermarkRulesRequest
       * @return DescribeLiveStreamWatermarkRulesResponse
       */
      Models::DescribeLiveStreamWatermarkRulesResponse describeLiveStreamWatermarkRules(const Models::DescribeLiveStreamWatermarkRulesRequest &request);

      /**
       * @summary Queries watermark templates.
       *
       * @description You can call this operation to query watermark templates. You can use the PageNumber parameter to view results on separate pages. Make sure that you configure parameters properly when you call this operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamWatermarksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamWatermarksResponse
       */
      Models::DescribeLiveStreamWatermarksResponse describeLiveStreamWatermarksWithOptions(const Models::DescribeLiveStreamWatermarksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries watermark templates.
       *
       * @description You can call this operation to query watermark templates. You can use the PageNumber parameter to view results on separate pages. Make sure that you configure parameters properly when you call this operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamWatermarksRequest
       * @return DescribeLiveStreamWatermarksResponse
       */
      Models::DescribeLiveStreamWatermarksResponse describeLiveStreamWatermarks(const Models::DescribeLiveStreamWatermarksRequest &request);

      /**
       * @summary Queries the blacklist of live stream URLs under a main streaming domain.
       *
       * @description The stream URLs refer to the URLs for playing in particular.
       * ## QPS limit
       * A single user can perform a maximum of 50 queries per second (QPS). Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation. For more information about what a single user means and the QPS details, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live#topic-2136805).
       *
       * @param request DescribeLiveStreamsBlockListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsBlockListResponse
       */
      Models::DescribeLiveStreamsBlockListResponse describeLiveStreamsBlockListWithOptions(const Models::DescribeLiveStreamsBlockListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the blacklist of live stream URLs under a main streaming domain.
       *
       * @description The stream URLs refer to the URLs for playing in particular.
       * ## QPS limit
       * A single user can perform a maximum of 50 queries per second (QPS). Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation. For more information about what a single user means and the QPS details, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live#topic-2136805).
       *
       * @param request DescribeLiveStreamsBlockListRequest
       * @return DescribeLiveStreamsBlockListResponse
       */
      Models::DescribeLiveStreamsBlockListResponse describeLiveStreamsBlockList(const Models::DescribeLiveStreamsBlockListRequest &request);

      /**
       * @summary Queries the operation history of live streams under a domain name or in an application.
       *
       * @description You can call this operation to query the operation history of live streams under a domain name or in an application. The operations include all API operations that were called on live streams.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamsControlHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsControlHistoryResponse
       */
      Models::DescribeLiveStreamsControlHistoryResponse describeLiveStreamsControlHistoryWithOptions(const Models::DescribeLiveStreamsControlHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation history of live streams under a domain name or in an application.
       *
       * @description You can call this operation to query the operation history of live streams under a domain name or in an application. The operations include all API operations that were called on live streams.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamsControlHistoryRequest
       * @return DescribeLiveStreamsControlHistoryResponse
       */
      Models::DescribeLiveStreamsControlHistoryResponse describeLiveStreamsControlHistory(const Models::DescribeLiveStreamsControlHistoryRequest &request);

      /**
       * @summary Queries stream ingest callback records.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamsNotifyRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsNotifyRecordsResponse
       */
      Models::DescribeLiveStreamsNotifyRecordsResponse describeLiveStreamsNotifyRecordsWithOptions(const Models::DescribeLiveStreamsNotifyRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries stream ingest callback records.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamsNotifyRecordsRequest
       * @return DescribeLiveStreamsNotifyRecordsResponse
       */
      Models::DescribeLiveStreamsNotifyRecordsResponse describeLiveStreamsNotifyRecords(const Models::DescribeLiveStreamsNotifyRecordsRequest &request);

      /**
       * @summary Queries the callback configuration for stream ingest under an ingest domain.
       *
       * @param request DescribeLiveStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsNotifyUrlConfigResponse
       */
      Models::DescribeLiveStreamsNotifyUrlConfigResponse describeLiveStreamsNotifyUrlConfigWithOptions(const Models::DescribeLiveStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the callback configuration for stream ingest under an ingest domain.
       *
       * @param request DescribeLiveStreamsNotifyUrlConfigRequest
       * @return DescribeLiveStreamsNotifyUrlConfigResponse
       */
      Models::DescribeLiveStreamsNotifyUrlConfigResponse describeLiveStreamsNotifyUrlConfig(const Models::DescribeLiveStreamsNotifyUrlConfigRequest &request);

      /**
       * @summary Queries the information about all active streams under a specified domain name or the active streams of an application under a specified domain name.
       *
       * @description You can call this operation to query the following types of streams.
       * *   all: all streams.
       * *   raw: source streams.
       * *   trans: transcoded streams.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamsOnlineListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsOnlineListResponse
       */
      Models::DescribeLiveStreamsOnlineListResponse describeLiveStreamsOnlineListWithOptions(const Models::DescribeLiveStreamsOnlineListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all active streams under a specified domain name or the active streams of an application under a specified domain name.
       *
       * @description You can call this operation to query the following types of streams.
       * *   all: all streams.
       * *   raw: source streams.
       * *   trans: transcoded streams.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamsOnlineListRequest
       * @return DescribeLiveStreamsOnlineListResponse
       */
      Models::DescribeLiveStreamsOnlineListResponse describeLiveStreamsOnlineList(const Models::DescribeLiveStreamsOnlineListRequest &request);

      /**
       * @summary Queries the stream ingest records of a domain name or an application or stream under a domain name.
       *
       * @description ## [](#)Usage notes
       * This operation allows you to query streams in the last 30 days. The information of active streams during the queried period is returned. This operation supports the following sorting methods.
       * *   stream_name_desc: sorts the entries in descending order by stream name.
       * *   stream_name_asc: sorts the entries in ascending order by stream name.
       * *   publish_time_desc: sorts the entries in descending order by stream ingest time.
       * *   publish_time_asc: sorts the entries in ascending order by stream ingest time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 3 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveStreamsPublishListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsPublishListResponse
       */
      Models::DescribeLiveStreamsPublishListResponse describeLiveStreamsPublishListWithOptions(const Models::DescribeLiveStreamsPublishListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stream ingest records of a domain name or an application or stream under a domain name.
       *
       * @description ## [](#)Usage notes
       * This operation allows you to query streams in the last 30 days. The information of active streams during the queried period is returned. This operation supports the following sorting methods.
       * *   stream_name_desc: sorts the entries in descending order by stream name.
       * *   stream_name_asc: sorts the entries in ascending order by stream name.
       * *   publish_time_desc: sorts the entries in descending order by stream ingest time.
       * *   publish_time_asc: sorts the entries in ascending order by stream ingest time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 3 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveStreamsPublishListRequest
       * @return DescribeLiveStreamsPublishListResponse
       */
      Models::DescribeLiveStreamsPublishListResponse describeLiveStreamsPublishList(const Models::DescribeLiveStreamsPublishListRequest &request);

      /**
       * @summary Queries the total number of live streams within a specified time range. Data is collected on a daily basis.
       *
       * @description *   The maximum time range for a query is 15 days.
       * *   You can query data in the last 18 months.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamsTotalCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsTotalCountResponse
       */
      Models::DescribeLiveStreamsTotalCountResponse describeLiveStreamsTotalCountWithOptions(const Models::DescribeLiveStreamsTotalCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of live streams within a specified time range. Data is collected on a daily basis.
       *
       * @description *   The maximum time range for a query is 15 days.
       * *   You can query data in the last 18 months.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamsTotalCountRequest
       * @return DescribeLiveStreamsTotalCountResponse
       */
      Models::DescribeLiveStreamsTotalCountResponse describeLiveStreamsTotalCount(const Models::DescribeLiveStreamsTotalCountRequest &request);

      /**
       * @summary Queries the top domain names ranked by traffic.
       *
       * @description *   If you do not specify the StartTime or EndTime parameter, data of the current month is queried by default. To query data within a specific time range, you must specify both the StartTime and EndTime parameters.
       * *   You can query data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveTopDomainsByFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveTopDomainsByFlowResponse
       */
      Models::DescribeLiveTopDomainsByFlowResponse describeLiveTopDomainsByFlowWithOptions(const Models::DescribeLiveTopDomainsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top domain names ranked by traffic.
       *
       * @description *   If you do not specify the StartTime or EndTime parameter, data of the current month is queried by default. To query data within a specific time range, you must specify both the StartTime and EndTime parameters.
       * *   You can query data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveTopDomainsByFlowRequest
       * @return DescribeLiveTopDomainsByFlowResponse
       */
      Models::DescribeLiveTopDomainsByFlowResponse describeLiveTopDomainsByFlow(const Models::DescribeLiveTopDomainsByFlowRequest &request);

      /**
       * @summary 获取直播指定域名的原始访问日志的下载地址
       *
       * @param request DescribeLiveTrafficDomainLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveTrafficDomainLogResponse
       */
      Models::DescribeLiveTrafficDomainLogResponse describeLiveTrafficDomainLogWithOptions(const Models::DescribeLiveTrafficDomainLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取直播指定域名的原始访问日志的下载地址
       *
       * @param request DescribeLiveTrafficDomainLogRequest
       * @return DescribeLiveTrafficDomainLogResponse
       */
      Models::DescribeLiveTrafficDomainLogResponse describeLiveTrafficDomainLog(const Models::DescribeLiveTrafficDomainLogRequest &request);

      /**
       * @summary Queries the audio and video data of an ingested stream within a specific period of time.
       *
       * @description ### Usage notes
       * - The maximum time range for a query is 24 hours. 
       * - The minimum time range for a query is 1 hour. 
       * - You can query data in the last 31 days. 
       * ### QPS limit
       * You can call this operation up to 10 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveUpVideoAudioInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveUpVideoAudioInfoResponse
       */
      Models::DescribeLiveUpVideoAudioInfoResponse describeLiveUpVideoAudioInfoWithOptions(const Models::DescribeLiveUpVideoAudioInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audio and video data of an ingested stream within a specific period of time.
       *
       * @description ### Usage notes
       * - The maximum time range for a query is 24 hours. 
       * - The minimum time range for a query is 1 hour. 
       * - You can query data in the last 31 days. 
       * ### QPS limit
       * You can call this operation up to 10 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveUpVideoAudioInfoRequest
       * @return DescribeLiveUpVideoAudioInfoResponse
       */
      Models::DescribeLiveUpVideoAudioInfoResponse describeLiveUpVideoAudioInfo(const Models::DescribeLiveUpVideoAudioInfoRequest &request);

      /**
       * @summary Queries the estimated bills of ApsaraVideo Live in your Alibaba Cloud account.
       *
       * @description You can call this operation to estimate resource usage of the current month based on the metering method that is specified on the first day of the month. You can call this operation to estimate resource usage of only the current month within your Alibaba Cloud account. The time range used for the estimation starts at 00:00 on the first day of the month and ends 2 hours earlier than the current time.
       * *   Pay by monthly 95th percentile bandwidth: The top 5% values between the start time and end time are excluded. The highest value among the remaining values is the estimated value.
       * *   Pay by average daily peak bandwidth per month: Estimated value = Sum of daily peak bandwidth values/Number of days. The current day is excluded.
       * *   Pay by 4th peak bandwidth per month: The estimated value is the 4th peak bandwidth value between the start time and end time. If the time range is less than four days, the estimated value is 0.
       * *   Pay by average daily 95th percentile bandwidth per month: Estimated value = Sum of daily 95th percentile bandwidth values/Number of days. The current day is excluded.
       * *   Pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00: The top 5% values between the start time and end time are excluded. The highest value among the remaining values is the estimated value.
       * ## [](#qps-)QPS limit
       * You can call this operation once per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveUserBillPredictionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveUserBillPredictionResponse
       */
      Models::DescribeLiveUserBillPredictionResponse describeLiveUserBillPredictionWithOptions(const Models::DescribeLiveUserBillPredictionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the estimated bills of ApsaraVideo Live in your Alibaba Cloud account.
       *
       * @description You can call this operation to estimate resource usage of the current month based on the metering method that is specified on the first day of the month. You can call this operation to estimate resource usage of only the current month within your Alibaba Cloud account. The time range used for the estimation starts at 00:00 on the first day of the month and ends 2 hours earlier than the current time.
       * *   Pay by monthly 95th percentile bandwidth: The top 5% values between the start time and end time are excluded. The highest value among the remaining values is the estimated value.
       * *   Pay by average daily peak bandwidth per month: Estimated value = Sum of daily peak bandwidth values/Number of days. The current day is excluded.
       * *   Pay by 4th peak bandwidth per month: The estimated value is the 4th peak bandwidth value between the start time and end time. If the time range is less than four days, the estimated value is 0.
       * *   Pay by average daily 95th percentile bandwidth per month: Estimated value = Sum of daily 95th percentile bandwidth values/Number of days. The current day is excluded.
       * *   Pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00: The top 5% values between the start time and end time are excluded. The highest value among the remaining values is the estimated value.
       * ## [](#qps-)QPS limit
       * You can call this operation once per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveUserBillPredictionRequest
       * @return DescribeLiveUserBillPredictionResponse
       */
      Models::DescribeLiveUserBillPredictionResponse describeLiveUserBillPrediction(const Models::DescribeLiveUserBillPredictionRequest &request);

      /**
       * @summary Queries domain names of ApsaraVideo Live in your Alibaba Cloud account.
       *
       * @description ## [](#)Usage notes
       * You can call this operation to query all domain names of ApsaraVideo Live within your Alibaba Cloud account. The supported types of domain names are streaming domains and edge ingest domains.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveUserDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveUserDomainsResponse
       */
      Models::DescribeLiveUserDomainsResponse describeLiveUserDomainsWithOptions(const Models::DescribeLiveUserDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries domain names of ApsaraVideo Live in your Alibaba Cloud account.
       *
       * @description ## [](#)Usage notes
       * You can call this operation to query all domain names of ApsaraVideo Live within your Alibaba Cloud account. The supported types of domain names are streaming domains and edge ingest domains.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveUserDomainsRequest
       * @return DescribeLiveUserDomainsResponse
       */
      Models::DescribeLiveUserDomainsResponse describeLiveUserDomains(const Models::DescribeLiveUserDomainsRequest &request);

      /**
       * @summary  查询指定域名流粒度批量数据
       *
       * @param request DescribeLiveUserStreamMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveUserStreamMetricDataResponse
       */
      Models::DescribeLiveUserStreamMetricDataResponse describeLiveUserStreamMetricDataWithOptions(const Models::DescribeLiveUserStreamMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary  查询指定域名流粒度批量数据
       *
       * @param request DescribeLiveUserStreamMetricDataRequest
       * @return DescribeLiveUserStreamMetricDataResponse
       */
      Models::DescribeLiveUserStreamMetricDataResponse describeLiveUserStreamMetricData(const Models::DescribeLiveUserStreamMetricDataRequest &request);

      /**
       * @param request DescribeLiveUserTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveUserTagsResponse
       */
      Models::DescribeLiveUserTagsResponse describeLiveUserTagsWithOptions(const Models::DescribeLiveUserTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeLiveUserTagsRequest
       * @return DescribeLiveUserTagsResponse
       */
      Models::DescribeLiveUserTagsResponse describeLiveUserTags(const Models::DescribeLiveUserTagsRequest &request);

      /**
       * @summary 获取直播指定域名的原始访问日志的下载地址
       *
       * @param request DescribeLiveUserTrafficLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveUserTrafficLogResponse
       */
      Models::DescribeLiveUserTrafficLogResponse describeLiveUserTrafficLogWithOptions(const Models::DescribeLiveUserTrafficLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取直播指定域名的原始访问日志的下载地址
       *
       * @param request DescribeLiveUserTrafficLogRequest
       * @return DescribeLiveUserTrafficLogResponse
       */
      Models::DescribeLiveUserTrafficLogResponse describeLiveUserTrafficLog(const Models::DescribeLiveUserTrafficLogRequest &request);

      /**
       * @summary Queries the ownership verification content of a domain name.
       *
       * @description ## [](#)Usage notes
       * *   You can call this operation to query the ownership verification content of a single domain name.
       * *   You can call this operation up to 30 times per second per account.
       * *   When you call this operation, you need to specify a domain name as a request parameter.
       * *   After a successful call, the verification content and request ID are returned, which can be used for subsequent operations.
       *
       * @param request DescribeLiveVerifyContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveVerifyContentResponse
       */
      Models::DescribeLiveVerifyContentResponse describeLiveVerifyContentWithOptions(const Models::DescribeLiveVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ownership verification content of a domain name.
       *
       * @description ## [](#)Usage notes
       * *   You can call this operation to query the ownership verification content of a single domain name.
       * *   You can call this operation up to 30 times per second per account.
       * *   When you call this operation, you need to specify a domain name as a request parameter.
       * *   After a successful call, the verification content and request ID are returned, which can be used for subsequent operations.
       *
       * @param request DescribeLiveVerifyContentRequest
       * @return DescribeLiveVerifyContentResponse
       */
      Models::DescribeLiveVerifyContentResponse describeLiveVerifyContent(const Models::DescribeLiveVerifyContentRequest &request);

      /**
       * @summary DescribeMeterLiveBypassDuration
       *
       * @description ## [](#)Usage notes
       * *   The maximum time range for a query is 31 days.
       * *   The minimum time granularity for a query is 5 minutes.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeMeterLiveBypassDurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMeterLiveBypassDurationResponse
       */
      Models::DescribeMeterLiveBypassDurationResponse describeMeterLiveBypassDurationWithOptions(const Models::DescribeMeterLiveBypassDurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeMeterLiveBypassDuration
       *
       * @description ## [](#)Usage notes
       * *   The maximum time range for a query is 31 days.
       * *   The minimum time granularity for a query is 5 minutes.
       * *   You can query the data in the last 90 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeMeterLiveBypassDurationRequest
       * @return DescribeMeterLiveBypassDurationResponse
       */
      Models::DescribeMeterLiveBypassDurationResponse describeMeterLiveBypassDuration(const Models::DescribeMeterLiveBypassDurationRequest &request);

      /**
       * @summary Queries stream mixing tasks.
       *
       * @description You can call the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation to create stream mixing tasks and then call this operation to query the list of stream mixing tasks.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeMixStreamListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMixStreamListResponse
       */
      Models::DescribeMixStreamListResponse describeMixStreamListWithOptions(const Models::DescribeMixStreamListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries stream mixing tasks.
       *
       * @description You can call the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation to create stream mixing tasks and then call this operation to query the list of stream mixing tasks.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeMixStreamListRequest
       * @return DescribeMixStreamListResponse
       */
      Models::DescribeMixStreamListResponse describeMixStreamList(const Models::DescribeMixStreamListRequest &request);

      /**
       * @summary Queries the information about the factors that cause latency of first frames within a specified period of time.
       *
       * @description You can call this operation to query the information about the factors that cause latency of first frames within a specified period of time. You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see QPS limit.
       *
       * @param tmpReq DescribeRTSNativeSDKFirstFrameCostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRTSNativeSDKFirstFrameCostResponse
       */
      Models::DescribeRTSNativeSDKFirstFrameCostResponse describeRTSNativeSDKFirstFrameCostWithOptions(const Models::DescribeRTSNativeSDKFirstFrameCostRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the factors that cause latency of first frames within a specified period of time.
       *
       * @description You can call this operation to query the information about the factors that cause latency of first frames within a specified period of time. You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see QPS limit.
       *
       * @param request DescribeRTSNativeSDKFirstFrameCostRequest
       * @return DescribeRTSNativeSDKFirstFrameCostResponse
       */
      Models::DescribeRTSNativeSDKFirstFrameCostResponse describeRTSNativeSDKFirstFrameCost(const Models::DescribeRTSNativeSDKFirstFrameCostRequest &request);

      /**
       * @summary Queries the average latency of first frames within a specified period of time.
       *
       * @description You can call this operation to query the average latency of first frames within a specified period of time. You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see QPS limit.
       *
       * @param tmpReq DescribeRTSNativeSDKFirstFrameDelayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRTSNativeSDKFirstFrameDelayResponse
       */
      Models::DescribeRTSNativeSDKFirstFrameDelayResponse describeRTSNativeSDKFirstFrameDelayWithOptions(const Models::DescribeRTSNativeSDKFirstFrameDelayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the average latency of first frames within a specified period of time.
       *
       * @description You can call this operation to query the average latency of first frames within a specified period of time. You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see QPS limit.
       *
       * @param request DescribeRTSNativeSDKFirstFrameDelayRequest
       * @return DescribeRTSNativeSDKFirstFrameDelayResponse
       */
      Models::DescribeRTSNativeSDKFirstFrameDelayResponse describeRTSNativeSDKFirstFrameDelay(const Models::DescribeRTSNativeSDKFirstFrameDelayRequest &request);

      /**
       * @summary Queries the causes of playback failures that occurred within a specified period of time. The causes are returned in the form of status codes.
       *
       * @description You can call this operation to query the causes of playback failures that occurred within a specified period of time. The causes are returned in the form of status codes. You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see QPS limit.
       *
       * @param tmpReq DescribeRTSNativeSDKPlayFailStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRTSNativeSDKPlayFailStatusResponse
       */
      Models::DescribeRTSNativeSDKPlayFailStatusResponse describeRTSNativeSDKPlayFailStatusWithOptions(const Models::DescribeRTSNativeSDKPlayFailStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the causes of playback failures that occurred within a specified period of time. The causes are returned in the form of status codes.
       *
       * @description You can call this operation to query the causes of playback failures that occurred within a specified period of time. The causes are returned in the form of status codes. You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see QPS limit.
       *
       * @param request DescribeRTSNativeSDKPlayFailStatusRequest
       * @return DescribeRTSNativeSDKPlayFailStatusResponse
       */
      Models::DescribeRTSNativeSDKPlayFailStatusResponse describeRTSNativeSDKPlayFailStatus(const Models::DescribeRTSNativeSDKPlayFailStatusRequest &request);

      /**
       * @summary Queries the playback duration within a specified period of time.
       *
       * @description You can query the playback duration within a specified period of time. You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see QPS limit.
       *
       * @param tmpReq DescribeRTSNativeSDKPlayTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRTSNativeSDKPlayTimeResponse
       */
      Models::DescribeRTSNativeSDKPlayTimeResponse describeRTSNativeSDKPlayTimeWithOptions(const Models::DescribeRTSNativeSDKPlayTimeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the playback duration within a specified period of time.
       *
       * @description You can query the playback duration within a specified period of time. You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see QPS limit.
       *
       * @param request DescribeRTSNativeSDKPlayTimeRequest
       * @return DescribeRTSNativeSDKPlayTimeResponse
       */
      Models::DescribeRTSNativeSDKPlayTimeResponse describeRTSNativeSDKPlayTime(const Models::DescribeRTSNativeSDKPlayTimeRequest &request);

      /**
       * @summary Queries the total number of playbacks and the number of successful playbacks within a specified period of time.
       *
       * @description QPS limit You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see QPS limit.
       *
       * @param tmpReq DescribeRTSNativeSDKVvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRTSNativeSDKVvDataResponse
       */
      Models::DescribeRTSNativeSDKVvDataResponse describeRTSNativeSDKVvDataWithOptions(const Models::DescribeRTSNativeSDKVvDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of playbacks and the number of successful playbacks within a specified period of time.
       *
       * @description QPS limit You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see QPS limit.
       *
       * @param request DescribeRTSNativeSDKVvDataRequest
       * @return DescribeRTSNativeSDKVvDataResponse
       */
      Models::DescribeRTSNativeSDKVvDataResponse describeRTSNativeSDKVvData(const Models::DescribeRTSNativeSDKVvDataRequest &request);

      /**
       * @summary 查询rtc云端录制文件与任务信息
       *
       * @param request DescribeRtcCloudRecordingFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcCloudRecordingFilesResponse
       */
      Models::DescribeRtcCloudRecordingFilesResponse describeRtcCloudRecordingFilesWithOptions(const Models::DescribeRtcCloudRecordingFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询rtc云端录制文件与任务信息
       *
       * @param request DescribeRtcCloudRecordingFilesRequest
       * @return DescribeRtcCloudRecordingFilesResponse
       */
      Models::DescribeRtcCloudRecordingFilesResponse describeRtcCloudRecordingFiles(const Models::DescribeRtcCloudRecordingFilesRequest &request);

      /**
       * @summary Queries information about a subscription to mixed-stream relay events.
       *
       * @description ### Usage notes
       * - You can call this operation to query information about a subscription to mixed-stream relay events. 
       * - Before you call this operation, make sure that you have called the CreateRtcMPUEventSub operation to create the subscription. 
       * ### QPS limit
       * - You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeRtcMPUEventSubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcMPUEventSubResponse
       */
      Models::DescribeRtcMPUEventSubResponse describeRtcMPUEventSubWithOptions(const Models::DescribeRtcMPUEventSubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a subscription to mixed-stream relay events.
       *
       * @description ### Usage notes
       * - You can call this operation to query information about a subscription to mixed-stream relay events. 
       * - Before you call this operation, make sure that you have called the CreateRtcMPUEventSub operation to create the subscription. 
       * ### QPS limit
       * - You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeRtcMPUEventSubRequest
       * @return DescribeRtcMPUEventSubResponse
       */
      Models::DescribeRtcMPUEventSubResponse describeRtcMPUEventSub(const Models::DescribeRtcMPUEventSubRequest &request);

      /**
       * @summary Queries the details of the episode list.
       *
       * @description You cannot call this operation if the episode list is empty. For information about how to add episodes to the episode list, see [AddShowIntoShowList](https://help.aliyun.com/document_detail/2848051.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeShowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeShowListResponse
       */
      Models::DescribeShowListResponse describeShowListWithOptions(const Models::DescribeShowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the episode list.
       *
       * @description You cannot call this operation if the episode list is empty. For information about how to add episodes to the episode list, see [AddShowIntoShowList](https://help.aliyun.com/document_detail/2848051.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeShowListRequest
       * @return DescribeShowListResponse
       */
      Models::DescribeShowListResponse describeShowList(const Models::DescribeShowListRequest &request);

      /**
       * @summary Queries configurations of stream-level region blocking.
       *
       * @description Queries configurations of stream-level region blocking.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeStreamLocationBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamLocationBlockResponse
       */
      Models::DescribeStreamLocationBlockResponse describeStreamLocationBlockWithOptions(const Models::DescribeStreamLocationBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries configurations of stream-level region blocking.
       *
       * @description Queries configurations of stream-level region blocking.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeStreamLocationBlockRequest
       * @return DescribeStreamLocationBlockResponse
       */
      Models::DescribeStreamLocationBlockResponse describeStreamLocationBlock(const Models::DescribeStreamLocationBlockRequest &request);

      /**
       * @summary Queries one or more layouts of a virtual studio.
       *
       * @description You must call the [AddStudioLayout](https://help.aliyun.com/document_detail/215388.html) operation to configure layouts for a virtual studio before you call this operation to query layouts.
       * ## QPS limits
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request DescribeStudioLayoutsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStudioLayoutsResponse
       */
      Models::DescribeStudioLayoutsResponse describeStudioLayoutsWithOptions(const Models::DescribeStudioLayoutsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more layouts of a virtual studio.
       *
       * @description You must call the [AddStudioLayout](https://help.aliyun.com/document_detail/215388.html) operation to configure layouts for a virtual studio before you call this operation to query layouts.
       * ## QPS limits
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request DescribeStudioLayoutsRequest
       * @return DescribeStudioLayoutsResponse
       */
      Models::DescribeStudioLayoutsResponse describeStudioLayouts(const Models::DescribeStudioLayoutsRequest &request);

      /**
       * @summary Queries the stream pulling information about a live stream of a headline.
       *
       * @description You can call this operation to query the stream pulling information about a live stream of a headline.
       * ## [](#qps-)QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeToutiaoLivePlayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeToutiaoLivePlayResponse
       */
      Models::DescribeToutiaoLivePlayResponse describeToutiaoLivePlayWithOptions(const Models::DescribeToutiaoLivePlayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stream pulling information about a live stream of a headline.
       *
       * @description You can call this operation to query the stream pulling information about a live stream of a headline.
       * ## [](#qps-)QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeToutiaoLivePlayRequest
       * @return DescribeToutiaoLivePlayResponse
       */
      Models::DescribeToutiaoLivePlayResponse describeToutiaoLivePlay(const Models::DescribeToutiaoLivePlayRequest &request);

      /**
       * @summary Queries the ingest information of a specified live stream that is ingested to Toutiao.
       *
       * @description You can call this operation to query the ingest information of a specified live stream that is ingested to Toutiao.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeToutiaoLivePublishRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeToutiaoLivePublishResponse
       */
      Models::DescribeToutiaoLivePublishResponse describeToutiaoLivePublishWithOptions(const Models::DescribeToutiaoLivePublishRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ingest information of a specified live stream that is ingested to Toutiao.
       *
       * @description You can call this operation to query the ingest information of a specified live stream that is ingested to Toutiao.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeToutiaoLivePublishRequest
       * @return DescribeToutiaoLivePublishResponse
       */
      Models::DescribeToutiaoLivePublishResponse describeToutiaoLivePublish(const Models::DescribeToutiaoLivePublishRequest &request);

      /**
       * @summary 新增查询 uid 级别或域名app级别在线流
       *
       * @param request DescribeUidOnlineStreamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUidOnlineStreamsResponse
       */
      Models::DescribeUidOnlineStreamsResponse describeUidOnlineStreamsWithOptions(const Models::DescribeUidOnlineStreamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增查询 uid 级别或域名app级别在线流
       *
       * @param request DescribeUidOnlineStreamsRequest
       * @return DescribeUidOnlineStreamsResponse
       */
      Models::DescribeUidOnlineStreamsResponse describeUidOnlineStreams(const Models::DescribeUidOnlineStreamsRequest &request);

      /**
       * @summary Queries the daily peak inbound bandwidth.
       *
       * @description You can call this operation to query the daily peak inbound bandwidth.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpBpsPeakDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpBpsPeakDataResponse
       */
      Models::DescribeUpBpsPeakDataResponse describeUpBpsPeakDataWithOptions(const Models::DescribeUpBpsPeakDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the daily peak inbound bandwidth.
       *
       * @description You can call this operation to query the daily peak inbound bandwidth.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpBpsPeakDataRequest
       * @return DescribeUpBpsPeakDataResponse
       */
      Models::DescribeUpBpsPeakDataResponse describeUpBpsPeakData(const Models::DescribeUpBpsPeakDataRequest &request);

      /**
       * @summary Queries the daily peak inbound bandwidth of a leased line.
       *
       * @description You can call this operation to query the daily peak inbound bandwidth of a leased line.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpBpsPeakOfLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpBpsPeakOfLineResponse
       */
      Models::DescribeUpBpsPeakOfLineResponse describeUpBpsPeakOfLineWithOptions(const Models::DescribeUpBpsPeakOfLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the daily peak inbound bandwidth of a leased line.
       *
       * @description You can call this operation to query the daily peak inbound bandwidth of a leased line.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpBpsPeakOfLineRequest
       * @return DescribeUpBpsPeakOfLineResponse
       */
      Models::DescribeUpBpsPeakOfLineResponse describeUpBpsPeakOfLine(const Models::DescribeUpBpsPeakOfLineRequest &request);

      /**
       * @summary Queries the daily peak number of concurrently ingested streams.
       *
       * @description You can call this operation to query the daily peak number of concurrently ingested streams.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpPeakPublishStreamDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpPeakPublishStreamDataResponse
       */
      Models::DescribeUpPeakPublishStreamDataResponse describeUpPeakPublishStreamDataWithOptions(const Models::DescribeUpPeakPublishStreamDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the daily peak number of concurrently ingested streams.
       *
       * @description You can call this operation to query the daily peak number of concurrently ingested streams.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpPeakPublishStreamDataRequest
       * @return DescribeUpPeakPublishStreamDataResponse
       */
      Models::DescribeUpPeakPublishStreamDataResponse describeUpPeakPublishStreamData(const Models::DescribeUpPeakPublishStreamDataRequest &request);

      /**
       * @summary Suspends real-time log delivery for one or more domain names.
       *
       * @description Obtain a domain name for which real-time log delivery is enabled, and then call this operation to suspend real-time log delivery for the domain name.
       * This operation is applicable to only streaming domains. If you want to configure real-time log delivery for an ingest domain, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DisableLiveRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableLiveRealtimeLogDeliveryResponse
       */
      Models::DisableLiveRealtimeLogDeliveryResponse disableLiveRealtimeLogDeliveryWithOptions(const Models::DisableLiveRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends real-time log delivery for one or more domain names.
       *
       * @description Obtain a domain name for which real-time log delivery is enabled, and then call this operation to suspend real-time log delivery for the domain name.
       * This operation is applicable to only streaming domains. If you want to configure real-time log delivery for an ingest domain, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DisableLiveRealtimeLogDeliveryRequest
       * @return DisableLiveRealtimeLogDeliveryResponse
       */
      Models::DisableLiveRealtimeLogDeliveryResponse disableLiveRealtimeLogDelivery(const Models::DisableLiveRealtimeLogDeliveryRequest &request);

      /**
       * @summary Dynamically updates a watermark.
       *
       * @description Dynamically updating a watermark means replacing the watermark template ID during live streaming. Before you call this operation to update a watermark, you must prepare the watermark template ID that is used for replacement. The watermark template ID is specified by the **TemplateId** parameter of this operation. You can call the [DescribeLiveStreamWatermarks](https://help.aliyun.com/document_detail/2848102.html) operation to obtain available watermark template IDs.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DynamicUpdateWaterMarkStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DynamicUpdateWaterMarkStreamRuleResponse
       */
      Models::DynamicUpdateWaterMarkStreamRuleResponse dynamicUpdateWaterMarkStreamRuleWithOptions(const Models::DynamicUpdateWaterMarkStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dynamically updates a watermark.
       *
       * @description Dynamically updating a watermark means replacing the watermark template ID during live streaming. Before you call this operation to update a watermark, you must prepare the watermark template ID that is used for replacement. The watermark template ID is specified by the **TemplateId** parameter of this operation. You can call the [DescribeLiveStreamWatermarks](https://help.aliyun.com/document_detail/2848102.html) operation to obtain available watermark template IDs.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DynamicUpdateWaterMarkStreamRuleRequest
       * @return DynamicUpdateWaterMarkStreamRuleResponse
       */
      Models::DynamicUpdateWaterMarkStreamRuleResponse dynamicUpdateWaterMarkStreamRule(const Models::DynamicUpdateWaterMarkStreamRuleRequest &request);

      /**
       * @summary Edits an episode list.
       *
       * @description You can call this operation to update all configurations of episodes in an episode list or replace the episodes.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request EditPlaylistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditPlaylistResponse
       */
      Models::EditPlaylistResponse editPlaylistWithOptions(const Models::EditPlaylistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits an episode list.
       *
       * @description You can call this operation to update all configurations of episodes in an episode list or replace the episodes.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request EditPlaylistRequest
       * @return EditPlaylistResponse
       */
      Models::EditPlaylistResponse editPlaylist(const Models::EditPlaylistRequest &request);

      /**
       * @summary Creates an editing task.
       *
       * @description You can call this operation to create an editing task by specifying the production studio ID and the episode ID. You will not receive a notification after the editing task is created. You can call the [GetEditingJobInfo](https://help.aliyun.com/document_detail/2848059.html) operation to query the status of the editing task.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request EditShowAndReplaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditShowAndReplaceResponse
       */
      Models::EditShowAndReplaceResponse editShowAndReplaceWithOptions(const Models::EditShowAndReplaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an editing task.
       *
       * @description You can call this operation to create an editing task by specifying the production studio ID and the episode ID. You will not receive a notification after the editing task is created. You can call the [GetEditingJobInfo](https://help.aliyun.com/document_detail/2848059.html) operation to query the status of the editing task.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request EditShowAndReplaceRequest
       * @return EditShowAndReplaceResponse
       */
      Models::EditShowAndReplaceResponse editShowAndReplace(const Models::EditShowAndReplaceRequest &request);

      /**
       * @summary Switches a scene to the standby resource in a production studio.
       *
       * @description You can call this operation to switch a specified scene to the standby resource. Only a PGM scene is supported.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request EffectCasterUrgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EffectCasterUrgentResponse
       */
      Models::EffectCasterUrgentResponse effectCasterUrgentWithOptions(const Models::EffectCasterUrgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches a scene to the standby resource in a production studio.
       *
       * @description You can call this operation to switch a specified scene to the standby resource. Only a PGM scene is supported.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request EffectCasterUrgentRequest
       * @return EffectCasterUrgentResponse
       */
      Models::EffectCasterUrgentResponse effectCasterUrgent(const Models::EffectCasterUrgentRequest &request);

      /**
       * @summary Updates the standby resource in a specified scene.
       *
       * @description Make sure that the resource is referenced by the scene.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request EffectCasterVideoResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EffectCasterVideoResourceResponse
       */
      Models::EffectCasterVideoResourceResponse effectCasterVideoResourceWithOptions(const Models::EffectCasterVideoResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the standby resource in a specified scene.
       *
       * @description Make sure that the resource is referenced by the scene.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request EffectCasterVideoResourceRequest
       * @return EffectCasterVideoResourceResponse
       */
      Models::EffectCasterVideoResourceResponse effectCasterVideoResource(const Models::EffectCasterVideoResourceRequest &request);

      /**
       * @summary Enables real-time log delivery for one or more domain names.
       *
       * @description ##
       * This operation is applicable to only streaming domains. If you want to configure real-time log delivery for an ingest domain, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request EnableLiveRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableLiveRealtimeLogDeliveryResponse
       */
      Models::EnableLiveRealtimeLogDeliveryResponse enableLiveRealtimeLogDeliveryWithOptions(const Models::EnableLiveRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables real-time log delivery for one or more domain names.
       *
       * @description ##
       * This operation is applicable to only streaming domains. If you want to configure real-time log delivery for an ingest domain, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request EnableLiveRealtimeLogDeliveryRequest
       * @return EnableLiveRealtimeLogDeliveryResponse
       */
      Models::EnableLiveRealtimeLogDeliveryResponse enableLiveRealtimeLogDelivery(const Models::EnableLiveRealtimeLogDeliveryRequest &request);

      /**
       * @summary Disables a live stream. You can specify the time when the live stream is resumed.
       *
       * @description You can call this operation to disable a live stream and specify the time when the live stream is resumed. If the time is not specified, you can call the [ResumeLiveStream](https://help.aliyun.com/document_detail/2847831.html) operation to resume the live stream. This operation supports only the live streams ingested by streamers.
       * > 
       * *   This operation disables a live stream by adding the stream to the blacklist. You can disable up to 10,000 live streams. If the limit is reached, you cannot disable any more live streams. Pay attention to the number of live streams that are disabled. You can call the [DescribeLiveStreamsBlockList](https://help.aliyun.com/document_detail/2847825.html) operation to query the number of live streams that are disabled.
       * *   An interrupted live stream is not added to the blacklist and does not occupy the quota.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ForbidLiveStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForbidLiveStreamResponse
       */
      Models::ForbidLiveStreamResponse forbidLiveStreamWithOptions(const Models::ForbidLiveStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a live stream. You can specify the time when the live stream is resumed.
       *
       * @description You can call this operation to disable a live stream and specify the time when the live stream is resumed. If the time is not specified, you can call the [ResumeLiveStream](https://help.aliyun.com/document_detail/2847831.html) operation to resume the live stream. This operation supports only the live streams ingested by streamers.
       * > 
       * *   This operation disables a live stream by adding the stream to the blacklist. You can disable up to 10,000 live streams. If the limit is reached, you cannot disable any more live streams. Pay attention to the number of live streams that are disabled. You can call the [DescribeLiveStreamsBlockList](https://help.aliyun.com/document_detail/2847825.html) operation to query the number of live streams that are disabled.
       * *   An interrupted live stream is not added to the blacklist and does not occupy the quota.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ForbidLiveStreamRequest
       * @return ForbidLiveStreamResponse
       */
      Models::ForbidLiveStreamResponse forbidLiveStream(const Models::ForbidLiveStreamRequest &request);

      /**
       * @summary Queries all custom stream mixing templates.
       *
       * @description You can call this operation to query all custom stream mixing templates. A list of template names and template configurations is returned.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetAllCustomTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAllCustomTemplatesResponse
       */
      Models::GetAllCustomTemplatesResponse getAllCustomTemplatesWithOptions(const Models::GetAllCustomTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all custom stream mixing templates.
       *
       * @description You can call this operation to query all custom stream mixing templates. A list of template names and template configurations is returned.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetAllCustomTemplatesRequest
       * @return GetAllCustomTemplatesResponse
       */
      Models::GetAllCustomTemplatesResponse getAllCustomTemplates(const Models::GetAllCustomTemplatesRequest &request);

      /**
       * @summary Queries the information about a custom stream mixing template.
       *
       * @description Obtain the name of the custom stream mixing template, and then call this operation to query the information about the template.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomTemplateResponse
       */
      Models::GetCustomTemplateResponse getCustomTemplateWithOptions(const Models::GetCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a custom stream mixing template.
       *
       * @description Obtain the name of the custom stream mixing template, and then call this operation to query the information about the template.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetCustomTemplateRequest
       * @return GetCustomTemplateResponse
       */
      Models::GetCustomTemplateResponse getCustomTemplate(const Models::GetCustomTemplateRequest &request);

      /**
       * @summary Queries the details of an edge transcoding task.
       *
       * @description To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeTranscodeJobResponse
       */
      Models::GetEdgeTranscodeJobResponse getEdgeTranscodeJobWithOptions(const Models::GetEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an edge transcoding task.
       *
       * @description To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetEdgeTranscodeJobRequest
       * @return GetEdgeTranscodeJobResponse
       */
      Models::GetEdgeTranscodeJobResponse getEdgeTranscodeJob(const Models::GetEdgeTranscodeJobRequest &request);

      /**
       * @summary Queries the details of an edge transcoding template.
       *
       * @description *   You can call this operation to query the details of an edge transcoding template.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetEdgeTranscodeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeTranscodeTemplateResponse
       */
      Models::GetEdgeTranscodeTemplateResponse getEdgeTranscodeTemplateWithOptions(const Models::GetEdgeTranscodeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an edge transcoding template.
       *
       * @description *   You can call this operation to query the details of an edge transcoding template.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetEdgeTranscodeTemplateRequest
       * @return GetEdgeTranscodeTemplateResponse
       */
      Models::GetEdgeTranscodeTemplateResponse getEdgeTranscodeTemplate(const Models::GetEdgeTranscodeTemplateRequest &request);

      /**
       * @summary Queries the information about editing tasks.
       *
       * @description *   When you call this operation, you can specify the CasterId and ShowId parameters to query the information about specific editing tasks. Make sure that the parameter settings meet the requirements.
       * *   If you specify the ShowId parameter in the request, the information about the editing tasks for the specified episode is returned.
       * *   If you do not specify the ShowId parameter in the request, the information about the editing tasks for the entire episode list is returned.
       * ### [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetEditingJobInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEditingJobInfoResponse
       */
      Models::GetEditingJobInfoResponse getEditingJobInfoWithOptions(const Models::GetEditingJobInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about editing tasks.
       *
       * @description *   When you call this operation, you can specify the CasterId and ShowId parameters to query the information about specific editing tasks. Make sure that the parameter settings meet the requirements.
       * *   If you specify the ShowId parameter in the request, the information about the editing tasks for the specified episode is returned.
       * *   If you do not specify the ShowId parameter in the request, the information about the editing tasks for the entire episode list is returned.
       * ### [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request GetEditingJobInfoRequest
       * @return GetEditingJobInfoResponse
       */
      Models::GetEditingJobInfoResponse getEditingJobInfo(const Models::GetEditingJobInfoRequest &request);

      /**
       * @summary Queries the information about a specified interactive messaging application.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageAppResponse
       */
      Models::GetMessageAppResponse getMessageAppWithOptions(const Models::GetMessageAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specified interactive messaging application.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageAppRequest
       * @return GetMessageAppResponse
       */
      Models::GetMessageAppResponse getMessageApp(const Models::GetMessageAppRequest &request);

      /**
       * @summary Queries the information about a message group.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageGroupResponse
       */
      Models::GetMessageGroupResponse getMessageGroupWithOptions(const Models::GetMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a message group.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageGroupRequest
       * @return GetMessageGroupResponse
       */
      Models::GetMessageGroupResponse getMessageGroup(const Models::GetMessageGroupRequest &request);

      /**
       * @summary Obtains a token that the client can use to establish a persistent connection over the LWP protocol and based on atomic capabilities.
       *
       * @description ##
       * Obtain the user ID, device ID, and device type of the client, and then pass the information to the server. When you call this operation, the server obtains a token and returns the token to the client. Different users have different user IDs, and different devices have different device IDs.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageTokenResponse
       */
      Models::GetMessageTokenResponse getMessageTokenWithOptions(const Models::GetMessageTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a token that the client can use to establish a persistent connection over the LWP protocol and based on atomic capabilities.
       *
       * @description ##
       * Obtain the user ID, device ID, and device type of the client, and then pass the information to the server. When you call this operation, the server obtains a token and returns the token to the client. Different users have different user IDs, and different devices have different device IDs.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageTokenRequest
       * @return GetMessageTokenResponse
       */
      Models::GetMessageTokenResponse getMessageToken(const Models::GetMessageTokenRequest &request);

      /**
       * @param request GetTranscodeTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranscodeTaskStatusResponse
       */
      Models::GetTranscodeTaskStatusResponse getTranscodeTaskStatusWithOptions(const Models::GetTranscodeTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetTranscodeTaskStatusRequest
       * @return GetTranscodeTaskStatusResponse
       */
      Models::GetTranscodeTaskStatusResponse getTranscodeTaskStatus(const Models::GetTranscodeTaskStatusRequest &request);

      /**
       * @summary Configures prefetch for a live stream that is ingested based on Real-Time Communication (RTC).
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request HotLiveRtcStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotLiveRtcStreamResponse
       */
      Models::HotLiveRtcStreamResponse hotLiveRtcStreamWithOptions(const Models::HotLiveRtcStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures prefetch for a live stream that is ingested based on Real-Time Communication (RTC).
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request HotLiveRtcStreamRequest
       * @return HotLiveRtcStreamResponse
       */
      Models::HotLiveRtcStreamResponse hotLiveRtcStream(const Models::HotLiveRtcStreamRequest &request);

      /**
       * @summary Creates a scheduled task to start and stop the playback of a playlist at specified points in time.
       *
       * @description You can call this operation to create a scheduled task to start and stop the playback of an episode list at specified points in time. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request InitializeAutoShowListTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeAutoShowListTaskResponse
       */
      Models::InitializeAutoShowListTaskResponse initializeAutoShowListTaskWithOptions(const Models::InitializeAutoShowListTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled task to start and stop the playback of a playlist at specified points in time.
       *
       * @description You can call this operation to create a scheduled task to start and stop the playback of an episode list at specified points in time. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request InitializeAutoShowListTaskRequest
       * @return InitializeAutoShowListTaskResponse
       */
      Models::InitializeAutoShowListTaskResponse initializeAutoShowListTask(const Models::InitializeAutoShowListTaskRequest &request);

      /**
       * @summary Joins a message group.
       *
       * @description You can call this operation up to 200 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request JoinMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinMessageGroupResponse
       */
      Models::JoinMessageGroupResponse joinMessageGroupWithOptions(const Models::JoinMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Joins a message group.
       *
       * @description You can call this operation up to 200 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request JoinMessageGroupRequest
       * @return JoinMessageGroupResponse
       */
      Models::JoinMessageGroupResponse joinMessageGroup(const Models::JoinMessageGroupRequest &request);

      /**
       * @summary Removes a user from an interactive messaging group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request KickLiveMessageGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KickLiveMessageGroupUserResponse
       */
      Models::KickLiveMessageGroupUserResponse kickLiveMessageGroupUserWithOptions(const Models::KickLiveMessageGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a user from an interactive messaging group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request KickLiveMessageGroupUserRequest
       * @return KickLiveMessageGroupUserResponse
       */
      Models::KickLiveMessageGroupUserResponse kickLiveMessageGroupUser(const Models::KickLiveMessageGroupUserRequest &request);

      /**
       * @summary Leaves a message group.
       *
       * @description ##
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request LeaveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LeaveMessageGroupResponse
       */
      Models::LeaveMessageGroupResponse leaveMessageGroupWithOptions(const Models::LeaveMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Leaves a message group.
       *
       * @description ##
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request LeaveMessageGroupRequest
       * @return LeaveMessageGroupResponse
       */
      Models::LeaveMessageGroupResponse leaveMessageGroup(const Models::LeaveMessageGroupRequest &request);

      /**
       * @summary Queries edge transcoding tasks.
       *
       * @description *   You can call this operation to query edge transcoding tasks.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * *   You can query only tasks created or modified in the last 180 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeTranscodeJobResponse
       */
      Models::ListEdgeTranscodeJobResponse listEdgeTranscodeJobWithOptions(const Models::ListEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries edge transcoding tasks.
       *
       * @description *   You can call this operation to query edge transcoding tasks.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * *   You can query only tasks created or modified in the last 180 days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListEdgeTranscodeJobRequest
       * @return ListEdgeTranscodeJobResponse
       */
      Models::ListEdgeTranscodeJobResponse listEdgeTranscodeJob(const Models::ListEdgeTranscodeJobRequest &request);

      /**
       * @summary Queries the list of edge transcoding templates.
       *
       * @description *   You can call this operation to query the list of edge transcoding templates.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListEdgeTranscodeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeTranscodeTemplateResponse
       */
      Models::ListEdgeTranscodeTemplateResponse listEdgeTranscodeTemplateWithOptions(const Models::ListEdgeTranscodeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of edge transcoding templates.
       *
       * @description *   You can call this operation to query the list of edge transcoding templates.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListEdgeTranscodeTemplateRequest
       * @return ListEdgeTranscodeTemplateResponse
       */
      Models::ListEdgeTranscodeTemplateResponse listEdgeTranscodeTemplate(const Models::ListEdgeTranscodeTemplateRequest &request);

      /**
       * @summary Queries the events generated in channels to which you subscribe.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListEventSubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventSubResponse
       */
      Models::ListEventSubResponse listEventSubWithOptions(const Models::ListEventSubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the events generated in channels to which you subscribe.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListEventSubRequest
       * @return ListEventSubResponse
       */
      Models::ListEventSubResponse listEventSub(const Models::ListEventSubRequest &request);

      /**
       * @summary Queries callback records.
       *
       * @description *   The maximum time range to query is seven days.
       * *   The minimum time granularity to query is 1 minute.
       * *   You can query data in the last seven days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListEventSubEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventSubEventResponse
       */
      Models::ListEventSubEventResponse listEventSubEventWithOptions(const Models::ListEventSubEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries callback records.
       *
       * @description *   The maximum time range to query is seven days.
       * *   The minimum time granularity to query is 1 minute.
       * *   You can query data in the last seven days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListEventSubEventRequest
       * @return ListEventSubEventResponse
       */
      Models::ListEventSubEventResponse listEventSubEvent(const Models::ListEventSubEventRequest &request);

      /**
       * @summary Queries stream delay configurations.
       *
       * @description You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveDelayConfigResponse
       */
      Models::ListLiveDelayConfigResponse listLiveDelayConfigWithOptions(const Models::ListLiveDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries stream delay configurations.
       *
       * @description You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveDelayConfigRequest
       * @return ListLiveDelayConfigResponse
       */
      Models::ListLiveDelayConfigResponse listLiveDelayConfig(const Models::ListLiveDelayConfigRequest &request);

      /**
       * @summary Queries interactive messaging applications.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveMessageAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveMessageAppsResponse
       */
      Models::ListLiveMessageAppsResponse listLiveMessageAppsWithOptions(const Models::ListLiveMessageAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries interactive messaging applications.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveMessageAppsRequest
       * @return ListLiveMessageAppsResponse
       */
      Models::ListLiveMessageAppsResponse listLiveMessageApps(const Models::ListLiveMessageAppsRequest &request);

      /**
       * @summary Queries interactive messaging groups by page.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveMessageGroupByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveMessageGroupByPageResponse
       */
      Models::ListLiveMessageGroupByPageResponse listLiveMessageGroupByPageWithOptions(const Models::ListLiveMessageGroupByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries interactive messaging groups by page.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveMessageGroupByPageRequest
       * @return ListLiveMessageGroupByPageResponse
       */
      Models::ListLiveMessageGroupByPageResponse listLiveMessageGroupByPage(const Models::ListLiveMessageGroupByPageRequest &request);

      /**
       * @summary Queries the messages sent in a group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveMessageGroupMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveMessageGroupMessagesResponse
       */
      Models::ListLiveMessageGroupMessagesResponse listLiveMessageGroupMessagesWithOptions(const Models::ListLiveMessageGroupMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the messages sent in a group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveMessageGroupMessagesRequest
       * @return ListLiveMessageGroupMessagesResponse
       */
      Models::ListLiveMessageGroupMessagesResponse listLiveMessageGroupMessages(const Models::ListLiveMessageGroupMessagesRequest &request);

      /**
       * @summary Queries the users in an interactive messaging group.
       *
       * @description *   Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * *   For a super group, which has more than 2,000 users, the user list cannot be queried. In addition, the notifications about users entering or leaving the group are sent at an interval of at least of 5 seconds. These notifications display the accurate number of users in the group for the time being, but do not display the list of all users entering or leaving the group. Once a group is upgraded to a super group, the user list of the group is immediately cleared. The super group cannot be restored to a normal group until all users in the group leave the group (that is, the group is closed). After you reopen the group, it is restored to a normal group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveMessageGroupUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveMessageGroupUsersResponse
       */
      Models::ListLiveMessageGroupUsersResponse listLiveMessageGroupUsersWithOptions(const Models::ListLiveMessageGroupUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the users in an interactive messaging group.
       *
       * @description *   Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * *   For a super group, which has more than 2,000 users, the user list cannot be queried. In addition, the notifications about users entering or leaving the group are sent at an interval of at least of 5 seconds. These notifications display the accurate number of users in the group for the time being, but do not display the list of all users entering or leaving the group. Once a group is upgraded to a super group, the user list of the group is immediately cleared. The super group cannot be restored to a normal group until all users in the group leave the group (that is, the group is closed). After you reopen the group, it is restored to a normal group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveMessageGroupUsersRequest
       * @return ListLiveMessageGroupUsersResponse
       */
      Models::ListLiveMessageGroupUsersResponse listLiveMessageGroupUsers(const Models::ListLiveMessageGroupUsersRequest &request);

      /**
       * @summary Queries the interactive messaging groups in an interactive messaging application.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveMessageGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveMessageGroupsResponse
       */
      Models::ListLiveMessageGroupsResponse listLiveMessageGroupsWithOptions(const Models::ListLiveMessageGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the interactive messaging groups in an interactive messaging application.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveMessageGroupsRequest
       * @return ListLiveMessageGroupsResponse
       */
      Models::ListLiveMessageGroupsResponse listLiveMessageGroups(const Models::ListLiveMessageGroupsRequest &request);

      /**
       * @summary Queries all configurations of real-time log delivery under an Alibaba Cloud account.
       *
       * @description You can call this operation to query all configurations of real-time log delivery under an account. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRealtimeLogDeliveryResponse
       */
      Models::ListLiveRealtimeLogDeliveryResponse listLiveRealtimeLogDeliveryWithOptions(const Models::ListLiveRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all configurations of real-time log delivery under an Alibaba Cloud account.
       *
       * @description You can call this operation to query all configurations of real-time log delivery under an account. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveRealtimeLogDeliveryRequest
       * @return ListLiveRealtimeLogDeliveryResponse
       */
      Models::ListLiveRealtimeLogDeliveryResponse listLiveRealtimeLogDelivery(const Models::ListLiveRealtimeLogDeliveryRequest &request);

      /**
       * @summary Queries all domain names that are associated with a specific configuration of real-time log delivery.
       *
       * @description *   You can call this operation to query all domain names that are associated with a specific configuration of real-time log delivery. The returned results indicate whether real-time log delivery is enabled or disabled for the domain names.
       * *   You can call the [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) to query the Project, Logstore, and Region parameters.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveRealtimeLogDeliveryDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRealtimeLogDeliveryDomainsResponse
       */
      Models::ListLiveRealtimeLogDeliveryDomainsResponse listLiveRealtimeLogDeliveryDomainsWithOptions(const Models::ListLiveRealtimeLogDeliveryDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all domain names that are associated with a specific configuration of real-time log delivery.
       *
       * @description *   You can call this operation to query all domain names that are associated with a specific configuration of real-time log delivery. The returned results indicate whether real-time log delivery is enabled or disabled for the domain names.
       * *   You can call the [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) to query the Project, Logstore, and Region parameters.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveRealtimeLogDeliveryDomainsRequest
       * @return ListLiveRealtimeLogDeliveryDomainsResponse
       */
      Models::ListLiveRealtimeLogDeliveryDomainsResponse listLiveRealtimeLogDeliveryDomains(const Models::ListLiveRealtimeLogDeliveryDomainsRequest &request);

      /**
       * @summary Queries all configurations of real-time log delivery.
       *
       * @description You can call this operation to query all configurations of real-time log delivery. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveRealtimeLogDeliveryInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRealtimeLogDeliveryInfosResponse
       */
      Models::ListLiveRealtimeLogDeliveryInfosResponse listLiveRealtimeLogDeliveryInfosWithOptions(const Models::ListLiveRealtimeLogDeliveryInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all configurations of real-time log delivery.
       *
       * @description You can call this operation to query all configurations of real-time log delivery. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListLiveRealtimeLogDeliveryInfosRequest
       * @return ListLiveRealtimeLogDeliveryInfosResponse
       */
      Models::ListLiveRealtimeLogDeliveryInfosResponse listLiveRealtimeLogDeliveryInfos(const Models::ListLiveRealtimeLogDeliveryInfosRequest &request);

      /**
       * @summary Queries messages.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageResponse
       */
      Models::ListMessageResponse listMessageWithOptions(const Models::ListMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries messages.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageRequest
       * @return ListMessageResponse
       */
      Models::ListMessageResponse listMessage(const Models::ListMessageRequest &request);

      /**
       * @summary Queries interactive messaging applications.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageAppResponse
       */
      Models::ListMessageAppResponse listMessageAppWithOptions(const Models::ListMessageAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries interactive messaging applications.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageAppRequest
       * @return ListMessageAppResponse
       */
      Models::ListMessageAppResponse listMessageApp(const Models::ListMessageAppRequest &request);

      /**
       * @summary Queries the message groups of a specified user.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageGroupResponse
       */
      Models::ListMessageGroupResponse listMessageGroupWithOptions(const Models::ListMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the message groups of a specified user.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageGroupRequest
       * @return ListMessageGroupResponse
       */
      Models::ListMessageGroupResponse listMessageGroup(const Models::ListMessageGroupRequest &request);

      /**
       * @summary Queries the members of a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageGroupUserResponse
       */
      Models::ListMessageGroupUserResponse listMessageGroupUserWithOptions(const Models::ListMessageGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the members of a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageGroupUserRequest
       * @return ListMessageGroupUserResponse
       */
      Models::ListMessageGroupUserResponse listMessageGroupUser(const Models::ListMessageGroupUserRequest &request);

      /**
       * @summary Queries user information by user ID.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq ListMessageGroupUserByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageGroupUserByIdResponse
       */
      Models::ListMessageGroupUserByIdResponse listMessageGroupUserByIdWithOptions(const Models::ListMessageGroupUserByIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user information by user ID.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageGroupUserByIdRequest
       * @return ListMessageGroupUserByIdResponse
       */
      Models::ListMessageGroupUserByIdResponse listMessageGroupUserById(const Models::ListMessageGroupUserByIdRequest &request);

      /**
       * @summary Queries muted members in a messaging group.
       *
       * @description ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMuteGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMuteGroupUserResponse
       */
      Models::ListMuteGroupUserResponse listMuteGroupUserWithOptions(const Models::ListMuteGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries muted members in a messaging group.
       *
       * @description ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMuteGroupUserRequest
       * @return ListMuteGroupUserResponse
       */
      Models::ListMuteGroupUserResponse listMuteGroupUser(const Models::ListMuteGroupUserRequest &request);

      /**
       * @summary Queries the information about one or more episode lists.
       *
       * @description You can call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add episode lists and then call this operation to query the episode lists.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListPlaylistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPlaylistResponse
       */
      Models::ListPlaylistResponse listPlaylistWithOptions(const Models::ListPlaylistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more episode lists.
       *
       * @description You can call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add episode lists and then call this operation to query the episode lists.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListPlaylistRequest
       * @return ListPlaylistResponse
       */
      Models::ListPlaylistResponse listPlaylist(const Models::ListPlaylistRequest &request);

      /**
       * @summary Queries the information about episodes in an episode list.
       *
       * @description You can call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add episodes to an episode list and then call this operation to query the episodes in the episode list
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListPlaylistItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPlaylistItemsResponse
       */
      Models::ListPlaylistItemsResponse listPlaylistItemsWithOptions(const Models::ListPlaylistItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about episodes in an episode list.
       *
       * @description You can call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add episodes to an episode list and then call this operation to query the episodes in the episode list
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListPlaylistItemsRequest
       * @return ListPlaylistItemsResponse
       */
      Models::ListPlaylistItemsResponse listPlaylistItems(const Models::ListPlaylistItemsRequest &request);

      /**
       * @summary 获取在线频道列表
       *
       * @param request ListRTCLiveRoomsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRTCLiveRoomsResponse
       */
      Models::ListRTCLiveRoomsResponse listRTCLiveRoomsWithOptions(const Models::ListRTCLiveRoomsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取在线频道列表
       *
       * @param request ListRTCLiveRoomsRequest
       * @return ListRTCLiveRoomsResponse
       */
      Models::ListRTCLiveRoomsResponse listRTCLiveRooms(const Models::ListRTCLiveRoomsRequest &request);

      /**
       * @summary Queries the callback records of a subscription to mixed-stream relay events.
       *
       * @description You can call this operation to query the callback records of a subscription to mixed-stream relay events in the last seven days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListRtcMPUEventSubRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRtcMPUEventSubRecordResponse
       */
      Models::ListRtcMPUEventSubRecordResponse listRtcMPUEventSubRecordWithOptions(const Models::ListRtcMPUEventSubRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the callback records of a subscription to mixed-stream relay events.
       *
       * @description You can call this operation to query the callback records of a subscription to mixed-stream relay events in the last seven days.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListRtcMPUEventSubRecordRequest
       * @return ListRtcMPUEventSubRecordResponse
       */
      Models::ListRtcMPUEventSubRecordResponse listRtcMPUEventSubRecord(const Models::ListRtcMPUEventSubRecordRequest &request);

      /**
       * @summary Queries the parameters of mixed-stream relay tasks.
       *
       * @description *   You can call the ListRtcMPUTaskDetail operation to query the parameters of mixed-stream relay tasks that were created by calling the StartLiveMPUTask operation.
       * *   By default, the query results are sorted in reverse chronological order based on the task update time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListRtcMPUTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRtcMPUTaskDetailResponse
       */
      Models::ListRtcMPUTaskDetailResponse listRtcMPUTaskDetailWithOptions(const Models::ListRtcMPUTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters of mixed-stream relay tasks.
       *
       * @description *   You can call the ListRtcMPUTaskDetail operation to query the parameters of mixed-stream relay tasks that were created by calling the StartLiveMPUTask operation.
       * *   By default, the query results are sorted in reverse chronological order based on the task update time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ListRtcMPUTaskDetailRequest
       * @return ListRtcMPUTaskDetailResponse
       */
      Models::ListRtcMPUTaskDetailResponse listRtcMPUTaskDetail(const Models::ListRtcMPUTaskDetailRequest &request);

      /**
       * @summary 直播回源监控数据
       *
       * @param tmpReq LiveUpstreamQosDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LiveUpstreamQosDataResponse
       */
      Models::LiveUpstreamQosDataResponse liveUpstreamQosDataWithOptions(const Models::LiveUpstreamQosDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 直播回源监控数据
       *
       * @param request LiveUpstreamQosDataRequest
       * @return LiveUpstreamQosDataResponse
       */
      Models::LiveUpstreamQosDataResponse liveUpstreamQosData(const Models::LiveUpstreamQosDataRequest &request);

      /**
       * @summary 咪咕定制直播拉转推启动接口
       *
       * @param request MiguLivePullToPushStartRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MiguLivePullToPushStartResponse
       */
      Models::MiguLivePullToPushStartResponse miguLivePullToPushStartWithOptions(const Models::MiguLivePullToPushStartRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 咪咕定制直播拉转推启动接口
       *
       * @param request MiguLivePullToPushStartRequest
       * @return MiguLivePullToPushStartResponse
       */
      Models::MiguLivePullToPushStartResponse miguLivePullToPushStart(const Models::MiguLivePullToPushStartRequest &request);

      /**
       * @summary 咪咕定制直播拉转推启动接口
       *
       * @param request MiguLivePullToPushStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MiguLivePullToPushStatusResponse
       */
      Models::MiguLivePullToPushStatusResponse miguLivePullToPushStatusWithOptions(const Models::MiguLivePullToPushStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 咪咕定制直播拉转推启动接口
       *
       * @param request MiguLivePullToPushStatusRequest
       * @return MiguLivePullToPushStatusResponse
       */
      Models::MiguLivePullToPushStatusResponse miguLivePullToPushStatus(const Models::MiguLivePullToPushStatusRequest &request);

      /**
       * @summary Modifies a component of a production studio.
       *
       * @description You can call this operation to modify a text, image, or subtitle component.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyCasterComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCasterComponentResponse
       */
      Models::ModifyCasterComponentResponse modifyCasterComponentWithOptions(const Models::ModifyCasterComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a component of a production studio.
       *
       * @description You can call this operation to modify a text, image, or subtitle component.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyCasterComponentRequest
       * @return ModifyCasterComponentResponse
       */
      Models::ModifyCasterComponentResponse modifyCasterComponent(const Models::ModifyCasterComponentRequest &request);

      /**
       * @summary Modifies the configurations of an episode in a production studio. You cannot change the episode type.
       *
       * @description You can call this operation to modify the configurations of an episode in a production studio. You cannot change the episode type.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyCasterEpisodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCasterEpisodeResponse
       */
      Models::ModifyCasterEpisodeResponse modifyCasterEpisodeWithOptions(const Models::ModifyCasterEpisodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an episode in a production studio. You cannot change the episode type.
       *
       * @description You can call this operation to modify the configurations of an episode in a production studio. You cannot change the episode type.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyCasterEpisodeRequest
       * @return ModifyCasterEpisodeResponse
       */
      Models::ModifyCasterEpisodeResponse modifyCasterEpisode(const Models::ModifyCasterEpisodeRequest &request);

      /**
       * @summary Modifies the layout configurations pf a production studio. You need to pass only parameters that you want to modify.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to modify a layout of the production studio. This operation supports the default and adaptive scaling modes.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyCasterLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCasterLayoutResponse
       */
      Models::ModifyCasterLayoutResponse modifyCasterLayoutWithOptions(const Models::ModifyCasterLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the layout configurations pf a production studio. You need to pass only parameters that you want to modify.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to modify a layout of the production studio. This operation supports the default and adaptive scaling modes.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyCasterLayoutRequest
       * @return ModifyCasterLayoutResponse
       */
      Models::ModifyCasterLayoutResponse modifyCasterLayout(const Models::ModifyCasterLayoutRequest &request);

      /**
       * @summary Modifies the episode list for carousel playback in a production studio.
       *
       * @description You can call the [AddCasterProgram](https://help.aliyun.com/document_detail/2848074.html) operation to add the episode list for carousel playback in a production studio and then call this operation to modify the episode list. The supported types of episodes include video resource and component.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyCasterProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCasterProgramResponse
       */
      Models::ModifyCasterProgramResponse modifyCasterProgramWithOptions(const Models::ModifyCasterProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the episode list for carousel playback in a production studio.
       *
       * @description You can call the [AddCasterProgram](https://help.aliyun.com/document_detail/2848074.html) operation to add the episode list for carousel playback in a production studio and then call this operation to modify the episode list. The supported types of episodes include video resource and component.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 4 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyCasterProgramRequest
       * @return ModifyCasterProgramResponse
       */
      Models::ModifyCasterProgramResponse modifyCasterProgram(const Models::ModifyCasterProgramRequest &request);

      /**
       * @summary Changes the video source for a production studio.
       *
       * @description ## Usage notes
       * You must call the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation to create a production studio before you call this operation to modify input sources of the production studio.
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ModifyCasterVideoResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCasterVideoResourceResponse
       */
      Models::ModifyCasterVideoResourceResponse modifyCasterVideoResourceWithOptions(const Models::ModifyCasterVideoResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the video source for a production studio.
       *
       * @description ## Usage notes
       * You must call the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation to create a production studio before you call this operation to modify input sources of the production studio.
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ModifyCasterVideoResourceRequest
       * @return ModifyCasterVideoResourceResponse
       */
      Models::ModifyCasterVideoResourceResponse modifyCasterVideoResource(const Models::ModifyCasterVideoResourceRequest &request);

      /**
       * @summary Modifies a virtual studio template.
       *
       * @param tmpReq ModifyLiveAIStudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveAIStudioResponse
       */
      Models::ModifyLiveAIStudioResponse modifyLiveAIStudioWithOptions(const Models::ModifyLiveAIStudioRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a virtual studio template.
       *
       * @param request ModifyLiveAIStudioRequest
       * @return ModifyLiveAIStudioResponse
       */
      Models::ModifyLiveAIStudioResponse modifyLiveAIStudio(const Models::ModifyLiveAIStudioRequest &request);

      /**
       * @summary Modifies the acceleration region of a domain name.
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveDomainSchdmByPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveDomainSchdmByPropertyResponse
       */
      Models::ModifyLiveDomainSchdmByPropertyResponse modifyLiveDomainSchdmByPropertyWithOptions(const Models::ModifyLiveDomainSchdmByPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the acceleration region of a domain name.
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveDomainSchdmByPropertyRequest
       * @return ModifyLiveDomainSchdmByPropertyResponse
       */
      Models::ModifyLiveDomainSchdmByPropertyResponse modifyLiveDomainSchdmByProperty(const Models::ModifyLiveDomainSchdmByPropertyRequest &request);

      /**
       * @summary Modifies the content moderation settings of an interactive messaging application.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveMessageAppAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveMessageAppAuditResponse
       */
      Models::ModifyLiveMessageAppAuditResponse modifyLiveMessageAppAuditWithOptions(const Models::ModifyLiveMessageAppAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the content moderation settings of an interactive messaging application.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveMessageAppAuditRequest
       * @return ModifyLiveMessageAppAuditResponse
       */
      Models::ModifyLiveMessageAppAuditResponse modifyLiveMessageAppAudit(const Models::ModifyLiveMessageAppAuditRequest &request);

      /**
       * @summary Modifies the callback settings of an interactive messaging application.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveMessageAppCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveMessageAppCallbackResponse
       */
      Models::ModifyLiveMessageAppCallbackResponse modifyLiveMessageAppCallbackWithOptions(const Models::ModifyLiveMessageAppCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the callback settings of an interactive messaging application.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveMessageAppCallbackRequest
       * @return ModifyLiveMessageAppCallbackResponse
       */
      Models::ModifyLiveMessageAppCallbackResponse modifyLiveMessageAppCallback(const Models::ModifyLiveMessageAppCallbackRequest &request);

      /**
       * @summary Disables or enables an interactive messaging application.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveMessageAppDisableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveMessageAppDisableResponse
       */
      Models::ModifyLiveMessageAppDisableResponse modifyLiveMessageAppDisableWithOptions(const Models::ModifyLiveMessageAppDisableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables or enables an interactive messaging application.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveMessageAppDisableRequest
       * @return ModifyLiveMessageAppDisableResponse
       */
      Models::ModifyLiveMessageAppDisableResponse modifyLiveMessageAppDisable(const Models::ModifyLiveMessageAppDisableRequest &request);

      /**
       * @summary Modifies the information about an interactive messaging group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq ModifyLiveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveMessageGroupResponse
       */
      Models::ModifyLiveMessageGroupResponse modifyLiveMessageGroupWithOptions(const Models::ModifyLiveMessageGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about an interactive messaging group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveMessageGroupRequest
       * @return ModifyLiveMessageGroupResponse
       */
      Models::ModifyLiveMessageGroupResponse modifyLiveMessageGroup(const Models::ModifyLiveMessageGroupRequest &request);

      /**
       * @summary Modifies the mute status of users.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq ModifyLiveMessageGroupBandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveMessageGroupBandResponse
       */
      Models::ModifyLiveMessageGroupBandResponse modifyLiveMessageGroupBandWithOptions(const Models::ModifyLiveMessageGroupBandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the mute status of users.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveMessageGroupBandRequest
       * @return ModifyLiveMessageGroupBandResponse
       */
      Models::ModifyLiveMessageGroupBandResponse modifyLiveMessageGroupBand(const Models::ModifyLiveMessageGroupBandRequest &request);

      /**
       * @summary Modifies the information about a user.
       *
       * @param request ModifyLiveMessageUserInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveMessageUserInfoResponse
       */
      Models::ModifyLiveMessageUserInfoResponse modifyLiveMessageUserInfoWithOptions(const Models::ModifyLiveMessageUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a user.
       *
       * @param request ModifyLiveMessageUserInfoRequest
       * @return ModifyLiveMessageUserInfoResponse
       */
      Models::ModifyLiveMessageUserInfoResponse modifyLiveMessageUserInfo(const Models::ModifyLiveMessageUserInfoRequest &request);

      /**
       * @summary Modifies the configuration of real-time log delivery for a domain name.
       *
       * @description *   You can call this operation to modify the configuration of real-time log delivery for a domain name. Logs for a domain name can be delivered to only one Logstore.
       * This operation is applicable to only streaming domains. If you want to configure real-time log delivery for an ingest domain, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * *   You can call the [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) operation to query the Project, Logstore, and Region parameters.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveRealtimeLogDeliveryResponse
       */
      Models::ModifyLiveRealtimeLogDeliveryResponse modifyLiveRealtimeLogDeliveryWithOptions(const Models::ModifyLiveRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of real-time log delivery for a domain name.
       *
       * @description *   You can call this operation to modify the configuration of real-time log delivery for a domain name. Logs for a domain name can be delivered to only one Logstore.
       * This operation is applicable to only streaming domains. If you want to configure real-time log delivery for an ingest domain, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * *   You can call the [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) operation to query the Project, Logstore, and Region parameters.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyLiveRealtimeLogDeliveryRequest
       * @return ModifyLiveRealtimeLogDeliveryResponse
       */
      Models::ModifyLiveRealtimeLogDeliveryResponse modifyLiveRealtimeLogDelivery(const Models::ModifyLiveRealtimeLogDeliveryRequest &request);

      /**
       * @summary Modifies the attributes of an episode list.
       *
       * @description This operation allows you to change the position of an episode in an episode list, how many times an episode list is played, and the specific point in time at which the episode of the highest priority in an episode list is played.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyShowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyShowListResponse
       */
      Models::ModifyShowListResponse modifyShowListWithOptions(const Models::ModifyShowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an episode list.
       *
       * @description This operation allows you to change the position of an episode in an episode list, how many times an episode list is played, and the specific point in time at which the episode of the highest priority in an episode list is played.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyShowListRequest
       * @return ModifyShowListResponse
       */
      Models::ModifyShowListResponse modifyShowList(const Models::ModifyShowListRequest &request);

      /**
       * @summary Modifies a layout of a virtual studio.
       *
       * @description You can call this operation to modify a layout of a virtual studio. When you call this operation, specify only the parameters that you want to modify.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyStudioLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStudioLayoutResponse
       */
      Models::ModifyStudioLayoutResponse modifyStudioLayoutWithOptions(const Models::ModifyStudioLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a layout of a virtual studio.
       *
       * @description You can call this operation to modify a layout of a virtual studio. When you call this operation, specify only the parameters that you want to modify.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ModifyStudioLayoutRequest
       * @return ModifyStudioLayoutResponse
       */
      Models::ModifyStudioLayoutResponse modifyStudioLayout(const Models::ModifyStudioLayoutRequest &request);

      /**
       * @summary Mutes a message group. In this case, all members of the message group are muted.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request MuteAllGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MuteAllGroupUserResponse
       */
      Models::MuteAllGroupUserResponse muteAllGroupUserWithOptions(const Models::MuteAllGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mutes a message group. In this case, all members of the message group are muted.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request MuteAllGroupUserRequest
       * @return MuteAllGroupUserResponse
       */
      Models::MuteAllGroupUserResponse muteAllGroupUser(const Models::MuteAllGroupUserRequest &request);

      /**
       * @summary Mutes members in a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq MuteGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MuteGroupUserResponse
       */
      Models::MuteGroupUserResponse muteGroupUserWithOptions(const Models::MuteGroupUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mutes members in a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request MuteGroupUserRequest
       * @return MuteGroupUserResponse
       */
      Models::MuteGroupUserResponse muteGroupUser(const Models::MuteGroupUserRequest &request);

      /**
       * @summary Enables time shifting for a domain name, or an application or a live stream under the domain name.
       *
       * @description You cannot configure time shifting and delayed transcoding at the same time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request OpenLiveShiftRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenLiveShiftResponse
       */
      Models::OpenLiveShiftResponse openLiveShiftWithOptions(const Models::OpenLiveShiftRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables time shifting for a domain name, or an application or a live stream under the domain name.
       *
       * @description You cannot configure time shifting and delayed transcoding at the same time.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request OpenLiveShiftRequest
       * @return OpenLiveShiftResponse
       */
      Models::OpenLiveShiftResponse openLiveShift(const Models::OpenLiveShiftRequest &request);

      /**
       * @summary Switches to a specified episode.
       *
       * @description After you add episodes to an episode list and start live streaming, you can call this operation to switch among episodes. For information about how to add episodes to an episode list, see [AddShowIntoShowList](https://help.aliyun.com/document_detail/2848051.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request PlayChoosenShowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PlayChoosenShowResponse
       */
      Models::PlayChoosenShowResponse playChoosenShowWithOptions(const Models::PlayChoosenShowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches to a specified episode.
       *
       * @description After you add episodes to an episode list and start live streaming, you can call this operation to switch among episodes. For information about how to add episodes to an episode list, see [AddShowIntoShowList](https://help.aliyun.com/document_detail/2848051.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request PlayChoosenShowRequest
       * @return PlayChoosenShowResponse
       */
      Models::PlayChoosenShowResponse playChoosenShow(const Models::PlayChoosenShowRequest &request);

      /**
       * @summary Publishes the configurations of an accelerated domain name from the canary release environment to the production environment.
       *
       * @description Function name is required for calling this operation. You can get the function name by calling the [DescribeLiveDomainStagingConfig](~~297374#doc-api-live-DescribeLiveDomainStagingConfig~~ "Queries the configurations in the canary release environment.") operation.
       * ## QPS limit
       * A single user can perform a maximum of 30 queries per minute. Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation. For more information about what a single user means and the QPS details, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live#topic-2136805).
       *
       * @param request PublishLiveStagingConfigToProductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishLiveStagingConfigToProductionResponse
       */
      Models::PublishLiveStagingConfigToProductionResponse publishLiveStagingConfigToProductionWithOptions(const Models::PublishLiveStagingConfigToProductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes the configurations of an accelerated domain name from the canary release environment to the production environment.
       *
       * @description Function name is required for calling this operation. You can get the function name by calling the [DescribeLiveDomainStagingConfig](~~297374#doc-api-live-DescribeLiveDomainStagingConfig~~ "Queries the configurations in the canary release environment.") operation.
       * ## QPS limit
       * A single user can perform a maximum of 30 queries per minute. Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation. For more information about what a single user means and the QPS details, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live#topic-2136805).
       *
       * @param request PublishLiveStagingConfigToProductionRequest
       * @return PublishLiveStagingConfigToProductionResponse
       */
      Models::PublishLiveStagingConfigToProductionResponse publishLiveStagingConfigToProduction(const Models::PublishLiveStagingConfigToProductionRequest &request);

      /**
       * @summary Queries the dual-stream disaster recovery records of online streams.
       *
       * @param request QueryLiveDomainMultiStreamListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLiveDomainMultiStreamListResponse
       */
      Models::QueryLiveDomainMultiStreamListResponse queryLiveDomainMultiStreamListWithOptions(const Models::QueryLiveDomainMultiStreamListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dual-stream disaster recovery records of online streams.
       *
       * @param request QueryLiveDomainMultiStreamListRequest
       * @return QueryLiveDomainMultiStreamListResponse
       */
      Models::QueryLiveDomainMultiStreamListResponse queryLiveDomainMultiStreamList(const Models::QueryLiveDomainMultiStreamListRequest &request);

      /**
       * @summary Queries interactive messaging applications based on specified conditions.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request QueryMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMessageAppResponse
       */
      Models::QueryMessageAppResponse queryMessageAppWithOptions(const Models::QueryMessageAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries interactive messaging applications based on specified conditions.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request QueryMessageAppRequest
       * @return QueryMessageAppResponse
       */
      Models::QueryMessageAppResponse queryMessageApp(const Models::QueryMessageAppRequest &request);

      /**
       * @summary Queries the status of a speech-to-text or translation task.
       *
       * @description You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request QueryRtcAsrTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRtcAsrTasksResponse
       */
      Models::QueryRtcAsrTasksResponse queryRtcAsrTasksWithOptions(const Models::QueryRtcAsrTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a speech-to-text or translation task.
       *
       * @description You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request QueryRtcAsrTasksRequest
       * @return QueryRtcAsrTasksResponse
       */
      Models::QueryRtcAsrTasksResponse queryRtcAsrTasks(const Models::QueryRtcAsrTasksRequest &request);

      /**
       * @summary Queries the configuration of authentication for snapshot callbacks.
       *
       * @description Before you call this operation, make sure that you have configured authentication for snapshot callbacks. For more information, see [SetSnapshotCallbackAuth](https://help.aliyun.com/document_detail/2847907.html). You can call this operation to query the configuration of authentication for snapshot callbacks for a main streaming domain. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request QuerySnapshotCallbackAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySnapshotCallbackAuthResponse
       */
      Models::QuerySnapshotCallbackAuthResponse querySnapshotCallbackAuthWithOptions(const Models::QuerySnapshotCallbackAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of authentication for snapshot callbacks.
       *
       * @description Before you call this operation, make sure that you have configured authentication for snapshot callbacks. For more information, see [SetSnapshotCallbackAuth](https://help.aliyun.com/document_detail/2847907.html). You can call this operation to query the configuration of authentication for snapshot callbacks for a main streaming domain. Make sure that the parameter settings meet the requirements.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request QuerySnapshotCallbackAuthRequest
       * @return QuerySnapshotCallbackAuthResponse
       */
      Models::QuerySnapshotCallbackAuthResponse querySnapshotCallbackAuth(const Models::QuerySnapshotCallbackAuthRequest &request);

      /**
       * @summary Controls recordings manually on demand. For example, you can call this operation to start or stop recording at a specific point in time.
       *
       * @description *   Before you call this operation, make sure that you fully understand the billing method and pricing of live stream recording in ApsaraVideo Live. For more information, see [Billing of live stream recording](https://help.aliyun.com/document_detail/195287.html).
       * *   If a live stream is being automatically or manually recorded, you can call this operation to stop recording the live stream.
       * *   If you call this operation to start recording a live stream while it is being recorded, a TaskAlreadyStarted error is returned, indicating that the task has been started.
       * *   If a live stream that you manually record is interrupted, the recording stops.
       * *   If automatic recording is not configured for the live stream, ApsaraVideo Live does not automatically record the live stream after it is resumed.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RealTimeRecordCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RealTimeRecordCommandResponse
       */
      Models::RealTimeRecordCommandResponse realTimeRecordCommandWithOptions(const Models::RealTimeRecordCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Controls recordings manually on demand. For example, you can call this operation to start or stop recording at a specific point in time.
       *
       * @description *   Before you call this operation, make sure that you fully understand the billing method and pricing of live stream recording in ApsaraVideo Live. For more information, see [Billing of live stream recording](https://help.aliyun.com/document_detail/195287.html).
       * *   If a live stream is being automatically or manually recorded, you can call this operation to stop recording the live stream.
       * *   If you call this operation to start recording a live stream while it is being recorded, a TaskAlreadyStarted error is returned, indicating that the task has been started.
       * *   If a live stream that you manually record is interrupted, the recording stops.
       * *   If automatic recording is not configured for the live stream, ApsaraVideo Live does not automatically record the live stream after it is resumed.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RealTimeRecordCommandRequest
       * @return RealTimeRecordCommandResponse
       */
      Models::RealTimeRecordCommandResponse realTimeRecordCommand(const Models::RealTimeRecordCommandRequest &request);

      /**
       * @summary Restores a deleted interactive messaging group.
       *
       * @description *   You can call this operation to restore a deleted interactive messaging group within 30 days after you call the [DeleteLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) to delete the group.
       * *   After you restore a group, the messages that were stored in the group before it was deleted can still be queried.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RecoverLiveMessageDeletedGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverLiveMessageDeletedGroupResponse
       */
      Models::RecoverLiveMessageDeletedGroupResponse recoverLiveMessageDeletedGroupWithOptions(const Models::RecoverLiveMessageDeletedGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a deleted interactive messaging group.
       *
       * @description *   You can call this operation to restore a deleted interactive messaging group within 30 days after you call the [DeleteLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) to delete the group.
       * *   After you restore a group, the messages that were stored in the group before it was deleted can still be queried.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RecoverLiveMessageDeletedGroupRequest
       * @return RecoverLiveMessageDeletedGroupResponse
       */
      Models::RecoverLiveMessageDeletedGroupResponse recoverLiveMessageDeletedGroup(const Models::RecoverLiveMessageDeletedGroupRequest &request);

      /**
       * @summary Unmutes one or more users.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq RemoveLiveMessageGroupBandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveLiveMessageGroupBandResponse
       */
      Models::RemoveLiveMessageGroupBandResponse removeLiveMessageGroupBandWithOptions(const Models::RemoveLiveMessageGroupBandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unmutes one or more users.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RemoveLiveMessageGroupBandRequest
       * @return RemoveLiveMessageGroupBandResponse
       */
      Models::RemoveLiveMessageGroupBandResponse removeLiveMessageGroupBand(const Models::RemoveLiveMessageGroupBandRequest &request);

      /**
       * @summary Removes a specified episode from an episode list.
       *
       * @description ## [](#)Usage notes
       * You cannot use this operation on empty episode lists. For information about how to add episodes to an episode list, see [AddShowIntoShowList](https://help.aliyun.com/document_detail/370861.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request RemoveShowFromShowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveShowFromShowListResponse
       */
      Models::RemoveShowFromShowListResponse removeShowFromShowListWithOptions(const Models::RemoveShowFromShowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a specified episode from an episode list.
       *
       * @description ## [](#)Usage notes
       * You cannot use this operation on empty episode lists. For information about how to add episodes to an episode list, see [AddShowIntoShowList](https://help.aliyun.com/document_detail/370861.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request RemoveShowFromShowListRequest
       * @return RemoveShowFromShowListResponse
       */
      Models::RemoveShowFromShowListResponse removeShowFromShowList(const Models::RemoveShowFromShowListRequest &request);

      /**
       * @summary Removes users from a channel.
       *
       * @description You can call this operation to remove one or more users from a channel.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RemoveTerminalsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTerminalsResponse
       */
      Models::RemoveTerminalsResponse removeTerminalsWithOptions(const Models::RemoveTerminalsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes users from a channel.
       *
       * @description You can call this operation to remove one or more users from a channel.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RemoveTerminalsRequest
       * @return RemoveTerminalsResponse
       */
      Models::RemoveTerminalsResponse removeTerminals(const Models::RemoveTerminalsRequest &request);

      /**
       * @summary Restarts a production studio.
       *
       * @description *   Only product studios in playlist mode and general mode are supported. Virtual studios are not supported.
       * *   After you restart a production studio, the current settings such as the resolution and screen orientation are reloaded to restore the previous playback status.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RestartCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartCasterResponse
       */
      Models::RestartCasterResponse restartCasterWithOptions(const Models::RestartCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a production studio.
       *
       * @description *   Only product studios in playlist mode and general mode are supported. Virtual studios are not supported.
       * *   After you restart a production studio, the current settings such as the resolution and screen orientation are reloaded to restore the previous playback status.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RestartCasterRequest
       * @return RestartCasterResponse
       */
      Models::RestartCasterResponse restartCaster(const Models::RestartCasterRequest &request);

      /**
       * @summary Restarts a pulled-stream relay task.
       *
       * @description *   You can call this operation to restart a pulled-stream relay task.
       * *   You can restart a task that is running (even if the task is in an abnormal retry state) or a task that is stopped. For a task that is running, this operation stops and then restarts it. For a task that is stopped, this operation directly starts it.
       * *   You cannot restart a task if the start time specified for the task has not been reached.
       * *   If a task is restarted, the task runs based on the latest configuration of the task. This interrupts stream ingest.
       * *   If a task for a list of ApsaraVideo VOD resources is restarted, the list plays from the beginning based on the latest configuration. You can call an operation to update the video index and playback progress to achieve successive playback.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RestartLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartLivePullToPushResponse
       */
      Models::RestartLivePullToPushResponse restartLivePullToPushWithOptions(const Models::RestartLivePullToPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a pulled-stream relay task.
       *
       * @description *   You can call this operation to restart a pulled-stream relay task.
       * *   You can restart a task that is running (even if the task is in an abnormal retry state) or a task that is stopped. For a task that is running, this operation stops and then restarts it. For a task that is stopped, this operation directly starts it.
       * *   You cannot restart a task if the start time specified for the task has not been reached.
       * *   If a task is restarted, the task runs based on the latest configuration of the task. This interrupts stream ingest.
       * *   If a task for a list of ApsaraVideo VOD resources is restarted, the list plays from the beginning based on the latest configuration. You can call an operation to update the video index and playback progress to achieve successive playback.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request RestartLivePullToPushRequest
       * @return RestartLivePullToPushResponse
       */
      Models::RestartLivePullToPushResponse restartLivePullToPush(const Models::RestartLivePullToPushRequest &request);

      /**
       * @param request RestartTranscodeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartTranscodeTaskResponse
       */
      Models::RestartTranscodeTaskResponse restartTranscodeTaskWithOptions(const Models::RestartTranscodeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RestartTranscodeTaskRequest
       * @return RestartTranscodeTaskResponse
       */
      Models::RestartTranscodeTaskResponse restartTranscodeTask(const Models::RestartTranscodeTaskRequest &request);

      /**
       * @summary Resumes the ingest of a live stream.
       *
       * @description You can call this operation to resume the ingest of a stream. This operation supports only the live streams ingested by streamers.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ResumeLiveStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeLiveStreamResponse
       */
      Models::ResumeLiveStreamResponse resumeLiveStreamWithOptions(const Models::ResumeLiveStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes the ingest of a live stream.
       *
       * @description You can call this operation to resume the ingest of a stream. This operation supports only the live streams ingested by streamers.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request ResumeLiveStreamRequest
       * @return ResumeLiveStreamResponse
       */
      Models::ResumeLiveStreamResponse resumeLiveStream(const Models::ResumeLiveStreamRequest &request);

      /**
       * @summary Rolls back the configurations of an accelerated domain name in the canary release environment.
       *
       * @description Function name is required for calling this operation. You can get the function name by calling the [DescribeLiveDomainStagingConfig](~~297374#doc-api-live-DescribeLiveDomainStagingConfig~~ "Queries the configurations in the canary release environment.") operation.
       * ## QPS limit
       * A single user can perform a maximum of 30 queries per minute. Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation. For more information about what a single user means and the QPS details, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live#topic-2136805).
       *
       * @param request RollbackLiveStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackLiveStagingConfigResponse
       */
      Models::RollbackLiveStagingConfigResponse rollbackLiveStagingConfigWithOptions(const Models::RollbackLiveStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back the configurations of an accelerated domain name in the canary release environment.
       *
       * @description Function name is required for calling this operation. You can get the function name by calling the [DescribeLiveDomainStagingConfig](~~297374#doc-api-live-DescribeLiveDomainStagingConfig~~ "Queries the configurations in the canary release environment.") operation.
       * ## QPS limit
       * A single user can perform a maximum of 30 queries per minute. Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation. For more information about what a single user means and the QPS details, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live#topic-2136805).
       *
       * @param request RollbackLiveStagingConfigRequest
       * @return RollbackLiveStagingConfigResponse
       */
      Models::RollbackLiveStagingConfigResponse rollbackLiveStagingConfig(const Models::RollbackLiveStagingConfigRequest &request);

      /**
       * @summary Configures likes in a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SendLikeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendLikeResponse
       */
      Models::SendLikeResponse sendLikeWithOptions(const Models::SendLikeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures likes in a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SendLikeRequest
       * @return SendLikeResponse
       */
      Models::SendLikeResponse sendLike(const Models::SendLikeRequest &request);

      /**
       * @summary Sends a message to a group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group. You can send messages to a group only if the group is active, which requires that one or more users have joined the group. Offline messages are not supported. If you fail to send a message, check whether users exist in the group. If you want to send a message when all users are offline, we recommend that you store the message locally and send it after users get online.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SendLiveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendLiveMessageGroupResponse
       */
      Models::SendLiveMessageGroupResponse sendLiveMessageGroupWithOptions(const Models::SendLiveMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message to a group.
       *
       * @description Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group. You can send messages to a group only if the group is active, which requires that one or more users have joined the group. Offline messages are not supported. If you fail to send a message, check whether users exist in the group. If you want to send a message when all users are offline, we recommend that you store the message locally and send it after users get online.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SendLiveMessageGroupRequest
       * @return SendLiveMessageGroupResponse
       */
      Models::SendLiveMessageGroupResponse sendLiveMessageGroup(const Models::SendLiveMessageGroupRequest &request);

      /**
       * @summary Sends a message to a specified user. The user is identified by ReceiverId.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SendLiveMessageUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendLiveMessageUserResponse
       */
      Models::SendLiveMessageUserResponse sendLiveMessageUserWithOptions(const Models::SendLiveMessageUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message to a specified user. The user is identified by ReceiverId.
       *
       * @description You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SendLiveMessageUserRequest
       * @return SendLiveMessageUserResponse
       */
      Models::SendLiveMessageUserResponse sendLiveMessageUser(const Models::SendLiveMessageUserRequest &request);

      /**
       * @summary Sends a message to all members in a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SendMessageToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageToGroupResponse
       */
      Models::SendMessageToGroupResponse sendMessageToGroupWithOptions(const Models::SendMessageToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message to all members in a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SendMessageToGroupRequest
       * @return SendMessageToGroupResponse
       */
      Models::SendMessageToGroupResponse sendMessageToGroup(const Models::SendMessageToGroupRequest &request);

      /**
       * @summary Sends a message to specified users in a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq SendMessageToGroupUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageToGroupUsersResponse
       */
      Models::SendMessageToGroupUsersResponse sendMessageToGroupUsersWithOptions(const Models::SendMessageToGroupUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message to specified users in a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SendMessageToGroupUsersRequest
       * @return SendMessageToGroupUsersResponse
       */
      Models::SendMessageToGroupUsersResponse sendMessageToGroupUsers(const Models::SendMessageToGroupUsersRequest &request);

      /**
       * @summary Configures a channel of a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to configure a channel for the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetCasterChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCasterChannelResponse
       */
      Models::SetCasterChannelResponse setCasterChannelWithOptions(const Models::SetCasterChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a channel of a production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to configure a channel for the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetCasterChannelRequest
       * @return SetCasterChannelResponse
       */
      Models::SetCasterChannelResponse setCasterChannel(const Models::SetCasterChannelRequest &request);

      /**
       * @summary Configures a production studio. For example, you can specify the name of the production studio, configure the transcoding settings, and configure the recording settings.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to configure the production studio. This operation completely replaces existing configurations. If you leave a parameter empty, the corresponding configuration is cleared for the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetCasterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCasterConfigResponse
       */
      Models::SetCasterConfigResponse setCasterConfigWithOptions(const Models::SetCasterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a production studio. For example, you can specify the name of the production studio, configure the transcoding settings, and configure the recording settings.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to configure the production studio. This operation completely replaces existing configurations. If you leave a parameter empty, the corresponding configuration is cleared for the production studio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetCasterConfigRequest
       * @return SetCasterConfigResponse
       */
      Models::SetCasterConfigResponse setCasterConfig(const Models::SetCasterConfigRequest &request);

      /**
       * @summary Configures all settings of a scene. This is done by clearing all previous settings of the scene and applying new settings, including the layout setting, to the scene.
       *
       * @description ## [](#)Usage notes
       * This operation configures a scene by clearing all previous settings of the scene and applying new settings, including the layout setting, to the scene.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SetCasterSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCasterSceneConfigResponse
       */
      Models::SetCasterSceneConfigResponse setCasterSceneConfigWithOptions(const Models::SetCasterSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures all settings of a scene. This is done by clearing all previous settings of the scene and applying new settings, including the layout setting, to the scene.
       *
       * @description ## [](#)Usage notes
       * This operation configures a scene by clearing all previous settings of the scene and applying new settings, including the layout setting, to the scene.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SetCasterSceneConfigRequest
       * @return SetCasterSceneConfigResponse
       */
      Models::SetCasterSceneConfigResponse setCasterSceneConfig(const Models::SetCasterSceneConfigRequest &request);

      /**
       * @summary Enables or disables the certificate of a domain name, and modifies the certificate information.
       *
       * @description Obtain the domain name, and then call this operation to enable or disable the certificate of a domain name and modify the certificate information.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveDomainCertificateResponse
       */
      Models::SetLiveDomainCertificateResponse setLiveDomainCertificateWithOptions(const Models::SetLiveDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the certificate of a domain name, and modifies the certificate information.
       *
       * @description Obtain the domain name, and then call this operation to enable or disable the certificate of a domain name and modify the certificate information.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveDomainCertificateRequest
       * @return SetLiveDomainCertificateResponse
       */
      Models::SetLiveDomainCertificateResponse setLiveDomainCertificate(const Models::SetLiveDomainCertificateRequest &request);

      /**
       * @summary Configures dual-stream disaster recovery for a streaming domain.
       *
       * @description You can call this operation to configure dual-stream disaster recovery for a streaming domain, which allows you to ingest two streams that have the same name.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveDomainMultiStreamConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveDomainMultiStreamConfigResponse
       */
      Models::SetLiveDomainMultiStreamConfigResponse setLiveDomainMultiStreamConfigWithOptions(const Models::SetLiveDomainMultiStreamConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures dual-stream disaster recovery for a streaming domain.
       *
       * @description You can call this operation to configure dual-stream disaster recovery for a streaming domain, which allows you to ingest two streams that have the same name.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveDomainMultiStreamConfigRequest
       * @return SetLiveDomainMultiStreamConfigResponse
       */
      Models::SetLiveDomainMultiStreamConfigResponse setLiveDomainMultiStreamConfig(const Models::SetLiveDomainMultiStreamConfigRequest &request);

      /**
       * @summary Manually switches between the active stream and standby stream.
       *
       * @param request SetLiveDomainMultiStreamMasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveDomainMultiStreamMasterResponse
       */
      Models::SetLiveDomainMultiStreamMasterResponse setLiveDomainMultiStreamMasterWithOptions(const Models::SetLiveDomainMultiStreamMasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually switches between the active stream and standby stream.
       *
       * @param request SetLiveDomainMultiStreamMasterRequest
       * @return SetLiveDomainMultiStreamMasterResponse
       */
      Models::SetLiveDomainMultiStreamMasterResponse setLiveDomainMultiStreamMaster(const Models::SetLiveDomainMultiStreamMasterRequest &request);

      /**
       * @summary Configures the auto mode of dual-stream disaster recovery.
       *
       * @param request SetLiveDomainMultiStreamOptimalModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveDomainMultiStreamOptimalModeResponse
       */
      Models::SetLiveDomainMultiStreamOptimalModeResponse setLiveDomainMultiStreamOptimalModeWithOptions(const Models::SetLiveDomainMultiStreamOptimalModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the auto mode of dual-stream disaster recovery.
       *
       * @param request SetLiveDomainMultiStreamOptimalModeRequest
       * @return SetLiveDomainMultiStreamOptimalModeResponse
       */
      Models::SetLiveDomainMultiStreamOptimalModeResponse setLiveDomainMultiStreamOptimalMode(const Models::SetLiveDomainMultiStreamOptimalModeRequest &request);

      /**
       * @summary Sets or modifies domain name configurations in the canary release environment.
       *
       * @description ## [](#)Usage notes
       * Obtain the accelerated domain name, and then call this operation to set or modify the domain name configurations in the canary release environment. For more information, see **Format of the Functions parameter**.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SetLiveDomainStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveDomainStagingConfigResponse
       */
      Models::SetLiveDomainStagingConfigResponse setLiveDomainStagingConfigWithOptions(const Models::SetLiveDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets or modifies domain name configurations in the canary release environment.
       *
       * @description ## [](#)Usage notes
       * Obtain the accelerated domain name, and then call this operation to set or modify the domain name configurations in the canary release environment. For more information, see **Format of the Functions parameter**.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SetLiveDomainStagingConfigRequest
       * @return SetLiveDomainStagingConfigResponse
       */
      Models::SetLiveDomainStagingConfigResponse setLiveDomainStagingConfig(const Models::SetLiveDomainStagingConfigRequest &request);

      /**
       * @summary Sets the configuration of edge stream relay.
       *
       * @description You can call the SetLiveEdgeTransfer operation to configure edge stream relay. The configuration takes effect for ingested streams that start after edge stream relay is configured. The following table describes the scenarios in which edge stream relay takes effect or not.
       * |Scenario|Analysis|Result|
       * |---|---|---|
       * |1\\. You ingest a stream before you call the SetLiveEdgeTransfer operation.|The configuration of edge stream relay is not available.|The ingested stream is not affected by your call of the SetLiveEdgeTransfer operation. Edge stream relay does not take effect.|
       * |2\\. You disconnect an ingested stream that started before you called the SetLiveEdgeTransfer operation, and then resume the ingested stream.|The configuration of edge stream relay is available.|Edge stream relay takes effect for the resumed ingested stream based on the configuration.|
       * |3\\. You ingest a stream after you call the SetLiveEdgeTransfer operation.|The configuration of edge stream relay is available.|Edge stream relay takes effect for the ingested stream based on the configuration.|
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveEdgeTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveEdgeTransferResponse
       */
      Models::SetLiveEdgeTransferResponse setLiveEdgeTransferWithOptions(const Models::SetLiveEdgeTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the configuration of edge stream relay.
       *
       * @description You can call the SetLiveEdgeTransfer operation to configure edge stream relay. The configuration takes effect for ingested streams that start after edge stream relay is configured. The following table describes the scenarios in which edge stream relay takes effect or not.
       * |Scenario|Analysis|Result|
       * |---|---|---|
       * |1\\. You ingest a stream before you call the SetLiveEdgeTransfer operation.|The configuration of edge stream relay is not available.|The ingested stream is not affected by your call of the SetLiveEdgeTransfer operation. Edge stream relay does not take effect.|
       * |2\\. You disconnect an ingested stream that started before you called the SetLiveEdgeTransfer operation, and then resume the ingested stream.|The configuration of edge stream relay is available.|Edge stream relay takes effect for the resumed ingested stream based on the configuration.|
       * |3\\. You ingest a stream after you call the SetLiveEdgeTransfer operation.|The configuration of edge stream relay is available.|Edge stream relay takes effect for the ingested stream based on the configuration.|
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveEdgeTransferRequest
       * @return SetLiveEdgeTransferResponse
       */
      Models::SetLiveEdgeTransferResponse setLiveEdgeTransfer(const Models::SetLiveEdgeTransferRequest &request);

      /**
       * @summary Creates a configuration of triggered stream pulling.
       *
       * @description You can call this operation to configure triggered stream pulling. The configuration lets ApsaraVideo Live automatically pull live streams from the origin server when the origin server starts to play live streams.
       * >  The IPv6 protocol is not supported.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveLazyPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveLazyPullStreamInfoConfigResponse
       */
      Models::SetLiveLazyPullStreamInfoConfigResponse setLiveLazyPullStreamInfoConfigWithOptions(const Models::SetLiveLazyPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a configuration of triggered stream pulling.
       *
       * @description You can call this operation to configure triggered stream pulling. The configuration lets ApsaraVideo Live automatically pull live streams from the origin server when the origin server starts to play live streams.
       * >  The IPv6 protocol is not supported.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveLazyPullStreamInfoConfigRequest
       * @return SetLiveLazyPullStreamInfoConfigResponse
       */
      Models::SetLiveLazyPullStreamInfoConfigResponse setLiveLazyPullStreamInfoConfig(const Models::SetLiveLazyPullStreamInfoConfigRequest &request);

      /**
       * @summary Configures custom supplemental enhancement information (SEI) for co-streaming.
       *
       * @description ## [](#)Usage notes
       * You can call this operation to configure custom SEI for a mixed-stream relay task.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveMpuTaskSeiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveMpuTaskSeiResponse
       */
      Models::SetLiveMpuTaskSeiResponse setLiveMpuTaskSeiWithOptions(const Models::SetLiveMpuTaskSeiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures custom supplemental enhancement information (SEI) for co-streaming.
       *
       * @description ## [](#)Usage notes
       * You can call this operation to configure custom SEI for a mixed-stream relay task.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveMpuTaskSeiRequest
       * @return SetLiveMpuTaskSeiResponse
       */
      Models::SetLiveMpuTaskSeiResponse setLiveMpuTaskSei(const Models::SetLiveMpuTaskSeiRequest &request);

      /**
       * @summary Configures stream-level region blocking.
       *
       * @description You can configure up to 200 stream-level region blocking rules for a domain name. If there are rules in which the same application name and the same stream name are specified, the rule that is updated the most recently takes effect.
       * ### [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveStreamBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveStreamBlockResponse
       */
      Models::SetLiveStreamBlockResponse setLiveStreamBlockWithOptions(const Models::SetLiveStreamBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures stream-level region blocking.
       *
       * @description You can configure up to 200 stream-level region blocking rules for a domain name. If there are rules in which the same application name and the same stream name are specified, the rule that is updated the most recently takes effect.
       * ### [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveStreamBlockRequest
       * @return SetLiveStreamBlockResponse
       */
      Models::SetLiveStreamBlockResponse setLiveStreamBlock(const Models::SetLiveStreamBlockRequest &request);

      /**
       * @summary Configures the live streaming latency.
       *
       * @description *   You can call this operation to configure the latency of a streaming domain.
       * *   Because an integer number of groups of pictures (GOPs) are cached, the latency is not less than the GOP size. The actual latency is calculated based on the GOP size. For example, if RtmpDelay is set to 4 seconds and the GOP size is 2 seconds, the minimum latency is 2 seconds (4 seconds minus 2 seconds) and the maximum latency is 6 seconds (4 seconds plus 2 seconds). If the GOP size is greater than the value of RtmpDelay, for example, the GOP size is 5 seconds and RtmpDelay is set to 4 seconds, the latency ranges from 0 to 9 seconds.
       * *   Configuration for the latency of an audio-only stream is invalid. By default, the latency is close to 0.
       * *   For HTTP Live Streaming (HLS)-based playback, the segment size equals the latency divided by 3. Round the value down to the nearest integer. The value cannot be less than 1 second. Then, calculate the maximum number of segments. If the segment size is greater than or equal to 3 seconds, the maximum number of segments is 4. Otherwise, the maximum number of segments is 6.
       * *   The actual HLS segment size is not smaller than the GOP size.
       * *   The latency of HLS-based playback equals the configured segment size times 3.
       * *   If you do not call this operation, the default latency is 2 seconds for Real-Time Messaging Protocol (RTMP)-based playback and 4 seconds for Flash Video (FLV)-based playback. By default, the size of an HLS segment is 5 seconds. In this case, the latency is 15 seconds and the maximum number of segments is 6.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveStreamDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveStreamDelayConfigResponse
       */
      Models::SetLiveStreamDelayConfigResponse setLiveStreamDelayConfigWithOptions(const Models::SetLiveStreamDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the live streaming latency.
       *
       * @description *   You can call this operation to configure the latency of a streaming domain.
       * *   Because an integer number of groups of pictures (GOPs) are cached, the latency is not less than the GOP size. The actual latency is calculated based on the GOP size. For example, if RtmpDelay is set to 4 seconds and the GOP size is 2 seconds, the minimum latency is 2 seconds (4 seconds minus 2 seconds) and the maximum latency is 6 seconds (4 seconds plus 2 seconds). If the GOP size is greater than the value of RtmpDelay, for example, the GOP size is 5 seconds and RtmpDelay is set to 4 seconds, the latency ranges from 0 to 9 seconds.
       * *   Configuration for the latency of an audio-only stream is invalid. By default, the latency is close to 0.
       * *   For HTTP Live Streaming (HLS)-based playback, the segment size equals the latency divided by 3. Round the value down to the nearest integer. The value cannot be less than 1 second. Then, calculate the maximum number of segments. If the segment size is greater than or equal to 3 seconds, the maximum number of segments is 4. Otherwise, the maximum number of segments is 6.
       * *   The actual HLS segment size is not smaller than the GOP size.
       * *   The latency of HLS-based playback equals the configured segment size times 3.
       * *   If you do not call this operation, the default latency is 2 seconds for Real-Time Messaging Protocol (RTMP)-based playback and 4 seconds for Flash Video (FLV)-based playback. By default, the size of an HLS segment is 5 seconds. In this case, the latency is 15 seconds and the maximum number of segments is 6.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveStreamDelayConfigRequest
       * @return SetLiveStreamDelayConfigResponse
       */
      Models::SetLiveStreamDelayConfigResponse setLiveStreamDelayConfig(const Models::SetLiveStreamDelayConfigRequest &request);

      /**
       * @summary Configures a prefetch task. You can specify multiple URLs to prefetch at a time.
       *
       * @description *   You can call this operation to specify multiple URLs to prefetch at a time. You can specify up to 100 URLs in a request.
       * *   URLs in the HTTP Live Steaming (HLS) format are not supported.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveStreamPreloadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveStreamPreloadTasksResponse
       */
      Models::SetLiveStreamPreloadTasksResponse setLiveStreamPreloadTasksWithOptions(const Models::SetLiveStreamPreloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a prefetch task. You can specify multiple URLs to prefetch at a time.
       *
       * @description *   You can call this operation to specify multiple URLs to prefetch at a time. You can specify up to 100 URLs in a request.
       * *   URLs in the HTTP Live Steaming (HLS) format are not supported.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveStreamPreloadTasksRequest
       * @return SetLiveStreamPreloadTasksResponse
       */
      Models::SetLiveStreamPreloadTasksResponse setLiveStreamPreloadTasks(const Models::SetLiveStreamPreloadTasksRequest &request);

      /**
       * @summary Configures stream ingest callbacks under an ingest domain.
       *
       * @description *   You can call this operation to configure the callback URL and authentication information of an ingest domain.
       * *   If you configure callbacks for stream ingest status, you can receive callback notifications about successful or interrupted stream ingest in a timely manner. For more information, see [Format of stream ingest callbacks](https://help.aliyun.com/document_detail/54787.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveStreamsNotifyUrlConfigResponse
       */
      Models::SetLiveStreamsNotifyUrlConfigResponse setLiveStreamsNotifyUrlConfigWithOptions(const Models::SetLiveStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures stream ingest callbacks under an ingest domain.
       *
       * @description *   You can call this operation to configure the callback URL and authentication information of an ingest domain.
       * *   If you configure callbacks for stream ingest status, you can receive callback notifications about successful or interrupted stream ingest in a timely manner. For more information, see [Format of stream ingest callbacks](https://help.aliyun.com/document_detail/54787.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetLiveStreamsNotifyUrlConfigRequest
       * @return SetLiveStreamsNotifyUrlConfigResponse
       */
      Models::SetLiveStreamsNotifyUrlConfigResponse setLiveStreamsNotifyUrlConfig(const Models::SetLiveStreamsNotifyUrlConfigRequest &request);

      /**
       * @summary Configures the background of the episode list.
       *
       * @description *   Create a production studio in playlist mode, and then call this operation to add the background material. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * *   You can call this operation to create, update, or delete the background of the episode list. To delete the background, leave the ResourceType, ResourceUrl, and MaterialId parameters empty.
       * > 
       * *   When you select media resources from ApsaraVideo VOD, we recommend that you select resources that are stored in hosted OSS buckets. Resources stored in non-hosted OSS buckets have a validity period. Pay attention to the validity if you select resources that are stored in non-hosted OSS buckets.
       * *   When you add media resources to a production studio, we recommend that you select resources from ApsaraVideo Live and ApsaraVideo VOD. If you add a third-party stream by specifying a streaming URL, there is a possibility that the stream fails to be played. You must pay attention to the quality and validity of the third-party stream.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetShowListBackgroundRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetShowListBackgroundResponse
       */
      Models::SetShowListBackgroundResponse setShowListBackgroundWithOptions(const Models::SetShowListBackgroundRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the background of the episode list.
       *
       * @description *   Create a production studio in playlist mode, and then call this operation to add the background material. For information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * *   You can call this operation to create, update, or delete the background of the episode list. To delete the background, leave the ResourceType, ResourceUrl, and MaterialId parameters empty.
       * > 
       * *   When you select media resources from ApsaraVideo VOD, we recommend that you select resources that are stored in hosted OSS buckets. Resources stored in non-hosted OSS buckets have a validity period. Pay attention to the validity if you select resources that are stored in non-hosted OSS buckets.
       * *   When you add media resources to a production studio, we recommend that you select resources from ApsaraVideo Live and ApsaraVideo VOD. If you add a third-party stream by specifying a streaming URL, there is a possibility that the stream fails to be played. You must pay attention to the quality and validity of the third-party stream.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetShowListBackgroundRequest
       * @return SetShowListBackgroundResponse
       */
      Models::SetShowListBackgroundResponse setShowListBackground(const Models::SetShowListBackgroundRequest &request);

      /**
       * @summary Configures authentication for snapshot callbacks.
       *
       * @description *   Before you configure authentication for snapshot callbacks, you need to specify the callback URL. For more information, see [AddLiveAppSnapshotConfig](https://help.aliyun.com/document_detail/2847897.html).
       * *   You can call this operation to configure authentication for snapshot callbacks for a main streaming domain. Make sure that the parameter settings meet the requirements.
       * *   ApsaraVideo Live allows you to add a specific signature header to each HTTP or HTTPS callback request. This way, the server that receives callback messages can authenticate the signature to prevent illegal or invalid requests. For more information, see [Usage notes for callback authentication](https://help.aliyun.com/document_detail/417349.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetSnapshotCallbackAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSnapshotCallbackAuthResponse
       */
      Models::SetSnapshotCallbackAuthResponse setSnapshotCallbackAuthWithOptions(const Models::SetSnapshotCallbackAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures authentication for snapshot callbacks.
       *
       * @description *   Before you configure authentication for snapshot callbacks, you need to specify the callback URL. For more information, see [AddLiveAppSnapshotConfig](https://help.aliyun.com/document_detail/2847897.html).
       * *   You can call this operation to configure authentication for snapshot callbacks for a main streaming domain. Make sure that the parameter settings meet the requirements.
       * *   ApsaraVideo Live allows you to add a specific signature header to each HTTP or HTTPS callback request. This way, the server that receives callback messages can authenticate the signature to prevent illegal or invalid requests. For more information, see [Usage notes for callback authentication](https://help.aliyun.com/document_detail/417349.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SetSnapshotCallbackAuthRequest
       * @return SetSnapshotCallbackAuthResponse
       */
      Models::SetSnapshotCallbackAuthResponse setSnapshotCallbackAuth(const Models::SetSnapshotCallbackAuthRequest &request);

      /**
       * @summary Starts a production studio. If the production studio does not have a PVW scene or a PGM scene, this operation creates and starts such scenes and starts audio and video processing tasks.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to start the production studio. If the production studio does not have a PVW scene or a PGM scene, this operation creates and starts such scenes and starts audio and video processing tasks.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCasterResponse
       */
      Models::StartCasterResponse startCasterWithOptions(const Models::StartCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a production studio. If the production studio does not have a PVW scene or a PGM scene, this operation creates and starts such scenes and starts audio and video processing tasks.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to start the production studio. If the production studio does not have a PVW scene or a PGM scene, this operation creates and starts such scenes and starts audio and video processing tasks.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartCasterRequest
       * @return StartCasterResponse
       */
      Models::StartCasterResponse startCaster(const Models::StartCasterRequest &request);

      /**
       * @summary Starts a specified preview (PVW) scene.
       *
       * @description You can call this operation to start a specified PVW scene.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartCasterSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCasterSceneResponse
       */
      Models::StartCasterSceneResponse startCasterSceneWithOptions(const Models::StartCasterSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a specified preview (PVW) scene.
       *
       * @description You can call this operation to start a specified PVW scene.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartCasterSceneRequest
       * @return StartCasterSceneResponse
       */
      Models::StartCasterSceneResponse startCasterScene(const Models::StartCasterSceneRequest &request);

      /**
       * @summary Starts an edge transcoding task.
       *
       * @description *   You can call this operation to start an edge transcoding task.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature and the edge transcoding task that you specify is not started.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartEdgeTranscodeJobResponse
       */
      Models::StartEdgeTranscodeJobResponse startEdgeTranscodeJobWithOptions(const Models::StartEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an edge transcoding task.
       *
       * @description *   You can call this operation to start an edge transcoding task.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature and the edge transcoding task that you specify is not started.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartEdgeTranscodeJobRequest
       * @return StartEdgeTranscodeJobResponse
       */
      Models::StartEdgeTranscodeJobResponse startEdgeTranscodeJob(const Models::StartEdgeTranscodeJobRequest &request);

      /**
       * @summary Enables a disabled domain name. After the domain name is enabled, its status changes to online.
       *
       * @description This operation does not work if the Alibaba Cloud account to which the domain name belongs has overdue payments or the domain name is invalid.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartLiveDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLiveDomainResponse
       */
      Models::StartLiveDomainResponse startLiveDomainWithOptions(const Models::StartLiveDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a disabled domain name. After the domain name is enabled, its status changes to online.
       *
       * @description This operation does not work if the Alibaba Cloud account to which the domain name belongs has overdue payments or the domain name is invalid.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartLiveDomainRequest
       * @return StartLiveDomainResponse
       */
      Models::StartLiveDomainResponse startLiveDomain(const Models::StartLiveDomainRequest &request);

      /**
       * @summary Creates a mixed-stream relay task.
       *
       * @description By default, you can create up to 200 single-stream relay tasks and up to 40 mixed-stream relay tasks for an application. To increase the quota, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket).
       * ### [](#)Lifecycle of a stream relay task
       * **Start**
       * *   Call the StartLiveMPUTask operation to create a task.
       *     *   If no user joins the channel, an error indicating that the channel does not exist is returned.
       *     *   Stream relay is not performed if no stream is ingested. In this case, no relayed stream is available for playback.
       *     *   If the task is in the mixed-stream relay mode, make sure that at least one user is ingesting a stream, which can be relayed for playback. A black screen is displayed in the pane of a user who is not ingesting a stream.
       * *   We recommend that you record the task status, task mode, and task parameters on your business server.
       *     *   Task status: started or stopped.
       *     *   Task mode: single-stream relay or mixed-stream relay.
       *     *   Task parameters: the latest input parameters. For example, after your call of the UpdateLiveMPUTask operation is successful, record the task parameters, which are the latest.
       * *   In co-streaming or battle scenarios, the task is in the mixed-stream relay mode. If the streamer leaves the channel due to exceptions and re-joins the channel, you can directly call the StartLiveMPUTask operation on your business server to start stream relay based on the recorded task parameters.
       *     *   If the task has not been automatically cleared by the system, the task is directly started.
       *     *   If the task has not been automatically cleared by the system, a message indicating that **the task already exists** is returned.
       * **End**
       * *   After the streamer leaves the channel, you need to call the [StopLiveMPUTask](https://help.aliyun.com/document_detail/2362742.html) operation to stop the task.
       * *   If all users specified in the task have left the channel, but you do not call the StopLiveMPUTask operation, the system stops the task in 2 minutes.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq StartLiveMPUTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLiveMPUTaskResponse
       */
      Models::StartLiveMPUTaskResponse startLiveMPUTaskWithOptions(const Models::StartLiveMPUTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a mixed-stream relay task.
       *
       * @description By default, you can create up to 200 single-stream relay tasks and up to 40 mixed-stream relay tasks for an application. To increase the quota, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket).
       * ### [](#)Lifecycle of a stream relay task
       * **Start**
       * *   Call the StartLiveMPUTask operation to create a task.
       *     *   If no user joins the channel, an error indicating that the channel does not exist is returned.
       *     *   Stream relay is not performed if no stream is ingested. In this case, no relayed stream is available for playback.
       *     *   If the task is in the mixed-stream relay mode, make sure that at least one user is ingesting a stream, which can be relayed for playback. A black screen is displayed in the pane of a user who is not ingesting a stream.
       * *   We recommend that you record the task status, task mode, and task parameters on your business server.
       *     *   Task status: started or stopped.
       *     *   Task mode: single-stream relay or mixed-stream relay.
       *     *   Task parameters: the latest input parameters. For example, after your call of the UpdateLiveMPUTask operation is successful, record the task parameters, which are the latest.
       * *   In co-streaming or battle scenarios, the task is in the mixed-stream relay mode. If the streamer leaves the channel due to exceptions and re-joins the channel, you can directly call the StartLiveMPUTask operation on your business server to start stream relay based on the recorded task parameters.
       *     *   If the task has not been automatically cleared by the system, the task is directly started.
       *     *   If the task has not been automatically cleared by the system, a message indicating that **the task already exists** is returned.
       * **End**
       * *   After the streamer leaves the channel, you need to call the [StopLiveMPUTask](https://help.aliyun.com/document_detail/2362742.html) operation to stop the task.
       * *   If all users specified in the task have left the channel, but you do not call the StopLiveMPUTask operation, the system stops the task in 2 minutes.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartLiveMPUTaskRequest
       * @return StartLiveMPUTaskResponse
       */
      Models::StartLiveMPUTaskResponse startLiveMPUTask(const Models::StartLiveMPUTaskRequest &request);

      /**
       * @summary Starts live monitoring.
       *
       * @description You can call the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation to create a monitoring session, obtain the value of the response parameter **MonitorId**, and then start live monitoring.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartLiveStreamMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLiveStreamMonitorResponse
       */
      Models::StartLiveStreamMonitorResponse startLiveStreamMonitorWithOptions(const Models::StartLiveStreamMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts live monitoring.
       *
       * @description You can call the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation to create a monitoring session, obtain the value of the response parameter **MonitorId**, and then start live monitoring.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartLiveStreamMonitorRequest
       * @return StartLiveStreamMonitorResponse
       */
      Models::StartLiveStreamMonitorResponse startLiveStreamMonitor(const Models::StartLiveStreamMonitorRequest &request);

      /**
       * @summary Starts playing an episode list.
       *
       * @description You can call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add episodes to an episode list and then call this operation to start playing the episode list.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartPlaylistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPlaylistResponse
       */
      Models::StartPlaylistResponse startPlaylistWithOptions(const Models::StartPlaylistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts playing an episode list.
       *
       * @description You can call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add episodes to an episode list and then call this operation to start playing the episode list.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StartPlaylistRequest
       * @return StartPlaylistResponse
       */
      Models::StartPlaylistResponse startPlaylist(const Models::StartPlaylistRequest &request);

      /**
       * @summary 启动rtc云端录制任务
       *
       * @param tmpReq StartRtcCloudRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRtcCloudRecordingResponse
       */
      Models::StartRtcCloudRecordingResponse startRtcCloudRecordingWithOptions(const Models::StartRtcCloudRecordingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动rtc云端录制任务
       *
       * @param request StartRtcCloudRecordingRequest
       * @return StartRtcCloudRecordingResponse
       */
      Models::StartRtcCloudRecordingResponse startRtcCloudRecording(const Models::StartRtcCloudRecordingRequest &request);

      /**
       * @summary Stops a production studio. This stops the PVW and PGM scenes of the production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and call this operation to stop the production studio. When a production studio is stopped, its PVW and PGM scenes are stopped.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCasterResponse
       */
      Models::StopCasterResponse stopCasterWithOptions(const Models::StopCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a production studio. This stops the PVW and PGM scenes of the production studio.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and call this operation to stop the production studio. When a production studio is stopped, its PVW and PGM scenes are stopped.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopCasterRequest
       * @return StopCasterResponse
       */
      Models::StopCasterResponse stopCaster(const Models::StopCasterRequest &request);

      /**
       * @summary Stops a specified preview scene.
       *
       * @description ## Usage note
       * This operation is only applicable to the PVW scenes.
       *
       * @param request StopCasterSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCasterSceneResponse
       */
      Models::StopCasterSceneResponse stopCasterSceneWithOptions(const Models::StopCasterSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a specified preview scene.
       *
       * @description ## Usage note
       * This operation is only applicable to the PVW scenes.
       *
       * @param request StopCasterSceneRequest
       * @return StopCasterSceneResponse
       */
      Models::StopCasterSceneResponse stopCasterScene(const Models::StopCasterSceneRequest &request);

      /**
       * @summary Stops an edge transcoding task.
       *
       * @description *   You can call this operation to stop an edge transcoding task.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature and the edge transcoding task that you specify is running.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopEdgeTranscodeJobResponse
       */
      Models::StopEdgeTranscodeJobResponse stopEdgeTranscodeJobWithOptions(const Models::StopEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an edge transcoding task.
       *
       * @description *   You can call this operation to stop an edge transcoding task.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature and the edge transcoding task that you specify is running.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopEdgeTranscodeJobRequest
       * @return StopEdgeTranscodeJobResponse
       */
      Models::StopEdgeTranscodeJobResponse stopEdgeTranscodeJob(const Models::StopEdgeTranscodeJobRequest &request);

      /**
       * @summary Disables an enabled domain name. After the domain name is disabled, its status changes to offline.
       *
       * @description After you disable a domain name, the information about the domain name is retained. ApsaraVideo Live automatically reroutes all requests that are destined for the domain name to the origin.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopLiveDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLiveDomainResponse
       */
      Models::StopLiveDomainResponse stopLiveDomainWithOptions(const Models::StopLiveDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an enabled domain name. After the domain name is disabled, its status changes to offline.
       *
       * @description After you disable a domain name, the information about the domain name is retained. ApsaraVideo Live automatically reroutes all requests that are destined for the domain name to the origin.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopLiveDomainRequest
       * @return StopLiveDomainResponse
       */
      Models::StopLiveDomainResponse stopLiveDomain(const Models::StopLiveDomainRequest &request);

      /**
       * @summary Stops a mixed-stream relay task.
       *
       * @description *   Make sure that a mixed-stream relay task is started before you call this operation. You can call the [StartLiveMPUTask](https://help.aliyun.com/document_detail/2848199.html) operation to start a mixed-stream relay task.
       * *   If a mixed-stream relay task becomes abnormal, the task is automatically stopped 2 minutes after the last person leaves the channel. In this case, you do not need to call the StopLiveMPUTask operation. If you need to resume a mixed-stream relay task that is stopped, call the [StartLiveMPUTask](https://help.aliyun.com/document_detail/2848199.html) operation again.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopLiveMPUTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLiveMPUTaskResponse
       */
      Models::StopLiveMPUTaskResponse stopLiveMPUTaskWithOptions(const Models::StopLiveMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a mixed-stream relay task.
       *
       * @description *   Make sure that a mixed-stream relay task is started before you call this operation. You can call the [StartLiveMPUTask](https://help.aliyun.com/document_detail/2848199.html) operation to start a mixed-stream relay task.
       * *   If a mixed-stream relay task becomes abnormal, the task is automatically stopped 2 minutes after the last person leaves the channel. In this case, you do not need to call the StopLiveMPUTask operation. If you need to resume a mixed-stream relay task that is stopped, call the [StartLiveMPUTask](https://help.aliyun.com/document_detail/2848199.html) operation again.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopLiveMPUTaskRequest
       * @return StopLiveMPUTaskResponse
       */
      Models::StopLiveMPUTaskResponse stopLiveMPUTask(const Models::StopLiveMPUTaskRequest &request);

      /**
       * @summary Stops a pulled-stream relay task.
       *
       * @description *   You can call this operation to stop a pulled-stream relay task.
       * *   You can stop a task that is running (even if the task is in an abnormal retry state). You cannot stop a task that is not running.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLivePullToPushResponse
       */
      Models::StopLivePullToPushResponse stopLivePullToPushWithOptions(const Models::StopLivePullToPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a pulled-stream relay task.
       *
       * @description *   You can call this operation to stop a pulled-stream relay task.
       * *   You can stop a task that is running (even if the task is in an abnormal retry state). You cannot stop a task that is not running.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopLivePullToPushRequest
       * @return StopLivePullToPushResponse
       */
      Models::StopLivePullToPushResponse stopLivePullToPush(const Models::StopLivePullToPushRequest &request);

      /**
       * @summary Stops live monitoring.
       *
       * @description Before you call this operation to stop live monitoring, make sure that live monitoring is started. You can call the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation to create a monitoring session, obtain the value of the response parameter **MonitorId**, and then start live monitoring.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopLiveStreamMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLiveStreamMonitorResponse
       */
      Models::StopLiveStreamMonitorResponse stopLiveStreamMonitorWithOptions(const Models::StopLiveStreamMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops live monitoring.
       *
       * @description Before you call this operation to stop live monitoring, make sure that live monitoring is started. You can call the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation to create a monitoring session, obtain the value of the response parameter **MonitorId**, and then start live monitoring.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopLiveStreamMonitorRequest
       * @return StopLiveStreamMonitorResponse
       */
      Models::StopLiveStreamMonitorResponse stopLiveStreamMonitor(const Models::StopLiveStreamMonitorRequest &request);

      /**
       * @summary Stops playing an episode list.
       *
       * @description You can call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add episodes to an episode list and then call this operation to stop playing the episode list.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopPlaylistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopPlaylistResponse
       */
      Models::StopPlaylistResponse stopPlaylistWithOptions(const Models::StopPlaylistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops playing an episode list.
       *
       * @description You can call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add episodes to an episode list and then call this operation to stop playing the episode list.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopPlaylistRequest
       * @return StopPlaylistResponse
       */
      Models::StopPlaylistResponse stopPlaylist(const Models::StopPlaylistRequest &request);

      /**
       * @summary Stops a live subtitle task.
       *
       * @description You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopRtcAsrTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRtcAsrTaskResponse
       */
      Models::StopRtcAsrTaskResponse stopRtcAsrTaskWithOptions(const Models::StopRtcAsrTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a live subtitle task.
       *
       * @description You can call this operation up to 20 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request StopRtcAsrTaskRequest
       * @return StopRtcAsrTaskResponse
       */
      Models::StopRtcAsrTaskResponse stopRtcAsrTask(const Models::StopRtcAsrTaskRequest &request);

      /**
       * @summary 停止rtc云端录制任务
       *
       * @param request StopRtcCloudRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRtcCloudRecordingResponse
       */
      Models::StopRtcCloudRecordingResponse stopRtcCloudRecordingWithOptions(const Models::StopRtcCloudRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止rtc云端录制任务
       *
       * @param request StopRtcCloudRecordingRequest
       * @return StopRtcCloudRecordingResponse
       */
      Models::StopRtcCloudRecordingResponse stopRtcCloudRecording(const Models::StopRtcCloudRecordingRequest &request);

      /**
       * @summary The N tags that you want to add for the resource.
       *
       * @description The key of the tag. Valid values of N: **1 to 20**.
       *
       * @param request TagLiveResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagLiveResourcesResponse
       */
      Models::TagLiveResourcesResponse tagLiveResourcesWithOptions(const Models::TagLiveResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The N tags that you want to add for the resource.
       *
       * @description The key of the tag. Valid values of N: **1 to 20**.
       *
       * @param request TagLiveResourcesRequest
       * @return TagLiveResourcesResponse
       */
      Models::TagLiveResourcesResponse tagLiveResources(const Models::TagLiveResourcesRequest &request);

      /**
       * @param request UnTagLiveResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagLiveResourcesResponse
       */
      Models::UnTagLiveResourcesResponse unTagLiveResourcesWithOptions(const Models::UnTagLiveResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UnTagLiveResourcesRequest
       * @return UnTagLiveResourcesResponse
       */
      Models::UnTagLiveResourcesResponse unTagLiveResources(const Models::UnTagLiveResourcesRequest &request);

      /**
       * @summary Unmutes a group.
       *
       * @description *   Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * *   If a user was muted by calling the AddLiveMessageGroupBand operation, the user remains muted even after you call the UnbanLiveMessageGroup operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UnbanLiveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbanLiveMessageGroupResponse
       */
      Models::UnbanLiveMessageGroupResponse unbanLiveMessageGroupWithOptions(const Models::UnbanLiveMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unmutes a group.
       *
       * @description *   Before you call this operation, make sure that you have called the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * *   If a user was muted by calling the AddLiveMessageGroupBand operation, the user remains muted even after you call the UnbanLiveMessageGroup operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UnbanLiveMessageGroupRequest
       * @return UnbanLiveMessageGroupResponse
       */
      Models::UnbanLiveMessageGroupResponse unbanLiveMessageGroup(const Models::UnbanLiveMessageGroupRequest &request);

      /**
       * @summary Changes the resource group to which a production studio belongs.
       *
       * @description ## [](#)Usage notes
       * To call this operation to change the resource group to which a production studio belongs, you must have access permissions on the original resource group and the destination resource group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request UpdateCasterResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCasterResourceGroupResponse
       */
      Models::UpdateCasterResourceGroupResponse updateCasterResourceGroupWithOptions(const Models::UpdateCasterResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a production studio belongs.
       *
       * @description ## [](#)Usage notes
       * To call this operation to change the resource group to which a production studio belongs, you must have access permissions on the original resource group and the destination resource group.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request UpdateCasterResourceGroupRequest
       * @return UpdateCasterResourceGroupResponse
       */
      Models::UpdateCasterResourceGroupResponse updateCasterResourceGroup(const Models::UpdateCasterResourceGroupRequest &request);

      /**
       * @summary Modifies the audio configurations of a scene. This operation also allows you to add an audio configuration or apply an existing audio configuration to a new scene.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to modify the audio configurations of a scene in the production studio. This operation supports the audio mixing mode and the audio follows video (AFV) mode.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateCasterSceneAudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCasterSceneAudioResponse
       */
      Models::UpdateCasterSceneAudioResponse updateCasterSceneAudioWithOptions(const Models::UpdateCasterSceneAudioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the audio configurations of a scene. This operation also allows you to add an audio configuration or apply an existing audio configuration to a new scene.
       *
       * @description You can call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio and then call this operation to modify the audio configurations of a scene in the production studio. This operation supports the audio mixing mode and the audio follows video (AFV) mode.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateCasterSceneAudioRequest
       * @return UpdateCasterSceneAudioResponse
       */
      Models::UpdateCasterSceneAudioResponse updateCasterSceneAudio(const Models::UpdateCasterSceneAudioRequest &request);

      /**
       * @summary Modifies a scene, including the layout, without invalidating the previous configurations. This operation is more efficient than the SetCasterSceneConfig operation.
       *
       * @description You can call this operation to modify a scene, including the layout, without invalidating the previous configurations. This operation is more efficient than the SetCasterSceneConfig operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateCasterSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCasterSceneConfigResponse
       */
      Models::UpdateCasterSceneConfigResponse updateCasterSceneConfigWithOptions(const Models::UpdateCasterSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scene, including the layout, without invalidating the previous configurations. This operation is more efficient than the SetCasterSceneConfig operation.
       *
       * @description You can call this operation to modify a scene, including the layout, without invalidating the previous configurations. This operation is more efficient than the SetCasterSceneConfig operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateCasterSceneConfigRequest
       * @return UpdateCasterSceneConfigResponse
       */
      Models::UpdateCasterSceneConfigResponse updateCasterSceneConfig(const Models::UpdateCasterSceneConfigRequest &request);

      /**
       * @summary Updates a custom transcoding configuration.
       *
       * @description This operation supports the following types of custom transcoding templates:
       * *   h264: custom H.264 standard transcoding.
       * *   h264-nbhd: custom H.264 Narrowband HD™ transcoding.
       * *   h265: custom H.265 standard transcoding.
       * *   h265-nbhd: custom H.265 Narrowband HD™ transcoding.
       * *   audio: audio-only transcoding.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account.
       *
       * @param request UpdateCustomLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomLiveStreamTranscodeResponse
       */
      Models::UpdateCustomLiveStreamTranscodeResponse updateCustomLiveStreamTranscodeWithOptions(const Models::UpdateCustomLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom transcoding configuration.
       *
       * @description This operation supports the following types of custom transcoding templates:
       * *   h264: custom H.264 standard transcoding.
       * *   h264-nbhd: custom H.264 Narrowband HD™ transcoding.
       * *   h265: custom H.265 standard transcoding.
       * *   h265-nbhd: custom H.265 Narrowband HD™ transcoding.
       * *   audio: audio-only transcoding.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account.
       *
       * @param request UpdateCustomLiveStreamTranscodeRequest
       * @return UpdateCustomLiveStreamTranscodeResponse
       */
      Models::UpdateCustomLiveStreamTranscodeResponse updateCustomLiveStreamTranscode(const Models::UpdateCustomLiveStreamTranscodeRequest &request);

      /**
       * @summary Updates an edge transcoding task.
       *
       * @description *   You can call this operation to update an edge transcoding task.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature and the edge transcoding task that you specify is not started.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEdgeTranscodeJobResponse
       */
      Models::UpdateEdgeTranscodeJobResponse updateEdgeTranscodeJobWithOptions(const Models::UpdateEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an edge transcoding task.
       *
       * @description *   You can call this operation to update an edge transcoding task.
       * *   To call this operation, make sure that you have the permissions to access the edge transcoding feature and the edge transcoding task that you specify is not started.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 6,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateEdgeTranscodeJobRequest
       * @return UpdateEdgeTranscodeJobResponse
       */
      Models::UpdateEdgeTranscodeJobResponse updateEdgeTranscodeJob(const Models::UpdateEdgeTranscodeJobRequest &request);

      /**
       * @summary Updates a callback that is used to subscribe to channel or user events.
       *
       * @description *   Before you call this operation, make sure that you have called the [CreateEventSub](https://help.aliyun.com/document_detail/2848209.html) operation to create a callback that is used to subscribe to channel or user events.
       * *   An existing channel that you specify in this operation still uses its original callback configuration. The updated configuration can apply to the channel only if you restart the channel after it is closed for longer than 20 minutes.
       * *   If you only want to update specific parameters, you must also specify the other required parameters with their original values.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateEventSubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEventSubResponse
       */
      Models::UpdateEventSubResponse updateEventSubWithOptions(const Models::UpdateEventSubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a callback that is used to subscribe to channel or user events.
       *
       * @description *   Before you call this operation, make sure that you have called the [CreateEventSub](https://help.aliyun.com/document_detail/2848209.html) operation to create a callback that is used to subscribe to channel or user events.
       * *   An existing channel that you specify in this operation still uses its original callback configuration. The updated configuration can apply to the channel only if you restart the channel after it is closed for longer than 20 minutes.
       * *   If you only want to update specific parameters, you must also specify the other required parameters with their original values.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateEventSubRequest
       * @return UpdateEventSubResponse
       */
      Models::UpdateEventSubResponse updateEventSub(const Models::UpdateEventSubRequest &request);

      /**
       * @summary Updates a subtitle rule.
       *
       * @description You can call this operation to modify the parameters of a specified subtitle rule.
       * >  The live subtitles feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveAIProduceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveAIProduceRulesResponse
       */
      Models::UpdateLiveAIProduceRulesResponse updateLiveAIProduceRulesWithOptions(const Models::UpdateLiveAIProduceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a subtitle rule.
       *
       * @description You can call this operation to modify the parameters of a specified subtitle rule.
       * >  The live subtitles feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveAIProduceRulesRequest
       * @return UpdateLiveAIProduceRulesResponse
       */
      Models::UpdateLiveAIProduceRulesResponse updateLiveAIProduceRules(const Models::UpdateLiveAIProduceRulesRequest &request);

      /**
       * @summary Updates a subtitle template.
       *
       * @param tmpReq UpdateLiveAISubtitleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveAISubtitleResponse
       */
      Models::UpdateLiveAISubtitleResponse updateLiveAISubtitleWithOptions(const Models::UpdateLiveAISubtitleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a subtitle template.
       *
       * @param request UpdateLiveAISubtitleRequest
       * @return UpdateLiveAISubtitleResponse
       */
      Models::UpdateLiveAISubtitleResponse updateLiveAISubtitle(const Models::UpdateLiveAISubtitleRequest &request);

      /**
       * @summary Updates a recording configuration for an application. The recordings are stored in Object Storage Service (OSS).
       *
       * @description Obtain the main streaming domain, and then call this operation to update a recording configuration.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveAppRecordConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveAppRecordConfigResponse
       */
      Models::UpdateLiveAppRecordConfigResponse updateLiveAppRecordConfigWithOptions(const Models::UpdateLiveAppRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a recording configuration for an application. The recordings are stored in Object Storage Service (OSS).
       *
       * @description Obtain the main streaming domain, and then call this operation to update a recording configuration.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveAppRecordConfigRequest
       * @return UpdateLiveAppRecordConfigResponse
       */
      Models::UpdateLiveAppRecordConfigResponse updateLiveAppRecordConfig(const Models::UpdateLiveAppRecordConfigRequest &request);

      /**
       * @summary Modifies a snapshot configuration of a streaming domain. The captured snapshots are stored in Object Storage Service (OSS). The modification takes effect after you restart stream ingest.
       *
       * @description You can call this operation to modify a snapshot configuration of a streaming domain. The captured snapshots are stored in OSS. The modification takes effect after you restart stream ingest.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveAppSnapshotConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveAppSnapshotConfigResponse
       */
      Models::UpdateLiveAppSnapshotConfigResponse updateLiveAppSnapshotConfigWithOptions(const Models::UpdateLiveAppSnapshotConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a snapshot configuration of a streaming domain. The captured snapshots are stored in Object Storage Service (OSS). The modification takes effect after you restart stream ingest.
       *
       * @description You can call this operation to modify a snapshot configuration of a streaming domain. The captured snapshots are stored in OSS. The modification takes effect after you restart stream ingest.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveAppSnapshotConfigRequest
       * @return UpdateLiveAppSnapshotConfigResponse
       */
      Models::UpdateLiveAppSnapshotConfigResponse updateLiveAppSnapshotConfig(const Models::UpdateLiveAppSnapshotConfigRequest &request);

      /**
       * @summary Modifies an audio moderation configuration.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to modify an audio moderation configuration.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveAudioAuditConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveAudioAuditConfigResponse
       */
      Models::UpdateLiveAudioAuditConfigResponse updateLiveAudioAuditConfigWithOptions(const Models::UpdateLiveAudioAuditConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an audio moderation configuration.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to modify an audio moderation configuration.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveAudioAuditConfigRequest
       * @return UpdateLiveAudioAuditConfigResponse
       */
      Models::UpdateLiveAudioAuditConfigResponse updateLiveAudioAuditConfig(const Models::UpdateLiveAudioAuditConfigRequest &request);

      /**
       * @summary Modifies the configuration of callbacks for audio moderation results.
       *
       * @param request UpdateLiveAudioAuditNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveAudioAuditNotifyConfigResponse
       */
      Models::UpdateLiveAudioAuditNotifyConfigResponse updateLiveAudioAuditNotifyConfigWithOptions(const Models::UpdateLiveAudioAuditNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of callbacks for audio moderation results.
       *
       * @param request UpdateLiveAudioAuditNotifyConfigRequest
       * @return UpdateLiveAudioAuditNotifyConfigResponse
       */
      Models::UpdateLiveAudioAuditNotifyConfigResponse updateLiveAudioAuditNotifyConfig(const Models::UpdateLiveAudioAuditNotifyConfigRequest &request);

      /**
       * @summary Modifies the configurations of live center stream relay.
       *
       * @description You can call this operation to modify only the **time-related** parameters, including TransferArgs, StartTime, and EndTime.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveCenterTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveCenterTransferResponse
       */
      Models::UpdateLiveCenterTransferResponse updateLiveCenterTransferWithOptions(const Models::UpdateLiveCenterTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of live center stream relay.
       *
       * @description You can call this operation to modify only the **time-related** parameters, including TransferArgs, StartTime, and EndTime.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveCenterTransferRequest
       * @return UpdateLiveCenterTransferResponse
       */
      Models::UpdateLiveCenterTransferResponse updateLiveCenterTransfer(const Models::UpdateLiveCenterTransferRequest &request);

      /**
       * @summary Updates a stream delay configuration.
       *
       * @description ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request UpdateLiveDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveDelayConfigResponse
       */
      Models::UpdateLiveDelayConfigResponse updateLiveDelayConfigWithOptions(const Models::UpdateLiveDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a stream delay configuration.
       *
       * @description ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request UpdateLiveDelayConfigRequest
       * @return UpdateLiveDelayConfigResponse
       */
      Models::UpdateLiveDelayConfigResponse updateLiveDelayConfig(const Models::UpdateLiveDelayConfigRequest &request);

      /**
       * @summary Modifies the configuration of callbacks for video moderation results. As a result, the callback URL that is used to receive the callback notifications is changed.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to modify the configuration of callbacks for video moderation results.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveDetectNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveDetectNotifyConfigResponse
       */
      Models::UpdateLiveDetectNotifyConfigResponse updateLiveDetectNotifyConfigWithOptions(const Models::UpdateLiveDetectNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of callbacks for video moderation results. As a result, the callback URL that is used to receive the callback notifications is changed.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to modify the configuration of callbacks for video moderation results.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveDetectNotifyConfigRequest
       * @return UpdateLiveDetectNotifyConfigResponse
       */
      Models::UpdateLiveDetectNotifyConfigResponse updateLiveDetectNotifyConfig(const Models::UpdateLiveDetectNotifyConfigRequest &request);

      /**
       * @summary Updates a mixed-stream relay task.
       *
       * @description Make sure that a mixed-stream relay task is created before you call this operation. You can call the [StartLiveMPUTask](https://help.aliyun.com/document_detail/2848199.html) operation to create a mixed-stream relay task.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq UpdateLiveMPUTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveMPUTaskResponse
       */
      Models::UpdateLiveMPUTaskResponse updateLiveMPUTaskWithOptions(const Models::UpdateLiveMPUTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a mixed-stream relay task.
       *
       * @description Make sure that a mixed-stream relay task is created before you call this operation. You can call the [StartLiveMPUTask](https://help.aliyun.com/document_detail/2848199.html) operation to create a mixed-stream relay task.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveMPUTaskRequest
       * @return UpdateLiveMPUTaskResponse
       */
      Models::UpdateLiveMPUTaskResponse updateLiveMPUTask(const Models::UpdateLiveMPUTaskRequest &request);

      /**
       * @summary Updates a live stream encapsulation configuration.
       *
       * @description You can call this operation to update a live stream encapsulation configuration. The update takes effect only after you re-ingest the stream.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 300 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLivePackageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivePackageConfigResponse
       */
      Models::UpdateLivePackageConfigResponse updateLivePackageConfigWithOptions(const Models::UpdateLivePackageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a live stream encapsulation configuration.
       *
       * @description You can call this operation to update a live stream encapsulation configuration. The update takes effect only after you re-ingest the stream.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 300 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLivePackageConfigRequest
       * @return UpdateLivePackageConfigResponse
       */
      Models::UpdateLivePackageConfigResponse updateLivePackageConfig(const Models::UpdateLivePackageConfigRequest &request);

      /**
       * @summary Modifies the stream pulling settings of a live stream, including the origin URL, start time, and end time.
       *
       * @description This operation is applicable to regular stream pulling. You can call this operation to modify the stream pulling settings of a live stream, including the origin URL, start time, and end time.
       * >  After this operation is complete, ApsaraVideo Live uses the updated settings for regular stream pulling. Make sure that the modification does not affect your business.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLivePullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivePullStreamInfoConfigResponse
       */
      Models::UpdateLivePullStreamInfoConfigResponse updateLivePullStreamInfoConfigWithOptions(const Models::UpdateLivePullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the stream pulling settings of a live stream, including the origin URL, start time, and end time.
       *
       * @description This operation is applicable to regular stream pulling. You can call this operation to modify the stream pulling settings of a live stream, including the origin URL, start time, and end time.
       * >  After this operation is complete, ApsaraVideo Live uses the updated settings for regular stream pulling. Make sure that the modification does not affect your business.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLivePullStreamInfoConfigRequest
       * @return UpdateLivePullStreamInfoConfigResponse
       */
      Models::UpdateLivePullStreamInfoConfigResponse updateLivePullStreamInfoConfig(const Models::UpdateLivePullStreamInfoConfigRequest &request);

      /**
       * @summary Updates a pulled-stream relay task.
       *
       * @description *   You can call this operation to update a pulled-stream relay task.
       * *   As long as the specified start time of a task has not been reached, you can modify the SourceType, Region, and DstUrl parameters of the task.
       * *   If a task is running (even if the task is in an abnormal retry state), you can modify only the CallbackUrl and RepeatTime parameters of the task. The update takes effect immediately.
       * *   If a task is stopped, you can modify all parameters of the task except SourceType, Region, and DstUrl.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param tmpReq UpdateLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivePullToPushResponse
       */
      Models::UpdateLivePullToPushResponse updateLivePullToPushWithOptions(const Models::UpdateLivePullToPushRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a pulled-stream relay task.
       *
       * @description *   You can call this operation to update a pulled-stream relay task.
       * *   As long as the specified start time of a task has not been reached, you can modify the SourceType, Region, and DstUrl parameters of the task.
       * *   If a task is running (even if the task is in an abnormal retry state), you can modify only the CallbackUrl and RepeatTime parameters of the task. The update takes effect immediately.
       * *   If a task is stopped, you can modify all parameters of the task except SourceType, Region, and DstUrl.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLivePullToPushRequest
       * @return UpdateLivePullToPushResponse
       */
      Models::UpdateLivePullToPushResponse updateLivePullToPush(const Models::UpdateLivePullToPushRequest &request);

      /**
       * @summary Modifies the recording callback configuration of a streaming domain.
       *
       * @description You can call this operation to modify the following settings:
       * *   The callback URL that is used to receive notifications about recording events and status. For more information, see [Recording event callbacks](https://help.aliyun.com/document_detail/55016.html).
       * *   The callback URL for on-demand recordings. For more information, see [On-demand recording callbacks](https://help.aliyun.com/document_detail/85910.html).
       * *   The setting that specifies whether to enable callbacks for recording status.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveRecordNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveRecordNotifyConfigResponse
       */
      Models::UpdateLiveRecordNotifyConfigResponse updateLiveRecordNotifyConfigWithOptions(const Models::UpdateLiveRecordNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the recording callback configuration of a streaming domain.
       *
       * @description You can call this operation to modify the following settings:
       * *   The callback URL that is used to receive notifications about recording events and status. For more information, see [Recording event callbacks](https://help.aliyun.com/document_detail/55016.html).
       * *   The callback URL for on-demand recordings. For more information, see [On-demand recording callbacks](https://help.aliyun.com/document_detail/85910.html).
       * *   The setting that specifies whether to enable callbacks for recording status.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveRecordNotifyConfigRequest
       * @return UpdateLiveRecordNotifyConfigResponse
       */
      Models::UpdateLiveRecordNotifyConfigResponse updateLiveRecordNotifyConfig(const Models::UpdateLiveRecordNotifyConfigRequest &request);

      /**
       * @summary Updates a Live-to-VOD configuration.
       *
       * @description You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveRecordVodConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveRecordVodConfigResponse
       */
      Models::UpdateLiveRecordVodConfigResponse updateLiveRecordVodConfigWithOptions(const Models::UpdateLiveRecordVodConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Live-to-VOD configuration.
       *
       * @description You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveRecordVodConfigRequest
       * @return UpdateLiveRecordVodConfigResponse
       */
      Models::UpdateLiveRecordVodConfigResponse updateLiveRecordVodConfig(const Models::UpdateLiveRecordVodConfigRequest &request);

      /**
       * @summary Modifies a video moderation configuration.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to modify a video moderation configuration.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveSnapshotDetectPornConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveSnapshotDetectPornConfigResponse
       */
      Models::UpdateLiveSnapshotDetectPornConfigResponse updateLiveSnapshotDetectPornConfigWithOptions(const Models::UpdateLiveSnapshotDetectPornConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a video moderation configuration.
       *
       * @description *   Obtain the main streaming domain, and then call this operation to modify a video moderation configuration.
       * *   Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveSnapshotDetectPornConfigRequest
       * @return UpdateLiveSnapshotDetectPornConfigResponse
       */
      Models::UpdateLiveSnapshotDetectPornConfigResponse updateLiveSnapshotDetectPornConfig(const Models::UpdateLiveSnapshotDetectPornConfigRequest &request);

      /**
       * @summary Modifies the configuration of snapshot callbacks.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveSnapshotNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveSnapshotNotifyConfigResponse
       */
      Models::UpdateLiveSnapshotNotifyConfigResponse updateLiveSnapshotNotifyConfigWithOptions(const Models::UpdateLiveSnapshotNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of snapshot callbacks.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveSnapshotNotifyConfigRequest
       * @return UpdateLiveSnapshotNotifyConfigResponse
       */
      Models::UpdateLiveSnapshotNotifyConfigResponse updateLiveSnapshotNotifyConfig(const Models::UpdateLiveSnapshotNotifyConfigRequest &request);

      /**
       * @summary Updates the configurations of a monitoring session.
       *
       * @description You can call this operation to update the configurations of a monitoring session. The updates that you make to the input source configurations when the monitoring session is in the Running state immediately take effect.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveStreamMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveStreamMonitorResponse
       */
      Models::UpdateLiveStreamMonitorResponse updateLiveStreamMonitorWithOptions(const Models::UpdateLiveStreamMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of a monitoring session.
       *
       * @description You can call this operation to update the configurations of a monitoring session. The updates that you make to the input source configurations when the monitoring session is in the Running state immediately take effect.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveStreamMonitorRequest
       * @return UpdateLiveStreamMonitorResponse
       */
      Models::UpdateLiveStreamMonitorResponse updateLiveStreamMonitor(const Models::UpdateLiveStreamMonitorRequest &request);

      /**
       * @summary Updates a default transcoding configuration.
       *
       * @description You must obtain the customer master key (CMK) in Key Management Service (KMS) before you call this operation to update a transcoding configuration. Only standard transcoding templates and Narrowband HD™ transcoding templates are supported for this operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account.
       *
       * @param request UpdateLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveStreamTranscodeResponse
       */
      Models::UpdateLiveStreamTranscodeResponse updateLiveStreamTranscodeWithOptions(const Models::UpdateLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a default transcoding configuration.
       *
       * @description You must obtain the customer master key (CMK) in Key Management Service (KMS) before you call this operation to update a transcoding configuration. Only standard transcoding templates and Narrowband HD™ transcoding templates are supported for this operation.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account.
       *
       * @param request UpdateLiveStreamTranscodeRequest
       * @return UpdateLiveStreamTranscodeResponse
       */
      Models::UpdateLiveStreamTranscodeResponse updateLiveStreamTranscode(const Models::UpdateLiveStreamTranscodeRequest &request);

      /**
       * @summary Updates a watermark template.
       *
       * @description This operation allows you to modify the parameters of a watermark template with a specified ID.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request UpdateLiveStreamWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveStreamWatermarkResponse
       */
      Models::UpdateLiveStreamWatermarkResponse updateLiveStreamWatermarkWithOptions(const Models::UpdateLiveStreamWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a watermark template.
       *
       * @description This operation allows you to modify the parameters of a watermark template with a specified ID.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request UpdateLiveStreamWatermarkRequest
       * @return UpdateLiveStreamWatermarkResponse
       */
      Models::UpdateLiveStreamWatermarkResponse updateLiveStreamWatermark(const Models::UpdateLiveStreamWatermarkRequest &request);

      /**
       * @summary Updates a watermark rule.
       *
       * @description This operation allows you to modify the parameters of a watermark rule with a specified ID.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveStreamWatermarkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveStreamWatermarkRuleResponse
       */
      Models::UpdateLiveStreamWatermarkRuleResponse updateLiveStreamWatermarkRuleWithOptions(const Models::UpdateLiveStreamWatermarkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a watermark rule.
       *
       * @description This operation allows you to modify the parameters of a watermark rule with a specified ID.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateLiveStreamWatermarkRuleRequest
       * @return UpdateLiveStreamWatermarkRuleResponse
       */
      Models::UpdateLiveStreamWatermarkRuleResponse updateLiveStreamWatermarkRule(const Models::UpdateLiveStreamWatermarkRuleRequest &request);

      /**
       * @summary Updates the configurations of an interactive message application.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq UpdateMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMessageAppResponse
       */
      Models::UpdateMessageAppResponse updateMessageAppWithOptions(const Models::UpdateMessageAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of an interactive message application.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request UpdateMessageAppRequest
       * @return UpdateMessageAppResponse
       */
      Models::UpdateMessageAppResponse updateMessageApp(const Models::UpdateMessageAppRequest &request);

      /**
       * @summary Updates the information about a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq UpdateMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMessageGroupResponse
       */
      Models::UpdateMessageGroupResponse updateMessageGroupWithOptions(const Models::UpdateMessageGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a message group.
       *
       * @description ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request UpdateMessageGroupRequest
       * @return UpdateMessageGroupResponse
       */
      Models::UpdateMessageGroupResponse updateMessageGroup(const Models::UpdateMessageGroupRequest &request);

      /**
       * @summary Updates a stream mixing task.
       *
       * @description You can call this operation to update a stream mixing task. This operation allows you to modify the input sources and layout, but not other parameters such as the output resolution.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateMixStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMixStreamResponse
       */
      Models::UpdateMixStreamResponse updateMixStreamWithOptions(const Models::UpdateMixStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a stream mixing task.
       *
       * @description You can call this operation to update a stream mixing task. This operation allows you to modify the input sources and layout, but not other parameters such as the output resolution.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateMixStreamRequest
       * @return UpdateMixStreamResponse
       */
      Models::UpdateMixStreamResponse updateMixStream(const Models::UpdateMixStreamRequest &request);

      /**
       * @summary 更新rtc云端录制任务
       *
       * @param tmpReq UpdateRtcCloudRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRtcCloudRecordingResponse
       */
      Models::UpdateRtcCloudRecordingResponse updateRtcCloudRecordingWithOptions(const Models::UpdateRtcCloudRecordingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新rtc云端录制任务
       *
       * @param request UpdateRtcCloudRecordingRequest
       * @return UpdateRtcCloudRecordingResponse
       */
      Models::UpdateRtcCloudRecordingResponse updateRtcCloudRecording(const Models::UpdateRtcCloudRecordingRequest &request);

      /**
       * @summary Updates a subscription to mixed-stream relay events.
       *
       * @description *   You can call this operation to update a subscription to mixed-stream relay events. You can modify parameters such as the callback URL and channel IDs.
       * *   Before you call this operation, make sure that you have called the CreateRtcMPUEventSub operation to create the subscription.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateRtcMPUEventSubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRtcMPUEventSubResponse
       */
      Models::UpdateRtcMPUEventSubResponse updateRtcMPUEventSubWithOptions(const Models::UpdateRtcMPUEventSubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a subscription to mixed-stream relay events.
       *
       * @description *   You can call this operation to update a subscription to mixed-stream relay events. You can modify parameters such as the callback URL and channel IDs.
       * *   Before you call this operation, make sure that you have called the CreateRtcMPUEventSub operation to create the subscription.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateRtcMPUEventSubRequest
       * @return UpdateRtcMPUEventSubResponse
       */
      Models::UpdateRtcMPUEventSubResponse updateRtcMPUEventSub(const Models::UpdateRtcMPUEventSubRequest &request);

      /**
       * @summary Updates a custom Real-Time Streaming (RTS) transcoding configuration.
       *
       * @description This operation supports the following types of custom transcoding templates: h264, h264-nbhd, h264-origin, and audio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account.
       *
       * @param request UpdateRtsLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRtsLiveStreamTranscodeResponse
       */
      Models::UpdateRtsLiveStreamTranscodeResponse updateRtsLiveStreamTranscodeWithOptions(const Models::UpdateRtsLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom Real-Time Streaming (RTS) transcoding configuration.
       *
       * @description This operation supports the following types of custom transcoding templates: h264, h264-nbhd, h264-origin, and audio.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 10 times per second per account.
       *
       * @param request UpdateRtsLiveStreamTranscodeRequest
       * @return UpdateRtsLiveStreamTranscodeResponse
       */
      Models::UpdateRtsLiveStreamTranscodeResponse updateRtsLiveStreamTranscode(const Models::UpdateRtsLiveStreamTranscodeRequest &request);

      /**
       * @summary Verifies the ownership of a domain name.
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request VerifyLiveDomainOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyLiveDomainOwnerResponse
       */
      Models::VerifyLiveDomainOwnerResponse verifyLiveDomainOwnerWithOptions(const Models::VerifyLiveDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the ownership of a domain name.
       *
       * @description ### [](#qps-)QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request VerifyLiveDomainOwnerRequest
       * @return VerifyLiveDomainOwnerResponse
       */
      Models::VerifyLiveDomainOwnerResponse verifyLiveDomainOwner(const Models::VerifyLiveDomainOwnerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
