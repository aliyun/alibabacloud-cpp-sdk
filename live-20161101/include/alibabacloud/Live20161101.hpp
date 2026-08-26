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
       * @description Before calling this operation, create a production studio and review its layout list. This operation adds components such as images, text, and captions. For more information about creating a production studio using an API call, see [Create a production studio](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request AddCasterComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterComponentResponse
       */
      Models::AddCasterComponentResponse addCasterComponentWithOptions(const Models::AddCasterComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a component to a production studio.
       *
       * @description Before calling this operation, create a production studio and review its layout list. This operation adds components such as images, text, and captions. For more information about creating a production studio using an API call, see [Create a production studio](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request AddCasterComponentRequest
       * @return AddCasterComponentResponse
       */
      Models::AddCasterComponentResponse addCasterComponent(const Models::AddCasterComponentRequest &request);

      /**
       * @summary Adds an episode to a production studio.
       *
       * @description Before you call this operation, obtain the ID of the production studio. The ID is generated when the production studio is created.
       * - If you create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the returned CasterId parameter.
       * - If you create a production studio in the LIVE console, go to **LIVE Console** > **Production Studio** > **Production Studio** to view the name of the production studio.
       * > The name of the production studio in the production studio list serves as the production studio ID.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 4 for each account. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request AddCasterEpisodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterEpisodeResponse
       */
      Models::AddCasterEpisodeResponse addCasterEpisodeWithOptions(const Models::AddCasterEpisodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an episode to a production studio.
       *
       * @description Before you call this operation, obtain the ID of the production studio. The ID is generated when the production studio is created.
       * - If you create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the returned CasterId parameter.
       * - If you create a production studio in the LIVE console, go to **LIVE Console** > **Production Studio** > **Production Studio** to view the name of the production studio.
       * > The name of the production studio in the production studio list serves as the production studio ID.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 4 for each account. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request AddCasterEpisodeRequest
       * @return AddCasterEpisodeResponse
       */
      Models::AddCasterEpisodeResponse addCasterEpisode(const Models::AddCasterEpisodeRequest &request);

      /**
       * @summary Adds a program list to a production studio.
       *
       * @description Create a production studio and obtain its configuration information before calling this operation to add a program list to the production studio. To create a production studio by using an API operation, see [Create a production studio](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 4 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
       *
       * @param request AddCasterEpisodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterEpisodeGroupResponse
       */
      Models::AddCasterEpisodeGroupResponse addCasterEpisodeGroupWithOptions(const Models::AddCasterEpisodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a program list to a production studio.
       *
       * @description Create a production studio and obtain its configuration information before calling this operation to add a program list to the production studio. To create a production studio by using an API operation, see [Create a production studio](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 4 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
       *
       * @param request AddCasterEpisodeGroupRequest
       * @return AddCasterEpisodeGroupResponse
       */
      Models::AddCasterEpisodeGroupResponse addCasterEpisodeGroup(const Models::AddCasterEpisodeGroupRequest &request);

      /**
       * @summary Adds content to an episode group of a production studio.
       *
       * @description Before you call this operation, you must create a production studio and an episode group. For more information, see [Create a production studio](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 4 for each user. If you exceed this limit, your API calls are throttled. This may impact your business. Plan your calls accordingly.
       *
       * @param request AddCasterEpisodeGroupContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterEpisodeGroupContentResponse
       */
      Models::AddCasterEpisodeGroupContentResponse addCasterEpisodeGroupContentWithOptions(const Models::AddCasterEpisodeGroupContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds content to an episode group of a production studio.
       *
       * @description Before you call this operation, you must create a production studio and an episode group. For more information, see [Create a production studio](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 4 for each user. If you exceed this limit, your API calls are throttled. This may impact your business. Plan your calls accordingly.
       *
       * @param request AddCasterEpisodeGroupContentRequest
       * @return AddCasterEpisodeGroupContentResponse
       */
      Models::AddCasterEpisodeGroupContentResponse addCasterEpisodeGroupContent(const Models::AddCasterEpisodeGroupContentRequest &request);

      /**
       * @summary Adds a layout to a production studio.
       *
       * @description Before you call this operation, you must create a production studio and add video sources. For more information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. API calls that exceed this limit are throttled, which may affect your business. Do not exceed this limit.
       *
       * @param request AddCasterLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterLayoutResponse
       */
      Models::AddCasterLayoutResponse addCasterLayoutWithOptions(const Models::AddCasterLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a layout to a production studio.
       *
       * @description Before you call this operation, you must create a production studio and add video sources. For more information about how to create a production studio, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. API calls that exceed this limit are throttled, which may affect your business. Do not exceed this limit.
       *
       * @param request AddCasterLayoutRequest
       * @return AddCasterLayoutResponse
       */
      Models::AddCasterLayoutResponse addCasterLayout(const Models::AddCasterLayoutRequest &request);

      /**
       * @summary Adds a program list to a production studio.
       *
       * @description Create a production studio and add video resources to it before calling this operation to add a program list. This operation currently supports only two node types: video source and component. To create a production studio by using an API operation, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddCasterProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterProgramResponse
       */
      Models::AddCasterProgramResponse addCasterProgramWithOptions(const Models::AddCasterProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a program list to a production studio.
       *
       * @description Create a production studio and add video resources to it before calling this operation to add a program list. This operation currently supports only two node types: video source and component. To create a production studio by using an API operation, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddCasterProgramRequest
       * @return AddCasterProgramResponse
       */
      Models::AddCasterProgramResponse addCasterProgram(const Models::AddCasterProgramRequest &request);

      /**
       * @summary Adds a video source to a production studio. The number of video sources is limited by the number of input channels of the production studio.
       *
       * @description Create a production studio before calling this operation to add a video source. The number of video sources is limited by the number of input channels of the production studio. To create a production studio by using an API operation, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddCasterVideoResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCasterVideoResourceResponse
       */
      Models::AddCasterVideoResourceResponse addCasterVideoResourceWithOptions(const Models::AddCasterVideoResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a video source to a production studio. The number of video sources is limited by the number of input channels of the production studio.
       *
       * @description Create a production studio before calling this operation to add a video source. The number of video sources is limited by the number of input channels of the production studio. To create a production studio by using an API operation, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddCasterVideoResourceRequest
       * @return AddCasterVideoResourceResponse
       */
      Models::AddCasterVideoResourceResponse addCasterVideoResource(const Models::AddCasterVideoResourceRequest &request);

      /**
       * @summary Adds a custom transcoding configuration.
       *
       * @description This operation supports the following types of custom transcoding templates:
       * - h264: H.264 standard transcoding.
       * - h264-nbhd: H.264 Narrowband HD™ transcoding.
       * - h265: H.265 standard transcoding.
       * - h265-nbhd: H.265 Narrowband HD™ transcoding.
       * - audio: audio-only transcoding.
       * ## QPS limit
       * You can call this operation up to 6,000 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddCustomLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomLiveStreamTranscodeResponse
       */
      Models::AddCustomLiveStreamTranscodeResponse addCustomLiveStreamTranscodeWithOptions(const Models::AddCustomLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a custom transcoding configuration.
       *
       * @description This operation supports the following types of custom transcoding templates:
       * - h264: H.264 standard transcoding.
       * - h264-nbhd: H.264 Narrowband HD™ transcoding.
       * - h265: H.265 standard transcoding.
       * - h265-nbhd: H.265 Narrowband HD™ transcoding.
       * - audio: audio-only transcoding.
       * ## QPS limit
       * You can call this operation up to 6,000 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddCustomLiveStreamTranscodeRequest
       * @return AddCustomLiveStreamTranscodeResponse
       */
      Models::AddCustomLiveStreamTranscodeResponse addCustomLiveStreamTranscode(const Models::AddCustomLiveStreamTranscodeRequest &request);

      /**
       * @summary Adds a subtitle rule.
       *
       * @description - After you add a subtitle template by calling the [AddLiveAISubtitle](https://help.aliyun.com/document_detail/2848222.html) operation, you can call this operation to add a subtitle rule.
       * - To play a subtitle stream, append _{Subtitle template name} to the StreamName in the playback URL.
       *   - RTMP: rtmp\\://example.aliyundoc.com/app/stream_{Subtitle template name}?auth_key={access token}
       *   - FLV: http\\://example.aliyundoc.com/app/stream_{Subtitle template name}.flv?auth_key={access token}
       *   - M3U8: http\\://example.aliyundoc.com/app/stream_{Subtitle template name}.m3u8?auth_key={access token}
       * >Notice: 
       * The real-time subtitle feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 60 per user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request AddLiveAIProduceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveAIProduceRulesResponse
       */
      Models::AddLiveAIProduceRulesResponse addLiveAIProduceRulesWithOptions(const Models::AddLiveAIProduceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a subtitle rule.
       *
       * @description - After you add a subtitle template by calling the [AddLiveAISubtitle](https://help.aliyun.com/document_detail/2848222.html) operation, you can call this operation to add a subtitle rule.
       * - To play a subtitle stream, append _{Subtitle template name} to the StreamName in the playback URL.
       *   - RTMP: rtmp\\://example.aliyundoc.com/app/stream_{Subtitle template name}?auth_key={access token}
       *   - FLV: http\\://example.aliyundoc.com/app/stream_{Subtitle template name}.flv?auth_key={access token}
       *   - M3U8: http\\://example.aliyundoc.com/app/stream_{Subtitle template name}.m3u8?auth_key={access token}
       * >Notice: 
       * The real-time subtitle feature is in invitational preview. You can add up to 300 subtitle templates.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 60 per user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request AddLiveAIProduceRulesRequest
       * @return AddLiveAIProduceRulesResponse
       */
      Models::AddLiveAIProduceRulesResponse addLiveAIProduceRules(const Models::AddLiveAIProduceRulesRequest &request);

      /**
       * @summary Adds a subtitle template by calling AddLiveAISubtitle.
       *
       * @description ## Operation description
       * - This operation allows you to add a live subtitle template configuration. The template configuration describes subtitle content, layout, and other information.
       * - After you add a subtitle template, call the [AddLiveAIProduceRules](https://help.aliyun.com/document_detail/2799676.html) operation to add subtitle rules. The subtitles take effect in the stream only after you re-ingest the stream.
       * - Real-time subtitles are supported only in the Beijing, Shanghai, Singapore, Indonesia, and Saudi Arabia regions.
       * >Notice: The real-time subtitle feature is in public preview. Each user can add up to 300 subtitle templates. The feature is free of charge during the public preview. After the public preview ends, standard billing applies. The specific date will be announced separately.
       * ## QPS limit
       * The single-user QPS limit for this operation is 60 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq AddLiveAISubtitleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveAISubtitleResponse
       */
      Models::AddLiveAISubtitleResponse addLiveAISubtitleWithOptions(const Models::AddLiveAISubtitleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a subtitle template by calling AddLiveAISubtitle.
       *
       * @description ## Operation description
       * - This operation allows you to add a live subtitle template configuration. The template configuration describes subtitle content, layout, and other information.
       * - After you add a subtitle template, call the [AddLiveAIProduceRules](https://help.aliyun.com/document_detail/2799676.html) operation to add subtitle rules. The subtitles take effect in the stream only after you re-ingest the stream.
       * - Real-time subtitles are supported only in the Beijing, Shanghai, Singapore, Indonesia, and Saudi Arabia regions.
       * >Notice: The real-time subtitle feature is in public preview. Each user can add up to 300 subtitle templates. The feature is free of charge during the public preview. After the public preview ends, standard billing applies. The specific date will be announced separately.
       * ## QPS limit
       * The single-user QPS limit for this operation is 60 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddLiveAISubtitleRequest
       * @return AddLiveAISubtitleResponse
       */
      Models::AddLiveAISubtitleResponse addLiveAISubtitle(const Models::AddLiveAISubtitleRequest &request);

      /**
       * @summary Configures recording for an application and saves the output to Object Storage Service (OSS).
       *
       * @description - Before you use this operation, make sure that you fully understand the billing methods and pricing of live stream recording. For billing details, see [Live stream recording fees](https://help.aliyun.com/document_detail/195287.html).
       * - If you use the method of storing recordings in OSS to configure live stream recording, activate OSS and create a bucket. For more information, see [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
       * - Recordings stored in OSS incur storage fees. For billing details in OSS, see [Storage fees](https://help.aliyun.com/document_detail/173534.html).
       * - The OSS bucket must be in the same region as the live center of the streaming domain. Cross-region recording is not supported.
       * - The live stream recording feature records live content and saves it to a specified location for on-demand playback. Recordings stored in OSS support multiple container formats (TS, MP4, FLV, and CMAF) and custom recording policies (automatic recording, on-demand recording, and manual recording). Call this operation to configure recording templates. For more information about live stream recording, see [Live stream recording](https://help.aliyun.com/document_detail/199357.html).
       * - The triplet (DomainName, AppName, StreamName) can correspond to only one configuration. If a configuration already exists for the triplet, calling this operation to add another configuration returns a configuration-already-exists error.
       * - Configurations set through this operation take effect only after the live stream is re-ingested and remain effective permanently.
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddLiveAppRecordConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveAppRecordConfigResponse
       */
      Models::AddLiveAppRecordConfigResponse addLiveAppRecordConfigWithOptions(const Models::AddLiveAppRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures recording for an application and saves the output to Object Storage Service (OSS).
       *
       * @description - Before you use this operation, make sure that you fully understand the billing methods and pricing of live stream recording. For billing details, see [Live stream recording fees](https://help.aliyun.com/document_detail/195287.html).
       * - If you use the method of storing recordings in OSS to configure live stream recording, activate OSS and create a bucket. For more information, see [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
       * - Recordings stored in OSS incur storage fees. For billing details in OSS, see [Storage fees](https://help.aliyun.com/document_detail/173534.html).
       * - The OSS bucket must be in the same region as the live center of the streaming domain. Cross-region recording is not supported.
       * - The live stream recording feature records live content and saves it to a specified location for on-demand playback. Recordings stored in OSS support multiple container formats (TS, MP4, FLV, and CMAF) and custom recording policies (automatic recording, on-demand recording, and manual recording). Call this operation to configure recording templates. For more information about live stream recording, see [Live stream recording](https://help.aliyun.com/document_detail/199357.html).
       * - The triplet (DomainName, AppName, StreamName) can correspond to only one configuration. If a configuration already exists for the triplet, calling this operation to add another configuration returns a configuration-already-exists error.
       * - Configurations set through this operation take effect only after the live stream is re-ingested and remain effective permanently.
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddLiveAppRecordConfigRequest
       * @return AddLiveAppRecordConfigResponse
       */
      Models::AddLiveAppRecordConfigResponse addLiveAppRecordConfig(const Models::AddLiveAppRecordConfigRequest &request);

      /**
       * @summary Configures the snapshot feature for a streaming domain. The captured snapshots are stored in Object Storage Service (OSS). The configuration takes effect after you restart stream ingest.
       *
       * @description - Before you call this operation, make sure that you fully understand the billing method and pricing of live stream snapshots in ApsaraVideo Live. For more information, see [Billing of live stream snapshots](https://help.aliyun.com/document_detail/195286.html).
       * - Make sure that Object Storage Service (OSS) is activated and a specific bucket is created. This way, ApsaraVideo Live can store live stream snapshots in the bucket. For more information, see [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
       * - If you store snapshots in OSS, storage fees are generated. For more information, see [Storage fees](https://help.aliyun.com/document_detail/173534.html).
       * - The OSS bucket must reside in the same region as the live center of the streaming domain. Cross-region snapshot capture is not supported.
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
       * @description - Before you call this operation, make sure that you fully understand the billing method and pricing of live stream snapshots in ApsaraVideo Live. For more information, see [Billing of live stream snapshots](https://help.aliyun.com/document_detail/195286.html).
       * - Make sure that Object Storage Service (OSS) is activated and a specific bucket is created. This way, ApsaraVideo Live can store live stream snapshots in the bucket. For more information, see [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
       * - If you store snapshots in OSS, storage fees are generated. For more information, see [Storage fees](https://help.aliyun.com/document_detail/173534.html).
       * - The OSS bucket must reside in the same region as the live center of the streaming domain. Cross-region snapshot capture is not supported.
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
       * @description - The audio moderation feature detects sensitive content in audio from live streams and uses callbacks to notify you of violations in real time. You can then manually review the content and take appropriate actions.
       * - Currently, only some live centers support automated review. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * <props="china">
       * Before you call this API, make sure that you understand the billing methods and pricing of the live audio moderation service. For more information, see [Automated review fees](https://help.aliyun.com/document_detail/195288.html).
       * ## QPS limits
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveAudioAuditConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveAudioAuditConfigResponse
       */
      Models::AddLiveAudioAuditConfigResponse addLiveAudioAuditConfigWithOptions(const Models::AddLiveAudioAuditConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an audio moderation configuration.
       *
       * @description - The audio moderation feature detects sensitive content in audio from live streams and uses callbacks to notify you of violations in real time. You can then manually review the content and take appropriate actions.
       * - Currently, only some live centers support automated review. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * <props="china">
       * Before you call this API, make sure that you understand the billing methods and pricing of the live audio moderation service. For more information, see [Automated review fees](https://help.aliyun.com/document_detail/195288.html).
       * ## QPS limits
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveAudioAuditConfigRequest
       * @return AddLiveAudioAuditConfigResponse
       */
      Models::AddLiveAudioAuditConfigResponse addLiveAudioAuditConfig(const Models::AddLiveAudioAuditConfigRequest &request);

      /**
       * @summary Adds a callback configuration for audio moderation.
       *
       * @description - The automated review service returns review results based on the configured callback template.
       * - The automated review feature is available only in some live centers. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveAudioAuditNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveAudioAuditNotifyConfigResponse
       */
      Models::AddLiveAudioAuditNotifyConfigResponse addLiveAudioAuditNotifyConfigWithOptions(const Models::AddLiveAudioAuditNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a callback configuration for audio moderation.
       *
       * @description - The automated review service returns review results based on the configured callback template.
       * - The automated review feature is available only in some live centers. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveAudioAuditNotifyConfigRequest
       * @return AddLiveAudioAuditNotifyConfigResponse
       */
      Models::AddLiveAudioAuditNotifyConfigResponse addLiveAudioAuditNotifyConfig(const Models::AddLiveAudioAuditNotifyConfigRequest &request);

      /**
       * @summary Adds a live center stream relay configuration.
       *
       * @description The single-user QPS limit of this API is 100 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please make calls appropriately.
       *
       * @param request AddLiveCenterTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveCenterTransferResponse
       */
      Models::AddLiveCenterTransferResponse addLiveCenterTransferWithOptions(const Models::AddLiveCenterTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a live center stream relay configuration.
       *
       * @description The single-user QPS limit of this API is 100 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please make calls appropriately.
       *
       * @param request AddLiveCenterTransferRequest
       * @return AddLiveCenterTransferResponse
       */
      Models::AddLiveCenterTransferResponse addLiveCenterTransfer(const Models::AddLiveCenterTransferRequest &request);

      /**
       * @summary Configures callbacks for video moderation results. As a result, a callback URL that is used to receive the callback notifications is added.
       *
       * @description - The automated review feature sends notifications about violations to the callback URL in real time. Then, you can manually review the content and take actions accordingly.
       * - Only some live centers support the automated review feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
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
       * @description - The automated review feature sends notifications about violations to the callback URL in real time. Then, you can manually review the content and take actions accordingly.
       * - Only some live centers support the automated review feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request AddLiveDetectNotifyConfigRequest
       * @return AddLiveDetectNotifyConfigResponse
       */
      Models::AddLiveDetectNotifyConfigResponse addLiveDetectNotifyConfig(const Models::AddLiveDetectNotifyConfigRequest &request);

      /**
       * @summary Adds a live streaming domain name. You can add only one domain name at a time.
       *
       * @description - Before you add a live streaming domain name, you must activate ApsaraVideo Live. For more information, see [Activate the service](https://help.aliyun.com/document_detail/195292.html).
       * - Before you add a new domain name, you must first verify the domain name ownership and then call this operation to add the domain name. You can use DNS resolution verification or file verification. For more information, see [Verify domain name ownership](https://help.aliyun.com/document_detail/184466.html).
       * - ApsaraVideo Live requires both stream ingest and streaming. You must add an ingest domain and a streaming domain separately. You can commit only one domain name at a time.
       * - After you add a domain name, you must configure CNAME resolution for the domain name. For more information, see [Configure CNAME resolution](https://help.aliyun.com/document_detail/84929.html).
       * - After you add an ingest domain and a streaming domain, you must associate the associated domains before you can use ApsaraVideo Live. For more information, see [Associated domain](https://help.aliyun.com/document_detail/199338.html).
       * >Notice: Starting from February 19, 2019, domain names added by using AddLiveDomain do not support live center ingest. New domain names added by using CDN API operations also do not support live center ingest. Use edge ingest to add an ingest domain (call AddLiveDomain with the business type set to liveEdge) and a streaming domain (call AddLiveDomain with the business type set to liveVideo), and then associate them (call [AddLiveDomainMapping](https://help.aliyun.com/document_detail/2847792.html)). Domain names added before February 19, 2019 are not affected.
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddLiveDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveDomainResponse
       */
      Models::AddLiveDomainResponse addLiveDomainWithOptions(const Models::AddLiveDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a live streaming domain name. You can add only one domain name at a time.
       *
       * @description - Before you add a live streaming domain name, you must activate ApsaraVideo Live. For more information, see [Activate the service](https://help.aliyun.com/document_detail/195292.html).
       * - Before you add a new domain name, you must first verify the domain name ownership and then call this operation to add the domain name. You can use DNS resolution verification or file verification. For more information, see [Verify domain name ownership](https://help.aliyun.com/document_detail/184466.html).
       * - ApsaraVideo Live requires both stream ingest and streaming. You must add an ingest domain and a streaming domain separately. You can commit only one domain name at a time.
       * - After you add a domain name, you must configure CNAME resolution for the domain name. For more information, see [Configure CNAME resolution](https://help.aliyun.com/document_detail/84929.html).
       * - After you add an ingest domain and a streaming domain, you must associate the associated domains before you can use ApsaraVideo Live. For more information, see [Associated domain](https://help.aliyun.com/document_detail/199338.html).
       * >Notice: Starting from February 19, 2019, domain names added by using AddLiveDomain do not support live center ingest. New domain names added by using CDN API operations also do not support live center ingest. Use edge ingest to add an ingest domain (call AddLiveDomain with the business type set to liveEdge) and a streaming domain (call AddLiveDomain with the business type set to liveVideo), and then associate them (call [AddLiveDomainMapping](https://help.aliyun.com/document_detail/2847792.html)). Domain names added before February 19, 2019 are not affected.
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
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
       * @description Before you call this operation, you must add the main streaming domain and sub-streaming domain by calling [AddLiveDomain](https://help.aliyun.com/document_detail/88327.html).
       * ## QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveDomainPlayMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveDomainPlayMappingResponse
       */
      Models::AddLiveDomainPlayMappingResponse addLiveDomainPlayMappingWithOptions(const Models::AddLiveDomainPlayMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Maps a sub-streaming domain to a main streaming domain.
       *
       * @description Before you call this operation, you must add the main streaming domain and sub-streaming domain by calling [AddLiveDomain](https://help.aliyun.com/document_detail/88327.html).
       * ## QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveDomainPlayMappingRequest
       * @return AddLiveDomainPlayMappingResponse
       */
      Models::AddLiveDomainPlayMappingResponse addLiveDomainPlayMapping(const Models::AddLiveDomainPlayMappingRequest &request);

      /**
       * @summary The AddLiveMessageGroupBand operation mutes users in a group.
       *
       * @description Before you call this operation, you must call the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive message group.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param tmpReq AddLiveMessageGroupBandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveMessageGroupBandResponse
       */
      Models::AddLiveMessageGroupBandResponse addLiveMessageGroupBandWithOptions(const Models::AddLiveMessageGroupBandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The AddLiveMessageGroupBand operation mutes users in a group.
       *
       * @description Before you call this operation, you must call the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive message group.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request AddLiveMessageGroupBandRequest
       * @return AddLiveMessageGroupBandResponse
       */
      Models::AddLiveMessageGroupBandResponse addLiveMessageGroupBand(const Models::AddLiveMessageGroupBandRequest &request);

      /**
       * @summary You can call the AddLivePackageConfig operation to add a live stream packaging configuration.
       *
       * @description - When you add a packaging configuration to a domain name for the first time, the related acceleration configurations for the playback domain name are also applied. The configurations take effect in 3 to 5 minutes.
       * - If the playback domain name is in a region outside China, such as Singapore, Germany, Japan, or Indonesia, high latency may occur. After you add the configuration, test it to ensure it works as expected.
       * - After you add a live stream packaging configuration, you must restart the stream ingest for the configuration to take effect.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 300 calls per minute. If you exceed the limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request AddLivePackageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLivePackageConfigResponse
       */
      Models::AddLivePackageConfigResponse addLivePackageConfigWithOptions(const Models::AddLivePackageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the AddLivePackageConfig operation to add a live stream packaging configuration.
       *
       * @description - When you add a packaging configuration to a domain name for the first time, the related acceleration configurations for the playback domain name are also applied. The configurations take effect in 3 to 5 minutes.
       * - If the playback domain name is in a region outside China, such as Singapore, Germany, Japan, or Indonesia, high latency may occur. After you add the configuration, test it to ensure it works as expected.
       * - After you add a live stream packaging configuration, you must restart the stream ingest for the configuration to take effect.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 300 calls per minute. If you exceed the limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request AddLivePackageConfigRequest
       * @return AddLivePackageConfigResponse
       */
      Models::AddLivePackageConfigResponse addLivePackageConfig(const Models::AddLivePackageConfigRequest &request);

      /**
       * @summary Creates a scheduled stream pulling configuration, which includes parameters such as the origin URL, start time, and end time.
       *
       * @description - Before you call this operation, make sure that you understand the billing method and pricing of ApsaraVideo Live. For more information, see [](t1961174.xdita#).
       * - Stream pulling refers to the process of pulling live streams from third-party URLs to a live center of ApsaraVideo Live for CDN acceleration.
       * - This operation supports only scheduled stream pulling. You can specify a start time and an end time to pull a live stream during a specific time period.
       * - The console supports both scheduled and triggered stream pulling. For more information, see [Configure stream pulling](https://help.aliyun.com/document_detail/199452.html).
       * - You can specify custom values for the AppName and StreamName parameters. Streaming URLs are generated based on AppName and StreamName. You can use the [](t2020590.xdita#) to generate a streaming URL.
       * - Each stream pulling configuration must be unique. The combination of DomainName, AppName, and StreamName can only be associated with one active configuration. Attempting to add a duplicate configuration will result in an error.
       * ## QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLivePullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLivePullStreamInfoConfigResponse
       */
      Models::AddLivePullStreamInfoConfigResponse addLivePullStreamInfoConfigWithOptions(const Models::AddLivePullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled stream pulling configuration, which includes parameters such as the origin URL, start time, and end time.
       *
       * @description - Before you call this operation, make sure that you understand the billing method and pricing of ApsaraVideo Live. For more information, see [](t1961174.xdita#).
       * - Stream pulling refers to the process of pulling live streams from third-party URLs to a live center of ApsaraVideo Live for CDN acceleration.
       * - This operation supports only scheduled stream pulling. You can specify a start time and an end time to pull a live stream during a specific time period.
       * - The console supports both scheduled and triggered stream pulling. For more information, see [Configure stream pulling](https://help.aliyun.com/document_detail/199452.html).
       * - You can specify custom values for the AppName and StreamName parameters. Streaming URLs are generated based on AppName and StreamName. You can use the [](t2020590.xdita#) to generate a streaming URL.
       * - Each stream pulling configuration must be unique. The combination of DomainName, AppName, and StreamName can only be associated with one active configuration. Attempting to add a duplicate configuration will result in an error.
       * ## QPS limit
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLivePullStreamInfoConfigRequest
       * @return AddLivePullStreamInfoConfigResponse
       */
      Models::AddLivePullStreamInfoConfigResponse addLivePullStreamInfoConfig(const Models::AddLivePullStreamInfoConfigRequest &request);

      /**
       * @summary Adds a domain-level recording callback configuration.
       *
       * @description Before calling this operation to add a domain-level recording callback configuration, query the live recording callback configuration first. To query the live recording callback configuration by using an API operation, see [Query live recording callback configuration](https://help.aliyun.com/document_detail/2847893.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddLiveRecordNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveRecordNotifyConfigResponse
       */
      Models::AddLiveRecordNotifyConfigResponse addLiveRecordNotifyConfigWithOptions(const Models::AddLiveRecordNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain-level recording callback configuration.
       *
       * @description Before calling this operation to add a domain-level recording callback configuration, query the live recording callback configuration first. To query the live recording callback configuration by using an API operation, see [Query live recording callback configuration](https://help.aliyun.com/document_detail/2847893.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddLiveRecordNotifyConfigRequest
       * @return AddLiveRecordNotifyConfigResponse
       */
      Models::AddLiveRecordNotifyConfigResponse addLiveRecordNotifyConfig(const Models::AddLiveRecordNotifyConfigRequest &request);

      /**
       * @summary Creates a live-to-VOD configuration to store recordings in ApsaraVideo VOD.
       *
       * @description - Storing recordings in ApsaraVideo for VOD triggers automatic operations like video merging and transcoding, which incur video processing fees within the service. For details, see [video editing billing](https://help.aliyun.com/document_detail/188310.html) and [video transcoding billing](https://help.aliyun.com/document_detail/188308.html). For FAQs on automatic merging and transcoding, see the [live-to-VOD FAQ](https://help.aliyun.com/document_detail/99726.html).
       * - Alibaba Finance Cloud accounts do not support the live-to-VOD feature.
       * ## QPS limit
       * The QPS limit for this API is 1,000 calls per minute per user. Exceeding this limit will cause API calls to be throttled, which can impact your business. To avoid throttling, call the API at a reasonable rate.
       *
       * @param request AddLiveRecordVodConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveRecordVodConfigResponse
       */
      Models::AddLiveRecordVodConfigResponse addLiveRecordVodConfigWithOptions(const Models::AddLiveRecordVodConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a live-to-VOD configuration to store recordings in ApsaraVideo VOD.
       *
       * @description - Storing recordings in ApsaraVideo for VOD triggers automatic operations like video merging and transcoding, which incur video processing fees within the service. For details, see [video editing billing](https://help.aliyun.com/document_detail/188310.html) and [video transcoding billing](https://help.aliyun.com/document_detail/188308.html). For FAQs on automatic merging and transcoding, see the [live-to-VOD FAQ](https://help.aliyun.com/document_detail/99726.html).
       * - Alibaba Finance Cloud accounts do not support the live-to-VOD feature.
       * ## QPS limit
       * The QPS limit for this API is 1,000 calls per minute per user. Exceeding this limit will cause API calls to be throttled, which can impact your business. To avoid throttling, call the API at a reasonable rate.
       *
       * @param request AddLiveRecordVodConfigRequest
       * @return AddLiveRecordVodConfigResponse
       */
      Models::AddLiveRecordVodConfigResponse addLiveRecordVodConfig(const Models::AddLiveRecordVodConfigRequest &request);

      /**
       * @summary Adds a video moderation configuration for live streams in an application under a domain name.
       *
       * @description - The live streaming audit function identifies and reviews non-compliant sensitive content at the domain and App level, and promptly notifies users of such violations via callbacks. Users can then review the content and take appropriate actions.
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
       * @description - The live streaming audit function identifies and reviews non-compliant sensitive content at the domain and App level, and promptly notifies users of such violations via callbacks. Users can then review the content and take appropriate actions.
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
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveSnapshotNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveSnapshotNotifyConfigResponse
       */
      Models::AddLiveSnapshotNotifyConfigResponse addLiveSnapshotNotifyConfigWithOptions(const Models::AddLiveSnapshotNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures snapshot callbacks.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveSnapshotNotifyConfigRequest
       * @return AddLiveSnapshotNotifyConfigResponse
       */
      Models::AddLiveSnapshotNotifyConfigResponse addLiveSnapshotNotifyConfig(const Models::AddLiveSnapshotNotifyConfigRequest &request);

      /**
       * @summary Call AddLiveStreamMerge to add a primary/backup stream merge configuration.
       *
       * @description Exceeding the API limit of 100 QPS per account triggers throttling, which may disrupt your service. Please make calls reasonably.
       *
       * @param request AddLiveStreamMergeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveStreamMergeResponse
       */
      Models::AddLiveStreamMergeResponse addLiveStreamMergeWithOptions(const Models::AddLiveStreamMergeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call AddLiveStreamMerge to add a primary/backup stream merge configuration.
       *
       * @description Exceeding the API limit of 100 QPS per account triggers throttling, which may disrupt your service. Please make calls reasonably.
       *
       * @param request AddLiveStreamMergeRequest
       * @return AddLiveStreamMergeResponse
       */
      Models::AddLiveStreamMergeResponse addLiveStreamMerge(const Models::AddLiveStreamMergeRequest &request);

      /**
       * @summary Calls AddLiveStreamTranscode to add transcoding configuration information.
       *
       * @description - Using the live stream transcoding feature incurs transcoding fees, which are calculated based on the transcoding standard, resolution specification, and total transcoding length. For billing rules, see [Live stream transcoding fees](https://help.aliyun.com/document_detail/90424.html).
       * - First obtain the user KMS master key ID through Key Management Service (KMS), and then invoke this operation to add default transcoding configuration information. Currently, this operation supports only two types of transcoding templates: standard quality templates and Narrowband HD™ transcoding templates.
       * - Alibaba Cloud KMS provides default keys for server-side encryption of cloud services at no cost, and no instance purchase is required. However, if you need to build a custom application cryptographic solution, use the credential feature, or manage the key lifecycle, you must purchase a software or hardware key management instance. For billing details, see [Billing](https://help.aliyun.com/document_detail/600418.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request AddLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveStreamTranscodeResponse
       */
      Models::AddLiveStreamTranscodeResponse addLiveStreamTranscodeWithOptions(const Models::AddLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls AddLiveStreamTranscode to add transcoding configuration information.
       *
       * @description - Using the live stream transcoding feature incurs transcoding fees, which are calculated based on the transcoding standard, resolution specification, and total transcoding length. For billing rules, see [Live stream transcoding fees](https://help.aliyun.com/document_detail/90424.html).
       * - First obtain the user KMS master key ID through Key Management Service (KMS), and then invoke this operation to add default transcoding configuration information. Currently, this operation supports only two types of transcoding templates: standard quality templates and Narrowband HD™ transcoding templates.
       * - Alibaba Cloud KMS provides default keys for server-side encryption of cloud services at no cost, and no instance purchase is required. However, if you need to build a custom application cryptographic solution, use the credential feature, or manage the key lifecycle, you must purchase a software or hardware key management instance. For billing details, see [Billing](https://help.aliyun.com/document_detail/600418.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request AddLiveStreamTranscodeRequest
       * @return AddLiveStreamTranscodeResponse
       */
      Models::AddLiveStreamTranscodeResponse addLiveStreamTranscode(const Models::AddLiveStreamTranscodeRequest &request);

      /**
       * @summary Adds a watermark template.
       *
       * @description - This API creates a live stream watermark template, which defines the watermark\\"s content, layout, and other properties.
       * - After you add a watermark template, you must call the [AddLiveStreamWatermarkRule](https://help.aliyun.com/document_detail/2848100.html) operation to create a rule that applies the template. The watermark appears on the stream after you restart the stream ingest.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveStreamWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveStreamWatermarkResponse
       */
      Models::AddLiveStreamWatermarkResponse addLiveStreamWatermarkWithOptions(const Models::AddLiveStreamWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a watermark template.
       *
       * @description - This API creates a live stream watermark template, which defines the watermark\\"s content, layout, and other properties.
       * - After you add a watermark template, you must call the [AddLiveStreamWatermarkRule](https://help.aliyun.com/document_detail/2848100.html) operation to create a rule that applies the template. The watermark appears on the stream after you restart the stream ingest.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveStreamWatermarkRequest
       * @return AddLiveStreamWatermarkResponse
       */
      Models::AddLiveStreamWatermarkResponse addLiveStreamWatermark(const Models::AddLiveStreamWatermarkRequest &request);

      /**
       * @summary Adds a watermark rule.
       *
       * @description After you add a watermark template by calling the [AddLiveStreamWatermark](https://help.aliyun.com/document_detail/2848096.html) operation, call this operation to create a rule that applies the template.
       * ## QPS limits
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveStreamWatermarkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLiveStreamWatermarkRuleResponse
       */
      Models::AddLiveStreamWatermarkRuleResponse addLiveStreamWatermarkRuleWithOptions(const Models::AddLiveStreamWatermarkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a watermark rule.
       *
       * @description After you add a watermark template by calling the [AddLiveStreamWatermark](https://help.aliyun.com/document_detail/2848096.html) operation, call this operation to create a rule that applies the template.
       * ## QPS limits
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddLiveStreamWatermarkRuleRequest
       * @return AddLiveStreamWatermarkRuleResponse
       */
      Models::AddLiveStreamWatermarkRuleResponse addLiveStreamWatermarkRule(const Models::AddLiveStreamWatermarkRuleRequest &request);

      /**
       * @summary Adds a playlist item.
       *
       * @description Create a production studio, add a production studio layout and production studio components, and then call this operation to add a playlist item. If no playlist has been created, the system automatically creates one. To create a production studio by using an API operation, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddPlaylistItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPlaylistItemsResponse
       */
      Models::AddPlaylistItemsResponse addPlaylistItemsWithOptions(const Models::AddPlaylistItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a playlist item.
       *
       * @description Create a production studio, add a production studio layout and production studio components, and then call this operation to add a playlist item. If no playlist has been created, the system automatically creates one. To create a production studio by using an API operation, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddPlaylistItemsRequest
       * @return AddPlaylistItemsResponse
       */
      Models::AddPlaylistItemsResponse addPlaylistItems(const Models::AddPlaylistItemsRequest &request);

      /**
       * @summary Adds a custom transcoding configuration for a streaming domain with Real-Time Streaming (RTS) enabled.
       *
       * @description ## Usage notes
       * You can call this operation to add a custom RTS transcoding configuration. This operation supports only the following types of custom transcoding templates: h264, h264-nbhd, h264-origin, and audio.
       * ## QPS limits
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddRtsLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRtsLiveStreamTranscodeResponse
       */
      Models::AddRtsLiveStreamTranscodeResponse addRtsLiveStreamTranscodeWithOptions(const Models::AddRtsLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a custom transcoding configuration for a streaming domain with Real-Time Streaming (RTS) enabled.
       *
       * @description ## Usage notes
       * You can call this operation to add a custom RTS transcoding configuration. This operation supports only the following types of custom transcoding templates: h264, h264-nbhd, h264-origin, and audio.
       * ## QPS limits
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request AddRtsLiveStreamTranscodeRequest
       * @return AddRtsLiveStreamTranscodeResponse
       */
      Models::AddRtsLiveStreamTranscodeResponse addRtsLiveStreamTranscode(const Models::AddRtsLiveStreamTranscodeRequest &request);

      /**
       * @summary Adds a show to a playlist.
       *
       * @description Before calling this operation, create a playlist mode production studio (NormType=6) and add video resources to it. To create a production studio by using an API operation, refer to [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * Each playlist can contain up to 1000 shows.
       * >Notice: 
       * - When using video-on-demand (VOD) resources, use managed Bucket resources first. Resources in your own Bucket may expire. If you use resources in your own Bucket, check the resource validity period.
       * - Use ApsaraVideo Live and ApsaraVideo VOD resources as input for the production studio. Resources from third-party URLs may fail to play. Verify the quality and validity of such resources.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddShowIntoShowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddShowIntoShowListResponse
       */
      Models::AddShowIntoShowListResponse addShowIntoShowListWithOptions(const Models::AddShowIntoShowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a show to a playlist.
       *
       * @description Before calling this operation, create a playlist mode production studio (NormType=6) and add video resources to it. To create a production studio by using an API operation, refer to [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * Each playlist can contain up to 1000 shows.
       * >Notice: 
       * - When using video-on-demand (VOD) resources, use managed Bucket resources first. Resources in your own Bucket may expire. If you use resources in your own Bucket, check the resource validity period.
       * - Use ApsaraVideo Live and ApsaraVideo VOD resources as input for the production studio. Resources from third-party URLs may fail to play. Verify the quality and validity of such resources.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddShowIntoShowListRequest
       * @return AddShowIntoShowListResponse
       */
      Models::AddShowIntoShowListResponse addShowIntoShowList(const Models::AddShowIntoShowListRequest &request);

      /**
       * @summary Adds layout settings for a virtual production studio.
       *
       * @description You can call this operation to add layout settings for a virtual production studio. This operation supports both common and studio layouts.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 per user. If you exceed this limit, your API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request AddStudioLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddStudioLayoutResponse
       */
      Models::AddStudioLayoutResponse addStudioLayoutWithOptions(const Models::AddStudioLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds layout settings for a virtual production studio.
       *
       * @description You can call this operation to add layout settings for a virtual production studio. This operation supports both common and studio layouts.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 per user. If you exceed this limit, your API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request AddStudioLayoutRequest
       * @return AddStudioLayoutResponse
       */
      Models::AddStudioLayoutResponse addStudioLayout(const Models::AddStudioLayoutRequest &request);

      /**
       * @summary Inserts Supplemental Enhancement Information (SEI) data into transcoded streams.
       *
       * @description First, obtain the streaming domain. Then, call this operation to insert SEI into the transcoded streams. The stream name must be the same as the source stream to ensure that SEI is inserted into all transcoded streams.
       * ## QPS limit
       * You can call this operation up to 6,000 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddTrancodeSEIRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTrancodeSEIResponse
       */
      Models::AddTrancodeSEIResponse addTrancodeSEIWithOptions(const Models::AddTrancodeSEIRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Inserts Supplemental Enhancement Information (SEI) data into transcoded streams.
       *
       * @description First, obtain the streaming domain. Then, call this operation to insert SEI into the transcoded streams. The stream name must be the same as the source stream to ensure that SEI is inserted into all transcoded streams.
       * ## QPS limit
       * You can call this operation up to 6,000 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request AddTrancodeSEIRequest
       * @return AddTrancodeSEIResponse
       */
      Models::AddTrancodeSEIResponse addTrancodeSEI(const Models::AddTrancodeSEIRequest &request);

      /**
       * @summary Call the BanLiveMessageGroup operation to mute a user.
       *
       * @description Before you call this operation, you must call [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) to create an interactive message group.
       * ## QPS limits
       * Each user can call this operation up to 10 times per second. API calls that exceed this limit are throttled, which may impact your business. We recommend that you call this operation within this limit.
       *
       * @param tmpReq BanLiveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BanLiveMessageGroupResponse
       */
      Models::BanLiveMessageGroupResponse banLiveMessageGroupWithOptions(const Models::BanLiveMessageGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the BanLiveMessageGroup operation to mute a user.
       *
       * @description Before you call this operation, you must call [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) to create an interactive message group.
       * ## QPS limits
       * Each user can call this operation up to 10 times per second. API calls that exceed this limit are throttled, which may impact your business. We recommend that you call this operation within this limit.
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
       * @summary Queries whether one or more users are online based on their UIDs
       *
       * @description ## Usage notes
       * This operation supports batch queries. You can query the online status of up to 20 users at a time.
       * ## QPS limits
       * The single-user queries per second (QPS) limit for this operation is 100 times/second. If you exceed this limit, API calls will be throttled, which may affect your business. You should make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request BatchGetOnlineUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetOnlineUsersResponse
       */
      Models::BatchGetOnlineUsersResponse batchGetOnlineUsersWithOptions(const Models::BatchGetOnlineUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether one or more users are online based on their UIDs
       *
       * @description ## Usage notes
       * This operation supports batch queries. You can query the online status of up to 20 users at a time.
       * ## QPS limits
       * The single-user queries per second (QPS) limit for this operation is 100 times/second. If you exceed this limit, API calls will be throttled, which may affect your business. You should make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request BatchGetOnlineUsersRequest
       * @return BatchGetOnlineUsersResponse
       */
      Models::BatchGetOnlineUsersResponse batchGetOnlineUsers(const Models::BatchGetOnlineUsersRequest &request);

      /**
       * @summary Configures domain names in batches.
       *
       * @description Obtain the ApsaraVideo Live domain names to configure, and then call this operation to configure domain names in batches.
       * ## Rate limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request BatchSetLiveDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetLiveDomainConfigsResponse
       */
      Models::BatchSetLiveDomainConfigsResponse batchSetLiveDomainConfigsWithOptions(const Models::BatchSetLiveDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures domain names in batches.
       *
       * @description Obtain the ApsaraVideo Live domain names to configure, and then call this operation to configure domain names in batches.
       * ## Rate limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request BatchSetLiveDomainConfigsRequest
       * @return BatchSetLiveDomainConfigsResponse
       */
      Models::BatchSetLiveDomainConfigsResponse batchSetLiveDomainConfigs(const Models::BatchSetLiveDomainConfigsRequest &request);

      /**
       * @summary Cancels the muting of a message group user.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this operation is 100 times/second. If this limit is exceeded, API calls will be throttled, which may affect your business. You should make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CancelMuteAllGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelMuteAllGroupUserResponse
       */
      Models::CancelMuteAllGroupUserResponse cancelMuteAllGroupUserWithOptions(const Models::CancelMuteAllGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the muting of a message group user.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this operation is 100 times/second. If this limit is exceeded, API calls will be throttled, which may affect your business. You should make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CancelMuteAllGroupUserRequest
       * @return CancelMuteAllGroupUserResponse
       */
      Models::CancelMuteAllGroupUserResponse cancelMuteAllGroupUser(const Models::CancelMuteAllGroupUserRequest &request);

      /**
       * @summary Calls CancelMuteGroupUser to batch unmute members in a message group.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq CancelMuteGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelMuteGroupUserResponse
       */
      Models::CancelMuteGroupUserResponse cancelMuteGroupUserWithOptions(const Models::CancelMuteGroupUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CancelMuteGroupUser to batch unmute members in a message group.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CancelMuteGroupUserRequest
       * @return CancelMuteGroupUserResponse
       */
      Models::CancelMuteGroupUserResponse cancelMuteGroupUser(const Models::CancelMuteGroupUserRequest &request);

      /**
       * @summary Moves a domain name in ApsaraVideo Live to a specified resource group.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request ChangeLiveDomainResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeLiveDomainResourceGroupResponse
       */
      Models::ChangeLiveDomainResourceGroupResponse changeLiveDomainResourceGroupWithOptions(const Models::ChangeLiveDomainResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a domain name in ApsaraVideo Live to a specified resource group.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
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
       * @summary Disables the time shifting service for a specified domain name (application or live stream).
       *
       * @description Obtain the streaming domain first, and then call this operation to disable the time shifting service for a specified domain name (application or live stream).
       * Before calling this operation, call OpenLiveShift to enable the time shifting service. The AppName and StreamName specified when disabling the service must be the same as those specified when enabling the service. Wildcards (*) are supported.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CloseLiveShiftRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseLiveShiftResponse
       */
      Models::CloseLiveShiftResponse closeLiveShiftWithOptions(const Models::CloseLiveShiftRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the time shifting service for a specified domain name (application or live stream).
       *
       * @description Obtain the streaming domain first, and then call this operation to disable the time shifting service for a specified domain name (application or live stream).
       * Before calling this operation, call OpenLiveShift to enable the time shifting service. The AppName and StreamName specified when disabling the service must be the same as those specified when enabling the service. Wildcards (*) are supported.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CloseLiveShiftRequest
       * @return CloseLiveShiftResponse
       */
      Models::CloseLiveShiftResponse closeLiveShift(const Models::CloseLiveShiftRequest &request);

      /**
       * @summary Duplicates a production studio and creates a new production studio instance.
       *
       * @description You can call this operation to copy a specified production studio, which creates a new production studio instance.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request CopyCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyCasterResponse
       */
      Models::CopyCasterResponse copyCasterWithOptions(const Models::CopyCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Duplicates a production studio and creates a new production studio instance.
       *
       * @description You can call this operation to copy a specified production studio, which creates a new production studio instance.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request CopyCasterRequest
       * @return CopyCasterResponse
       */
      Models::CopyCasterResponse copyCaster(const Models::CopyCasterRequest &request);

      /**
       * @summary Applies the configuration of a PVW scene to a PGM scene.
       *
       * @description - Production Studio is billed based on output specifications, transcoding specifications, and the duration of usage. For more information, see [Production studio pricing](https://help.aliyun.com/document_detail/64531.html).
       * - You can call this operation to copy the configuration from a source scene to a destination scene. You can only copy the configuration from a PVW scene to a PGM scene. A PVW scene is a preview scene, and a PGM scene is a program scene.
       * - The PVW scene and the PGM scene must be in the same production studio.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request CopyCasterSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyCasterSceneConfigResponse
       */
      Models::CopyCasterSceneConfigResponse copyCasterSceneConfigWithOptions(const Models::CopyCasterSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies the configuration of a PVW scene to a PGM scene.
       *
       * @description - Production Studio is billed based on output specifications, transcoding specifications, and the duration of usage. For more information, see [Production studio pricing](https://help.aliyun.com/document_detail/64531.html).
       * - You can call this operation to copy the configuration from a source scene to a destination scene. You can only copy the configuration from a PVW scene to a PGM scene. A PVW scene is a preview scene, and a PGM scene is a program scene.
       * - The PVW scene and the PGM scene must be in the same production studio.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request CopyCasterSceneConfigRequest
       * @return CopyCasterSceneConfigResponse
       */
      Models::CopyCasterSceneConfigResponse copyCasterSceneConfig(const Models::CopyCasterSceneConfigRequest &request);

      /**
       * @summary Call the CreateCaster operation to create a production studio.
       *
       * @description You must activate ApsaraVideo Live before you call this operation. For more information, see [Activate ApsaraVideo Live](https://help.aliyun.com/document_detail/60361.html). <props="china">This operation supports the following types of production studios: Standard, Lightweight Carousel, Virtual Studio, and New Playlist (Carousel). <props="intl">This operation supports the following types of production studios: Standard and New Playlist (Carousel).
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request CreateCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCasterResponse
       */
      Models::CreateCasterResponse createCasterWithOptions(const Models::CreateCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the CreateCaster operation to create a production studio.
       *
       * @description You must activate ApsaraVideo Live before you call this operation. For more information, see [Activate ApsaraVideo Live](https://help.aliyun.com/document_detail/60361.html). <props="china">This operation supports the following types of production studios: Standard, Lightweight Carousel, Virtual Studio, and New Playlist (Carousel). <props="intl">This operation supports the following types of production studios: Standard and New Playlist (Carousel).
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request CreateCasterRequest
       * @return CreateCasterResponse
       */
      Models::CreateCasterResponse createCaster(const Models::CreateCasterRequest &request);

      /**
       * @summary Creates a custom stream mixing template.
       *
       * @description After you call this operation to create a custom template, record the template name. To use the custom template, set the MixStreamTemplate parameter to the template name when you call the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation to create a stream mixing task.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 for each user. API calls that exceed this limit are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request CreateCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomTemplateResponse
       */
      Models::CreateCustomTemplateResponse createCustomTemplateWithOptions(const Models::CreateCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom stream mixing template.
       *
       * @description After you call this operation to create a custom template, record the template name. To use the custom template, set the MixStreamTemplate parameter to the template name when you call the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation to create a stream mixing task.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 for each user. API calls that exceed this limit are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request CreateCustomTemplateRequest
       * @return CreateCustomTemplateResponse
       */
      Models::CreateCustomTemplateResponse createCustomTemplate(const Models::CreateCustomTemplateRequest &request);

      /**
       * @summary Creates an edge transcoding job.
       *
       * @description - You can call this operation to create an edge transcoding job.
       * - Before you call this operation, you must have permission to access the edge transcoding service.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute for each user. If you exceed this limit, API calls are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request CreateEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEdgeTranscodeJobResponse
       */
      Models::CreateEdgeTranscodeJobResponse createEdgeTranscodeJobWithOptions(const Models::CreateEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an edge transcoding job.
       *
       * @description - You can call this operation to create an edge transcoding job.
       * - Before you call this operation, you must have permission to access the edge transcoding service.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute for each user. If you exceed this limit, API calls are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request CreateEdgeTranscodeJobRequest
       * @return CreateEdgeTranscodeJobResponse
       */
      Models::CreateEdgeTranscodeJobResponse createEdgeTranscodeJob(const Models::CreateEdgeTranscodeJobRequest &request);

      /**
       * @summary Creates a callback for subscribing to channel messages.
       *
       * @description Creates a callback for subscribing to channel messages. For example, when creating a callback, you can configure parameters such as the callback URL and event types.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateEventSubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventSubResponse
       */
      Models::CreateEventSubResponse createEventSubWithOptions(const Models::CreateEventSubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a callback for subscribing to channel messages.
       *
       * @description Creates a callback for subscribing to channel messages. For example, when creating a callback, you can configure parameters such as the callback URL and event types.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateEventSubRequest
       * @return CreateEventSubResponse
       */
      Models::CreateEventSubResponse createEventSub(const Models::CreateEventSubRequest &request);

      /**
       * @summary Creates a lightweight virtual studio template.
       *
       * @description >Notice: The lightweight virtual studio feature is in public preview. Each user can create up to 300 templates. The feature is free of charge during the public preview. After the public preview ends, standard fees will apply. The specific date will be announced separately..
       *
       * @param tmpReq CreateLiveAIStudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveAIStudioResponse
       */
      Models::CreateLiveAIStudioResponse createLiveAIStudioWithOptions(const Models::CreateLiveAIStudioRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a lightweight virtual studio template.
       *
       * @description >Notice: The lightweight virtual studio feature is in public preview. Each user can create up to 300 templates. The feature is free of charge during the public preview. After the public preview ends, standard fees will apply. The specific date will be announced separately..
       *
       * @param request CreateLiveAIStudioRequest
       * @return CreateLiveAIStudioResponse
       */
      Models::CreateLiveAIStudioResponse createLiveAIStudio(const Models::CreateLiveAIStudioRequest &request);

      /**
       * @summary Adds a stream delay configuration.
       *
       * @description Stream delay differs from latency caused by streaming protocols. Stream delay is a feature that lets you delay the playback of a live stream processed in the cloud.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 60 for each user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation within the specified limit.
       *
       * @param request CreateLiveDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveDelayConfigResponse
       */
      Models::CreateLiveDelayConfigResponse createLiveDelayConfigWithOptions(const Models::CreateLiveDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a stream delay configuration.
       *
       * @description Stream delay differs from latency caused by streaming protocols. Stream delay is a feature that lets you delay the playback of a live stream processed in the cloud.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 60 for each user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation within the specified limit.
       *
       * @param request CreateLiveDelayConfigRequest
       * @return CreateLiveDelayConfigResponse
       */
      Models::CreateLiveDelayConfigResponse createLiveDelayConfig(const Models::CreateLiveDelayConfigRequest &request);

      /**
       * @summary Creates an interactive messaging application by calling CreateLiveMessageApp.
       *
       * @description - When calling other interactive messaging API operations, the data center must be the same as the one specified when creating the interactive messaging application.
       * - A maximum of 300 interactive messaging applications can be created under a single Alibaba Cloud account.
       * ## QPS limit
       * The single-user QPS limit for this API operation is 50 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateLiveMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveMessageAppResponse
       */
      Models::CreateLiveMessageAppResponse createLiveMessageAppWithOptions(const Models::CreateLiveMessageAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an interactive messaging application by calling CreateLiveMessageApp.
       *
       * @description - When calling other interactive messaging API operations, the data center must be the same as the one specified when creating the interactive messaging application.
       * - A maximum of 300 interactive messaging applications can be created under a single Alibaba Cloud account.
       * ## QPS limit
       * The single-user QPS limit for this API operation is 50 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
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
       * @summary Creates an Alibaba Cloud Global Accelerator (GA) instance and attaches it to a live streaming link.
       *
       * @description - This operation creates an Alibaba Cloud Global Accelerator (GA) instance and attaches it to a live streaming link. You must specify the stream-level granularity and indicate the acceleration start point and end point.
       * - The template takes effect only when the AppName and StreamName values match the AppName and StreamName in the streaming URL.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, the API invoke is throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request CreateLivePrivateLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivePrivateLineResponse
       */
      Models::CreateLivePrivateLineResponse createLivePrivateLineWithOptions(const Models::CreateLivePrivateLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Alibaba Cloud Global Accelerator (GA) instance and attaches it to a live streaming link.
       *
       * @description - This operation creates an Alibaba Cloud Global Accelerator (GA) instance and attaches it to a live streaming link. You must specify the stream-level granularity and indicate the acceleration start point and end point.
       * - The template takes effect only when the AppName and StreamName values match the AppName and StreamName in the streaming URL.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, the API invoke is throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request CreateLivePrivateLineRequest
       * @return CreateLivePrivateLineResponse
       */
      Models::CreateLivePrivateLineResponse createLivePrivateLine(const Models::CreateLivePrivateLineRequest &request);

      /**
       * @summary Call CreateLivePullToPush to create a pull-to-push task.
       *
       * @description >Notice: Pull-to-push is a paid feature. Billing officially starts from 00:00 on December 5, 2025.
       * - For pricing details, see [Pull-to-push pricing](https://help.aliyun.com/document_detail/2997901.html).
       * - Call this operation to create a pull-to-push task.
       * - Supports creating live stream pull tasks and VOD pull tasks.
       * - After a task is created, it starts running at the specified start time and automatically stops and is deleted at the specified end time.
       * - The push destination URL specified in the task must not be used by other tasks. Otherwise, multiple tasks pushing to the same URL simultaneously will cause push failures.
       * - Pull-to-push callback events include task running status change callbacks and task exit callbacks. For more information, see [Pull-to-push event callbacks](https://help.aliyun.com/document_detail/2846768.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this operation appropriately.
       *
       * @param tmpReq CreateLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLivePullToPushResponse
       */
      Models::CreateLivePullToPushResponse createLivePullToPushWithOptions(const Models::CreateLivePullToPushRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call CreateLivePullToPush to create a pull-to-push task.
       *
       * @description >Notice: Pull-to-push is a paid feature. Billing officially starts from 00:00 on December 5, 2025.
       * - For pricing details, see [Pull-to-push pricing](https://help.aliyun.com/document_detail/2997901.html).
       * - Call this operation to create a pull-to-push task.
       * - Supports creating live stream pull tasks and VOD pull tasks.
       * - After a task is created, it starts running at the specified start time and automatically stops and is deleted at the specified end time.
       * - The push destination URL specified in the task must not be used by other tasks. Otherwise, multiple tasks pushing to the same URL simultaneously will cause push failures.
       * - Pull-to-push callback events include task running status change callbacks and task exit callbacks. For more information, see [Pull-to-push event callbacks](https://help.aliyun.com/document_detail/2846768.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this operation appropriately.
       *
       * @param request CreateLivePullToPushRequest
       * @return CreateLivePullToPushResponse
       */
      Models::CreateLivePullToPushResponse createLivePullToPush(const Models::CreateLivePullToPushRequest &request);

      /**
       * @summary Calls CreateLiveRealTimeLogDelivery to create a real-time log delivery configuration for a domain name.
       *
       * @description Obtain the streaming domain first, and then call this operation to create a real-time log delivery configuration for the domain name.
       * The resources corresponding to the Project, Logstore, and Region parameters must be created in Simple Log Service (SLS) in advance.
       * Currently, only streaming domains can be configured. To push upstream real-time logs (that is, to configure an ingest domain), [submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live&commonQuestionId=4545&isSmart=true&iatraceid=1608439120675-2a5c48de0b84805313c708&channel=selfservice).
       * Currently, only streaming domains can be configured. To push upstream real-time logs (that is, to configure an ingest domain), [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## QPS limit
       * The single-user QPS limit for this operation is 6,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateLiveRealTimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveRealTimeLogDeliveryResponse
       */
      Models::CreateLiveRealTimeLogDeliveryResponse createLiveRealTimeLogDeliveryWithOptions(const Models::CreateLiveRealTimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CreateLiveRealTimeLogDelivery to create a real-time log delivery configuration for a domain name.
       *
       * @description Obtain the streaming domain first, and then call this operation to create a real-time log delivery configuration for the domain name.
       * The resources corresponding to the Project, Logstore, and Region parameters must be created in Simple Log Service (SLS) in advance.
       * Currently, only streaming domains can be configured. To push upstream real-time logs (that is, to configure an ingest domain), [submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live&commonQuestionId=4545&isSmart=true&iatraceid=1608439120675-2a5c48de0b84805313c708&channel=selfservice).
       * Currently, only streaming domains can be configured. To push upstream real-time logs (that is, to configure an ingest domain), [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## QPS limit
       * The single-user QPS limit for this operation is 6,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateLiveRealTimeLogDeliveryRequest
       * @return CreateLiveRealTimeLogDeliveryResponse
       */
      Models::CreateLiveRealTimeLogDeliveryResponse createLiveRealTimeLogDelivery(const Models::CreateLiveRealTimeLogDeliveryRequest &request);

      /**
       * @summary Creates a monitoring session.
       *
       * @description Call this operation to create a monitoring session. Ensure that the required parameters are configured.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed the limit, your API calls are throttled. This may affect your business. Plan your API calls accordingly.
       *
       * @param request CreateLiveStreamMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveStreamMonitorResponse
       */
      Models::CreateLiveStreamMonitorResponse createLiveStreamMonitorWithOptions(const Models::CreateLiveStreamMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a monitoring session.
       *
       * @description Call this operation to create a monitoring session. Ensure that the required parameters are configured.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed the limit, your API calls are throttled. This may affect your business. Plan your API calls accordingly.
       *
       * @param request CreateLiveStreamMonitorRequest
       * @return CreateLiveStreamMonitorResponse
       */
      Models::CreateLiveStreamMonitorResponse createLiveStreamMonitor(const Models::CreateLiveStreamMonitorRequest &request);

      /**
       * @summary Creates an M3U8 index file for a specified time range.
       *
       * @description You have configured OSS. For more information, see [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
       * Live recording indexing records a live video stream in M3U8 format, stores it in OSS, and performs real-time clipping on the stored TS segment index files.  
       * > - To create a recording index, the live stream must have had stream ingest activity. If no live streaming occurred within the specified time range or the stream name is incorrect, the recording index creation is failed.
       * > - Make sure that DomainName, AppName, and StreamName are correct. Otherwise, the InvalidStream.NotFound error is returned.
       * > - The interval between StartTime and EndTime must be at least the duration of one TS segment (30 seconds by default).
       * > - EndTime must be later than StartTime, and the interval cannot exceed 4 days.
       * > - TS segment information is retained in the ApsaraVideo Live system for only 3 months. You can create an M3U8 file only from recordings within the last 3 months.
       * > - TS segment files are stored in OSS. The retention period is determined by the OSS storage configuration. For more information, see [Settings lifecycle rules](https://help.aliyun.com/document_detail/31904.html).
       * > - Information about created M3U8 index files is retained in the ApsaraVideo Live system for only 6 months. You can query only the information of index files created within the last 6 months.
       * > - M3U8 index files are stored in OSS. The retention period is determined by the OSS storage configuration.
       * > - If the M3U8 and TS files are stored in different buckets, the TS paths in the M3U8 file are in HTTP format.
       * ## QPS limit
       * The single-user QPS limit for this API is 45 calls per second. If this limit is exceeded, throttling is triggered, which may affect your business. Call this operation as appropriate.
       *
       * @param request CreateLiveStreamRecordIndexFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLiveStreamRecordIndexFilesResponse
       */
      Models::CreateLiveStreamRecordIndexFilesResponse createLiveStreamRecordIndexFilesWithOptions(const Models::CreateLiveStreamRecordIndexFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an M3U8 index file for a specified time range.
       *
       * @description You have configured OSS. For more information, see [Configure OSS](https://help.aliyun.com/document_detail/84932.html).
       * Live recording indexing records a live video stream in M3U8 format, stores it in OSS, and performs real-time clipping on the stored TS segment index files.  
       * > - To create a recording index, the live stream must have had stream ingest activity. If no live streaming occurred within the specified time range or the stream name is incorrect, the recording index creation is failed.
       * > - Make sure that DomainName, AppName, and StreamName are correct. Otherwise, the InvalidStream.NotFound error is returned.
       * > - The interval between StartTime and EndTime must be at least the duration of one TS segment (30 seconds by default).
       * > - EndTime must be later than StartTime, and the interval cannot exceed 4 days.
       * > - TS segment information is retained in the ApsaraVideo Live system for only 3 months. You can create an M3U8 file only from recordings within the last 3 months.
       * > - TS segment files are stored in OSS. The retention period is determined by the OSS storage configuration. For more information, see [Settings lifecycle rules](https://help.aliyun.com/document_detail/31904.html).
       * > - Information about created M3U8 index files is retained in the ApsaraVideo Live system for only 6 months. You can query only the information of index files created within the last 6 months.
       * > - M3U8 index files are stored in OSS. The retention period is determined by the OSS storage configuration.
       * > - If the M3U8 and TS files are stored in different buckets, the TS paths in the M3U8 file are in HTTP format.
       * ## QPS limit
       * The single-user QPS limit for this API is 45 calls per second. If this limit is exceeded, throttling is triggered, which may affect your business. Call this operation as appropriate.
       *
       * @param request CreateLiveStreamRecordIndexFilesRequest
       * @return CreateLiveStreamRecordIndexFilesResponse
       */
      Models::CreateLiveStreamRecordIndexFilesResponse createLiveStreamRecordIndexFiles(const Models::CreateLiveStreamRecordIndexFilesRequest &request);

      /**
       * @summary You can call CreateMessageApp to create an interactive message application.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq CreateMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMessageAppResponse
       */
      Models::CreateMessageAppResponse createMessageAppWithOptions(const Models::CreateMessageAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call CreateMessageApp to create an interactive message application.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CreateMessageAppRequest
       * @return CreateMessageAppResponse
       */
      Models::CreateMessageAppResponse createMessageApp(const Models::CreateMessageAppRequest &request);

      /**
       * @summary Creates a message group.
       *
       * @description ## QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. Consider this limit when calling this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq CreateMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMessageGroupResponse
       */
      Models::CreateMessageGroupResponse createMessageGroupWithOptions(const Models::CreateMessageGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a message group.
       *
       * @description ## QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. Consider this limit when calling this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request CreateMessageGroupRequest
       * @return CreateMessageGroupResponse
       */
      Models::CreateMessageGroupResponse createMessageGroup(const Models::CreateMessageGroupRequest &request);

      /**
       * @summary Creates a stream mixing task.
       *
       * @description >Notice: 
       * Cloud stream mixing is a paid feature. This feature is in public preview and is currently free of charge. Standard fees will apply after the public preview period. The end date of the public preview will be announced at a later date.
       * </notice>
       * You can call this operation to create a stream mixing task. This operation supports both preset and custom layouts.
       * ## QPS limit
       * A single user can make up to 10 queries per second (QPS). Calls that exceed this limit are throttled. Throttling may affect your business operations. We recommend that you plan your calls accordingly.
       *
       * @param request CreateMixStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMixStreamResponse
       */
      Models::CreateMixStreamResponse createMixStreamWithOptions(const Models::CreateMixStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a stream mixing task.
       *
       * @description >Notice: 
       * Cloud stream mixing is a paid feature. This feature is in public preview and is currently free of charge. Standard fees will apply after the public preview period. The end date of the public preview will be announced at a later date.
       * </notice>
       * You can call this operation to create a stream mixing task. This operation supports both preset and custom layouts.
       * ## QPS limit
       * A single user can make up to 10 queries per second (QPS). Calls that exceed this limit are throttled. Throttling may affect your business operations. We recommend that you plan your calls accordingly.
       *
       * @param request CreateMixStreamRequest
       * @return CreateMixStreamResponse
       */
      Models::CreateMixStreamResponse createMixStream(const Models::CreateMixStreamRequest &request);

      /**
       * @summary Creates a WHIP ingest URL for an ApsaraVideo Real-time Communication channel by calling CreateRTCWhipStreamAddress.
       *
       * @description ## Usage notes
       * 1. Call the CreateRTCWhipStreamAddress operation to create a WHIP ingest URL (WhipAddress) for the specified RTC channel.
       * 2. Use OBS to ingest a stream by using the WHIP protocol.
       *     - Run the OBS streaming tool.
       *     - In the menu bar, choose **File > Settings**.
       *     - On the Settings page, select **Stream**, configure the following information, and then click **OK**.
       *         | Parameter | Description | 
       *         | ------ | ------| 
       *         | Service| Set Service to **WHIP**.| 
       *         | Server | Use the WhipAddress generated by the operation in Step 1.| 
       *         | Bearer Token| Leave the stream key empty. | 
       *         ![](https://img.alicdn.com/imgextra/i3/O1CN01xaAEK61umh8yP8NFe_!!6000000006080-2-tps-1746-685.png)
       * 3. Other users can join the corresponding channel to watch the stream.
       * ## QPS limit
       * The single-user QPS limit for this operation is 40 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateRTCWhipStreamAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRTCWhipStreamAddressResponse
       */
      Models::CreateRTCWhipStreamAddressResponse createRTCWhipStreamAddressWithOptions(const Models::CreateRTCWhipStreamAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a WHIP ingest URL for an ApsaraVideo Real-time Communication channel by calling CreateRTCWhipStreamAddress.
       *
       * @description ## Usage notes
       * 1. Call the CreateRTCWhipStreamAddress operation to create a WHIP ingest URL (WhipAddress) for the specified RTC channel.
       * 2. Use OBS to ingest a stream by using the WHIP protocol.
       *     - Run the OBS streaming tool.
       *     - In the menu bar, choose **File > Settings**.
       *     - On the Settings page, select **Stream**, configure the following information, and then click **OK**.
       *         | Parameter | Description | 
       *         | ------ | ------| 
       *         | Service| Set Service to **WHIP**.| 
       *         | Server | Use the WhipAddress generated by the operation in Step 1.| 
       *         | Bearer Token| Leave the stream key empty. | 
       *         ![](https://img.alicdn.com/imgextra/i3/O1CN01xaAEK61umh8yP8NFe_!!6000000006080-2-tps-1746-685.png)
       * 3. Other users can join the corresponding channel to watch the stream.
       * ## QPS limit
       * The single-user QPS limit for this operation is 40 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateRTCWhipStreamAddressRequest
       * @return CreateRTCWhipStreamAddressResponse
       */
      Models::CreateRTCWhipStreamAddressResponse createRTCWhipStreamAddress(const Models::CreateRTCWhipStreamAddressRequest &request);

      /**
       * @summary Creates an ingest URL for an RTMP stream in a channel.
       *
       * @description 1. Call this operation to generate an RTMP ingest URL.
       * 2. Ingest a stream to the RTMP URL. Other users in the channel can view this stream.
       * 3. Stop stream ingest. Other users in the channel see the RTMP stream user leave the channel.
       * > - You can repeat steps 2 and 3 while the RTMP URL is valid.
       * >- Call [DescribeChannelParticipants](https://help.aliyun.com/document_detail/2848193.html) to query the channel user list and periodically check whether the RTMP stream user is still in the channel. If the user is no longer in the channel, stream ingest may have been interrupted. Stop stream ingest and go back to step 2 to re-ingest.
       * ## Before you begin
       * When using ApsaraVideo Real-time Communication, you typically join a channel and ingest RTC streams through the Alibaba Cloud ARTC SDK. However, in certain special scenarios, Alibaba Cloud allows you to use the RTMP protocol for stream ingest (such as OBS stream ingest). Alibaba Cloud then converts the RTMP stream to an RTC stream for distribution and user joining. You can use this operation to implement this capability. This operation generates an RTMP ingest URL. After you complete stream ingest, Alibaba Cloud automatically converts the stream to an RTC stream.
       * If your business is a pure live streaming scenario, do not use this operation. Refer to [Generate ingest URLs and streaming URLs](https://help.aliyun.com/document_detail/198676.html) to quickly implement RTMP stream ingest and live playback.
       * ## Rate limit
       * The single-user queries per second (QPS) limit for this operation is 100. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateRoomRealTimeStreamAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoomRealTimeStreamAddressResponse
       */
      Models::CreateRoomRealTimeStreamAddressResponse createRoomRealTimeStreamAddressWithOptions(const Models::CreateRoomRealTimeStreamAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ingest URL for an RTMP stream in a channel.
       *
       * @description 1. Call this operation to generate an RTMP ingest URL.
       * 2. Ingest a stream to the RTMP URL. Other users in the channel can view this stream.
       * 3. Stop stream ingest. Other users in the channel see the RTMP stream user leave the channel.
       * > - You can repeat steps 2 and 3 while the RTMP URL is valid.
       * >- Call [DescribeChannelParticipants](https://help.aliyun.com/document_detail/2848193.html) to query the channel user list and periodically check whether the RTMP stream user is still in the channel. If the user is no longer in the channel, stream ingest may have been interrupted. Stop stream ingest and go back to step 2 to re-ingest.
       * ## Before you begin
       * When using ApsaraVideo Real-time Communication, you typically join a channel and ingest RTC streams through the Alibaba Cloud ARTC SDK. However, in certain special scenarios, Alibaba Cloud allows you to use the RTMP protocol for stream ingest (such as OBS stream ingest). Alibaba Cloud then converts the RTMP stream to an RTC stream for distribution and user joining. You can use this operation to implement this capability. This operation generates an RTMP ingest URL. After you complete stream ingest, Alibaba Cloud automatically converts the stream to an RTC stream.
       * If your business is a pure live streaming scenario, do not use this operation. Refer to [Generate ingest URLs and streaming URLs](https://help.aliyun.com/document_detail/198676.html) to quickly implement RTMP stream ingest and live playback.
       * ## Rate limit
       * The single-user queries per second (QPS) limit for this operation is 100. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateRoomRealTimeStreamAddressRequest
       * @return CreateRoomRealTimeStreamAddressResponse
       */
      Models::CreateRoomRealTimeStreamAddressResponse createRoomRealTimeStreamAddress(const Models::CreateRoomRealTimeStreamAddressRequest &request);

      /**
       * @summary Creates a real-time subtitle task to transcribe an audio stream into text in real time.
       *
       * @description This operation is currently in maintenance mode. Use intelligent workflows to implement this capability. For more information, see [Intelligent workflow configuration](https://help.aliyun.com/document_detail/2985843.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 20 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateRtcAsrTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRtcAsrTaskResponse
       */
      Models::CreateRtcAsrTaskResponse createRtcAsrTaskWithOptions(const Models::CreateRtcAsrTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a real-time subtitle task to transcribe an audio stream into text in real time.
       *
       * @description This operation is currently in maintenance mode. Use intelligent workflows to implement this capability. For more information, see [Intelligent workflow configuration](https://help.aliyun.com/document_detail/2985843.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 20 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateRtcAsrTaskRequest
       * @return CreateRtcAsrTaskResponse
       */
      Models::CreateRtcAsrTaskResponse createRtcAsrTask(const Models::CreateRtcAsrTaskRequest &request);

      /**
       * @summary Creates an event subscription for stream mixing and relaying.
       *
       * @description Creates an event subscription for stream mixing and relaying. When you create a subscription, you can configure parameters such as the callback URL, the application to subscribe to, and channel information.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateRtcMPUEventSubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRtcMPUEventSubResponse
       */
      Models::CreateRtcMPUEventSubResponse createRtcMPUEventSubWithOptions(const Models::CreateRtcMPUEventSubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an event subscription for stream mixing and relaying.
       *
       * @description Creates an event subscription for stream mixing and relaying. When you create a subscription, you can configure parameters such as the callback URL, the application to subscribe to, and channel information.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request CreateRtcMPUEventSubRequest
       * @return CreateRtcMPUEventSubResponse
       */
      Models::CreateRtcMPUEventSubResponse createRtcMPUEventSub(const Models::CreateRtcMPUEventSubRequest &request);

      /**
       * @summary Deletes a production studio.
       *
       * @description - A production studio must be shut down before you can delete it. Otherwise, the operation fails.
       * - When you delete a production studio, its associated scenes, components, and layouts are also deleted.
       * - You cannot recover a deleted production studio.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 for each user. Calls that exceed this limit are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request DeleteCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterResponse
       */
      Models::DeleteCasterResponse deleteCasterWithOptions(const Models::DeleteCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a production studio.
       *
       * @description - A production studio must be shut down before you can delete it. Otherwise, the operation fails.
       * - When you delete a production studio, its associated scenes, components, and layouts are also deleted.
       * - You cannot recover a deleted production studio.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 for each user. Calls that exceed this limit are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request DeleteCasterRequest
       * @return DeleteCasterResponse
       */
      Models::DeleteCasterResponse deleteCaster(const Models::DeleteCasterRequest &request);

      /**
       * @summary Deletes a component from a production studio.
       *
       * @description Call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to delete a component from the production studio.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled, which may affect your business. We recommend that you plan your calls accordingly.
       *
       * @param request DeleteCasterComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterComponentResponse
       */
      Models::DeleteCasterComponentResponse deleteCasterComponentWithOptions(const Models::DeleteCasterComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a component from a production studio.
       *
       * @description Call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to delete a component from the production studio.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled, which may affect your business. We recommend that you plan your calls accordingly.
       *
       * @param request DeleteCasterComponentRequest
       * @return DeleteCasterComponentResponse
       */
      Models::DeleteCasterComponentResponse deleteCasterComponent(const Models::DeleteCasterComponentRequest &request);

      /**
       * @summary Deletes an episode from a production studio.
       *
       * @description Before you call this operation, you must obtain the production studio ID and the episode ID.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 4. API calls that exceed this limit are throttled, which may impact your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DeleteCasterEpisodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterEpisodeResponse
       */
      Models::DeleteCasterEpisodeResponse deleteCasterEpisodeWithOptions(const Models::DeleteCasterEpisodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an episode from a production studio.
       *
       * @description Before you call this operation, you must obtain the production studio ID and the episode ID.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 4. API calls that exceed this limit are throttled, which may impact your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DeleteCasterEpisodeRequest
       * @return DeleteCasterEpisodeResponse
       */
      Models::DeleteCasterEpisodeResponse deleteCasterEpisode(const Models::DeleteCasterEpisodeRequest &request);

      /**
       * @summary Deletes an episode list in a production studio.
       *
       * @description First, call the [AddCasterEpisodeGroup](https://help.aliyun.com/document_detail/2848071.html) operation to add an episode list to a production studio. You can then call this operation to delete the episode list.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 4 per user. API calls that exceed this limit are throttled, which may affect your business. Call this operation within the specified limit.
       *
       * @param request DeleteCasterEpisodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterEpisodeGroupResponse
       */
      Models::DeleteCasterEpisodeGroupResponse deleteCasterEpisodeGroupWithOptions(const Models::DeleteCasterEpisodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an episode list in a production studio.
       *
       * @description First, call the [AddCasterEpisodeGroup](https://help.aliyun.com/document_detail/2848071.html) operation to add an episode list to a production studio. You can then call this operation to delete the episode list.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 4 per user. API calls that exceed this limit are throttled, which may affect your business. Call this operation within the specified limit.
       *
       * @param request DeleteCasterEpisodeGroupRequest
       * @return DeleteCasterEpisodeGroupResponse
       */
      Models::DeleteCasterEpisodeGroupResponse deleteCasterEpisodeGroup(const Models::DeleteCasterEpisodeGroupRequest &request);

      /**
       * @summary Deletes a layout in a production studio.
       *
       * @description Call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to delete a layout in the production studio.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) for each user. API calls that exceed this limit are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request DeleteCasterLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterLayoutResponse
       */
      Models::DeleteCasterLayoutResponse deleteCasterLayoutWithOptions(const Models::DeleteCasterLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a layout in a production studio.
       *
       * @description Call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to delete a layout in the production studio.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) for each user. API calls that exceed this limit are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request DeleteCasterLayoutRequest
       * @return DeleteCasterLayoutResponse
       */
      Models::DeleteCasterLayoutResponse deleteCasterLayout(const Models::DeleteCasterLayoutRequest &request);

      /**
       * @summary Deletes the episode list for carousel playback in a production studio.
       *
       * @description First, call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. Then, call this operation to delete the program of the production studio.
       * ## Usage limits
       * You can call this operation up to 4 queries per second (QPS) per account. If you exceed this limit, API calls are throttled. This can affect your business. Plan your calls accordingly.
       *
       * @param request DeleteCasterProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterProgramResponse
       */
      Models::DeleteCasterProgramResponse deleteCasterProgramWithOptions(const Models::DeleteCasterProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the episode list for carousel playback in a production studio.
       *
       * @description First, call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. Then, call this operation to delete the program of the production studio.
       * ## Usage limits
       * You can call this operation up to 4 queries per second (QPS) per account. If you exceed this limit, API calls are throttled. This can affect your business. Plan your calls accordingly.
       *
       * @param request DeleteCasterProgramRequest
       * @return DeleteCasterProgramResponse
       */
      Models::DeleteCasterProgramResponse deleteCasterProgram(const Models::DeleteCasterProgramRequest &request);

      /**
       * @summary Deletes the scene configuration of a production studio.
       *
       * @description Calls this operation to delete the scene configuration of a production studio. This operation currently supports the following scene configuration types: component configuration, layout configuration, and component and layout configuration.
       * The scene specified by SceneId must be in the started state (Status=1). You can check the current state of the scene by using the Scene.Status field of the DescribeCasterScenes operation.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteCasterSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterSceneConfigResponse
       */
      Models::DeleteCasterSceneConfigResponse deleteCasterSceneConfigWithOptions(const Models::DeleteCasterSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the scene configuration of a production studio.
       *
       * @description Calls this operation to delete the scene configuration of a production studio. This operation currently supports the following scene configuration types: component configuration, layout configuration, and component and layout configuration.
       * The scene specified by SceneId must be in the started state (Status=1). You can check the current state of the scene by using the Scene.Status field of the DescribeCasterScenes operation.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteCasterSceneConfigRequest
       * @return DeleteCasterSceneConfigResponse
       */
      Models::DeleteCasterSceneConfigResponse deleteCasterSceneConfig(const Models::DeleteCasterSceneConfigRequest &request);

      /**
       * @summary Removes an input source from a production studio.
       *
       * @description You must first call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to remove a video resource from the production studio.
       * ## QPS limit
       * The limit for this operation is 10 queries per second (QPS) per user. Calls that exceed this limit are throttled, which may impact your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DeleteCasterVideoResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCasterVideoResourceResponse
       */
      Models::DeleteCasterVideoResourceResponse deleteCasterVideoResourceWithOptions(const Models::DeleteCasterVideoResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an input source from a production studio.
       *
       * @description You must first call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to remove a video resource from the production studio.
       * ## QPS limit
       * The limit for this operation is 10 queries per second (QPS) per user. Calls that exceed this limit are throttled, which may impact your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DeleteCasterVideoResourceRequest
       * @return DeleteCasterVideoResourceResponse
       */
      Models::DeleteCasterVideoResourceResponse deleteCasterVideoResource(const Models::DeleteCasterVideoResourceRequest &request);

      /**
       * @summary Closes a channel, which causes all current members in the channel to leave, but does not affect subsequent reuse of the channel.
       *
       * @description A channel is implicitly created when an RTC client SDK joins a session. You can call ListRTCLiveRooms to query existing channels.
       * The queries per second (QPS) limit for a single user is 100. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChannelResponse
       */
      Models::DeleteChannelResponse deleteChannelWithOptions(const Models::DeleteChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Closes a channel, which causes all current members in the channel to leave, but does not affect subsequent reuse of the channel.
       *
       * @description A channel is implicitly created when an RTC client SDK joins a session. You can call ListRTCLiveRooms to query existing channels.
       * The queries per second (QPS) limit for a single user is 100. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteChannelRequest
       * @return DeleteChannelResponse
       */
      Models::DeleteChannelResponse deleteChannel(const Models::DeleteChannelRequest &request);

      /**
       * @summary Deletes a custom stream mixing template.
       *
       * @description Obtain the name of the custom stream mixing template to delete, and then call this operation.
       * ## QPS limit
       * You can call this operation up to 10 times per second per user. If you exceed this limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DeleteCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomTemplateResponse
       */
      Models::DeleteCustomTemplateResponse deleteCustomTemplateWithOptions(const Models::DeleteCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom stream mixing template.
       *
       * @description Obtain the name of the custom stream mixing template to delete, and then call this operation.
       * ## QPS limit
       * You can call this operation up to 10 times per second per user. If you exceed this limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DeleteCustomTemplateRequest
       * @return DeleteCustomTemplateResponse
       */
      Models::DeleteCustomTemplateResponse deleteCustomTemplate(const Models::DeleteCustomTemplateRequest &request);

      /**
       * @summary Deletes an edge transcoding job.
       *
       * @description - This operation deletes an edge transcoding job.
       * - You must have permission to access the edge transcoding service to call this operation.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 6,000 calls per minute. If you exceed this limit, your API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request DeleteEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEdgeTranscodeJobResponse
       */
      Models::DeleteEdgeTranscodeJobResponse deleteEdgeTranscodeJobWithOptions(const Models::DeleteEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an edge transcoding job.
       *
       * @description - This operation deletes an edge transcoding job.
       * - You must have permission to access the edge transcoding service to call this operation.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 6,000 calls per minute. If you exceed this limit, your API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
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
       * @description This operation deletes a specified subtitle rule.
       * >Notice: The intelligent subtitling feature is currently in invitational preview. A single user can add up to 300 subtitle templates.
       * ## QPS limit
       * The single-user QPS limit for this operation is 60 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DeleteLiveAIProduceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAIProduceRulesResponse
       */
      Models::DeleteLiveAIProduceRulesResponse deleteLiveAIProduceRulesWithOptions(const Models::DeleteLiveAIProduceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a subtitle rule.
       *
       * @description This operation deletes a specified subtitle rule.
       * >Notice: The intelligent subtitling feature is currently in invitational preview. A single user can add up to 300 subtitle templates.
       * ## QPS limit
       * The single-user QPS limit for this operation is 60 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DeleteLiveAIProduceRulesRequest
       * @return DeleteLiveAIProduceRulesResponse
       */
      Models::DeleteLiveAIProduceRulesResponse deleteLiveAIProduceRules(const Models::DeleteLiveAIProduceRulesRequest &request);

      /**
       * @summary Deletes a virtual studio template.
       *
       * @description Before you delete a virtual studio template, you must detach all associated rules. Otherwise, an error is reported.
       * >Notice: 
       * The lightweight virtual studio feature is in invitational preview. Each user can add a maximum of 300 templates.
       *
       * @param request DeleteLiveAIStudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAIStudioResponse
       */
      Models::DeleteLiveAIStudioResponse deleteLiveAIStudioWithOptions(const Models::DeleteLiveAIStudioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual studio template.
       *
       * @description Before you delete a virtual studio template, you must detach all associated rules. Otherwise, an error is reported.
       * >Notice: 
       * The lightweight virtual studio feature is in invitational preview. Each user can add a maximum of 300 templates.
       *
       * @param request DeleteLiveAIStudioRequest
       * @return DeleteLiveAIStudioResponse
       */
      Models::DeleteLiveAIStudioResponse deleteLiveAIStudio(const Models::DeleteLiveAIStudioRequest &request);

      /**
       * @summary Deletes a specified subtitle template.
       *
       * @description You can call this operation to delete a specified caption template for a live stream.
       * >Notice: 
       * The real-time caption feature is in invitational preview. Each user can add up to 300 caption templates.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 60 calls per second for each user. API calls that exceed this limit are throttled, which may affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveAISubtitleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAISubtitleResponse
       */
      Models::DeleteLiveAISubtitleResponse deleteLiveAISubtitleWithOptions(const Models::DeleteLiveAISubtitleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified subtitle template.
       *
       * @description You can call this operation to delete a specified caption template for a live stream.
       * >Notice: 
       * The real-time caption feature is in invitational preview. Each user can add up to 300 caption templates.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 60 calls per second for each user. API calls that exceed this limit are throttled, which may affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveAISubtitleRequest
       * @return DeleteLiveAISubtitleResponse
       */
      Models::DeleteLiveAISubtitleResponse deleteLiveAISubtitle(const Models::DeleteLiveAISubtitleRequest &request);

      /**
       * @summary Deletes a recording configuration at the AppName level.
       *
       * @description Obtain the main streaming domain, then call this operation to delete a recording configuration at the AppName level.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveAppRecordConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAppRecordConfigResponse
       */
      Models::DeleteLiveAppRecordConfigResponse deleteLiveAppRecordConfigWithOptions(const Models::DeleteLiveAppRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a recording configuration at the AppName level.
       *
       * @description Obtain the main streaming domain, then call this operation to delete a recording configuration at the AppName level.
       * ## QPS limit
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
       * @description - You can call this operation to delete the automated audio review configuration for a specified streaming domain.
       * - The automated review feature is available only in specific regions. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limits
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveAudioAuditConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAudioAuditConfigResponse
       */
      Models::DeleteLiveAudioAuditConfigResponse deleteLiveAudioAuditConfigWithOptions(const Models::DeleteLiveAudioAuditConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an audio moderation configuration.
       *
       * @description - You can call this operation to delete the automated audio review configuration for a specified streaming domain.
       * - The automated review feature is available only in specific regions. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limits
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveAudioAuditConfigRequest
       * @return DeleteLiveAudioAuditConfigResponse
       */
      Models::DeleteLiveAudioAuditConfigResponse deleteLiveAudioAuditConfig(const Models::DeleteLiveAudioAuditConfigRequest &request);

      /**
       * @summary Deletes the callback configuration for automated audio review from a streaming domain.
       *
       * @description Only some live centers support automated review. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limits
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveAudioAuditNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveAudioAuditNotifyConfigResponse
       */
      Models::DeleteLiveAudioAuditNotifyConfigResponse deleteLiveAudioAuditNotifyConfigWithOptions(const Models::DeleteLiveAudioAuditNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the callback configuration for automated audio review from a streaming domain.
       *
       * @description Only some live centers support automated review. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limits
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveAudioAuditNotifyConfigRequest
       * @return DeleteLiveAudioAuditNotifyConfigResponse
       */
      Models::DeleteLiveAudioAuditNotifyConfigResponse deleteLiveAudioAuditNotifyConfig(const Models::DeleteLiveAudioAuditNotifyConfigRequest &request);

      /**
       * @summary Deletes a live center stream relay configuration.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveCenterTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveCenterTransferResponse
       */
      Models::DeleteLiveCenterTransferResponse deleteLiveCenterTransferWithOptions(const Models::DeleteLiveCenterTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a live center stream relay configuration.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveCenterTransferRequest
       * @return DeleteLiveCenterTransferResponse
       */
      Models::DeleteLiveCenterTransferResponse deleteLiveCenterTransfer(const Models::DeleteLiveCenterTransferRequest &request);

      /**
       * @summary Deletes a stream delay configuration.
       *
       * @description The queries per second (QPS) limit for a single user is 60. If you exceed the limit, API calls are throttled. This may impact your business. Plan your API calls accordingly.
       *
       * @param request DeleteLiveDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveDelayConfigResponse
       */
      Models::DeleteLiveDelayConfigResponse deleteLiveDelayConfigWithOptions(const Models::DeleteLiveDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stream delay configuration.
       *
       * @description The queries per second (QPS) limit for a single user is 60. If you exceed the limit, API calls are throttled. This may impact your business. Plan your API calls accordingly.
       *
       * @param request DeleteLiveDelayConfigRequest
       * @return DeleteLiveDelayConfigResponse
       */
      Models::DeleteLiveDelayConfigResponse deleteLiveDelayConfig(const Models::DeleteLiveDelayConfigRequest &request);

      /**
       * @summary Deletes the configuration of callbacks for video moderation results.
       *
       * @description ## [](#)Usage notes
       * - Obtain the main streaming domain, and then call this operation to delete the configuration of callbacks for video moderation results.
       * - Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
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
       * - Obtain the main streaming domain, and then call this operation to delete the configuration of callbacks for video moderation results.
       * - Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveDetectNotifyConfigRequest
       * @return DeleteLiveDetectNotifyConfigResponse
       */
      Models::DeleteLiveDetectNotifyConfigResponse deleteLiveDetectNotifyConfig(const Models::DeleteLiveDetectNotifyConfigRequest &request);

      /**
       * @summary Deletes all records of the specified live streaming domain.
       *
       * @description - A successful call to the DeleteLiveDomain operation deletes all records for the specified live streaming domain. Use this operation with caution.
       * - To prevent the domain name from becoming inaccessible, you must restore its A record with your DNS service provider before you delete the domain name. If your domain name registrar is Alibaba Cloud, log on to the [Alibaba Cloud DNS console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdns.console.aliyun.com%2F%3Fspm%3Da2c4g.11186623.0.0.3cda841fcvk7Qs\\&lang=zh). Navigate to the **Public Zone** page. Find the domain name, click **Settings**, and change the CNAME record to an A record. If your domain name is registered with another registrar, perform a similar configuration with that registrar.
       * - If you only need to disable a live streaming domain, call the [StopLiveDomain](https://help.aliyun.com/document_detail/2847799.html) operation.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveDomainResponse
       */
      Models::DeleteLiveDomainResponse deleteLiveDomainWithOptions(const Models::DeleteLiveDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes all records of the specified live streaming domain.
       *
       * @description - A successful call to the DeleteLiveDomain operation deletes all records for the specified live streaming domain. Use this operation with caution.
       * - To prevent the domain name from becoming inaccessible, you must restore its A record with your DNS service provider before you delete the domain name. If your domain name registrar is Alibaba Cloud, log on to the [Alibaba Cloud DNS console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdns.console.aliyun.com%2F%3Fspm%3Da2c4g.11186623.0.0.3cda841fcvk7Qs\\&lang=zh). Navigate to the **Public Zone** page. Find the domain name, click **Settings**, and change the CNAME record to an A record. If your domain name is registered with another registrar, perform a similar configuration with that registrar.
       * - If you only need to disable a live streaming domain, call the [StopLiveDomain](https://help.aliyun.com/document_detail/2847799.html) operation.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
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
       * @description ## QPS limits
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveDomainPlayMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveDomainPlayMappingResponse
       */
      Models::DeleteLiveDomainPlayMappingResponse deleteLiveDomainPlayMappingWithOptions(const Models::DeleteLiveDomainPlayMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the mapping between a main streaming domain and a sub-streaming domain.
       *
       * @description ## QPS limits
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveDomainPlayMappingRequest
       * @return DeleteLiveDomainPlayMappingResponse
       */
      Models::DeleteLiveDomainPlayMappingResponse deleteLiveDomainPlayMapping(const Models::DeleteLiveDomainPlayMappingRequest &request);

      /**
       * @summary Deletes a live stream relay configuration.
       *
       * @description Calling DeleteLiveEdgeTransfer only deletes the live edge relay configuration for a specific domain name. It does not affect live stream relays that are already in progress based on that configuration. The following table describes typical scenarios:
       * | Scenario        | Analysis           | Result   |
       * | -------------- | -------------- | ------ |
       * | 1. You call SetLiveEdgeTransfer to configure live edge relay, start stream ingest, and then call DeleteLiveEdgeTransfer to delete the configuration during the stream.      | The live edge relay configuration exists when stream ingest starts.        | Stream ingest is not affected, and the live stream relay is not interrupted.  |
       * | 2. You call DeleteLiveEdgeTransfer to delete the live edge relay configuration during stream ingest, stop the stream, and then restart stream ingest.       | The live edge relay configuration no longer exists when stream ingest restarts.       |   Live edge relay is not started.  |
       * | 3. You start stream ingest after calling DeleteLiveEdgeTransfer. | The live edge relay configuration does not exist at this point.      |    Live edge relay is not started.  |
       * ## QPS limit
       * The single-user QPS limit for this API is 100 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteLiveEdgeTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveEdgeTransferResponse
       */
      Models::DeleteLiveEdgeTransferResponse deleteLiveEdgeTransferWithOptions(const Models::DeleteLiveEdgeTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a live stream relay configuration.
       *
       * @description Calling DeleteLiveEdgeTransfer only deletes the live edge relay configuration for a specific domain name. It does not affect live stream relays that are already in progress based on that configuration. The following table describes typical scenarios:
       * | Scenario        | Analysis           | Result   |
       * | -------------- | -------------- | ------ |
       * | 1. You call SetLiveEdgeTransfer to configure live edge relay, start stream ingest, and then call DeleteLiveEdgeTransfer to delete the configuration during the stream.      | The live edge relay configuration exists when stream ingest starts.        | Stream ingest is not affected, and the live stream relay is not interrupted.  |
       * | 2. You call DeleteLiveEdgeTransfer to delete the live edge relay configuration during stream ingest, stop the stream, and then restart stream ingest.       | The live edge relay configuration no longer exists when stream ingest restarts.       |   Live edge relay is not started.  |
       * | 3. You start stream ingest after calling DeleteLiveEdgeTransfer. | The live edge relay configuration does not exist at this point.      |    Live edge relay is not started.  |
       * ## QPS limit
       * The single-user QPS limit for this API is 100 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteLiveEdgeTransferRequest
       * @return DeleteLiveEdgeTransferResponse
       */
      Models::DeleteLiveEdgeTransferResponse deleteLiveEdgeTransfer(const Models::DeleteLiveEdgeTransferRequest &request);

      /**
       * @summary Deletes a configuration of triggered stream pulling.
       *
       * @description This operation supports deleting only the configurations of triggered stream pulling. If AppName is set to ali_all_app, such configurations for all applications under the domain name are deleted.
       * ## QPS limits
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveLazyPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveLazyPullStreamInfoConfigResponse
       */
      Models::DeleteLiveLazyPullStreamInfoConfigResponse deleteLiveLazyPullStreamInfoConfigWithOptions(const Models::DeleteLiveLazyPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a configuration of triggered stream pulling.
       *
       * @description This operation supports deleting only the configurations of triggered stream pulling. If AppName is set to ali_all_app, such configurations for all applications under the domain name are deleted.
       * ## QPS limits
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
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
       * @summary Deletes (recalls) a specific one-to-one chat message.
       *
       * @description The single-user QPS limit for this operation is 50 calls per second. Exceeding this limit will trigger throttling, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteLiveMessageUserMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveMessageUserMessageResponse
       */
      Models::DeleteLiveMessageUserMessageResponse deleteLiveMessageUserMessageWithOptions(const Models::DeleteLiveMessageUserMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes (recalls) a specific one-to-one chat message.
       *
       * @description The single-user QPS limit for this operation is 50 calls per second. Exceeding this limit will trigger throttling, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteLiveMessageUserMessageRequest
       * @return DeleteLiveMessageUserMessageResponse
       */
      Models::DeleteLiveMessageUserMessageResponse deleteLiveMessageUserMessage(const Models::DeleteLiveMessageUserMessageRequest &request);

      /**
       * @summary Deletes a live stream encapsulation configuration.
       *
       * @description You can call this operation to delete a live stream encapsulation configuration. The change takes effect the next time you ingest the stream.
       * ## QPS limits
       * You can call this operation up to 300 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLivePackageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivePackageConfigResponse
       */
      Models::DeleteLivePackageConfigResponse deleteLivePackageConfigWithOptions(const Models::DeleteLivePackageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a live stream encapsulation configuration.
       *
       * @description You can call this operation to delete a live stream encapsulation configuration. The change takes effect the next time you ingest the stream.
       * ## QPS limits
       * You can call this operation up to 300 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLivePackageConfigRequest
       * @return DeleteLivePackageConfigResponse
       */
      Models::DeleteLivePackageConfigResponse deleteLivePackageConfig(const Models::DeleteLivePackageConfigRequest &request);

      /**
       * @summary Unbinds an Alibaba Cloud Global Accelerator (GA) instance from a live streaming link.
       *
       * @description After unbinding, your live stream ingest and streaming links no longer use GA for back-to-origin. The accelerator instance still exists after unbinding. To release the accelerator instance, delete it in the Global Accelerator console.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DeleteLivePrivateLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivePrivateLineResponse
       */
      Models::DeleteLivePrivateLineResponse deleteLivePrivateLineWithOptions(const Models::DeleteLivePrivateLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds an Alibaba Cloud Global Accelerator (GA) instance from a live streaming link.
       *
       * @description After unbinding, your live stream ingest and streaming links no longer use GA for back-to-origin. The accelerator instance still exists after unbinding. To release the accelerator instance, delete it in the Global Accelerator console.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DeleteLivePrivateLineRequest
       * @return DeleteLivePrivateLineResponse
       */
      Models::DeleteLivePrivateLineResponse deleteLivePrivateLine(const Models::DeleteLivePrivateLineRequest &request);

      /**
       * @summary Deletes a scheduled stream pulling configuration.
       *
       * @description This operation supports deleting only the configurations of scheduled stream pulling.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLivePullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivePullStreamInfoConfigResponse
       */
      Models::DeleteLivePullStreamInfoConfigResponse deleteLivePullStreamInfoConfigWithOptions(const Models::DeleteLivePullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scheduled stream pulling configuration.
       *
       * @description This operation supports deleting only the configurations of scheduled stream pulling.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLivePullStreamInfoConfigRequest
       * @return DeleteLivePullStreamInfoConfigResponse
       */
      Models::DeleteLivePullStreamInfoConfigResponse deleteLivePullStreamInfoConfig(const Models::DeleteLivePullStreamInfoConfigRequest &request);

      /**
       * @summary Deletes a stream pulling-to-pushing task by calling DeleteLivePullToPush.
       *
       * @description - Deletes a stream pulling-to-pushing task.
       * - Deleting a task cleans up the task. A running task is stopped immediately and cannot be restarted.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLivePullToPushResponse
       */
      Models::DeleteLivePullToPushResponse deleteLivePullToPushWithOptions(const Models::DeleteLivePullToPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stream pulling-to-pushing task by calling DeleteLivePullToPush.
       *
       * @description - Deletes a stream pulling-to-pushing task.
       * - Deleting a task cleans up the task. A running task is stopped immediately and cannot be restarted.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteLivePullToPushRequest
       * @return DeleteLivePullToPushResponse
       */
      Models::DeleteLivePullToPushResponse deleteLivePullToPush(const Models::DeleteLivePullToPushRequest &request);

      /**
       * @summary Deletes a Logstore for real-time log delivery.
       *
       * @description - You can call this operation to delete a Logstore used for real-time log delivery. Make sure that you set the parameters correctly.
       * - You can call the [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) operation to query the Project, Logstore, and Region parameters.
       * ## QPS limits
       * The rate limit for this operation is 6,000 calls per minute for each user. If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DeleteLiveRealTimeLogLogstoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveRealTimeLogLogstoreResponse
       */
      Models::DeleteLiveRealTimeLogLogstoreResponse deleteLiveRealTimeLogLogstoreWithOptions(const Models::DeleteLiveRealTimeLogLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Logstore for real-time log delivery.
       *
       * @description - You can call this operation to delete a Logstore used for real-time log delivery. Make sure that you set the parameters correctly.
       * - You can call the [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) operation to query the Project, Logstore, and Region parameters.
       * ## QPS limits
       * The rate limit for this operation is 6,000 calls per minute for each user. If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DeleteLiveRealTimeLogLogstoreRequest
       * @return DeleteLiveRealTimeLogLogstoreResponse
       */
      Models::DeleteLiveRealTimeLogLogstoreResponse deleteLiveRealTimeLogLogstore(const Models::DeleteLiveRealTimeLogLogstoreRequest &request);

      /**
       * @summary Deletes a real-time log delivery configuration.
       *
       * @description <props="china">
       * - Real-time log delivery can be configured only for streaming domains. To configure real-time log delivery for ingest domains, [submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live\\&commonQuestionId=4545\\&isSmart=true\\&iatraceid=1608439120675-2a5c48de0b84805313c708\\&channel=selfservice).
       * <props="intl">Real-time log delivery can be configured only for streaming domains. To configure real-time log delivery for ingest domains, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * - You can call [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) to query the Project, Logstore, and Region parameters.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute for each user. API calls that exceed this limit are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request DeleteLiveRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveRealtimeLogDeliveryResponse
       */
      Models::DeleteLiveRealtimeLogDeliveryResponse deleteLiveRealtimeLogDeliveryWithOptions(const Models::DeleteLiveRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a real-time log delivery configuration.
       *
       * @description <props="china">
       * - Real-time log delivery can be configured only for streaming domains. To configure real-time log delivery for ingest domains, [submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live\\&commonQuestionId=4545\\&isSmart=true\\&iatraceid=1608439120675-2a5c48de0b84805313c708\\&channel=selfservice).
       * <props="intl">Real-time log delivery can be configured only for streaming domains. To configure real-time log delivery for ingest domains, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * - You can call [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) to query the Project, Logstore, and Region parameters.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute for each user. API calls that exceed this limit are throttled, which may affect your business. Call this operation at a reasonable rate.
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
       * @description You can call this operation to delete the live-to-VOD configuration for a specified streaming domain.
       * ## QPS limit
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveRecordVodConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveRecordVodConfigResponse
       */
      Models::DeleteLiveRecordVodConfigResponse deleteLiveRecordVodConfigWithOptions(const Models::DeleteLiveRecordVodConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Live-to-VOD configuration.
       *
       * @description You can call this operation to delete the live-to-VOD configuration for a specified streaming domain.
       * ## QPS limit
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveRecordVodConfigRequest
       * @return DeleteLiveRecordVodConfigResponse
       */
      Models::DeleteLiveRecordVodConfigResponse deleteLiveRecordVodConfig(const Models::DeleteLiveRecordVodConfigRequest &request);

      /**
       * @summary Deletes a video moderation configuration.
       *
       * @description - Obtain the main streaming domain, and then call this operation to delete a video moderation configuration.
       * - Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
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
       * @description - Obtain the main streaming domain, and then call this operation to delete a video moderation configuration.
       * - Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DeleteLiveSnapshotDetectPornConfigRequest
       * @return DeleteLiveSnapshotDetectPornConfigResponse
       */
      Models::DeleteLiveSnapshotDetectPornConfigResponse deleteLiveSnapshotDetectPornConfig(const Models::DeleteLiveSnapshotDetectPornConfigRequest &request);

      /**
       * @summary Deletes the snapshot callback configuration.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveSnapshotNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveSnapshotNotifyConfigResponse
       */
      Models::DeleteLiveSnapshotNotifyConfigResponse deleteLiveSnapshotNotifyConfigWithOptions(const Models::DeleteLiveSnapshotNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the snapshot callback configuration.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveSnapshotNotifyConfigRequest
       * @return DeleteLiveSnapshotNotifyConfigResponse
       */
      Models::DeleteLiveSnapshotNotifyConfigResponse deleteLiveSnapshotNotifyConfig(const Models::DeleteLiveSnapshotNotifyConfigRequest &request);

      /**
       * @summary You can call the DeleteLiveSpecificStagingConfig operation to delete domain name configurations in a grayscale environment.
       *
       * @description ## QPS limits
       * You can call this operation up to 20 times per second per account. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       * ## Queries Per Second (QPS) limits
       * You can call this operation up to 20 times per second per account. If you exceed this limit, your API calls are throttled, which may impact your business. We recommend that you plan your calls accordingly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveSpecificStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveSpecificStagingConfigResponse
       */
      Models::DeleteLiveSpecificStagingConfigResponse deleteLiveSpecificStagingConfigWithOptions(const Models::DeleteLiveSpecificStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DeleteLiveSpecificStagingConfig operation to delete domain name configurations in a grayscale environment.
       *
       * @description ## QPS limits
       * You can call this operation up to 20 times per second per account. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       * ## Queries Per Second (QPS) limits
       * You can call this operation up to 20 times per second per account. If you exceed this limit, your API calls are throttled, which may impact your business. We recommend that you plan your calls accordingly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteLiveSpecificStagingConfigRequest
       * @return DeleteLiveSpecificStagingConfigResponse
       */
      Models::DeleteLiveSpecificStagingConfigResponse deleteLiveSpecificStagingConfig(const Models::DeleteLiveSpecificStagingConfigRequest &request);

      /**
       * @summary Deletes blocking configurations for a specific live stream.
       *
       * @description You can call this operation to delete a stream-level block configuration.
       * ## QPS limits
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamBlockResponse
       */
      Models::DeleteLiveStreamBlockResponse deleteLiveStreamBlockWithOptions(const Models::DeleteLiveStreamBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes blocking configurations for a specific live stream.
       *
       * @description You can call this operation to delete a stream-level block configuration.
       * ## QPS limits
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamBlockRequest
       * @return DeleteLiveStreamBlockResponse
       */
      Models::DeleteLiveStreamBlockResponse deleteLiveStreamBlock(const Models::DeleteLiveStreamBlockRequest &request);

      /**
       * @summary Deletes an active merged stream.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamMergeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamMergeResponse
       */
      Models::DeleteLiveStreamMergeResponse deleteLiveStreamMergeWithOptions(const Models::DeleteLiveStreamMergeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an active merged stream.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamMergeRequest
       * @return DeleteLiveStreamMergeResponse
       */
      Models::DeleteLiveStreamMergeResponse deleteLiveStreamMerge(const Models::DeleteLiveStreamMergeRequest &request);

      /**
       * @summary Deletes a monitoring session.
       *
       * @description Obtain the **MonitorId** from the response of the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation. Then, call this operation to delete the monitoring session.
       * >Notice: 
       * You cannot delete a monitoring session that is running. Attempting to do so returns a 400 error.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) per account. Calls that exceed this limit are throttled, which can affect your business. To avoid interruptions to your business, make sure that you do not exceed this limit.
       *
       * @param request DeleteLiveStreamMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamMonitorResponse
       */
      Models::DeleteLiveStreamMonitorResponse deleteLiveStreamMonitorWithOptions(const Models::DeleteLiveStreamMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a monitoring session.
       *
       * @description Obtain the **MonitorId** from the response of the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation. Then, call this operation to delete the monitoring session.
       * >Notice: 
       * You cannot delete a monitoring session that is running. Attempting to do so returns a 400 error.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) per account. Calls that exceed this limit are throttled, which can affect your business. To avoid interruptions to your business, make sure that you do not exceed this limit.
       *
       * @param request DeleteLiveStreamMonitorRequest
       * @return DeleteLiveStreamMonitorResponse
       */
      Models::DeleteLiveStreamMonitorResponse deleteLiveStreamMonitor(const Models::DeleteLiveStreamMonitorRequest &request);

      /**
       * @summary Deletes the index files of live stream recordings.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamRecordIndexFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamRecordIndexFilesResponse
       */
      Models::DeleteLiveStreamRecordIndexFilesResponse deleteLiveStreamRecordIndexFilesWithOptions(const Models::DeleteLiveStreamRecordIndexFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the index files of live stream recordings.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamRecordIndexFilesRequest
       * @return DeleteLiveStreamRecordIndexFilesResponse
       */
      Models::DeleteLiveStreamRecordIndexFilesResponse deleteLiveStreamRecordIndexFiles(const Models::DeleteLiveStreamRecordIndexFilesRequest &request);

      /**
       * @summary Deletes a transcoding configuration.
       *
       * @description Standard, Narrowband HD™, and custom transcoding templates are supported.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamTranscodeResponse
       */
      Models::DeleteLiveStreamTranscodeResponse deleteLiveStreamTranscodeWithOptions(const Models::DeleteLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a transcoding configuration.
       *
       * @description Standard, Narrowband HD™, and custom transcoding templates are supported.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamTranscodeRequest
       * @return DeleteLiveStreamTranscodeResponse
       */
      Models::DeleteLiveStreamTranscodeResponse deleteLiveStreamTranscode(const Models::DeleteLiveStreamTranscodeRequest &request);

      /**
       * @summary Deletes a specified watermark template.
       *
       * @description This operation deletes a live streaming watermark template based on a specified template ID.
       * ## QPS Limits
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamWatermarkResponse
       */
      Models::DeleteLiveStreamWatermarkResponse deleteLiveStreamWatermarkWithOptions(const Models::DeleteLiveStreamWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified watermark template.
       *
       * @description This operation deletes a live streaming watermark template based on a specified template ID.
       * ## QPS Limits
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamWatermarkRequest
       * @return DeleteLiveStreamWatermarkResponse
       */
      Models::DeleteLiveStreamWatermarkResponse deleteLiveStreamWatermark(const Models::DeleteLiveStreamWatermarkRequest &request);

      /**
       * @summary Deletes a watermark rule.
       *
       * @description This operation deletes the watermark rule based on the specified rule ID.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamWatermarkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamWatermarkRuleResponse
       */
      Models::DeleteLiveStreamWatermarkRuleResponse deleteLiveStreamWatermarkRuleWithOptions(const Models::DeleteLiveStreamWatermarkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a watermark rule.
       *
       * @description This operation deletes the watermark rule based on the specified rule ID.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteLiveStreamWatermarkRuleRequest
       * @return DeleteLiveStreamWatermarkRuleResponse
       */
      Models::DeleteLiveStreamWatermarkRuleResponse deleteLiveStreamWatermarkRule(const Models::DeleteLiveStreamWatermarkRuleRequest &request);

      /**
       * @summary Deletes the callback configuration of stream ingest for an ingest domain.
       *
       * @description After you obtain an ingest domain, you can call this operation to delete the stream ingest callback configuration.
       * ## QPS limits
       * This operation is limited to 15 queries per second (QPS) for each user. If you exceed the limit, API calls are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request DeleteLiveStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLiveStreamsNotifyUrlConfigResponse
       */
      Models::DeleteLiveStreamsNotifyUrlConfigResponse deleteLiveStreamsNotifyUrlConfigWithOptions(const Models::DeleteLiveStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the callback configuration of stream ingest for an ingest domain.
       *
       * @description After you obtain an ingest domain, you can call this operation to delete the stream ingest callback configuration.
       * ## QPS limits
       * This operation is limited to 15 queries per second (QPS) for each user. If you exceed the limit, API calls are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request DeleteLiveStreamsNotifyUrlConfigRequest
       * @return DeleteLiveStreamsNotifyUrlConfigResponse
       */
      Models::DeleteLiveStreamsNotifyUrlConfigResponse deleteLiveStreamsNotifyUrlConfig(const Models::DeleteLiveStreamsNotifyUrlConfigRequest &request);

      /**
       * @summary Call DeleteMessageApp to delete an interactive message application.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. API calls that exceed this limit are throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMessageAppResponse
       */
      Models::DeleteMessageAppResponse deleteMessageAppWithOptions(const Models::DeleteMessageAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DeleteMessageApp to delete an interactive message application.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. API calls that exceed this limit are throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteMessageAppRequest
       * @return DeleteMessageAppResponse
       */
      Models::DeleteMessageAppResponse deleteMessageApp(const Models::DeleteMessageAppRequest &request);

      /**
       * @summary Deletes a stream mixing task.
       *
       * @description Before you call this operation, you must create a stream mixing task by calling the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation. If you no longer need the mixed stream, you must delete the task. Otherwise, the stream will be continuously ingested.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 for each user. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request DeleteMixStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMixStreamResponse
       */
      Models::DeleteMixStreamResponse deleteMixStreamWithOptions(const Models::DeleteMixStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stream mixing task.
       *
       * @description Before you call this operation, you must create a stream mixing task by calling the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation. If you no longer need the mixed stream, you must delete the task. Otherwise, the stream will be continuously ingested.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 for each user. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request DeleteMixStreamRequest
       * @return DeleteMixStreamResponse
       */
      Models::DeleteMixStreamResponse deleteMixStream(const Models::DeleteMixStreamRequest &request);

      /**
       * @summary Deletes an entire playlist.
       *
       * @description After you add items to a playlist by calling the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation, you can call this operation to delete the entire playlist.
       * ## QPS limit
       * Each user can make up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled, which can affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DeletePlaylistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePlaylistResponse
       */
      Models::DeletePlaylistResponse deletePlaylistWithOptions(const Models::DeletePlaylistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an entire playlist.
       *
       * @description After you add items to a playlist by calling the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation, you can call this operation to delete the entire playlist.
       * ## QPS limit
       * Each user can make up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled, which can affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DeletePlaylistRequest
       * @return DeletePlaylistResponse
       */
      Models::DeletePlaylistResponse deletePlaylist(const Models::DeletePlaylistRequest &request);

      /**
       * @summary Deletes items from a playlist.
       *
       * @description You can call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add items to a playlist. Then, you can call this operation to delete the items.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed this limit, your API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DeletePlaylistItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePlaylistItemsResponse
       */
      Models::DeletePlaylistItemsResponse deletePlaylistItemsWithOptions(const Models::DeletePlaylistItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes items from a playlist.
       *
       * @description You can call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add items to a playlist. Then, you can call this operation to delete the items.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed this limit, your API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DeletePlaylistItemsRequest
       * @return DeletePlaylistItemsResponse
       */
      Models::DeletePlaylistItemsResponse deletePlaylistItems(const Models::DeletePlaylistItemsRequest &request);

      /**
       * @summary Call `DeleteRtcAsrTask` to delete a real-time speech-to-text or translation task.
       *
       * @description The call frequency for this API is limited to 20 queries per second (QPS) per user. If you exceed this limit, your API calls are throttled. This may impact your business. Plan your calls accordingly.
       *
       * @param request DeleteRtcAsrTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRtcAsrTaskResponse
       */
      Models::DeleteRtcAsrTaskResponse deleteRtcAsrTaskWithOptions(const Models::DeleteRtcAsrTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `DeleteRtcAsrTask` to delete a real-time speech-to-text or translation task.
       *
       * @description The call frequency for this API is limited to 20 queries per second (QPS) per user. If you exceed this limit, your API calls are throttled. This may impact your business. Plan your calls accordingly.
       *
       * @param request DeleteRtcAsrTaskRequest
       * @return DeleteRtcAsrTaskResponse
       */
      Models::DeleteRtcAsrTaskResponse deleteRtcAsrTask(const Models::DeleteRtcAsrTaskRequest &request);

      /**
       * @summary Deletes a subscription to mixed-stream relay events.
       *
       * @description - You can call this operation to delete a subscription to mixed-stream relay events.
       * - Before you call this operation, make sure that you have called the CreateRtcMPUEventSub operation to create the subscription.
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
       * @description - You can call this operation to delete a subscription to mixed-stream relay events.
       * - Before you call this operation, make sure that you have called the CreateRtcMPUEventSub operation to create the subscription.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DeleteRtcMPUEventSubRequest
       * @return DeleteRtcMPUEventSubResponse
       */
      Models::DeleteRtcMPUEventSubResponse deleteRtcMPUEventSub(const Models::DeleteRtcMPUEventSubRequest &request);

      /**
       * @summary Deletes the authentication configuration for snapshot callbacks.
       *
       * @description After the deletion, callbacks for new streams will no longer be authenticated.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteSnapshotCallbackAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotCallbackAuthResponse
       */
      Models::DeleteSnapshotCallbackAuthResponse deleteSnapshotCallbackAuthWithOptions(const Models::DeleteSnapshotCallbackAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the authentication configuration for snapshot callbacks.
       *
       * @description After the deletion, callbacks for new streams will no longer be authenticated.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteSnapshotCallbackAuthRequest
       * @return DeleteSnapshotCallbackAuthResponse
       */
      Models::DeleteSnapshotCallbackAuthResponse deleteSnapshotCallbackAuth(const Models::DeleteSnapshotCallbackAuthRequest &request);

      /**
       * @summary Deletes specified snapshot files.
       *
       * @description This operation supports deleting snapshot files generated within a year.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteSnapshotFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotFilesResponse
       */
      Models::DeleteSnapshotFilesResponse deleteSnapshotFilesWithOptions(const Models::DeleteSnapshotFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes specified snapshot files.
       *
       * @description This operation supports deleting snapshot files generated within a year.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DeleteSnapshotFilesRequest
       * @return DeleteSnapshotFilesResponse
       */
      Models::DeleteSnapshotFilesResponse deleteSnapshotFiles(const Models::DeleteSnapshotFilesRequest &request);

      /**
       * @summary Deletes a layout in a virtual studio.
       *
       * @description You can call this operation to delete a layout from a production studio. You can delete only one layout in each call.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Plan your calls accordingly.
       *
       * @param request DeleteStudioLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStudioLayoutResponse
       */
      Models::DeleteStudioLayoutResponse deleteStudioLayoutWithOptions(const Models::DeleteStudioLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a layout in a virtual studio.
       *
       * @description You can call this operation to delete a layout from a production studio. You can delete only one layout in each call.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Plan your calls accordingly.
       *
       * @param request DeleteStudioLayoutRequest
       * @return DeleteStudioLayoutResponse
       */
      Models::DeleteStudioLayoutResponse deleteStudioLayout(const Models::DeleteStudioLayoutRequest &request);

      /**
       * @summary Queries scheduled tasks for automatic start and stop.
       *
       * @description This operation queries information about scheduled tasks for automatic start and stop. When you call this operation, ensure that the parameters meet the requirements.
       * ## QPS limit
       * A single user can make a maximum of 10 queries per second (QPS). If you exceed this limit, API calls are throttled. This may affect your business. Therefore, call this operation at a reasonable rate.
       *
       * @param request DescribeAutoShowListTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutoShowListTasksResponse
       */
      Models::DescribeAutoShowListTasksResponse describeAutoShowListTasksWithOptions(const Models::DescribeAutoShowListTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scheduled tasks for automatic start and stop.
       *
       * @description This operation queries information about scheduled tasks for automatic start and stop. When you call this operation, ensure that the parameters meet the requirements.
       * ## QPS limit
       * A single user can make a maximum of 10 queries per second (QPS). If you exceed this limit, API calls are throttled. This may affect your business. Therefore, call this operation at a reasonable rate.
       *
       * @param request DescribeAutoShowListTasksRequest
       * @return DescribeAutoShowListTasksResponse
       */
      Models::DescribeAutoShowListTasksResponse describeAutoShowListTasks(const Models::DescribeAutoShowListTasksRequest &request);

      /**
       * @summary This operation queries the channels of a production studio.
       *
       * @description After you create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, you can call this operation to query its channels.
       * ## QPS limit
       * This operation is limited to 15 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeCasterChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterChannelsResponse
       */
      Models::DescribeCasterChannelsResponse describeCasterChannelsWithOptions(const Models::DescribeCasterChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries the channels of a production studio.
       *
       * @description After you create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, you can call this operation to query its channels.
       * ## QPS limit
       * This operation is limited to 15 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeCasterChannelsRequest
       * @return DescribeCasterChannelsResponse
       */
      Models::DescribeCasterChannelsResponse describeCasterChannels(const Models::DescribeCasterChannelsRequest &request);

      /**
       * @summary Queries the list of components for a production studio.
       *
       * @description Call the [AddCasterComponent](https://help.aliyun.com/document_detail/2848030.html) operation to add components to a production studio. You can then call this operation to query the list of components.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 15. If you exceed the limit, API calls are throttled. This may affect your business, so ensure that you call this operation within the limit.
       *
       * @param request DescribeCasterComponentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterComponentsResponse
       */
      Models::DescribeCasterComponentsResponse describeCasterComponentsWithOptions(const Models::DescribeCasterComponentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of components for a production studio.
       *
       * @description Call the [AddCasterComponent](https://help.aliyun.com/document_detail/2848030.html) operation to add components to a production studio. You can then call this operation to query the list of components.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 15. If you exceed the limit, API calls are throttled. This may affect your business, so ensure that you call this operation within the limit.
       *
       * @param request DescribeCasterComponentsRequest
       * @return DescribeCasterComponentsResponse
       */
      Models::DescribeCasterComponentsResponse describeCasterComponents(const Models::DescribeCasterComponentsRequest &request);

      /**
       * @summary Queries the configuration information of a production studio.
       *
       * @description Create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, and then call this operation to query the configuration information of the production studio.
       * ## QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeCasterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterConfigResponse
       */
      Models::DescribeCasterConfigResponse describeCasterConfigWithOptions(const Models::DescribeCasterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information of a production studio.
       *
       * @description Create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, and then call this operation to query the configuration information of the production studio.
       * ## QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeCasterConfigRequest
       * @return DescribeCasterConfigResponse
       */
      Models::DescribeCasterConfigResponse describeCasterConfig(const Models::DescribeCasterConfigRequest &request);

      /**
       * @summary Queries the layouts of a production studio.
       *
       * @description You can call this API operation to query the layouts of a production studio. If you do not specify a layout ID, all layouts of the studio are returned.
       * ## QPS limits
       * The queries per second (QPS) limit for this API operation is 15 calls per second for each user. If you exceed this limit, API calls are throttled. This can affect your business, so you should call this API operation at a reasonable rate.
       *
       * @param request DescribeCasterLayoutsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterLayoutsResponse
       */
      Models::DescribeCasterLayoutsResponse describeCasterLayoutsWithOptions(const Models::DescribeCasterLayoutsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the layouts of a production studio.
       *
       * @description You can call this API operation to query the layouts of a production studio. If you do not specify a layout ID, all layouts of the studio are returned.
       * ## QPS limits
       * The queries per second (QPS) limit for this API operation is 15 calls per second for each user. If you exceed this limit, API calls are throttled. This can affect your business, so you should call this API operation at a reasonable rate.
       *
       * @param request DescribeCasterLayoutsRequest
       * @return DescribeCasterLayoutsResponse
       */
      Models::DescribeCasterLayoutsResponse describeCasterLayouts(const Models::DescribeCasterLayoutsRequest &request);

      /**
       * @summary Queries the program list of a production studio.
       *
       * @description You can call this operation to query the program list of a production studio. This operation supports video source and component nodes.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 4 calls per second. If the limit is exceeded, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeCasterProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterProgramResponse
       */
      Models::DescribeCasterProgramResponse describeCasterProgramWithOptions(const Models::DescribeCasterProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the program list of a production studio.
       *
       * @description You can call this operation to query the program list of a production studio. This operation supports video source and component nodes.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 4 calls per second. If the limit is exceeded, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeCasterProgramRequest
       * @return DescribeCasterProgramResponse
       */
      Models::DescribeCasterProgramResponse describeCasterProgram(const Models::DescribeCasterProgramRequest &request);

      /**
       * @summary Queries the audio configuration of a scenario.
       *
       * @description Before you call this operation, you must create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 15 calls per second. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeCasterSceneAudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterSceneAudioResponse
       */
      Models::DescribeCasterSceneAudioResponse describeCasterSceneAudioWithOptions(const Models::DescribeCasterSceneAudioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audio configuration of a scenario.
       *
       * @description Before you call this operation, you must create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 15 calls per second. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeCasterSceneAudioRequest
       * @return DescribeCasterSceneAudioResponse
       */
      Models::DescribeCasterSceneAudioResponse describeCasterSceneAudio(const Models::DescribeCasterSceneAudioRequest &request);

      /**
       * @summary Queries the list of scenes in a production studio.
       *
       * @description Create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, and then call this operation to query the list of scenes in the production studio.
       * ## QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeCasterScenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterScenesResponse
       */
      Models::DescribeCasterScenesResponse describeCasterScenesWithOptions(const Models::DescribeCasterScenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of scenes in a production studio.
       *
       * @description Create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, and then call this operation to query the list of scenes in the production studio.
       * ## QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeCasterScenesRequest
       * @return DescribeCasterScenesResponse
       */
      Models::DescribeCasterScenesResponse describeCasterScenes(const Models::DescribeCasterScenesRequest &request);

      /**
       * @summary Queries the stream URL of a production studio.
       *
       * @description Before you call this operation, call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. If a production studio has not been created, the InvalidScene.NotFound error is returned.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 5 for each user. Calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeCasterStreamUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterStreamUrlResponse
       */
      Models::DescribeCasterStreamUrlResponse describeCasterStreamUrlWithOptions(const Models::DescribeCasterStreamUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stream URL of a production studio.
       *
       * @description Before you call this operation, call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. If a production studio has not been created, the InvalidScene.NotFound error is returned.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 5 for each user. Calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeCasterStreamUrlRequest
       * @return DescribeCasterStreamUrlResponse
       */
      Models::DescribeCasterStreamUrlResponse describeCasterStreamUrl(const Models::DescribeCasterStreamUrlRequest &request);

      /**
       * @summary Queries the video sources of a production studio.
       *
       * @description Call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to query the video sources of the production studio.
       * ## QPS limit
       * This operation is limited to 15 queries per second (QPS) for each user. If you exceed this limit, your API calls are throttled. Throttling may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeCasterVideoResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCasterVideoResourcesResponse
       */
      Models::DescribeCasterVideoResourcesResponse describeCasterVideoResourcesWithOptions(const Models::DescribeCasterVideoResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the video sources of a production studio.
       *
       * @description Call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to query the video sources of the production studio.
       * ## QPS limit
       * This operation is limited to 15 queries per second (QPS) for each user. If you exceed this limit, your API calls are throttled. Throttling may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeCasterVideoResourcesRequest
       * @return DescribeCasterVideoResourcesResponse
       */
      Models::DescribeCasterVideoResourcesResponse describeCasterVideoResources(const Models::DescribeCasterVideoResourcesRequest &request);

      /**
       * @summary Queries the list of production studios.
       *
       * @description Create a production studio by calling the CreateCaster operation, and then call this operation to query the list of production studios. A production studio can be in the idle or streaming state.
       * > 
       * > - The account that calls this operation must have [ApsaraVideo Live activated](https://live.console.aliyun.com/#/overview).
       * ## QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeCastersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCastersResponse
       */
      Models::DescribeCastersResponse describeCastersWithOptions(const Models::DescribeCastersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of production studios.
       *
       * @description Create a production studio by calling the CreateCaster operation, and then call this operation to query the list of production studios. A production studio can be in the idle or streaming state.
       * > 
       * > - The account that calls this operation must have [ApsaraVideo Live activated](https://live.console.aliyun.com/#/overview).
       * ## QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
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
       * @summary Queries the usage data of a domain name in a specific billing region.
       *
       * @description - This operation supports batch domain name queries. Separate multiple domain names with commas (,). You can query up to 100 domain names at a time. If the DomainName parameter is empty, data for all domain names under the account is returned.
       * - Usage data includes three types: traffic, bandwidth, and requests, measured in bytes, bit/s, and count respectively.
       * - If you do not specify the Interval parameter, you can query data for up to the last year, and the maximum time span per query is 31 days. For a query period of 1 to 3 days, data is returned at hourly granularity. For a query period longer than 3 days, data is returned at daily granularity.
       * - When you specify the Interval parameter, the supported maximum time span per query, the historical data range, and the data delay are as follows:
       * | Time granularity | Maximum time span per query | Historical data range | Data delay |
       * | -------------- | -------------- | ------ | ------ |
       * | 5 minutes | 3 days | 93 days | 15 minutes |
       * | 1 hour | 31 days | 186 days | 4 hours |
       * | 1 day | 90 days | 366 days | 4:00 AM the next day |
       * ## QPS limit
       * The QPS limit for a single user on this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeDomainUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainUsageDataResponse
       */
      Models::DescribeDomainUsageDataResponse describeDomainUsageDataWithOptions(const Models::DescribeDomainUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage data of a domain name in a specific billing region.
       *
       * @description - This operation supports batch domain name queries. Separate multiple domain names with commas (,). You can query up to 100 domain names at a time. If the DomainName parameter is empty, data for all domain names under the account is returned.
       * - Usage data includes three types: traffic, bandwidth, and requests, measured in bytes, bit/s, and count respectively.
       * - If you do not specify the Interval parameter, you can query data for up to the last year, and the maximum time span per query is 31 days. For a query period of 1 to 3 days, data is returned at hourly granularity. For a query period longer than 3 days, data is returned at daily granularity.
       * - When you specify the Interval parameter, the supported maximum time span per query, the historical data range, and the data delay are as follows:
       * | Time granularity | Maximum time span per query | Historical data range | Data delay |
       * | -------------- | -------------- | ------ | ------ |
       * | 5 minutes | 3 days | 93 days | 15 minutes |
       * | 1 hour | 31 days | 186 days | 4 hours |
       * | 1 day | 90 days | 366 days | 4:00 AM the next day |
       * ## QPS limit
       * The QPS limit for a single user on this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeDomainUsageDataRequest
       * @return DescribeDomainUsageDataResponse
       */
      Models::DescribeDomainUsageDataResponse describeDomainUsageData(const Models::DescribeDomainUsageDataRequest &request);

      /**
       * @summary Obtains the integrity of a domain name.
       *
       * @description You can call this operation to obtain the integrity of a domain name.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled, which can affect your business. We recommend that you call this operation at a reasonable rate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeDomainWithIntegrityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainWithIntegrityResponse
       */
      Models::DescribeDomainWithIntegrityResponse describeDomainWithIntegrityWithOptions(const Models::DescribeDomainWithIntegrityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the integrity of a domain name.
       *
       * @description You can call this operation to obtain the integrity of a domain name.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled, which can affect your business. We recommend that you call this operation at a reasonable rate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeDomainWithIntegrityRequest
       * @return DescribeDomainWithIntegrityResponse
       */
      Models::DescribeDomainWithIntegrityResponse describeDomainWithIntegrity(const Models::DescribeDomainWithIntegrityRequest &request);

      /**
       * @summary 查询HLS直播流的实时在线人数和带宽信息
       *
       * @param request DescribeHlsLiveStreamRealTimeBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHlsLiveStreamRealTimeBpsDataResponse
       */
      Models::DescribeHlsLiveStreamRealTimeBpsDataResponse describeHlsLiveStreamRealTimeBpsDataWithOptions(const Models::DescribeHlsLiveStreamRealTimeBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询HLS直播流的实时在线人数和带宽信息
       *
       * @param request DescribeHlsLiveStreamRealTimeBpsDataRequest
       * @return DescribeHlsLiveStreamRealTimeBpsDataResponse
       */
      Models::DescribeHlsLiveStreamRealTimeBpsDataResponse describeHlsLiveStreamRealTimeBpsData(const Models::DescribeHlsLiveStreamRealTimeBpsDataRequest &request);

      /**
       * @summary Queries a list of caption rules.
       *
       * @description This operation queries a list of caption rules. Before you call this operation, ensure that the parameters are correctly configured.
       * >Notice: 
       * The real-time caption feature is in invitational preview. Each user can add a maximum of 300 caption templates.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 60. Exceeding this limit results in API call throttling, which can affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeLiveAIProduceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveAIProduceRulesResponse
       */
      Models::DescribeLiveAIProduceRulesResponse describeLiveAIProduceRulesWithOptions(const Models::DescribeLiveAIProduceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of caption rules.
       *
       * @description This operation queries a list of caption rules. Before you call this operation, ensure that the parameters are correctly configured.
       * >Notice: 
       * The real-time caption feature is in invitational preview. Each user can add a maximum of 300 caption templates.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 60. Exceeding this limit results in API call throttling, which can affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeLiveAIProduceRulesRequest
       * @return DescribeLiveAIProduceRulesResponse
       */
      Models::DescribeLiveAIProduceRulesResponse describeLiveAIProduceRules(const Models::DescribeLiveAIProduceRulesRequest &request);

      /**
       * @summary Queries the virtual studio templates in your account.
       *
       * @param request DescribeLiveAIStudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveAIStudioResponse
       */
      Models::DescribeLiveAIStudioResponse describeLiveAIStudioWithOptions(const Models::DescribeLiveAIStudioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual studio templates in your account.
       *
       * @param request DescribeLiveAIStudioRequest
       * @return DescribeLiveAIStudioResponse
       */
      Models::DescribeLiveAIStudioResponse describeLiveAIStudio(const Models::DescribeLiveAIStudioRequest &request);

      /**
       * @summary You can call the DescribeLiveAISubtitle operation to query a list of caption templates.
       *
       * @description This operation supports paging. You can specify paging parameters to query a list of caption templates. When you call this operation, ensure that the parameter settings are valid.
       * >Notice: 
       * The real-time captioning feature is in invitational preview. Each user can add a maximum of 300 caption templates.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 60. If the number of calls per second exceeds the limit, throttling is triggered, which may affect your business. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveAISubtitleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveAISubtitleResponse
       */
      Models::DescribeLiveAISubtitleResponse describeLiveAISubtitleWithOptions(const Models::DescribeLiveAISubtitleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeLiveAISubtitle operation to query a list of caption templates.
       *
       * @description This operation supports paging. You can specify paging parameters to query a list of caption templates. When you call this operation, ensure that the parameter settings are valid.
       * >Notice: 
       * The real-time captioning feature is in invitational preview. Each user can add a maximum of 300 caption templates.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 60. If the number of calls per second exceeds the limit, throttling is triggered, which may affect your business. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveAISubtitleRequest
       * @return DescribeLiveAISubtitleResponse
       */
      Models::DescribeLiveAISubtitleResponse describeLiveAISubtitle(const Models::DescribeLiveAISubtitleRequest &request);

      /**
       * @summary Queries the audio moderation configurations.
       *
       * @description - You can call this API operation to query the audio moderation configurations for a specific streaming domain.
       * - Automated review is supported only in some live centers. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveAudioAuditConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveAudioAuditConfigResponse
       */
      Models::DescribeLiveAudioAuditConfigResponse describeLiveAudioAuditConfigWithOptions(const Models::DescribeLiveAudioAuditConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audio moderation configurations.
       *
       * @description - You can call this API operation to query the audio moderation configurations for a specific streaming domain.
       * - Automated review is supported only in some live centers. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveAudioAuditConfigRequest
       * @return DescribeLiveAudioAuditConfigResponse
       */
      Models::DescribeLiveAudioAuditConfigResponse describeLiveAudioAuditConfig(const Models::DescribeLiveAudioAuditConfigRequest &request);

      /**
       * @summary Queries the callback configuration for audio moderation.
       *
       * @description - You can call this operation to query the callback configuration for audio moderation for a specified streaming domain.
       * - Automated review is available only in some live centers. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveAudioAuditNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveAudioAuditNotifyConfigResponse
       */
      Models::DescribeLiveAudioAuditNotifyConfigResponse describeLiveAudioAuditNotifyConfigWithOptions(const Models::DescribeLiveAudioAuditNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the callback configuration for audio moderation.
       *
       * @description - You can call this operation to query the callback configuration for audio moderation for a specified streaming domain.
       * - Automated review is available only in some live centers. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveAudioAuditNotifyConfigRequest
       * @return DescribeLiveAudioAuditNotifyConfigResponse
       */
      Models::DescribeLiveAudioAuditNotifyConfigResponse describeLiveAudioAuditNotifyConfig(const Models::DescribeLiveAudioAuditNotifyConfigRequest &request);

      /**
       * @summary 查询直播CDN诊断信息
       *
       * @param request DescribeLiveCdnDiagnoseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveCdnDiagnoseInfoResponse
       */
      Models::DescribeLiveCdnDiagnoseInfoResponse describeLiveCdnDiagnoseInfoWithOptions(const Models::DescribeLiveCdnDiagnoseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询直播CDN诊断信息
       *
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
       * @summary Queries the live center stream relay configuration by calling DescribeLiveCenterTransfer.
       *
       * @description The queries per second (QPS) limit for a single user on this operation is 100. Requests that exceed this limit are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveCenterTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveCenterTransferResponse
       */
      Models::DescribeLiveCenterTransferResponse describeLiveCenterTransferWithOptions(const Models::DescribeLiveCenterTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the live center stream relay configuration by calling DescribeLiveCenterTransfer.
       *
       * @description The queries per second (QPS) limit for a single user on this operation is 100. Requests that exceed this limit are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveCenterTransferRequest
       * @return DescribeLiveCenterTransferResponse
       */
      Models::DescribeLiveCenterTransferResponse describeLiveCenterTransfer(const Models::DescribeLiveCenterTransferRequest &request);

      /**
       * @summary Queries the details of a certificate.
       *
       * @description Before you call this operation, get the certificate name from the [Certificates](https://help.aliyun.com/document_detail/2584962.html) page in the ApsaraVideo Live console.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [](t2136805.xdita#).
       *
       * @param request DescribeLiveCertificateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveCertificateDetailResponse
       */
      Models::DescribeLiveCertificateDetailResponse describeLiveCertificateDetailWithOptions(const Models::DescribeLiveCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a certificate.
       *
       * @description Before you call this operation, get the certificate name from the [Certificates](https://help.aliyun.com/document_detail/2584962.html) page in the ApsaraVideo Live console.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [](t2136805.xdita#).
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
       * @summary Calls DescribeLiveDelayConfig to query the stream delay configuration.
       *
       * @description The number of queries per second (QPS) for this operation is limited to 60 per user. Calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeLiveDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDelayConfigResponse
       */
      Models::DescribeLiveDelayConfigResponse describeLiveDelayConfigWithOptions(const Models::DescribeLiveDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeLiveDelayConfig to query the stream delay configuration.
       *
       * @description The number of queries per second (QPS) for this operation is limited to 60 per user. Calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeLiveDelayConfigRequest
       * @return DescribeLiveDelayConfigResponse
       */
      Models::DescribeLiveDelayConfigResponse describeLiveDelayConfig(const Models::DescribeLiveDelayConfigRequest &request);

      /**
       * @summary Calls DescribeLiveDelayedStreamingUsage to query delayed streaming duration usage data.
       *
       * @description - Queries user delayed streaming service usage data. The default granularity is 1 hour.
       * - Maximum query time span: 31 days.
       * - Minimum query time granularity: 1 hour.
       * - Maximum query time range: 31 days.
       * ## QPS limit
       * The single-user QPS limit for this API is 5 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this API at a reasonable frequency.
       *
       * @param request DescribeLiveDelayedStreamingUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDelayedStreamingUsageResponse
       */
      Models::DescribeLiveDelayedStreamingUsageResponse describeLiveDelayedStreamingUsageWithOptions(const Models::DescribeLiveDelayedStreamingUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeLiveDelayedStreamingUsage to query delayed streaming duration usage data.
       *
       * @description - Queries user delayed streaming service usage data. The default granularity is 1 hour.
       * - Maximum query time span: 31 days.
       * - Minimum query time granularity: 1 hour.
       * - Maximum query time range: 31 days.
       * ## QPS limit
       * The single-user QPS limit for this API is 5 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this API at a reasonable frequency.
       *
       * @param request DescribeLiveDelayedStreamingUsageRequest
       * @return DescribeLiveDelayedStreamingUsageResponse
       */
      Models::DescribeLiveDelayedStreamingUsageResponse describeLiveDelayedStreamingUsage(const Models::DescribeLiveDelayedStreamingUsageRequest &request);

      /**
       * @summary Queries the configuration of callbacks for video moderation results.
       *
       * @description - Obtain the main streaming domain, and then call this operation to query the configuration of callbacks for video moderation results.
       * - Only some live centers support the automated review feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
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
       * @description - Obtain the main streaming domain, and then call this operation to query the configuration of callbacks for video moderation results.
       * - Only some live centers support the automated review feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on an API operation in ApsaraVideo Live](https://www.alibabacloud.com/help/en/apsaravideo-live/latest/qps-limit-on-an-api-operation-in-apsaravideo-live).
       *
       * @param request DescribeLiveDetectNotifyConfigRequest
       * @return DescribeLiveDetectNotifyConfigResponse
       */
      Models::DescribeLiveDetectNotifyConfigResponse describeLiveDetectNotifyConfig(const Models::DescribeLiveDetectNotifyConfigRequest &request);

      /**
       * @summary You can call the DescribeLiveDetectPornData operation to query usage data for live stream moderation.
       *
       * @description - The minimum data granularity is 5 minutes. If the `StartTime` parameter is empty, the service queries data from the last 24 hours by default.
       * - You can query data from the last 90 days.
       * - You can query network bandwidth data for each time interval.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeLiveDetectPornDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDetectPornDataResponse
       */
      Models::DescribeLiveDetectPornDataResponse describeLiveDetectPornDataWithOptions(const Models::DescribeLiveDetectPornDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeLiveDetectPornData operation to query usage data for live stream moderation.
       *
       * @description - The minimum data granularity is 5 minutes. If the `StartTime` parameter is empty, the service queries data from the last 24 hours by default.
       * - You can query data from the last 90 days.
       * - You can query network bandwidth data for each time interval.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeLiveDetectPornDataRequest
       * @return DescribeLiveDetectPornDataResponse
       */
      Models::DescribeLiveDetectPornDataResponse describeLiveDetectPornData(const Models::DescribeLiveDetectPornDataRequest &request);

      /**
       * @summary Queries the network bandwidth monitoring data of a live streaming domain.
       *
       * @description - If you do not specify StartTime or EndTime, data of the last 24 hours is returned by default. You can also query data for a specific time range by specifying both StartTime and EndTime.
       * - If you specify only StartTime without EndTime, data within 1 hour from StartTime is returned.
       * - If you specify only EndTime without StartTime, data within 1 hour before EndTime is returned.
       * - You can query data of up to the last 90 days.
       * - This is a monitoring data API. The data collection and processing method differs from that used for billing. Do not use this API to calculate usage for billing reconciliation.
       * ## QPS limit
       * The single-user QPS limit for this API is 100 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this API at a reasonable frequency.
       *
       * @param request DescribeLiveDomainBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainBpsDataResponse
       */
      Models::DescribeLiveDomainBpsDataResponse describeLiveDomainBpsDataWithOptions(const Models::DescribeLiveDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network bandwidth monitoring data of a live streaming domain.
       *
       * @description - If you do not specify StartTime or EndTime, data of the last 24 hours is returned by default. You can also query data for a specific time range by specifying both StartTime and EndTime.
       * - If you specify only StartTime without EndTime, data within 1 hour from StartTime is returned.
       * - If you specify only EndTime without StartTime, data within 1 hour before EndTime is returned.
       * - You can query data of up to the last 90 days.
       * - This is a monitoring data API. The data collection and processing method differs from that used for billing. Do not use this API to calculate usage for billing reconciliation.
       * ## QPS limit
       * The single-user QPS limit for this API is 100 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this API at a reasonable frequency.
       *
       * @param request DescribeLiveDomainBpsDataRequest
       * @return DescribeLiveDomainBpsDataResponse
       */
      Models::DescribeLiveDomainBpsDataResponse describeLiveDomainBpsData(const Models::DescribeLiveDomainBpsDataRequest &request);

      /**
       * @summary Queries bandwidth and traffic data of a domain name by protocol by calling DescribeLiveDomainBpsDataByLayer.
       *
       * @description The storage duration of data is up to 90 days.
       * You can query data for multiple domain names at a time. Separate multiple domain names with commas (,). A maximum of 500 domain names are supported. Data for multiple domain names is returned as aggregation results.
       * The time granularity of returned data varies based on the time range specified by **StartTime** and **EndTime**:
       * - Time range ≤ 3 days: The time granularity is 5 minutes.
       * - 3 days < time range ≤ 31 days: The time granularity is 1 hour.
       * - Time range > 31 days: The time granularity is 1 day.
       * >If neither **StartTime** nor **EndTime** is specified, data for the last 24 hours is returned by default.
       * ## QPS limit
       * The single-user QPS limit for this operation is 20 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request DescribeLiveDomainBpsDataByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainBpsDataByLayerResponse
       */
      Models::DescribeLiveDomainBpsDataByLayerResponse describeLiveDomainBpsDataByLayerWithOptions(const Models::DescribeLiveDomainBpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bandwidth and traffic data of a domain name by protocol by calling DescribeLiveDomainBpsDataByLayer.
       *
       * @description The storage duration of data is up to 90 days.
       * You can query data for multiple domain names at a time. Separate multiple domain names with commas (,). A maximum of 500 domain names are supported. Data for multiple domain names is returned as aggregation results.
       * The time granularity of returned data varies based on the time range specified by **StartTime** and **EndTime**:
       * - Time range ≤ 3 days: The time granularity is 5 minutes.
       * - 3 days < time range ≤ 31 days: The time granularity is 1 hour.
       * - Time range > 31 days: The time granularity is 1 day.
       * >If neither **StartTime** nor **EndTime** is specified, data for the last 24 hours is returned by default.
       * ## QPS limit
       * The single-user QPS limit for this operation is 20 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request DescribeLiveDomainBpsDataByLayerRequest
       * @return DescribeLiveDomainBpsDataByLayerResponse
       */
      Models::DescribeLiveDomainBpsDataByLayerResponse describeLiveDomainBpsDataByLayer(const Models::DescribeLiveDomainBpsDataByLayerRequest &request);

      /**
       * @summary Retrieves accelerated domain names based on certificate information.
       *
       * @description Calls this operation to query accelerated domain names that match the specified certificate information.
       * ## QPS limit
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeLiveDomainByCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainByCertificateResponse
       */
      Models::DescribeLiveDomainByCertificateResponse describeLiveDomainByCertificateWithOptions(const Models::DescribeLiveDomainByCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves accelerated domain names based on certificate information.
       *
       * @description Calls this operation to query accelerated domain names that match the specified certificate information.
       * ## QPS limit
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeLiveDomainByCertificateRequest
       * @return DescribeLiveDomainByCertificateResponse
       */
      Models::DescribeLiveDomainByCertificateResponse describeLiveDomainByCertificate(const Models::DescribeLiveDomainByCertificateRequest &request);

      /**
       * @summary Retrieves the certificate information for a specified domain name.
       *
       * @description You must specify a domain name whose certificate information you want to query.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveDomainCertificateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainCertificateInfoResponse
       */
      Models::DescribeLiveDomainCertificateInfoResponse describeLiveDomainCertificateInfoWithOptions(const Models::DescribeLiveDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the certificate information for a specified domain name.
       *
       * @description You must specify a domain name whose certificate information you want to query.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
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
       * @summary Queries the basic configuration information of a specified ingest domain or streaming domain.
       *
       * @description This operation queries the basic configuration information of a specified ingest domain or streaming domain. The configuration of a newly added domain name takes several minutes to complete. You can query it after the configuration is complete.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainDetailResponse
       */
      Models::DescribeLiveDomainDetailResponse describeLiveDomainDetailWithOptions(const Models::DescribeLiveDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic configuration information of a specified ingest domain or streaming domain.
       *
       * @description This operation queries the basic configuration information of a specified ingest domain or streaming domain. The configuration of a newly added domain name takes several minutes to complete. You can query it after the configuration is complete.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
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
       * @summary Queries the frame rate and bitrate data of streams for an ingest domain.
       *
       * @description You can call this API to query the real-time bitrate and frame rate of a stream. This helps you monitor the quality of stream ingest. Data collection and statistics are subject to a delay. Query data that is at least 5 minutes old.
       * > Use this API to replace the deprecated DescribeLiveStreamsFrameRateAndBitRateData API.
       * ## QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveDomainFrameRateAndBitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainFrameRateAndBitRateDataResponse
       */
      Models::DescribeLiveDomainFrameRateAndBitRateDataResponse describeLiveDomainFrameRateAndBitRateDataWithOptions(const Models::DescribeLiveDomainFrameRateAndBitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the frame rate and bitrate data of streams for an ingest domain.
       *
       * @description You can call this API to query the real-time bitrate and frame rate of a stream. This helps you monitor the quality of stream ingest. Data collection and statistics are subject to a delay. Query data that is at least 5 minutes old.
       * > Use this API to replace the deprecated DescribeLiveStreamsFrameRateAndBitRateData API.
       * ## QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveDomainFrameRateAndBitRateDataRequest
       * @return DescribeLiveDomainFrameRateAndBitRateDataResponse
       */
      Models::DescribeLiveDomainFrameRateAndBitRateDataResponse describeLiveDomainFrameRateAndBitRateData(const Models::DescribeLiveDomainFrameRateAndBitRateDataRequest &request);

      /**
       * @summary Queries the maximum numbers of ingested and transcoded streams for a streaming domain.
       *
       * @description This operation supports only main streaming domains.
       * ## QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainLimitResponse
       */
      Models::DescribeLiveDomainLimitResponse describeLiveDomainLimitWithOptions(const Models::DescribeLiveDomainLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum numbers of ingested and transcoded streams for a streaming domain.
       *
       * @description This operation supports only main streaming domains.
       * ## QPS limit
       * You can call this operation up to 5 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainLimitRequest
       * @return DescribeLiveDomainLimitResponse
       */
      Models::DescribeLiveDomainLimitResponse describeLiveDomainLimit(const Models::DescribeLiveDomainLimitRequest &request);

      /**
       * @summary Retrieves the download URLs of raw access logs for a specified domain name in ApsaraVideo Live.
       *
       * @description - Each API call supports querying offline logs for only a single domain name.
       * - The optional parameters StartTime and EndTime must be specified together. After you specify the start time and end time, logs within the specified time range are queried.
       * - If you do not specify StartTime and EndTime, log data from the past 24 hours is returned by default.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveDomainLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainLogResponse
       */
      Models::DescribeLiveDomainLogResponse describeLiveDomainLogWithOptions(const Models::DescribeLiveDomainLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URLs of raw access logs for a specified domain name in ApsaraVideo Live.
       *
       * @description - Each API call supports querying offline logs for only a single domain name.
       * - The optional parameters StartTime and EndTime must be specified together. After you specify the start time and end time, logs within the specified time range are queried.
       * - If you do not specify StartTime and EndTime, log data from the past 24 hours is returned by default.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
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
       * @summary Retrieves the mapping between ingest domains, main streaming domains, and sub-streaming domains.
       *
       * @description Before you call this operation, identify the ingest or streaming domain that you want to query.
       * ## QPS limits
       * You can call this operation up to 500 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveDomainMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainMappingResponse
       */
      Models::DescribeLiveDomainMappingResponse describeLiveDomainMappingWithOptions(const Models::DescribeLiveDomainMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the mapping between ingest domains, main streaming domains, and sub-streaming domains.
       *
       * @description Before you call this operation, identify the ingest or streaming domain that you want to query.
       * ## QPS limits
       * You can call this operation up to 500 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveDomainMappingRequest
       * @return DescribeLiveDomainMappingResponse
       */
      Models::DescribeLiveDomainMappingResponse describeLiveDomainMapping(const Models::DescribeLiveDomainMappingRequest &request);

      /**
       * @summary Queries the monitoring usage data of a domain name by calling DescribeLiveDomainMonitoringUsageData.
       *
       * @description - You can query multiple domain names at a time. Separate multiple domain names with commas (,).
       * - You can query data of up to the last 90 days.
       * - The time granularity for querying data is hour or day.
       * - The maximum query time span is 31 days.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 20 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveDomainMonitoringUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainMonitoringUsageDataResponse
       */
      Models::DescribeLiveDomainMonitoringUsageDataResponse describeLiveDomainMonitoringUsageDataWithOptions(const Models::DescribeLiveDomainMonitoringUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring usage data of a domain name by calling DescribeLiveDomainMonitoringUsageData.
       *
       * @description - You can query multiple domain names at a time. Separate multiple domain names with commas (,).
       * - You can query data of up to the last 90 days.
       * - The time granularity for querying data is hour or day.
       * - The maximum query time span is 31 days.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 20 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
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
       * @summary Retrieves the number of online viewers for all live streams on a specified domain.
       *
       * @description This API only supports viewer counts for FLV, RTS, and RTMP streams. HLS streams are not supported. The data collection has a delay. For accuracy, query for data that is at least 5 minutes old.
       * > This API replaces the deprecated `DescribeLiveStreamOnlineUserNum` endpoint.
       * ## QPS limits
       * You can call this operation up to 200 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveDomainOnlineUserNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainOnlineUserNumResponse
       */
      Models::DescribeLiveDomainOnlineUserNumResponse describeLiveDomainOnlineUserNumWithOptions(const Models::DescribeLiveDomainOnlineUserNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the number of online viewers for all live streams on a specified domain.
       *
       * @description This API only supports viewer counts for FLV, RTS, and RTMP streams. HLS streams are not supported. The data collection has a delay. For accuracy, query for data that is at least 5 minutes old.
       * > This API replaces the deprecated `DescribeLiveStreamOnlineUserNum` endpoint.
       * ## QPS limits
       * You can call this operation up to 200 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveDomainOnlineUserNumRequest
       * @return DescribeLiveDomainOnlineUserNumResponse
       */
      Models::DescribeLiveDomainOnlineUserNumResponse describeLiveDomainOnlineUserNum(const Models::DescribeLiveDomainOnlineUserNumRequest &request);

      /**
       * @summary Queries the stream ingest status codes for an ingest domain within a specified time range.
       *
       * @description - This operation is a monitoring data API. The data collection and processing method differs from billing and cannot be used to calculate usage for reconciliation purposes.
       * - You can query data from the last 90 days.
       * - Data is delayed by 3 to 5 minutes.
       * ## QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveDomainPublishErrorCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainPublishErrorCodeResponse
       */
      Models::DescribeLiveDomainPublishErrorCodeResponse describeLiveDomainPublishErrorCodeWithOptions(const Models::DescribeLiveDomainPublishErrorCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stream ingest status codes for an ingest domain within a specified time range.
       *
       * @description - This operation is a monitoring data API. The data collection and processing method differs from billing and cannot be used to calculate usage for reconciliation purposes.
       * - You can query data from the last 90 days.
       * - Data is delayed by 3 to 5 minutes.
       * ## QPS limit
       * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveDomainPublishErrorCodeRequest
       * @return DescribeLiveDomainPublishErrorCodeResponse
       */
      Models::DescribeLiveDomainPublishErrorCodeResponse describeLiveDomainPublishErrorCode(const Models::DescribeLiveDomainPublishErrorCodeRequest &request);

      /**
       * @summary Queries the network bandwidth monitoring data for stream ingest on an ingest domain by calling DescribeLiveDomainPushBpsData.
       *
       * @description - The bandwidth data is measured in bit/s.
       * - Batch domain name queries are supported. Separate multiple domain names with commas (,).
       * - If you do not specify StartTime or EndTime, data from the last 24 hours is returned by default. You can also query data for a specific time range by specifying both StartTime and EndTime.
       * - You can query data from the last 90 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveDomainPushBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainPushBpsDataResponse
       */
      Models::DescribeLiveDomainPushBpsDataResponse describeLiveDomainPushBpsDataWithOptions(const Models::DescribeLiveDomainPushBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network bandwidth monitoring data for stream ingest on an ingest domain by calling DescribeLiveDomainPushBpsData.
       *
       * @description - The bandwidth data is measured in bit/s.
       * - Batch domain name queries are supported. Separate multiple domain names with commas (,).
       * - If you do not specify StartTime or EndTime, data from the last 24 hours is returned by default. You can also query data for a specific time range by specifying both StartTime and EndTime.
       * - You can query data from the last 90 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveDomainPushBpsDataRequest
       * @return DescribeLiveDomainPushBpsDataResponse
       */
      Models::DescribeLiveDomainPushBpsDataResponse describeLiveDomainPushBpsData(const Models::DescribeLiveDomainPushBpsDataRequest &request);

      /**
       * @summary Queries the push traffic monitoring data of an ingest domain by calling DescribeLiveDomainPushTrafficData.
       *
       * @description - The unit of the traffic monitoring data is bytes.
       * - Batch domain name queries are supported. Separate multiple domain names with commas (,).
       * - If you do not specify StartTime or EndTime, data of the last 24 hours is returned by default. You can also query data for a specific time range by specifying both StartTime and EndTime.
       * - You can query data of the last 90 days.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request DescribeLiveDomainPushTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainPushTrafficDataResponse
       */
      Models::DescribeLiveDomainPushTrafficDataResponse describeLiveDomainPushTrafficDataWithOptions(const Models::DescribeLiveDomainPushTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the push traffic monitoring data of an ingest domain by calling DescribeLiveDomainPushTrafficData.
       *
       * @description - The unit of the traffic monitoring data is bytes.
       * - Batch domain name queries are supported. Separate multiple domain names with commas (,).
       * - If you do not specify StartTime or EndTime, data of the last 24 hours is returned by default. You can also query data for a specific time range by specifying both StartTime and EndTime.
       * - You can query data of the last 90 days.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request DescribeLiveDomainPushTrafficDataRequest
       * @return DescribeLiveDomainPushTrafficDataResponse
       */
      Models::DescribeLiveDomainPushTrafficDataResponse describeLiveDomainPushTrafficData(const Models::DescribeLiveDomainPushTrafficDataRequest &request);

      /**
       * @summary Queries the page view (PV) and unique visitor (UV) data for a specified streaming domain.
       *
       * @description - You can call this operation to view the geographic distribution of your video viewers, check access rankings for your accelerated domain names, and count the number of unique IP addresses that send requests to the domain name within a specific period.
       * - If you do not specify the StartTime and EndTime parameters, data from the last 24 hours is queried by default. You can also query data for a specified time range.
       * - You can query only one domain name at a time.
       * - You can query data from the last 90 days.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 100. If you exceed this limit, API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable frequency.
       *
       * @param request DescribeLiveDomainPvUvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainPvUvDataResponse
       */
      Models::DescribeLiveDomainPvUvDataResponse describeLiveDomainPvUvDataWithOptions(const Models::DescribeLiveDomainPvUvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the page view (PV) and unique visitor (UV) data for a specified streaming domain.
       *
       * @description - You can call this operation to view the geographic distribution of your video viewers, check access rankings for your accelerated domain names, and count the number of unique IP addresses that send requests to the domain name within a specific period.
       * - If you do not specify the StartTime and EndTime parameters, data from the last 24 hours is queried by default. You can also query data for a specified time range.
       * - You can query only one domain name at a time.
       * - You can query data from the last 90 days.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 100. If you exceed this limit, API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable frequency.
       *
       * @param request DescribeLiveDomainPvUvDataRequest
       * @return DescribeLiveDomainPvUvDataResponse
       */
      Models::DescribeLiveDomainPvUvDataResponse describeLiveDomainPvUvData(const Models::DescribeLiveDomainPvUvDataRequest &request);

      /**
       * @summary Call the DescribeLiveDomainRealTimeBpsData operation to retrieve bandwidth data for a domain name at a 1-minute granularity.
       *
       * @description - You can call this operation to query the traffic and bandwidth usage of a specified domain name.
       * - You can query data from the last 7 days. The time range of a single query cannot exceed 24 hours.
       * - If you do not specify StartTime and EndTime, data for the last hour is returned by default.
       * - This operation provides monitoring data. The data collection and processing methods are different from those used for billing. You cannot use the data from this operation for billing reconciliation.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, your API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeLiveDomainRealTimeBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainRealTimeBpsDataResponse
       */
      Models::DescribeLiveDomainRealTimeBpsDataResponse describeLiveDomainRealTimeBpsDataWithOptions(const Models::DescribeLiveDomainRealTimeBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeLiveDomainRealTimeBpsData operation to retrieve bandwidth data for a domain name at a 1-minute granularity.
       *
       * @description - You can call this operation to query the traffic and bandwidth usage of a specified domain name.
       * - You can query data from the last 7 days. The time range of a single query cannot exceed 24 hours.
       * - If you do not specify StartTime and EndTime, data for the last hour is returned by default.
       * - This operation provides monitoring data. The data collection and processing methods are different from those used for billing. You cannot use the data from this operation for billing reconciliation.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, your API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeLiveDomainRealTimeBpsDataRequest
       * @return DescribeLiveDomainRealTimeBpsDataResponse
       */
      Models::DescribeLiveDomainRealTimeBpsDataResponse describeLiveDomainRealTimeBpsData(const Models::DescribeLiveDomainRealTimeBpsDataRequest &request);

      /**
       * @summary Retrieves the proportions of HTTP status codes for an accelerated domain name at a 1-minute granularity.
       *
       * @description The following table describes the data timestamp granularity supported by this operation:
       * |Time granularity|Maximum time range per query|Historical data available|Data latency|
       * |-----|------|-------|-------|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|Typically 4 hours|
       * |1 day|Unlimited|366 days|After 04:00 on the next day|
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation as needed.
       *
       * @param request DescribeLiveDomainRealTimeHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeLiveDomainRealTimeHttpCodeDataResponse describeLiveDomainRealTimeHttpCodeDataWithOptions(const Models::DescribeLiveDomainRealTimeHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the proportions of HTTP status codes for an accelerated domain name at a 1-minute granularity.
       *
       * @description The following table describes the data timestamp granularity supported by this operation:
       * |Time granularity|Maximum time range per query|Historical data available|Data latency|
       * |-----|------|-------|-------|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|Typically 4 hours|
       * |1 day|Unlimited|366 days|After 04:00 on the next day|
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation as needed.
       *
       * @param request DescribeLiveDomainRealTimeHttpCodeDataRequest
       * @return DescribeLiveDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeLiveDomainRealTimeHttpCodeDataResponse describeLiveDomainRealTimeHttpCodeData(const Models::DescribeLiveDomainRealTimeHttpCodeDataRequest &request);

      /**
       * @summary Queries real-time traffic monitoring data for live streaming domain names.
       *
       * @description - Call this operation to query the real-time traffic and bandwidth of a streaming domain name for a specific region, carrier, and time period.
       * - If you do not specify the StartTime and EndTime parameters, data from the last hour is queried by default. To query data for a specific time range, you must specify both the StartTime and EndTime parameters.
       * - This operation returns monitoring data. This data is collected and processed differently from the data used for billing. Therefore, you cannot use the returned data for billing reconciliation.
       * - You can query data from the last 90 days.
       * ## QPS limits
       * This operation has no queries per second (QPS) limit for a single user. You can call this operation as needed.
       *
       * @param request DescribeLiveDomainRealTimeTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainRealTimeTrafficDataResponse
       */
      Models::DescribeLiveDomainRealTimeTrafficDataResponse describeLiveDomainRealTimeTrafficDataWithOptions(const Models::DescribeLiveDomainRealTimeTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries real-time traffic monitoring data for live streaming domain names.
       *
       * @description - Call this operation to query the real-time traffic and bandwidth of a streaming domain name for a specific region, carrier, and time period.
       * - If you do not specify the StartTime and EndTime parameters, data from the last hour is queried by default. To query data for a specific time range, you must specify both the StartTime and EndTime parameters.
       * - This operation returns monitoring data. This data is collected and processed differently from the data used for billing. Therefore, you cannot use the returned data for billing reconciliation.
       * - You can query data from the last 90 days.
       * ## QPS limits
       * This operation has no queries per second (QPS) limit for a single user. You can call this operation as needed.
       *
       * @param request DescribeLiveDomainRealTimeTrafficDataRequest
       * @return DescribeLiveDomainRealTimeTrafficDataResponse
       */
      Models::DescribeLiveDomainRealTimeTrafficDataResponse describeLiveDomainRealTimeTrafficData(const Models::DescribeLiveDomainRealTimeTrafficDataRequest &request);

      /**
       * @summary Queries the information about real-time log delivery for a domain name.
       *
       * @description You can call this operation to query the status of real-time log delivery for a domain name. Ensure that the parameter settings are valid.
       * ## QPS limits
       * This operation is limited to 6,000 queries per second (QPS) per user. Calls that exceed this limit are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request DescribeLiveDomainRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainRealtimeLogDeliveryResponse
       */
      Models::DescribeLiveDomainRealtimeLogDeliveryResponse describeLiveDomainRealtimeLogDeliveryWithOptions(const Models::DescribeLiveDomainRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about real-time log delivery for a domain name.
       *
       * @description You can call this operation to query the status of real-time log delivery for a domain name. Ensure that the parameter settings are valid.
       * ## QPS limits
       * This operation is limited to 6,000 queries per second (QPS) per user. Calls that exceed this limit are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request DescribeLiveDomainRealtimeLogDeliveryRequest
       * @return DescribeLiveDomainRealtimeLogDeliveryResponse
       */
      Models::DescribeLiveDomainRealtimeLogDeliveryResponse describeLiveDomainRealtimeLogDelivery(const Models::DescribeLiveDomainRealtimeLogDeliveryRequest &request);

      /**
       * @summary Queries the number of concurrent recording streams and container format conversion usage for ApsaraVideo Live.
       *
       * @description - Collects statistics on daily concurrent recording streams and sampling data at different time intervals. You can use this operation to query the peak number of daily or monthly concurrent recording streams.
       * - Time shifting streams are not counted as recording streams.
       * - Supports domain-level queries and batch domain queries. Separate multiple domain names with commas (,).
       * - Data granularity: 1 minute. Maximum query span: 24 hours. Maximum data retention: 60 days.
       * - Data granularity: 1 hour. Maximum query span: 31 days. Maximum data retention: 180 days.
       * - Data granularity: 1 day. Maximum query span: 90 days. Maximum data retention: 366 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveDomainRecordUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainRecordUsageDataResponse
       */
      Models::DescribeLiveDomainRecordUsageDataResponse describeLiveDomainRecordUsageDataWithOptions(const Models::DescribeLiveDomainRecordUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of concurrent recording streams and container format conversion usage for ApsaraVideo Live.
       *
       * @description - Collects statistics on daily concurrent recording streams and sampling data at different time intervals. You can use this operation to query the peak number of daily or monthly concurrent recording streams.
       * - Time shifting streams are not counted as recording streams.
       * - Supports domain-level queries and batch domain queries. Separate multiple domain names with commas (,).
       * - Data granularity: 1 minute. Maximum query span: 24 hours. Maximum data retention: 60 days.
       * - Data granularity: 1 hour. Maximum query span: 31 days. Maximum data retention: 180 days.
       * - Data granularity: 1 day. Maximum query span: 90 days. Maximum data retention: 366 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveDomainRecordUsageDataRequest
       * @return DescribeLiveDomainRecordUsageDataResponse
       */
      Models::DescribeLiveDomainRecordUsageDataResponse describeLiveDomainRecordUsageData(const Models::DescribeLiveDomainRecordUsageDataRequest &request);

      /**
       * @summary Queries the number of snapshots captured for a live streaming domain.
       *
       * @description - You can use this operation to obtain the total number of snapshots captured per day.
       * - You can query data from the last 90 days.
       * ## QPS limit
       * This operation does not have a per-user QPS limit. Call this operation as needed.
       *
       * @param request DescribeLiveDomainSnapshotDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainSnapshotDataResponse
       */
      Models::DescribeLiveDomainSnapshotDataResponse describeLiveDomainSnapshotDataWithOptions(const Models::DescribeLiveDomainSnapshotDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of snapshots captured for a live streaming domain.
       *
       * @description - You can use this operation to obtain the total number of snapshots captured per day.
       * - You can query data from the last 90 days.
       * ## QPS limit
       * This operation does not have a per-user QPS limit. Call this operation as needed.
       *
       * @param request DescribeLiveDomainSnapshotDataRequest
       * @return DescribeLiveDomainSnapshotDataResponse
       */
      Models::DescribeLiveDomainSnapshotDataResponse describeLiveDomainSnapshotData(const Models::DescribeLiveDomainSnapshotDataRequest &request);

      /**
       * @summary Queries the feature configurations of an accelerated domain name in the canary release environment.
       *
       * @description ## Usage notes
       * You can call this operation to query the staging environment configuration of a specified accelerated domain name.
       * ## QPS limits
       * The single-user limit for this API operation is 30 queries per second (QPS). If you exceed this limit, API calls are throttled. This may affect your business. Pace your calls to stay within the limit. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainStagingConfigResponse
       */
      Models::DescribeLiveDomainStagingConfigResponse describeLiveDomainStagingConfigWithOptions(const Models::DescribeLiveDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the feature configurations of an accelerated domain name in the canary release environment.
       *
       * @description ## Usage notes
       * You can call this operation to query the staging environment configuration of a specified accelerated domain name.
       * ## QPS limits
       * The single-user limit for this API operation is 30 queries per second (QPS). If you exceed this limit, API calls are throttled. This may affect your business. Pace your calls to stay within the limit. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDomainStagingConfigRequest
       * @return DescribeLiveDomainStagingConfigResponse
       */
      Models::DescribeLiveDomainStagingConfigResponse describeLiveDomainStagingConfig(const Models::DescribeLiveDomainStagingConfigRequest &request);

      /**
       * @summary Queries the transcoding usage data of a domain name by calling DescribeLiveDomainStreamTranscodeData.
       *
       * @description - You can use this operation to query network bandwidth data for each time interval.
       * - Batch domain name queries are supported. Separate multiple domain names with commas (,).
       * - You can query data from the last 90 days.
       * - The data time granularity is hour or day.
       * - For the billing tiers that correspond to different transcoding types and transcoding resolutions, see the billing tier description for different instance specifications in [Live stream transcoding billing](https://help.aliyun.com/document_detail/90424.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 20 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request DescribeLiveDomainStreamTranscodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainStreamTranscodeDataResponse
       */
      Models::DescribeLiveDomainStreamTranscodeDataResponse describeLiveDomainStreamTranscodeDataWithOptions(const Models::DescribeLiveDomainStreamTranscodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the transcoding usage data of a domain name by calling DescribeLiveDomainStreamTranscodeData.
       *
       * @description - You can use this operation to query network bandwidth data for each time interval.
       * - Batch domain name queries are supported. Separate multiple domain names with commas (,).
       * - You can query data from the last 90 days.
       * - The data time granularity is hour or day.
       * - For the billing tiers that correspond to different transcoding types and transcoding resolutions, see the billing tier description for different instance specifications in [Live stream transcoding billing](https://help.aliyun.com/document_detail/90424.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 20 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request DescribeLiveDomainStreamTranscodeDataRequest
       * @return DescribeLiveDomainStreamTranscodeDataResponse
       */
      Models::DescribeLiveDomainStreamTranscodeDataResponse describeLiveDomainStreamTranscodeData(const Models::DescribeLiveDomainStreamTranscodeDataRequest &request);

      /**
       * @summary Queries time shifting usage data for live streaming.
       *
       * @description - Queries time shifting usage data for each time interval.
       * - Retrieves data for up to the last 90 days.
       * - The data interval is fixed at 1 hour.
       * - The maximum data timestamp span for a single query is 31 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API invoke is throttled, which may affect your business. Invoke this operation as needed.
       *
       * @param request DescribeLiveDomainTimeShiftDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainTimeShiftDataResponse
       */
      Models::DescribeLiveDomainTimeShiftDataResponse describeLiveDomainTimeShiftDataWithOptions(const Models::DescribeLiveDomainTimeShiftDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries time shifting usage data for live streaming.
       *
       * @description - Queries time shifting usage data for each time interval.
       * - Retrieves data for up to the last 90 days.
       * - The data interval is fixed at 1 hour.
       * - The maximum data timestamp span for a single query is 31 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API invoke is throttled, which may affect your business. Invoke this operation as needed.
       *
       * @param request DescribeLiveDomainTimeShiftDataRequest
       * @return DescribeLiveDomainTimeShiftDataResponse
       */
      Models::DescribeLiveDomainTimeShiftDataResponse describeLiveDomainTimeShiftData(const Models::DescribeLiveDomainTimeShiftDataRequest &request);

      /**
       * @summary Queries network traffic monitoring data for live streaming domains.
       *
       * @description - If you do not specify StartTime or EndTime, data from the past 24 hours is returned by default.
       * - This is a monitoring data API. The data collection and processing method differs from that used for billing. Do not use this API to calculate usage for billing reconciliation.
       * ## QPS limit
       * The single-user QPS limit for this API is 100 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this API at a reasonable frequency.
       *
       * @param request DescribeLiveDomainTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainTrafficDataResponse
       */
      Models::DescribeLiveDomainTrafficDataResponse describeLiveDomainTrafficDataWithOptions(const Models::DescribeLiveDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries network traffic monitoring data for live streaming domains.
       *
       * @description - If you do not specify StartTime or EndTime, data from the past 24 hours is returned by default.
       * - This is a monitoring data API. The data collection and processing method differs from that used for billing. Do not use this API to calculate usage for billing reconciliation.
       * ## QPS limit
       * The single-user QPS limit for this API is 100 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this API at a reasonable frequency.
       *
       * @param request DescribeLiveDomainTrafficDataRequest
       * @return DescribeLiveDomainTrafficDataResponse
       */
      Models::DescribeLiveDomainTrafficDataResponse describeLiveDomainTrafficData(const Models::DescribeLiveDomainTrafficDataRequest &request);

      /**
       * @summary 查询直播域名转码参数
       *
       * @param request DescribeLiveDomainTranscodeParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDomainTranscodeParamsResponse
       */
      Models::DescribeLiveDomainTranscodeParamsResponse describeLiveDomainTranscodeParamsWithOptions(const Models::DescribeLiveDomainTranscodeParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询直播域名转码参数
       *
       * @param request DescribeLiveDomainTranscodeParamsRequest
       * @return DescribeLiveDomainTranscodeParamsResponse
       */
      Models::DescribeLiveDomainTranscodeParamsResponse describeLiveDomainTranscodeParams(const Models::DescribeLiveDomainTranscodeParamsRequest &request);

      /**
       * @summary Queries DRM usage data within a specified time range.
       *
       * @description ### Operation description
       * - You can query data from the last 90 days.
       * - The maximum time span is 31 days.
       * ### QPS limit
       * Each user can make up to 20 queries per second (QPS). If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDrmUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveDrmUsageDataResponse
       */
      Models::DescribeLiveDrmUsageDataResponse describeLiveDrmUsageDataWithOptions(const Models::DescribeLiveDrmUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries DRM usage data within a specified time range.
       *
       * @description ### Operation description
       * - You can query data from the last 90 days.
       * - The maximum time span is 31 days.
       * ### QPS limit
       * Each user can make up to 20 queries per second (QPS). If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveDrmUsageDataRequest
       * @return DescribeLiveDrmUsageDataResponse
       */
      Models::DescribeLiveDrmUsageDataResponse describeLiveDrmUsageData(const Models::DescribeLiveDrmUsageDataRequest &request);

      /**
       * @summary Retrieves the configuration of edge stream relay.
       *
       * @description Get the ingest domain, then call this operation to query the configuration of edge stream relay.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveEdgeTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveEdgeTransferResponse
       */
      Models::DescribeLiveEdgeTransferResponse describeLiveEdgeTransferWithOptions(const Models::DescribeLiveEdgeTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of edge stream relay.
       *
       * @description Get the ingest domain, then call this operation to query the configuration of edge stream relay.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveEdgeTransferRequest
       * @return DescribeLiveEdgeTransferResponse
       */
      Models::DescribeLiveEdgeTransferResponse describeLiveEdgeTransfer(const Models::DescribeLiveEdgeTransferRequest &request);

      /**
       * @summary Call DescribeLiveGrtnDuration to query co-hosting call duration usage data.
       *
       * @description - Maximum query span: 31 days.
       * - Minimum query granularity: 5 minutes.
       * - Maximum query range: Data from the last 90 days.
       * ## QPS limit
       * The single-user QPS limit for this API is 10 requests per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this API appropriately.
       *
       * @param request DescribeLiveGrtnDurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveGrtnDurationResponse
       */
      Models::DescribeLiveGrtnDurationResponse describeLiveGrtnDurationWithOptions(const Models::DescribeLiveGrtnDurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeLiveGrtnDuration to query co-hosting call duration usage data.
       *
       * @description - Maximum query span: 31 days.
       * - Minimum query granularity: 5 minutes.
       * - Maximum query range: Data from the last 90 days.
       * ## QPS limit
       * The single-user QPS limit for this API is 10 requests per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this API appropriately.
       *
       * @param request DescribeLiveGrtnDurationRequest
       * @return DescribeLiveGrtnDurationResponse
       */
      Models::DescribeLiveGrtnDurationResponse describeLiveGrtnDuration(const Models::DescribeLiveGrtnDurationRequest &request);

      /**
       * @summary Queries all configured certificate information for the certificate service of a user.
       *
       * @description Calls this operation to query all configured certificates and domain name information for the user in the certificate service.
       * Before calling this operation, make sure that at least one live streaming domain under the account has HTTPS certificates enabled through SetLiveDomainCertificate. Otherwise, the error NoHttpsDomain(400) is returned.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveHttpsDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveHttpsDomainListResponse
       */
      Models::DescribeLiveHttpsDomainListResponse describeLiveHttpsDomainListWithOptions(const Models::DescribeLiveHttpsDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all configured certificate information for the certificate service of a user.
       *
       * @description Calls this operation to query all configured certificates and domain name information for the user in the certificate service.
       * Before calling this operation, make sure that at least one live streaming domain under the account has HTTPS certificates enabled through SetLiveDomainCertificate. Otherwise, the error NoHttpsDomain(400) is returned.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveHttpsDomainListRequest
       * @return DescribeLiveHttpsDomainListResponse
       */
      Models::DescribeLiveHttpsDomainListResponse describeLiveHttpsDomainList(const Models::DescribeLiveHttpsDomainListRequest &request);

      /**
       * @summary Queries metric data for ApsaraVideo Real-time Communication (ARTC).
       *
       * @description - You can query data from the past 30 days. The query time range for a single request is limited to 24 hours.
       * - The data granularity is 5 minutes.
       * ## QPS limit
       * The QPS limit for this operation is 50 requests per second per account. Exceeding this limit triggers throttling, which can disrupt your services.
       *
       * @param request DescribeLiveInteractionMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveInteractionMetricDataResponse
       */
      Models::DescribeLiveInteractionMetricDataResponse describeLiveInteractionMetricDataWithOptions(const Models::DescribeLiveInteractionMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metric data for ApsaraVideo Real-time Communication (ARTC).
       *
       * @description - You can query data from the past 30 days. The query time range for a single request is limited to 24 hours.
       * - The data granularity is 5 minutes.
       * ## QPS limit
       * The QPS limit for this operation is 50 requests per second per account. Exceeding this limit triggers throttling, which can disrupt your services.
       *
       * @param request DescribeLiveInteractionMetricDataRequest
       * @return DescribeLiveInteractionMetricDataResponse
       */
      Models::DescribeLiveInteractionMetricDataResponse describeLiveInteractionMetricData(const Models::DescribeLiveInteractionMetricDataRequest &request);

      /**
       * @summary Checks whether a specified IP address belongs to an Alibaba Cloud point of presence (POP).
       *
       * @description ### QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveIpInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveIpInfoResponse
       */
      Models::DescribeLiveIpInfoResponse describeLiveIpInfoWithOptions(const Models::DescribeLiveIpInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a specified IP address belongs to an Alibaba Cloud point of presence (POP).
       *
       * @description ### QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveIpInfoRequest
       * @return DescribeLiveIpInfoResponse
       */
      Models::DescribeLiveIpInfoResponse describeLiveIpInfo(const Models::DescribeLiveIpInfoRequest &request);

      /**
       * @summary Retrieves the configurations of triggered stream pulling for a streaming domain.
       *
       * @description This operation supports retrieving only the configurations of triggered stream pulling.
       * ## QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveLazyPullStreamConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveLazyPullStreamConfigResponse
       */
      Models::DescribeLiveLazyPullStreamConfigResponse describeLiveLazyPullStreamConfigWithOptions(const Models::DescribeLiveLazyPullStreamConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configurations of triggered stream pulling for a streaming domain.
       *
       * @description This operation supports retrieving only the configurations of triggered stream pulling.
       * ## QPS limit
       * You can call this operation up to 1,000 times per minute per account. Requests that exceed this limit are dropped and you may experience service interruptions.
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
       * @summary Queries the details of a live interactive group.
       *
       * @description Before calling this operation, you must have already called [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848162.html) to create an interactive messaging group.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveMessageGroupResponse
       */
      Models::DescribeLiveMessageGroupResponse describeLiveMessageGroupWithOptions(const Models::DescribeLiveMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a live interactive group.
       *
       * @description Before calling this operation, you must have already called [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848162.html) to create an interactive messaging group.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
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
       * @summary Queries the live packaging configuration under a streaming domain.
       *
       * @description Obtain the primary streaming domain first, and then call this operation to query the live packaging configuration under the streaming domain.
       * ## QPS limit
       * The single-user QPS limit for this operation is 300 calls per minute. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this operation as appropriate.
       *
       * @param request DescribeLivePackageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePackageConfigResponse
       */
      Models::DescribeLivePackageConfigResponse describeLivePackageConfigWithOptions(const Models::DescribeLivePackageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the live packaging configuration under a streaming domain.
       *
       * @description Obtain the primary streaming domain first, and then call this operation to query the live packaging configuration under the streaming domain.
       * ## QPS limit
       * The single-user QPS limit for this operation is 300 calls per minute. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this operation as appropriate.
       *
       * @param request DescribeLivePackageConfigRequest
       * @return DescribeLivePackageConfigResponse
       */
      Models::DescribeLivePackageConfigResponse describeLivePackageConfig(const Models::DescribeLivePackageConfigRequest &request);

      /**
       * @summary Queries the available origin points for Global Accelerator links.
       *
       * @description You can call this operation to query available Global Accelerator regions before you call the CreateLivePrivateLine operation. These regions can be used as origin points for acceleration.
       * ## Limits
       * You can make up to 50 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeLivePrivateLineAreasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePrivateLineAreasResponse
       */
      Models::DescribeLivePrivateLineAreasResponse describeLivePrivateLineAreasWithOptions(const Models::DescribeLivePrivateLineAreasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available origin points for Global Accelerator links.
       *
       * @description You can call this operation to query available Global Accelerator regions before you call the CreateLivePrivateLine operation. These regions can be used as origin points for acceleration.
       * ## Limits
       * You can make up to 50 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeLivePrivateLineAreasRequest
       * @return DescribeLivePrivateLineAreasResponse
       */
      Models::DescribeLivePrivateLineAreasResponse describeLivePrivateLineAreas(const Models::DescribeLivePrivateLineAreasRequest &request);

      /**
       * @summary Queries the attachment information between an Alibaba Cloud Global Accelerator (GA) instance and a live streaming link.
       *
       * @description When the request parameter IsGaInstance is set to yes, the Alibaba Cloud Global Accelerator (GA) instance status is queried. When it is set to no, the attachment details between the GA instance and the live streaming link are queried.
       * ## QPS limit
       * The single-user QPS limit for this API is 50 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request DescribeLivePrivateLineAvailGARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePrivateLineAvailGAResponse
       */
      Models::DescribeLivePrivateLineAvailGAResponse describeLivePrivateLineAvailGAWithOptions(const Models::DescribeLivePrivateLineAvailGARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attachment information between an Alibaba Cloud Global Accelerator (GA) instance and a live streaming link.
       *
       * @description When the request parameter IsGaInstance is set to yes, the Alibaba Cloud Global Accelerator (GA) instance status is queried. When it is set to no, the attachment details between the GA instance and the live streaming link are queried.
       * ## QPS limit
       * The single-user QPS limit for this API is 50 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request DescribeLivePrivateLineAvailGARequest
       * @return DescribeLivePrivateLineAvailGAResponse
       */
      Models::DescribeLivePrivateLineAvailGAResponse describeLivePrivateLineAvailGA(const Models::DescribeLivePrivateLineAvailGARequest &request);

      /**
       * @summary Calls DescribeLiveProducerUsageData to query producer studio usage data.
       *
       * @description The minimum data query granularity is 1 hour. The maximum query time span is 31 days. The maximum historical query range is the last 90 days.
       * ## QPS limit
       * The single-user QPS limit for this API operation is 5 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly.
       *
       * @param request DescribeLiveProducerUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveProducerUsageDataResponse
       */
      Models::DescribeLiveProducerUsageDataResponse describeLiveProducerUsageDataWithOptions(const Models::DescribeLiveProducerUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DescribeLiveProducerUsageData to query producer studio usage data.
       *
       * @description The minimum data query granularity is 1 hour. The maximum query time span is 31 days. The maximum historical query range is the last 90 days.
       * ## QPS limit
       * The single-user QPS limit for this API operation is 5 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly.
       *
       * @param request DescribeLiveProducerUsageDataRequest
       * @return DescribeLiveProducerUsageDataResponse
       */
      Models::DescribeLiveProducerUsageDataResponse describeLiveProducerUsageData(const Models::DescribeLiveProducerUsageDataRequest &request);

      /**
       * @summary Retrieves the scheduled stream pulling configurations for a domain name.
       *
       * @description This operation supports retrieving only the configurations of scheduled stream pulling.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLivePullStreamConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePullStreamConfigResponse
       */
      Models::DescribeLivePullStreamConfigResponse describeLivePullStreamConfigWithOptions(const Models::DescribeLivePullStreamConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the scheduled stream pulling configurations for a domain name.
       *
       * @description This operation supports retrieving only the configurations of scheduled stream pulling.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLivePullStreamConfigRequest
       * @return DescribeLivePullStreamConfigResponse
       */
      Models::DescribeLivePullStreamConfigResponse describeLivePullStreamConfig(const Models::DescribeLivePullStreamConfigRequest &request);

      /**
       * @summary Queries a stream pulling-to-pushing task.
       *
       * @description - Queries a stream pulling-to-pushing task.
       * - You can query the configuration and status information of a task with a specified ID.
       * ## QPS limit
       * The single-user QPS limit for this API is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this API appropriately.
       *
       * @param request DescribeLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePullToPushResponse
       */
      Models::DescribeLivePullToPushResponse describeLivePullToPushWithOptions(const Models::DescribeLivePullToPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a stream pulling-to-pushing task.
       *
       * @description - Queries a stream pulling-to-pushing task.
       * - You can query the configuration and status information of a task with a specified ID.
       * ## QPS limit
       * The single-user QPS limit for this API is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this API appropriately.
       *
       * @param request DescribeLivePullToPushRequest
       * @return DescribeLivePullToPushResponse
       */
      Models::DescribeLivePullToPushResponse describeLivePullToPush(const Models::DescribeLivePullToPushRequest &request);

      /**
       * @summary Queries stream pulling and pushing tasks by using fuzzy match.
       *
       * @description - Invoke this operation to query the list of stream pulling and stream ingest nodes.
       * - Supports paging query of the node list, and fuzzy search by node ID, node name, and destination stream ingest URL.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request DescribeLivePullToPushListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePullToPushListResponse
       */
      Models::DescribeLivePullToPushListResponse describeLivePullToPushListWithOptions(const Models::DescribeLivePullToPushListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries stream pulling and pushing tasks by using fuzzy match.
       *
       * @description - Invoke this operation to query the list of stream pulling and stream ingest nodes.
       * - Supports paging query of the node list, and fuzzy search by node ID, node name, and destination stream ingest URL.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request DescribeLivePullToPushListRequest
       * @return DescribeLivePullToPushListResponse
       */
      Models::DescribeLivePullToPushListResponse describeLivePullToPushList(const Models::DescribeLivePullToPushListRequest &request);

      /**
       * @summary Retrieves the download URLs of offline logs for live stream relay by calling DescribeLivePushProxyLog.
       *
       * @description - Data time granularity: 1 hour.
       * - Maximum query range: data from the last 31 days.
       * - If you do not specify StartTime or EndTime, this operation reads data from the last 24 hours by default. If you specify StartTime and EndTime, data is queried based on the specified time range.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 100 calls per second. If the limit is exceeded, API invocations are throttled, which may affect your business. Invoke this operation as needed.
       *
       * @param request DescribeLivePushProxyLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePushProxyLogResponse
       */
      Models::DescribeLivePushProxyLogResponse describeLivePushProxyLogWithOptions(const Models::DescribeLivePushProxyLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URLs of offline logs for live stream relay by calling DescribeLivePushProxyLog.
       *
       * @description - Data time granularity: 1 hour.
       * - Maximum query range: data from the last 31 days.
       * - If you do not specify StartTime or EndTime, this operation reads data from the last 24 hours by default. If you specify StartTime and EndTime, data is queried based on the specified time range.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 100 calls per second. If the limit is exceeded, API invocations are throttled, which may affect your business. Invoke this operation as needed.
       *
       * @param request DescribeLivePushProxyLogRequest
       * @return DescribeLivePushProxyLogResponse
       */
      Models::DescribeLivePushProxyLogResponse describeLivePushProxyLog(const Models::DescribeLivePushProxyLogRequest &request);

      /**
       * @summary Queries the usage data of live center relay by calling DescribeLivePushProxyUsageData.
       *
       * @description - Queries the usage data of live center relay.
       * - Maximum query span: 31 days.
       * - Minimum query granularity: 1 day.
       * - Maximum query range: data from the last 90 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLivePushProxyUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLivePushProxyUsageDataResponse
       */
      Models::DescribeLivePushProxyUsageDataResponse describeLivePushProxyUsageDataWithOptions(const Models::DescribeLivePushProxyUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage data of live center relay by calling DescribeLivePushProxyUsageData.
       *
       * @description - Queries the usage data of live center relay.
       * - Maximum query span: 31 days.
       * - Minimum query granularity: 1 day.
       * - Maximum query range: data from the last 90 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 5 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLivePushProxyUsageDataRequest
       * @return DescribeLivePushProxyUsageDataResponse
       */
      Models::DescribeLivePushProxyUsageDataResponse describeLivePushProxyUsageData(const Models::DescribeLivePushProxyUsageDataRequest &request);

      /**
       * @summary Invokes DescribeLiveRealtimeDeliveryAcc to query the number of real-time log delivery attempts.
       *
       * @description - Queries statistics on real-time log delivery attempts, including the number of successful and failed log delivery attempts.
       * - Supports queries by UID dimension.
       * - The billable count includes both successful and failed log delivery attempts.
       * ## QPS limit
       * The single-user QPS limit for this API is 100 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Invoke this API appropriately.
       *
       * @param request DescribeLiveRealtimeDeliveryAccRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRealtimeDeliveryAccResponse
       */
      Models::DescribeLiveRealtimeDeliveryAccResponse describeLiveRealtimeDeliveryAccWithOptions(const Models::DescribeLiveRealtimeDeliveryAccRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes DescribeLiveRealtimeDeliveryAcc to query the number of real-time log delivery attempts.
       *
       * @description - Queries statistics on real-time log delivery attempts, including the number of successful and failed log delivery attempts.
       * - Supports queries by UID dimension.
       * - The billable count includes both successful and failed log delivery attempts.
       * ## QPS limit
       * The single-user QPS limit for this API is 100 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Invoke this API appropriately.
       *
       * @param request DescribeLiveRealtimeDeliveryAccRequest
       * @return DescribeLiveRealtimeDeliveryAccResponse
       */
      Models::DescribeLiveRealtimeDeliveryAccResponse describeLiveRealtimeDeliveryAcc(const Models::DescribeLiveRealtimeDeliveryAccRequest &request);

      /**
       * @summary Queries the authorization status for real-time log delivery.
       *
       * @description You can call this operation to query the authorization status for real-time log delivery.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 100 calls per second per user. If you exceed this limit, throttling is triggered, which may affect your business. Plan your API calls accordingly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveRealtimeLogAuthorizedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRealtimeLogAuthorizedResponse
       */
      Models::DescribeLiveRealtimeLogAuthorizedResponse describeLiveRealtimeLogAuthorizedWithOptions(const Models::DescribeLiveRealtimeLogAuthorizedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization status for real-time log delivery.
       *
       * @description You can call this operation to query the authorization status for real-time log delivery.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 100 calls per second per user. If you exceed this limit, throttling is triggered, which may affect your business. Plan your API calls accordingly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveRealtimeLogAuthorizedRequest
       * @return DescribeLiveRealtimeLogAuthorizedResponse
       */
      Models::DescribeLiveRealtimeLogAuthorizedResponse describeLiveRealtimeLogAuthorized(const Models::DescribeLiveRealtimeLogAuthorizedRequest &request);

      /**
       * @summary Queries all recording configurations of apps under a live streaming domain.
       *
       * @description Obtain the ingest domain first, and then call this operation to query all app recording configurations under a live streaming domain.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveRecordConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRecordConfigResponse
       */
      Models::DescribeLiveRecordConfigResponse describeLiveRecordConfigWithOptions(const Models::DescribeLiveRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all recording configurations of apps under a live streaming domain.
       *
       * @description Obtain the ingest domain first, and then call this operation to query all app recording configurations under a live streaming domain.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveRecordConfigRequest
       * @return DescribeLiveRecordConfigResponse
       */
      Models::DescribeLiveRecordConfigResponse describeLiveRecordConfig(const Models::DescribeLiveRecordConfigRequest &request);

      /**
       * @summary This operation queries the recording callback configuration for a domain name.
       *
       * @description You can call this operation to query the recording callback configuration for a streaming domain name.
       * ## QPS limit
       * This operation supports up to 50 queries per second (QPS) per user. If you exceed this limit, your API calls are throttled. Throttling may affect your business operations, so make sure to stay within the specified limit.
       *
       * @param request DescribeLiveRecordNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRecordNotifyConfigResponse
       */
      Models::DescribeLiveRecordNotifyConfigResponse describeLiveRecordNotifyConfigWithOptions(const Models::DescribeLiveRecordNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries the recording callback configuration for a domain name.
       *
       * @description You can call this operation to query the recording callback configuration for a streaming domain name.
       * ## QPS limit
       * This operation supports up to 50 queries per second (QPS) per user. If you exceed this limit, your API calls are throttled. Throttling may affect your business operations, so make sure to stay within the specified limit.
       *
       * @param request DescribeLiveRecordNotifyConfigRequest
       * @return DescribeLiveRecordNotifyConfigResponse
       */
      Models::DescribeLiveRecordNotifyConfigResponse describeLiveRecordNotifyConfig(const Models::DescribeLiveRecordNotifyConfigRequest &request);

      /**
       * @summary Queries the callback records for live stream recordings stored in OSS.
       *
       * @description The China site (Chinese) QPS limit for a single user on this operation is 100 calls per second. Exceeding this limit results in throttling, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveRecordNotifyRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRecordNotifyRecordsResponse
       */
      Models::DescribeLiveRecordNotifyRecordsResponse describeLiveRecordNotifyRecordsWithOptions(const Models::DescribeLiveRecordNotifyRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the callback records for live stream recordings stored in OSS.
       *
       * @description The China site (Chinese) QPS limit for a single user on this operation is 100 calls per second. Exceeding this limit results in throttling, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveRecordNotifyRecordsRequest
       * @return DescribeLiveRecordNotifyRecordsResponse
       */
      Models::DescribeLiveRecordNotifyRecordsResponse describeLiveRecordNotifyRecords(const Models::DescribeLiveRecordNotifyRecordsRequest &request);

      /**
       * @summary Queries live-to-VOD configurations of a streaming domain.
       *
       * @description ### **QPS limit**
       * This API is limited to 1,000 queries per minute for each account. If you exceed this limit, API calls are throttled, which can affect your business.
       *
       * @param request DescribeLiveRecordVodConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRecordVodConfigsResponse
       */
      Models::DescribeLiveRecordVodConfigsResponse describeLiveRecordVodConfigsWithOptions(const Models::DescribeLiveRecordVodConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries live-to-VOD configurations of a streaming domain.
       *
       * @description ### **QPS limit**
       * This API is limited to 1,000 queries per minute for each account. If you exceed this limit, API calls are throttled, which can affect your business.
       *
       * @param request DescribeLiveRecordVodConfigsRequest
       * @return DescribeLiveRecordVodConfigsResponse
       */
      Models::DescribeLiveRecordVodConfigsResponse describeLiveRecordVodConfigs(const Models::DescribeLiveRecordVodConfigsRequest &request);

      /**
       * @summary Queries the cloud recording usage of ApsaraVideo Real-time Communication.
       *
       * @description - Queries the recording length for each specification of cloud recording on a daily basis.
       * - Supports queries at the ApsaraVideo Real-time Communication application granularity.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeLiveRtcRecordUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveRtcRecordUsageDataResponse
       */
      Models::DescribeLiveRtcRecordUsageDataResponse describeLiveRtcRecordUsageDataWithOptions(const Models::DescribeLiveRtcRecordUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud recording usage of ApsaraVideo Real-time Communication.
       *
       * @description - Queries the recording length for each specification of cloud recording on a daily basis.
       * - Supports queries at the ApsaraVideo Real-time Communication application granularity.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeLiveRtcRecordUsageDataRequest
       * @return DescribeLiveRtcRecordUsageDataResponse
       */
      Models::DescribeLiveRtcRecordUsageDataResponse describeLiveRtcRecordUsageData(const Models::DescribeLiveRtcRecordUsageDataRequest &request);

      /**
       * @summary Queries the time-shifting configurations for a specified domain name.
       *
       * @description After you obtain a streaming domain name, you can call this operation to query the time-shifting configurations for the specified domain name.
       * ## QPS limit
       * You can make up to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeLiveShiftConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveShiftConfigsResponse
       */
      Models::DescribeLiveShiftConfigsResponse describeLiveShiftConfigsWithOptions(const Models::DescribeLiveShiftConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time-shifting configurations for a specified domain name.
       *
       * @description After you obtain a streaming domain name, you can call this operation to query the time-shifting configurations for the specified domain name.
       * ## QPS limit
       * You can make up to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeLiveShiftConfigsRequest
       * @return DescribeLiveShiftConfigsResponse
       */
      Models::DescribeLiveShiftConfigsResponse describeLiveShiftConfigs(const Models::DescribeLiveShiftConfigsRequest &request);

      /**
       * @summary Queries the snapshot configurations under a streaming domain.
       *
       * @description Obtain the streaming domain first, and then call this operation to query the snapshot configurations under the streaming domain.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeLiveSnapshotConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveSnapshotConfigResponse
       */
      Models::DescribeLiveSnapshotConfigResponse describeLiveSnapshotConfigWithOptions(const Models::DescribeLiveSnapshotConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the snapshot configurations under a streaming domain.
       *
       * @description Obtain the streaming domain first, and then call this operation to query the snapshot configurations under the streaming domain.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeLiveSnapshotConfigRequest
       * @return DescribeLiveSnapshotConfigResponse
       */
      Models::DescribeLiveSnapshotConfigResponse describeLiveSnapshotConfig(const Models::DescribeLiveSnapshotConfigRequest &request);

      /**
       * @summary Queries the content moderation configurations for live streaming.
       *
       * @description - Obtain the streamer streaming domain first, and then invoke this operation to query the content moderation configurations for live streaming. This operation supports sorting in ascending and descending order.
       * - Currently, only some live centers support intelligent content moderation for live streaming. For information about the live centers that support this feature, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeLiveSnapshotDetectPornConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveSnapshotDetectPornConfigResponse
       */
      Models::DescribeLiveSnapshotDetectPornConfigResponse describeLiveSnapshotDetectPornConfigWithOptions(const Models::DescribeLiveSnapshotDetectPornConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the content moderation configurations for live streaming.
       *
       * @description - Obtain the streamer streaming domain first, and then invoke this operation to query the content moderation configurations for live streaming. This operation supports sorting in ascending and descending order.
       * - Currently, only some live centers support intelligent content moderation for live streaming. For information about the live centers that support this feature, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeLiveSnapshotDetectPornConfigRequest
       * @return DescribeLiveSnapshotDetectPornConfigResponse
       */
      Models::DescribeLiveSnapshotDetectPornConfigResponse describeLiveSnapshotDetectPornConfig(const Models::DescribeLiveSnapshotDetectPornConfigRequest &request);

      /**
       * @summary Queries the configuration for snapshot callbacks.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveSnapshotNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveSnapshotNotifyConfigResponse
       */
      Models::DescribeLiveSnapshotNotifyConfigResponse describeLiveSnapshotNotifyConfigWithOptions(const Models::DescribeLiveSnapshotNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration for snapshot callbacks.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveSnapshotNotifyConfigRequest
       * @return DescribeLiveSnapshotNotifyConfigResponse
       */
      Models::DescribeLiveSnapshotNotifyConfigResponse describeLiveSnapshotNotifyConfig(const Models::DescribeLiveSnapshotNotifyConfigRequest &request);

      /**
       * @summary Queries the authentication status of an active stream.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamAuthCheckingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamAuthCheckingResponse
       */
      Models::DescribeLiveStreamAuthCheckingResponse describeLiveStreamAuthCheckingWithOptions(const Models::DescribeLiveStreamAuthCheckingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authentication status of an active stream.
       *
       * @description You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamAuthCheckingRequest
       * @return DescribeLiveStreamAuthCheckingResponse
       */
      Models::DescribeLiveStreamAuthCheckingResponse describeLiveStreamAuthChecking(const Models::DescribeLiveStreamAuthCheckingRequest &request);

      /**
       * @summary Queries the frame rates and bitrates of an RTMP live stream within a specified time range. This operation is applicable to retrieving historical data.
       *
       * @description Queries the frame rates and bitrates of an RTMP live stream within a specified time range. This operation is applicable to retrieving historical data.
       * ## QPS limit
       * The maximum number of queries per second (QPS) per user for this operation is 50. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request DescribeLiveStreamBitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamBitRateDataResponse
       */
      Models::DescribeLiveStreamBitRateDataResponse describeLiveStreamBitRateDataWithOptions(const Models::DescribeLiveStreamBitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the frame rates and bitrates of an RTMP live stream within a specified time range. This operation is applicable to retrieving historical data.
       *
       * @description Queries the frame rates and bitrates of an RTMP live stream within a specified time range. This operation is applicable to retrieving historical data.
       * ## QPS limit
       * The maximum number of queries per second (QPS) per user for this operation is 50. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request DescribeLiveStreamBitRateDataRequest
       * @return DescribeLiveStreamBitRateDataResponse
       */
      Models::DescribeLiveStreamBitRateDataResponse describeLiveStreamBitRateData(const Models::DescribeLiveStreamBitRateDataRequest &request);

      /**
       * @summary Retrieves the real-time count of active original and transcoded streams for a specified streaming domain.
       *
       * @description Before you call this operation, obtain the streaming domain name in the console. The returned stream count includes streams encoded in H.264 and H.265 formats.
       * ## QPS limit
       * You can call this operation only one time per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamCountResponse
       */
      Models::DescribeLiveStreamCountResponse describeLiveStreamCountWithOptions(const Models::DescribeLiveStreamCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the real-time count of active original and transcoded streams for a specified streaming domain.
       *
       * @description Before you call this operation, obtain the streaming domain name in the console. The returned stream count includes streams encoded in H.264 and H.265 formats.
       * ## QPS limit
       * You can call this operation only one time per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamCountRequest
       * @return DescribeLiveStreamCountResponse
       */
      Models::DescribeLiveStreamCountResponse describeLiveStreamCount(const Models::DescribeLiveStreamCountRequest &request);

      /**
       * @summary Queries the live streaming latency.
       *
       * @description You must first obtain a streaming domain name. You can then call this operation to query the live streaming latency.
       * ## QPS limits
       * This operation supports up to 1,000 queries per second (QPS) per user. If you exceed the limit, your calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeLiveStreamDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamDelayConfigResponse
       */
      Models::DescribeLiveStreamDelayConfigResponse describeLiveStreamDelayConfigWithOptions(const Models::DescribeLiveStreamDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the live streaming latency.
       *
       * @description You must first obtain a streaming domain name. You can then call this operation to query the live streaming latency.
       * ## QPS limits
       * This operation supports up to 1,000 queries per second (QPS) per user. If you exceed the limit, your calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeLiveStreamDelayConfigRequest
       * @return DescribeLiveStreamDelayConfigResponse
       */
      Models::DescribeLiveStreamDelayConfigResponse describeLiveStreamDelayConfig(const Models::DescribeLiveStreamDelayConfigRequest &request);

      /**
       * @summary Queries the detailed audio and video frame rates and bitrates of an RTMP live stream.
       *
       * @description - Call this operation to query a set of audio and video frame rates and bitrates of an RTMP live stream within a specified time range.
       * - This operation is a monitoring data operation. The data collection and processing method differs from that used for billing. Do not use this operation to calculate usage for billing reconciliation.
       * - You can query historical data within the last 90 days.
       * - Data latency is 3 to 5 minutes.
       * - The maximum time span for a single request is 1 hour.
       *
       * @param request DescribeLiveStreamDetailFrameRateAndBitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamDetailFrameRateAndBitRateDataResponse
       */
      Models::DescribeLiveStreamDetailFrameRateAndBitRateDataResponse describeLiveStreamDetailFrameRateAndBitRateDataWithOptions(const Models::DescribeLiveStreamDetailFrameRateAndBitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed audio and video frame rates and bitrates of an RTMP live stream.
       *
       * @description - Call this operation to query a set of audio and video frame rates and bitrates of an RTMP live stream within a specified time range.
       * - This operation is a monitoring data operation. The data collection and processing method differs from that used for billing. Do not use this operation to calculate usage for billing reconciliation.
       * - You can query historical data within the last 90 days.
       * - Data latency is 3 to 5 minutes.
       * - The maximum time span for a single request is 1 hour.
       *
       * @param request DescribeLiveStreamDetailFrameRateAndBitRateDataRequest
       * @return DescribeLiveStreamDetailFrameRateAndBitRateDataResponse
       */
      Models::DescribeLiveStreamDetailFrameRateAndBitRateDataResponse describeLiveStreamDetailFrameRateAndBitRateData(const Models::DescribeLiveStreamDetailFrameRateAndBitRateDataRequest &request);

      /**
       * @summary Queries the number of historical online users for a live stream.
       *
       * @description - The data returned by this operation is delayed for an average of 2 to 5 minutes.
       * - This operation queries the number of historical online users for only Flash Video (FLV) and Real-Time Messaging Protocol (RTMP) streams.
       * - This operation does not query the number of viewers that are watching transcoded streams.
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
       * @description - The data returned by this operation is delayed for an average of 2 to 5 minutes.
       * - This operation queries the number of historical online users for only Flash Video (FLV) and Real-Time Messaging Protocol (RTMP) streams.
       * - This operation does not query the number of viewers that are watching transcoded streams.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request DescribeLiveStreamHistoryUserNumRequest
       * @return DescribeLiveStreamHistoryUserNumResponse
       */
      Models::DescribeLiveStreamHistoryUserNumResponse describeLiveStreamHistoryUserNum(const Models::DescribeLiveStreamHistoryUserNumRequest &request);

      /**
       * @summary Query primary/backup stream merge configuration.
       *
       * @description The QPS limit for a single user of this API is 100 calls per second. If this limit is exceeded, API calls will be throttled, which may affect your business. Please call this API appropriately.
       *
       * @param request DescribeLiveStreamMergeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamMergeResponse
       */
      Models::DescribeLiveStreamMergeResponse describeLiveStreamMergeWithOptions(const Models::DescribeLiveStreamMergeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query primary/backup stream merge configuration.
       *
       * @description The QPS limit for a single user of this API is 100 calls per second. If this limit is exceeded, API calls will be throttled, which may affect your business. Please call this API appropriately.
       *
       * @param request DescribeLiveStreamMergeRequest
       * @return DescribeLiveStreamMergeResponse
       */
      Models::DescribeLiveStreamMergeResponse describeLiveStreamMerge(const Models::DescribeLiveStreamMergeRequest &request);

      /**
       * @summary Queries stream-level batch data for a specified domain name. A maximum of 5,000 rows of data can be returned per query.
       *
       * @description If this is the first time you use this operation to query stream-level data for a specified domain name, <props="china">[submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live&commonQuestionId=4545&isSmart=true&iatraceid=1608439120675-2a5c48de0b84805313c708&channel=selfservice)<props="intl">[submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex) to request backend configuration before using this operation.
       * Provide the following information in the ticket:
       * - The domain name to query.
       * - The maximum number of concurrent live streams under the domain name.
       * - The maximum number of concurrent viewers per live stream.
       * - The protocol types included in client requests.
       * >Notice: This operation will no longer be maintained after September 31, 2025. Switch to the new stream-level operation [DescribeLiveUserStreamMetricData](https://help.aliyun.com/document_detail/2948552.html) promptly. The new stream-level operation does not require backend configuration..
       * ## Before you begin
       * - Online viewer counting for HLS is not supported by default.
       * - Only a single domain name can be queried at a time.
       * - Maximum large query time span: 24 hours.
       * - Minimum query granularity: 1 minute.
       * - Maximum query range: 31 days.
       * ## Rate limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveStreamMetricDetailDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamMetricDetailDataResponse
       */
      Models::DescribeLiveStreamMetricDetailDataResponse describeLiveStreamMetricDetailDataWithOptions(const Models::DescribeLiveStreamMetricDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries stream-level batch data for a specified domain name. A maximum of 5,000 rows of data can be returned per query.
       *
       * @description If this is the first time you use this operation to query stream-level data for a specified domain name, <props="china">[submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live&commonQuestionId=4545&isSmart=true&iatraceid=1608439120675-2a5c48de0b84805313c708&channel=selfservice)<props="intl">[submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex) to request backend configuration before using this operation.
       * Provide the following information in the ticket:
       * - The domain name to query.
       * - The maximum number of concurrent live streams under the domain name.
       * - The maximum number of concurrent viewers per live stream.
       * - The protocol types included in client requests.
       * >Notice: This operation will no longer be maintained after September 31, 2025. Switch to the new stream-level operation [DescribeLiveUserStreamMetricData](https://help.aliyun.com/document_detail/2948552.html) promptly. The new stream-level operation does not require backend configuration..
       * ## Before you begin
       * - Online viewer counting for HLS is not supported by default.
       * - Only a single domain name can be queried at a time.
       * - Maximum large query time span: 24 hours.
       * - Minimum query granularity: 1 minute.
       * - Maximum query range: 31 days.
       * ## Rate limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveStreamMetricDetailDataRequest
       * @return DescribeLiveStreamMetricDetailDataResponse
       */
      Models::DescribeLiveStreamMetricDetailDataResponse describeLiveStreamMetricDetailData(const Models::DescribeLiveStreamMetricDetailDataRequest &request);

      /**
       * @summary Queries the list of created monitoring sessions.
       *
       * @description First, [create a monitoring session](https://help.aliyun.com/document_detail/2848129.html). You can then call this operation to query the list of monitoring sessions. When you call this operation, ensure that the required parameters are configured.
       * ## QPS limit
       * This operation is limited to 15 queries per second (QPS) for each user. API calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeLiveStreamMonitorListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamMonitorListResponse
       */
      Models::DescribeLiveStreamMonitorListResponse describeLiveStreamMonitorListWithOptions(const Models::DescribeLiveStreamMonitorListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of created monitoring sessions.
       *
       * @description First, [create a monitoring session](https://help.aliyun.com/document_detail/2848129.html). You can then call this operation to query the list of monitoring sessions. When you call this operation, ensure that the required parameters are configured.
       * ## QPS limit
       * This operation is limited to 15 queries per second (QPS) for each user. API calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeLiveStreamMonitorListRequest
       * @return DescribeLiveStreamMonitorListResponse
       */
      Models::DescribeLiveStreamMonitorListResponse describeLiveStreamMonitorList(const Models::DescribeLiveStreamMonitorListRequest &request);

      /**
       * @summary Only data from the last 3 days can be queried.
       *
       * @description This operation only supports querying data from the last 3 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveStreamPreloadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamPreloadTasksResponse
       */
      Models::DescribeLiveStreamPreloadTasksResponse describeLiveStreamPreloadTasksWithOptions(const Models::DescribeLiveStreamPreloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Only data from the last 3 days can be queried.
       *
       * @description This operation only supports querying data from the last 3 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveStreamPreloadTasksRequest
       * @return DescribeLiveStreamPreloadTasksResponse
       */
      Models::DescribeLiveStreamPreloadTasksResponse describeLiveStreamPreloadTasks(const Models::DescribeLiveStreamPreloadTasksRequest &request);

      /**
       * @summary Queries stream ingest data at the app and stream granularity for a specified domain name.
       *
       * @description - Only a single domain name can be queried. An error is returned if you specify multiple domain names.
       * - Maximum query time range per request: 24 hours.
       * - Minimum query granularity: 1 minute.
       * - Maximum query period: 31 days.
       * - This is a monitoring data API. The data collection and processing method differs from that used for billing. Do not use this API to calculate usage for billing reconciliation.
       * ## QPS limit
       * The maximum number of queries per second (QPS) per user for this operation is 10. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Call this operation as appropriate.
       *
       * @param request DescribeLiveStreamPushMetricDetailDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamPushMetricDetailDataResponse
       */
      Models::DescribeLiveStreamPushMetricDetailDataResponse describeLiveStreamPushMetricDetailDataWithOptions(const Models::DescribeLiveStreamPushMetricDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries stream ingest data at the app and stream granularity for a specified domain name.
       *
       * @description - Only a single domain name can be queried. An error is returned if you specify multiple domain names.
       * - Maximum query time range per request: 24 hours.
       * - Minimum query granularity: 1 minute.
       * - Maximum query period: 31 days.
       * - This is a monitoring data API. The data collection and processing method differs from that used for billing. Do not use this API to calculate usage for billing reconciliation.
       * ## QPS limit
       * The maximum number of queries per second (QPS) per user for this operation is 10. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Call this operation as appropriate.
       *
       * @param request DescribeLiveStreamPushMetricDetailDataRequest
       * @return DescribeLiveStreamPushMetricDetailDataResponse
       */
      Models::DescribeLiveStreamPushMetricDetailDataResponse describeLiveStreamPushMetricDetailData(const Models::DescribeLiveStreamPushMetricDetailDataRequest &request);

      /**
       * @summary Queries the recordings of a live stream.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the recordings of a live stream.
       * The information returned by this API is organized by recording task. To get information about specific recording files within a task, use the [DescribeLiveStreamRecordIndexFiles](https://help.aliyun.com/document_detail/2847890.html) and [DescribeLiveStreamRecordIndexFile](https://help.aliyun.com/document_detail/2847889.html) APIs.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions.
       *
       * @param request DescribeLiveStreamRecordContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamRecordContentResponse
       */
      Models::DescribeLiveStreamRecordContentResponse describeLiveStreamRecordContentWithOptions(const Models::DescribeLiveStreamRecordContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recordings of a live stream.
       *
       * @description Obtain the main streaming domain, and then call this operation to query the recordings of a live stream.
       * The information returned by this API is organized by recording task. To get information about specific recording files within a task, use the [DescribeLiveStreamRecordIndexFiles](https://help.aliyun.com/document_detail/2847890.html) and [DescribeLiveStreamRecordIndexFile](https://help.aliyun.com/document_detail/2847889.html) APIs.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions.
       *
       * @param request DescribeLiveStreamRecordContentRequest
       * @return DescribeLiveStreamRecordContentResponse
       */
      Models::DescribeLiveStreamRecordContentResponse describeLiveStreamRecordContent(const Models::DescribeLiveStreamRecordContentRequest &request);

      /**
       * @summary Queries a single recording manifest.
       *
       * @description Metadata for created M3U8 manifests is retained in ApsaraVideo Live for 6 months. You can only query information about manifests created within this period. The M3U8 manifest files are stored in OSS, and their retention period is determined by your OSS storage configuration.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions.
       *
       * @param request DescribeLiveStreamRecordIndexFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamRecordIndexFileResponse
       */
      Models::DescribeLiveStreamRecordIndexFileResponse describeLiveStreamRecordIndexFileWithOptions(const Models::DescribeLiveStreamRecordIndexFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a single recording manifest.
       *
       * @description Metadata for created M3U8 manifests is retained in ApsaraVideo Live for 6 months. You can only query information about manifests created within this period. The M3U8 manifest files are stored in OSS, and their retention period is determined by your OSS storage configuration.
       * ## QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions.
       *
       * @param request DescribeLiveStreamRecordIndexFileRequest
       * @return DescribeLiveStreamRecordIndexFileResponse
       */
      Models::DescribeLiveStreamRecordIndexFileResponse describeLiveStreamRecordIndexFile(const Models::DescribeLiveStreamRecordIndexFileRequest &request);

      /**
       * @summary Queries all recording index files within a specified time period.
       *
       * @description - Information about created M3U8 index files is retained in the ApsaraVideo Live system for only 6 months. You can query only the information about index files that were created within the last 6 months.
       *  - M3U8 index files are stored in OSS. The retention period is determined by the storage configuration of OSS.
       * - By default, recording returns HTTP URLs. To use HTTPS, configure the certificate and change HTTP to HTTPS.
       * ## QPS limit
       * The QPS limit on this API is 15 calls per second per user. If this limit is exceeded, API calls are throttled, which may affect your business. Call this API at an appropriate frequency.
       *
       * @param request DescribeLiveStreamRecordIndexFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamRecordIndexFilesResponse
       */
      Models::DescribeLiveStreamRecordIndexFilesResponse describeLiveStreamRecordIndexFilesWithOptions(const Models::DescribeLiveStreamRecordIndexFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all recording index files within a specified time period.
       *
       * @description - Information about created M3U8 index files is retained in the ApsaraVideo Live system for only 6 months. You can query only the information about index files that were created within the last 6 months.
       *  - M3U8 index files are stored in OSS. The retention period is determined by the storage configuration of OSS.
       * - By default, recording returns HTTP URLs. To use HTTPS, configure the certificate and change HTTP to HTTPS.
       * ## QPS limit
       * The QPS limit on this API is 15 calls per second per user. If this limit is exceeded, API calls are throttled, which may affect your business. Call this API at an appropriate frequency.
       *
       * @param request DescribeLiveStreamRecordIndexFilesRequest
       * @return DescribeLiveStreamRecordIndexFilesResponse
       */
      Models::DescribeLiveStreamRecordIndexFilesResponse describeLiveStreamRecordIndexFiles(const Models::DescribeLiveStreamRecordIndexFilesRequest &request);

      /**
       * @summary Queries snapshot content within a specified time range.
       *
       * @description You can call this operation to query snapshot data only within the last year.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveStreamSnapshotInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamSnapshotInfoResponse
       */
      Models::DescribeLiveStreamSnapshotInfoResponse describeLiveStreamSnapshotInfoWithOptions(const Models::DescribeLiveStreamSnapshotInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries snapshot content within a specified time range.
       *
       * @description You can call this operation to query snapshot data only within the last year.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveStreamSnapshotInfoRequest
       * @return DescribeLiveStreamSnapshotInfoResponse
       */
      Models::DescribeLiveStreamSnapshotInfoResponse describeLiveStreamSnapshotInfo(const Models::DescribeLiveStreamSnapshotInfoRequest &request);

      /**
       * @summary Queries the real-time status of a single stream.
       *
       * @description After you obtain a live streaming domain name, you can call this operation to query the real-time status of a single stream. For details about the offline status, use the data returned by the stream ingest callback. This operation does not provide a breakdown of the offline status.
       * ## QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamStateResponse
       */
      Models::DescribeLiveStreamStateResponse describeLiveStreamStateWithOptions(const Models::DescribeLiveStreamStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time status of a single stream.
       *
       * @description After you obtain a live streaming domain name, you can call this operation to query the real-time status of a single stream. For details about the offline status, use the data returned by the stream ingest callback. This operation does not provide a breakdown of the offline status.
       * ## QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamStateRequest
       * @return DescribeLiveStreamStateResponse
       */
      Models::DescribeLiveStreamStateResponse describeLiveStreamState(const Models::DescribeLiveStreamStateRequest &request);

      /**
       * @summary Queries transcoding configurations.
       *
       * @description You must obtain the streaming domain before you call this operation to query the transcoding configurations.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamTranscodeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamTranscodeInfoResponse
       */
      Models::DescribeLiveStreamTranscodeInfoResponse describeLiveStreamTranscodeInfoWithOptions(const Models::DescribeLiveStreamTranscodeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries transcoding configurations.
       *
       * @description You must obtain the streaming domain before you call this operation to query the transcoding configurations.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamTranscodeInfoRequest
       * @return DescribeLiveStreamTranscodeInfoResponse
       */
      Models::DescribeLiveStreamTranscodeInfoResponse describeLiveStreamTranscodeInfo(const Models::DescribeLiveStreamTranscodeInfoRequest &request);

      /**
       * @summary Queries transcoding data for a specified domain name at the app and stream granularity.
       *
       * @description - Maximum query span: 24 hours.
       * - Minimum query granularity: 5 minutes.
       * - Maximum query range: data from the last 31 days.
       * ## QPS limit
       * The single-user QPS limit for this API is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeLiveStreamTranscodeMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamTranscodeMetricDataResponse
       */
      Models::DescribeLiveStreamTranscodeMetricDataResponse describeLiveStreamTranscodeMetricDataWithOptions(const Models::DescribeLiveStreamTranscodeMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries transcoding data for a specified domain name at the app and stream granularity.
       *
       * @description - Maximum query span: 24 hours.
       * - Minimum query granularity: 5 minutes.
       * - Maximum query range: data from the last 31 days.
       * ## QPS limit
       * The single-user QPS limit for this API is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeLiveStreamTranscodeMetricDataRequest
       * @return DescribeLiveStreamTranscodeMetricDataResponse
       */
      Models::DescribeLiveStreamTranscodeMetricDataResponse describeLiveStreamTranscodeMetricData(const Models::DescribeLiveStreamTranscodeMetricDataRequest &request);

      /**
       * @summary Queries the number of transcoding streams in real time by calling DescribeLiveStreamTranscodeStreamNum.
       *
       * @description The QPS limit for a single user on this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeLiveStreamTranscodeStreamNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamTranscodeStreamNumResponse
       */
      Models::DescribeLiveStreamTranscodeStreamNumResponse describeLiveStreamTranscodeStreamNumWithOptions(const Models::DescribeLiveStreamTranscodeStreamNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of transcoding streams in real time by calling DescribeLiveStreamTranscodeStreamNum.
       *
       * @description The QPS limit for a single user on this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeLiveStreamTranscodeStreamNumRequest
       * @return DescribeLiveStreamTranscodeStreamNumResponse
       */
      Models::DescribeLiveStreamTranscodeStreamNumResponse describeLiveStreamTranscodeStreamNum(const Models::DescribeLiveStreamTranscodeStreamNumRequest &request);

      /**
       * @summary Queries a list of watermark rules.
       *
       * @description This operation supports pagination.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamWatermarkRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamWatermarkRulesResponse
       */
      Models::DescribeLiveStreamWatermarkRulesResponse describeLiveStreamWatermarkRulesWithOptions(const Models::DescribeLiveStreamWatermarkRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of watermark rules.
       *
       * @description This operation supports pagination.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamWatermarkRulesRequest
       * @return DescribeLiveStreamWatermarkRulesResponse
       */
      Models::DescribeLiveStreamWatermarkRulesResponse describeLiveStreamWatermarkRules(const Models::DescribeLiveStreamWatermarkRulesRequest &request);

      /**
       * @summary Queries watermark templates.
       *
       * @description This operation supports paging.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamWatermarksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamWatermarksResponse
       */
      Models::DescribeLiveStreamWatermarksResponse describeLiveStreamWatermarksWithOptions(const Models::DescribeLiveStreamWatermarksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries watermark templates.
       *
       * @description This operation supports paging.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamWatermarksRequest
       * @return DescribeLiveStreamWatermarksResponse
       */
      Models::DescribeLiveStreamWatermarksResponse describeLiveStreamWatermarks(const Models::DescribeLiveStreamWatermarksRequest &request);

      /**
       * @summary Queries the live streams that are blacklisted under a streaming domain.
       *
       * @description The streaming URLs refer to the URLs for playback.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamsBlockListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsBlockListResponse
       */
      Models::DescribeLiveStreamsBlockListResponse describeLiveStreamsBlockListWithOptions(const Models::DescribeLiveStreamsBlockListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the live streams that are blacklisted under a streaming domain.
       *
       * @description The streaming URLs refer to the URLs for playback.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamsBlockListRequest
       * @return DescribeLiveStreamsBlockListResponse
       */
      Models::DescribeLiveStreamsBlockListResponse describeLiveStreamsBlockList(const Models::DescribeLiveStreamsBlockListRequest &request);

      /**
       * @summary Queries the operations performed on live streams for a specified domain name or application.
       *
       * @description The operations include all API operations that were called on live streams.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamsControlHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsControlHistoryResponse
       */
      Models::DescribeLiveStreamsControlHistoryResponse describeLiveStreamsControlHistoryWithOptions(const Models::DescribeLiveStreamsControlHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operations performed on live streams for a specified domain name or application.
       *
       * @description The operations include all API operations that were called on live streams.
       * ## QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamsControlHistoryRequest
       * @return DescribeLiveStreamsControlHistoryResponse
       */
      Models::DescribeLiveStreamsControlHistoryResponse describeLiveStreamsControlHistory(const Models::DescribeLiveStreamsControlHistoryRequest &request);

      /**
       * @summary Queries stream callback records.
       *
       * @description The QPS limit for a single user of this API operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request DescribeLiveStreamsNotifyRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsNotifyRecordsResponse
       */
      Models::DescribeLiveStreamsNotifyRecordsResponse describeLiveStreamsNotifyRecordsWithOptions(const Models::DescribeLiveStreamsNotifyRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries stream callback records.
       *
       * @description The QPS limit for a single user of this API operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request DescribeLiveStreamsNotifyRecordsRequest
       * @return DescribeLiveStreamsNotifyRecordsResponse
       */
      Models::DescribeLiveStreamsNotifyRecordsResponse describeLiveStreamsNotifyRecords(const Models::DescribeLiveStreamsNotifyRecordsRequest &request);

      /**
       * @summary Queries the callback configuration for stream ingest.
       *
       * @description You can call this API to query the webhook address and authentication information for an ingest domain.
       * ## QPS limits
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsNotifyUrlConfigResponse
       */
      Models::DescribeLiveStreamsNotifyUrlConfigResponse describeLiveStreamsNotifyUrlConfigWithOptions(const Models::DescribeLiveStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the callback configuration for stream ingest.
       *
       * @description You can call this API to query the webhook address and authentication information for an ingest domain.
       * ## QPS limits
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveStreamsNotifyUrlConfigRequest
       * @return DescribeLiveStreamsNotifyUrlConfigResponse
       */
      Models::DescribeLiveStreamsNotifyUrlConfigResponse describeLiveStreamsNotifyUrlConfig(const Models::DescribeLiveStreamsNotifyUrlConfigRequest &request);

      /**
       * @summary Queries the information about all active streams under a specified domain name or a specified application under a domain name.
       *
       * @description This operation supports the following stream types:  
       * - all: Queries all streams.
       * - raw: Queries raw streams.
       * - trans: Queries transcoded streams.
       * ## QPS limit
       * The QPS limit for a single user is 10,000 calls per minute. If the limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeLiveStreamsOnlineListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsOnlineListResponse
       */
      Models::DescribeLiveStreamsOnlineListResponse describeLiveStreamsOnlineListWithOptions(const Models::DescribeLiveStreamsOnlineListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all active streams under a specified domain name or a specified application under a domain name.
       *
       * @description This operation supports the following stream types:  
       * - all: Queries all streams.
       * - raw: Queries raw streams.
       * - trans: Queries transcoded streams.
       * ## QPS limit
       * The QPS limit for a single user is 10,000 calls per minute. If the limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeLiveStreamsOnlineListRequest
       * @return DescribeLiveStreamsOnlineListResponse
       */
      Models::DescribeLiveStreamsOnlineListResponse describeLiveStreamsOnlineList(const Models::DescribeLiveStreamsOnlineListRequest &request);

      /**
       * @summary Retrieves the historical stream ingest records of a domain name, an application under a domain name, or a specific stream within a specified time range.
       *
       * @description You can call this operation to query historical streams within the last 30 days. The returned data contains the active stream information within the specified time range. This operation supports the following sorting methods:
       * - stream_name_desc: sorts by live stream name in descending order.
       * - stream_name_asc: sorts by live stream name in ascending order.
       * - publish_time_desc: sorts by stream ingest time in descending order.
       * - publish_time_asc: sorts by stream ingest time in ascending order.
       * ## QPS limit
       * The single-user QPS limit for this operation is 3 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveStreamsPublishListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsPublishListResponse
       */
      Models::DescribeLiveStreamsPublishListResponse describeLiveStreamsPublishListWithOptions(const Models::DescribeLiveStreamsPublishListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the historical stream ingest records of a domain name, an application under a domain name, or a specific stream within a specified time range.
       *
       * @description You can call this operation to query historical streams within the last 30 days. The returned data contains the active stream information within the specified time range. This operation supports the following sorting methods:
       * - stream_name_desc: sorts by live stream name in descending order.
       * - stream_name_asc: sorts by live stream name in ascending order.
       * - publish_time_desc: sorts by stream ingest time in descending order.
       * - publish_time_asc: sorts by stream ingest time in ascending order.
       * ## QPS limit
       * The single-user QPS limit for this operation is 3 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeLiveStreamsPublishListRequest
       * @return DescribeLiveStreamsPublishListResponse
       */
      Models::DescribeLiveStreamsPublishListResponse describeLiveStreamsPublishList(const Models::DescribeLiveStreamsPublishListRequest &request);

      /**
       * @summary Queries the cumulative number of live streams at the day granularity by calling the DescribeLiveStreamsTotalCount operation.
       *
       * @description - Maximum query time span: 15 days.
       * - Maximum query time range: up to 1.5 years of historical data.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per minute. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeLiveStreamsTotalCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveStreamsTotalCountResponse
       */
      Models::DescribeLiveStreamsTotalCountResponse describeLiveStreamsTotalCountWithOptions(const Models::DescribeLiveStreamsTotalCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cumulative number of live streams at the day granularity by calling the DescribeLiveStreamsTotalCount operation.
       *
       * @description - Maximum query time span: 15 days.
       * - Maximum query time range: up to 1.5 years of historical data.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per minute. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeLiveStreamsTotalCountRequest
       * @return DescribeLiveStreamsTotalCountResponse
       */
      Models::DescribeLiveStreamsTotalCountResponse describeLiveStreamsTotalCount(const Models::DescribeLiveStreamsTotalCountRequest &request);

      /**
       * @summary Queries the tags of ApsaraVideo Live resources.
       *
       * @description You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeLiveTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveTagResourcesResponse
       */
      Models::DescribeLiveTagResourcesResponse describeLiveTagResourcesWithOptions(const Models::DescribeLiveTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of ApsaraVideo Live resources.
       *
       * @description You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeLiveTagResourcesRequest
       * @return DescribeLiveTagResourcesResponse
       */
      Models::DescribeLiveTagResourcesResponse describeLiveTagResources(const Models::DescribeLiveTagResourcesRequest &request);

      /**
       * @summary Queries the domains of a user ranked by traffic volume by calling DescribeLiveTopDomainsByFlow.
       *
       * @description - If you do not specify StartTime or EndTime, data for the current month is returned by default. You can also query data for a specified time range. Both StartTime and EndTime must be specified together.
       * - You can query data for up to 90 days.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeLiveTopDomainsByFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveTopDomainsByFlowResponse
       */
      Models::DescribeLiveTopDomainsByFlowResponse describeLiveTopDomainsByFlowWithOptions(const Models::DescribeLiveTopDomainsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domains of a user ranked by traffic volume by calling DescribeLiveTopDomainsByFlow.
       *
       * @description - If you do not specify StartTime or EndTime, data for the current month is returned by default. You can also query data for a specified time range. Both StartTime and EndTime must be specified together.
       * - You can query data for up to 90 days.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
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
       * @summary Queries the audio and video parameters of an upstream ingest stream within a specified time range.
       *
       * @description - The maximum time range for a query is 24 hours.
       * - The minimum time range for a query is 1 minute.
       * - You can query data from the last 31 days.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per minute. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this API at a reasonable rate.
       *
       * @param request DescribeLiveUpVideoAudioInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveUpVideoAudioInfoResponse
       */
      Models::DescribeLiveUpVideoAudioInfoResponse describeLiveUpVideoAudioInfoWithOptions(const Models::DescribeLiveUpVideoAudioInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the audio and video parameters of an upstream ingest stream within a specified time range.
       *
       * @description - The maximum time range for a query is 24 hours.
       * - The minimum time range for a query is 1 minute.
       * - You can query data from the last 31 days.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per minute. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this API at a reasonable rate.
       *
       * @param request DescribeLiveUpVideoAudioInfoRequest
       * @return DescribeLiveUpVideoAudioInfoResponse
       */
      Models::DescribeLiveUpVideoAudioInfoResponse describeLiveUpVideoAudioInfo(const Models::DescribeLiveUpVideoAudioInfoRequest &request);

      /**
       * @summary Retrieves the bill prediction for a live streaming user.
       *
       * @description This operation predicts your usage data for the current month. The prediction is based on the billing method that is active on the first day of the month. This operation supports predictions for monthly billing methods only and provides data at the user level. The query time range starts at 00:00 on the first day of the month and ends two hours before the current time.
       * - Monthly 95th percentile: The highest data point after the top 5% of data points are removed from the specified time range.
       * - Monthly average of daily peak bandwidth: The sum of daily peak bandwidth values divided by the number of days in the time range. The current day\\"s data is not included.
       * - Monthly 4th peak: The fourth-highest peak bandwidth in the specified time range. If the time range is less than four days, the predicted value is 0.
       * - Monthly average of daily 95th percentile peak: The sum of daily 95th percentile peak values divided by the number of days in the time range. The current day\\"s data is not included.
       * - Nightly 95th percentile: The highest data point after the top 5% of data points are removed from the specified time range.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 1. If you exceed this limit, your API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeLiveUserBillPredictionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveUserBillPredictionResponse
       */
      Models::DescribeLiveUserBillPredictionResponse describeLiveUserBillPredictionWithOptions(const Models::DescribeLiveUserBillPredictionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the bill prediction for a live streaming user.
       *
       * @description This operation predicts your usage data for the current month. The prediction is based on the billing method that is active on the first day of the month. This operation supports predictions for monthly billing methods only and provides data at the user level. The query time range starts at 00:00 on the first day of the month and ends two hours before the current time.
       * - Monthly 95th percentile: The highest data point after the top 5% of data points are removed from the specified time range.
       * - Monthly average of daily peak bandwidth: The sum of daily peak bandwidth values divided by the number of days in the time range. The current day\\"s data is not included.
       * - Monthly 4th peak: The fourth-highest peak bandwidth in the specified time range. If the time range is less than four days, the predicted value is 0.
       * - Monthly average of daily 95th percentile peak: The sum of daily 95th percentile peak values divided by the number of days in the time range. The current day\\"s data is not included.
       * - Nightly 95th percentile: The highest data point after the top 5% of data points are removed from the specified time range.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 1. If you exceed this limit, your API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
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
       * @summary Queries stream-level batch data for a specified streaming domain. Multiple protocols are supported.
       *
       * @description > Querying new connections for the HLS protocol is not supported. Concurrent connections for HLS are counted based on requests in the default format. Requests in special formats require configuration by <props="china">[submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live&commonQuestionId=4545&isSmart=true&iatraceid=1608439120675-2a5c48de0b84805313c708&channel=selfservice)<props="intl">[submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex). The default formats are as follows:
       * > - m3u8 request example: http(s)://example.aliyundoc.com/Appname/ StreamName.m3u8
       * > - ts request example: http(s)://example.aliyundoc.com/Appname/ StreamName/153xxxxxxxx_137xxxxx.ts.
       * ## Settings
       * - **Single query limit**: A maximum of 5000 rows of data can be returned per query.
       * - **Domain name query limit**: Only a single domain name is supported. An error is returned if multiple domain names are specified.
       * - **Time span limit**: The maximum query time span is 24 hours.
       * - **Time granularity limit**: The minimum query granularity is 1 minute.
       * - **Query range limit**: The maximum query range is 31 days.
       * - **Call frequency limit**: The maximum call frequency per user is 10 calls per second.
       * - **Special parameter combination**: When `DomainName` is not empty and both `AppName` and `StreamName` are set to `all`, the aggregate data for the streaming domain is returned.
       *
       * @param request DescribeLiveUserStreamMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveUserStreamMetricDataResponse
       */
      Models::DescribeLiveUserStreamMetricDataResponse describeLiveUserStreamMetricDataWithOptions(const Models::DescribeLiveUserStreamMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries stream-level batch data for a specified streaming domain. Multiple protocols are supported.
       *
       * @description > Querying new connections for the HLS protocol is not supported. Concurrent connections for HLS are counted based on requests in the default format. Requests in special formats require configuration by <props="china">[submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live&commonQuestionId=4545&isSmart=true&iatraceid=1608439120675-2a5c48de0b84805313c708&channel=selfservice)<props="intl">[submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex). The default formats are as follows:
       * > - m3u8 request example: http(s)://example.aliyundoc.com/Appname/ StreamName.m3u8
       * > - ts request example: http(s)://example.aliyundoc.com/Appname/ StreamName/153xxxxxxxx_137xxxxx.ts.
       * ## Settings
       * - **Single query limit**: A maximum of 5000 rows of data can be returned per query.
       * - **Domain name query limit**: Only a single domain name is supported. An error is returned if multiple domain names are specified.
       * - **Time span limit**: The maximum query time span is 24 hours.
       * - **Time granularity limit**: The minimum query granularity is 1 minute.
       * - **Query range limit**: The maximum query range is 31 days.
       * - **Call frequency limit**: The maximum call frequency per user is 10 calls per second.
       * - **Special parameter combination**: When `DomainName` is not empty and both `AppName` and `StreamName` are set to `all`, the aggregate data for the streaming domain is returned.
       *
       * @param request DescribeLiveUserStreamMetricDataRequest
       * @return DescribeLiveUserStreamMetricDataResponse
       */
      Models::DescribeLiveUserStreamMetricDataResponse describeLiveUserStreamMetricData(const Models::DescribeLiveUserStreamMetricDataRequest &request);

      /**
       * @summary Retrieves user tags.
       *
       * @description ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DescribeLiveUserTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveUserTagsResponse
       */
      Models::DescribeLiveUserTagsResponse describeLiveUserTagsWithOptions(const Models::DescribeLiveUserTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves user tags.
       *
       * @description ### QPS limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
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
       * @summary Queries the ownership verification content for a specified domain name.
       *
       * @description - You can call this operation to query the verification content for a single domain name.
       * - Each user can call this operation up to 30 times per second.
       * - You must specify the domain name that you want to authenticate.
       * - A successful call returns the verification content and a request ID for subsequent operations or for your records.
       *
       * @param request DescribeLiveVerifyContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLiveVerifyContentResponse
       */
      Models::DescribeLiveVerifyContentResponse describeLiveVerifyContentWithOptions(const Models::DescribeLiveVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ownership verification content for a specified domain name.
       *
       * @description - You can call this operation to query the verification content for a single domain name.
       * - Each user can call this operation up to 30 times per second.
       * - You must specify the domain name that you want to authenticate.
       * - A successful call returns the verification content and a request ID for subsequent operations or for your records.
       *
       * @param request DescribeLiveVerifyContentRequest
       * @return DescribeLiveVerifyContentResponse
       */
      Models::DescribeLiveVerifyContentResponse describeLiveVerifyContent(const Models::DescribeLiveVerifyContentRequest &request);

      /**
       * @summary DescribeMeterLiveBypassDuration.
       *
       * @description ## Operation description
       * - Maximum query span: 31 days.
       * - Minimum query granularity: 5 minutes.
       * - Maximum query range: data from the last 90 days.
       * ## QPS limit
       * A single user can call this operation up to 10 times per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Refer to [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeMeterLiveBypassDurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMeterLiveBypassDurationResponse
       */
      Models::DescribeMeterLiveBypassDurationResponse describeMeterLiveBypassDurationWithOptions(const Models::DescribeMeterLiveBypassDurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeMeterLiveBypassDuration.
       *
       * @description ## Operation description
       * - Maximum query span: 31 days.
       * - Minimum query granularity: 5 minutes.
       * - Maximum query range: data from the last 90 days.
       * ## QPS limit
       * A single user can call this operation up to 10 times per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Refer to [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeMeterLiveBypassDurationRequest
       * @return DescribeMeterLiveBypassDurationResponse
       */
      Models::DescribeMeterLiveBypassDurationResponse describeMeterLiveBypassDuration(const Models::DescribeMeterLiveBypassDurationRequest &request);

      /**
       * @summary Queries stream mixing tasks.
       *
       * @description Call the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation to create a stream mixing task. You can then call this operation to query the list of stream mixing tasks.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 5 for each user. API calls that exceed this limit are throttled. This can affect your business. Plan your API calls accordingly.
       *
       * @param request DescribeMixStreamListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMixStreamListResponse
       */
      Models::DescribeMixStreamListResponse describeMixStreamListWithOptions(const Models::DescribeMixStreamListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries stream mixing tasks.
       *
       * @description Call the [CreateMixStream](https://help.aliyun.com/document_detail/2848087.html) operation to create a stream mixing task. You can then call this operation to query the list of stream mixing tasks.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 5 for each user. API calls that exceed this limit are throttled. This can affect your business. Plan your API calls accordingly.
       *
       * @param request DescribeMixStreamListRequest
       * @return DescribeMixStreamListResponse
       */
      Models::DescribeMixStreamListResponse describeMixStreamList(const Models::DescribeMixStreamListRequest &request);

      /**
       * @summary Retrieves the first frame latency composition within a specified time period.
       *
       * @description Queries the first frame latency composition within a specified time range. QPS limit: The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency. For more information, see QPS limit.
       *
       * @param tmpReq DescribeRTSNativeSDKFirstFrameCostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRTSNativeSDKFirstFrameCostResponse
       */
      Models::DescribeRTSNativeSDKFirstFrameCostResponse describeRTSNativeSDKFirstFrameCostWithOptions(const Models::DescribeRTSNativeSDKFirstFrameCostRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the first frame latency composition within a specified time period.
       *
       * @description Queries the first frame latency composition within a specified time range. QPS limit: The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency. For more information, see QPS limit.
       *
       * @param request DescribeRTSNativeSDKFirstFrameCostRequest
       * @return DescribeRTSNativeSDKFirstFrameCostResponse
       */
      Models::DescribeRTSNativeSDKFirstFrameCostResponse describeRTSNativeSDKFirstFrameCost(const Models::DescribeRTSNativeSDKFirstFrameCostRequest &request);

      /**
       * @summary Retrieves the average first frame delay within a specified time range.
       *
       * @description Queries the first frame delay within a specified time range.
       * QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see QPS limit.
       *
       * @param tmpReq DescribeRTSNativeSDKFirstFrameDelayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRTSNativeSDKFirstFrameDelayResponse
       */
      Models::DescribeRTSNativeSDKFirstFrameDelayResponse describeRTSNativeSDKFirstFrameDelayWithOptions(const Models::DescribeRTSNativeSDKFirstFrameDelayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the average first frame delay within a specified time range.
       *
       * @description Queries the first frame delay within a specified time range.
       * QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see QPS limit.
       *
       * @param request DescribeRTSNativeSDKFirstFrameDelayRequest
       * @return DescribeRTSNativeSDKFirstFrameDelayResponse
       */
      Models::DescribeRTSNativeSDKFirstFrameDelayResponse describeRTSNativeSDKFirstFrameDelay(const Models::DescribeRTSNativeSDKFirstFrameDelayRequest &request);

      /**
       * @summary Queries the reasons for playback failures (in the form of status codes) within a specified time period.
       *
       * @description Queries the reasons for playback failures (in the form of status codes) within a specified time range. QPS limit: The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency. For more information, refer to QPS limits.
       *
       * @param tmpReq DescribeRTSNativeSDKPlayFailStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRTSNativeSDKPlayFailStatusResponse
       */
      Models::DescribeRTSNativeSDKPlayFailStatusResponse describeRTSNativeSDKPlayFailStatusWithOptions(const Models::DescribeRTSNativeSDKPlayFailStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the reasons for playback failures (in the form of status codes) within a specified time period.
       *
       * @description Queries the reasons for playback failures (in the form of status codes) within a specified time range. QPS limit: The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency. For more information, refer to QPS limits.
       *
       * @param request DescribeRTSNativeSDKPlayFailStatusRequest
       * @return DescribeRTSNativeSDKPlayFailStatusResponse
       */
      Models::DescribeRTSNativeSDKPlayFailStatusResponse describeRTSNativeSDKPlayFailStatus(const Models::DescribeRTSNativeSDKPlayFailStatusRequest &request);

      /**
       * @summary Retrieves the playback duration within a specified time range.
       *
       * @description Queries the playback duration within a specified time range. QPS limit: The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Use this operation appropriately. For more information, refer to QPS limits.
       *
       * @param tmpReq DescribeRTSNativeSDKPlayTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRTSNativeSDKPlayTimeResponse
       */
      Models::DescribeRTSNativeSDKPlayTimeResponse describeRTSNativeSDKPlayTimeWithOptions(const Models::DescribeRTSNativeSDKPlayTimeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the playback duration within a specified time range.
       *
       * @description Queries the playback duration within a specified time range. QPS limit: The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Use this operation appropriately. For more information, refer to QPS limits.
       *
       * @param request DescribeRTSNativeSDKPlayTimeRequest
       * @return DescribeRTSNativeSDKPlayTimeResponse
       */
      Models::DescribeRTSNativeSDKPlayTimeResponse describeRTSNativeSDKPlayTime(const Models::DescribeRTSNativeSDKPlayTimeRequest &request);

      /**
       * @summary Retrieves the playback count within a specified time period, including the total count and the successful count.
       *
       * @description QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, refer to QPS limit.
       *
       * @param tmpReq DescribeRTSNativeSDKVvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRTSNativeSDKVvDataResponse
       */
      Models::DescribeRTSNativeSDKVvDataResponse describeRTSNativeSDKVvDataWithOptions(const Models::DescribeRTSNativeSDKVvDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the playback count within a specified time period, including the total count and the successful count.
       *
       * @description QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, refer to QPS limit.
       *
       * @param request DescribeRTSNativeSDKVvDataRequest
       * @return DescribeRTSNativeSDKVvDataResponse
       */
      Models::DescribeRTSNativeSDKVvDataResponse describeRTSNativeSDKVvData(const Models::DescribeRTSNativeSDKVvDataRequest &request);

      /**
       * @summary Queries the cloud recording files and task information for RTC.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeRtcCloudRecordingFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcCloudRecordingFilesResponse
       */
      Models::DescribeRtcCloudRecordingFilesResponse describeRtcCloudRecordingFilesWithOptions(const Models::DescribeRtcCloudRecordingFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud recording files and task information for RTC.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeRtcCloudRecordingFilesRequest
       * @return DescribeRtcCloudRecordingFilesResponse
       */
      Models::DescribeRtcCloudRecordingFilesResponse describeRtcCloudRecordingFiles(const Models::DescribeRtcCloudRecordingFilesRequest &request);

      /**
       * @summary Queries a cloud transcoding task.
       *
       * @param request DescribeRtcCloudTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcCloudTranscodeResponse
       */
      Models::DescribeRtcCloudTranscodeResponse describeRtcCloudTranscodeWithOptions(const Models::DescribeRtcCloudTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a cloud transcoding task.
       *
       * @param request DescribeRtcCloudTranscodeRequest
       * @return DescribeRtcCloudTranscodeResponse
       */
      Models::DescribeRtcCloudTranscodeResponse describeRtcCloudTranscode(const Models::DescribeRtcCloudTranscodeRequest &request);

      /**
       * @summary Queries the event subscription for stream mixing and forwarding.
       *
       * @description - This operation queries the event subscription for stream mixing and forwarding.
       * - Before calling this operation, you must have already called CreateRtcMPUEventSub to create a stream mixing and forwarding event subscription.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeRtcMPUEventSubRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRtcMPUEventSubResponse
       */
      Models::DescribeRtcMPUEventSubResponse describeRtcMPUEventSubWithOptions(const Models::DescribeRtcMPUEventSubRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the event subscription for stream mixing and forwarding.
       *
       * @description - This operation queries the event subscription for stream mixing and forwarding.
       * - Before calling this operation, you must have already called CreateRtcMPUEventSub to create a stream mixing and forwarding event subscription.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeRtcMPUEventSubRequest
       * @return DescribeRtcMPUEventSubResponse
       */
      Models::DescribeRtcMPUEventSubResponse describeRtcMPUEventSub(const Models::DescribeRtcMPUEventSubRequest &request);

      /**
       * @summary Queries a playlist.
       *
       * @description Before calling this operation, you must add a show to the playlist. To add a show by calling an API operation, see [Add a show to a playlist](https://help.aliyun.com/document_detail/2848051.html).
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled. This may affect your business operations. Plan your calls accordingly.
       *
       * @param request DescribeShowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeShowListResponse
       */
      Models::DescribeShowListResponse describeShowListWithOptions(const Models::DescribeShowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a playlist.
       *
       * @description Before calling this operation, you must add a show to the playlist. To add a show by calling an API operation, see [Add a show to a playlist](https://help.aliyun.com/document_detail/2848051.html).
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled. This may affect your business operations. Plan your calls accordingly.
       *
       * @param request DescribeShowListRequest
       * @return DescribeShowListResponse
       */
      Models::DescribeShowListResponse describeShowList(const Models::DescribeShowListRequest &request);

      /**
       * @summary Queries region blocking configurations of a specific live stream.
       *
       * @description ## QPS limit
       * You can call this operation up to 50 times per second per user. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeStreamLocationBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamLocationBlockResponse
       */
      Models::DescribeStreamLocationBlockResponse describeStreamLocationBlockWithOptions(const Models::DescribeStreamLocationBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries region blocking configurations of a specific live stream.
       *
       * @description ## QPS limit
       * You can call this operation up to 50 times per second per user. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeStreamLocationBlockRequest
       * @return DescribeStreamLocationBlockResponse
       */
      Models::DescribeStreamLocationBlockResponse describeStreamLocationBlock(const Models::DescribeStreamLocationBlockRequest &request);

      /**
       * @summary Retrieves the layout settings of a virtual studio.
       *
       * @description Before calling this operation, add layout settings for a virtual studio by calling the [AddStudioLayout](https://help.aliyun.com/document_detail/2848062.html) operation. Then call this operation to retrieve the virtual studio layout settings.
       * ## QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeStudioLayoutsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStudioLayoutsResponse
       */
      Models::DescribeStudioLayoutsResponse describeStudioLayoutsWithOptions(const Models::DescribeStudioLayoutsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the layout settings of a virtual studio.
       *
       * @description Before calling this operation, add layout settings for a virtual studio by calling the [AddStudioLayout](https://help.aliyun.com/document_detail/2848062.html) operation. Then call this operation to retrieve the virtual studio layout settings.
       * ## QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeStudioLayoutsRequest
       * @return DescribeStudioLayoutsResponse
       */
      Models::DescribeStudioLayoutsResponse describeStudioLayouts(const Models::DescribeStudioLayoutsRequest &request);

      /**
       * @summary This operation queries stream pulling information for a specified Toutiao live stream.
       *
       * @description You can call this API to query stream pulling information for a specified Toutiao live stream.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 100. If you exceed this limit, API calls are throttled. This may affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeToutiaoLivePlayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeToutiaoLivePlayResponse
       */
      Models::DescribeToutiaoLivePlayResponse describeToutiaoLivePlayWithOptions(const Models::DescribeToutiaoLivePlayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries stream pulling information for a specified Toutiao live stream.
       *
       * @description You can call this API to query stream pulling information for a specified Toutiao live stream.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 100. If you exceed this limit, API calls are throttled. This may affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeToutiaoLivePlayRequest
       * @return DescribeToutiaoLivePlayResponse
       */
      Models::DescribeToutiaoLivePlayResponse describeToutiaoLivePlay(const Models::DescribeToutiaoLivePlayRequest &request);

      /**
       * @summary Queries the stream ingest information for a specified Toutiao live stream.
       *
       * @description You can call this API to query the stream ingest information for a specified Toutiao live stream.
       * ## QPS limits
       * The QPS limit for this API is 100 calls per second per user. Calls that exceed this limit are throttled, which may impact your business. We recommend that you call the API within this limit. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeToutiaoLivePublishRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeToutiaoLivePublishResponse
       */
      Models::DescribeToutiaoLivePublishResponse describeToutiaoLivePublishWithOptions(const Models::DescribeToutiaoLivePublishRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stream ingest information for a specified Toutiao live stream.
       *
       * @description You can call this API to query the stream ingest information for a specified Toutiao live stream.
       * ## QPS limits
       * The QPS limit for this API is 100 calls per second per user. Calls that exceed this limit are throttled, which may impact your business. We recommend that you call the API within this limit. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
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
       * @summary Queries the daily peak upstream bandwidth of a user.
       *
       * @description Calls the operation to query the daily peak upstream bandwidth of a user.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user for this operation is 5. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpBpsPeakDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpBpsPeakDataResponse
       */
      Models::DescribeUpBpsPeakDataResponse describeUpBpsPeakDataWithOptions(const Models::DescribeUpBpsPeakDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the daily peak upstream bandwidth of a user.
       *
       * @description Calls the operation to query the daily peak upstream bandwidth of a user.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user for this operation is 5. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpBpsPeakDataRequest
       * @return DescribeUpBpsPeakDataResponse
       */
      Models::DescribeUpBpsPeakDataResponse describeUpBpsPeakData(const Models::DescribeUpBpsPeakDataRequest &request);

      /**
       * @summary Queries the daily peak upstream bandwidth of a specific dedicated line for a user.
       *
       * @description Calls the operation to query the daily peak upstream bandwidth of a specific dedicated line for a user.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 5 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpBpsPeakOfLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpBpsPeakOfLineResponse
       */
      Models::DescribeUpBpsPeakOfLineResponse describeUpBpsPeakOfLineWithOptions(const Models::DescribeUpBpsPeakOfLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the daily peak upstream bandwidth of a specific dedicated line for a user.
       *
       * @description Calls the operation to query the daily peak upstream bandwidth of a specific dedicated line for a user.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 5 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpBpsPeakOfLineRequest
       * @return DescribeUpBpsPeakOfLineResponse
       */
      Models::DescribeUpBpsPeakOfLineResponse describeUpBpsPeakOfLine(const Models::DescribeUpBpsPeakOfLineRequest &request);

      /**
       * @summary Queries the daily peak number of concurrent upstream ingest streams for a user.
       *
       * @description Calls the operation to query the daily peak number of concurrent upstream ingest streams for a user.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpPeakPublishStreamDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpPeakPublishStreamDataResponse
       */
      Models::DescribeUpPeakPublishStreamDataResponse describeUpPeakPublishStreamDataWithOptions(const Models::DescribeUpPeakPublishStreamDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the daily peak number of concurrent upstream ingest streams for a user.
       *
       * @description Calls the operation to query the daily peak number of concurrent upstream ingest streams for a user.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request DescribeUpPeakPublishStreamDataRequest
       * @return DescribeUpPeakPublishStreamDataResponse
       */
      Models::DescribeUpPeakPublishStreamDataResponse describeUpPeakPublishStreamData(const Models::DescribeUpPeakPublishStreamDataRequest &request);

      /**
       * @summary Call DisableLiveRealtimeLogDelivery to pause real-time log delivery for a domain name.
       *
       * @description This operation pauses real-time log delivery for a specified streaming domain. Before you call this operation, you must specify a streaming domain that has real-time log delivery enabled. <props="china">Currently, this feature is available only for streaming domains. To push upstream real-time logs from an ingest domain, you must [submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live\\&commonQuestionId=4545\\&isSmart=true\\&iatraceid=1608439120675-2a5c48de0b84805313c708\\&channel=selfservice). <props="intl">Currently, this feature is available only for streaming domains. To push upstream real-time logs from an ingest domain, you must [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## QPS limit
       * A single user can make up to 6,000 queries per second (QPS) to this API. If you exceed this limit, API calls are throttled, which can affect your business. We recommend that you call this API at a reasonable rate.
       *
       * @param request DisableLiveRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableLiveRealtimeLogDeliveryResponse
       */
      Models::DisableLiveRealtimeLogDeliveryResponse disableLiveRealtimeLogDeliveryWithOptions(const Models::DisableLiveRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DisableLiveRealtimeLogDelivery to pause real-time log delivery for a domain name.
       *
       * @description This operation pauses real-time log delivery for a specified streaming domain. Before you call this operation, you must specify a streaming domain that has real-time log delivery enabled. <props="china">Currently, this feature is available only for streaming domains. To push upstream real-time logs from an ingest domain, you must [submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live\\&commonQuestionId=4545\\&isSmart=true\\&iatraceid=1608439120675-2a5c48de0b84805313c708\\&channel=selfservice). <props="intl">Currently, this feature is available only for streaming domains. To push upstream real-time logs from an ingest domain, you must [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## QPS limit
       * A single user can make up to 6,000 queries per second (QPS) to this API. If you exceed this limit, API calls are throttled, which can affect your business. We recommend that you call this API at a reasonable rate.
       *
       * @param request DisableLiveRealtimeLogDeliveryRequest
       * @return DisableLiveRealtimeLogDeliveryResponse
       */
      Models::DisableLiveRealtimeLogDeliveryResponse disableLiveRealtimeLogDelivery(const Models::DisableLiveRealtimeLogDeliveryRequest &request);

      /**
       * @summary Dynamically updates a watermark.
       *
       * @description Dynamically updating a watermark involves replacing the watermark template ID during a live stream. Before you call this operation, you must obtain the ID of the watermark template that you want to use. To obtain the IDs of available watermark templates, call the [DescribeLiveStreamWatermarks](https://help.aliyun.com/document_detail/2848102.html) operation.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DynamicUpdateWaterMarkStreamRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DynamicUpdateWaterMarkStreamRuleResponse
       */
      Models::DynamicUpdateWaterMarkStreamRuleResponse dynamicUpdateWaterMarkStreamRuleWithOptions(const Models::DynamicUpdateWaterMarkStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dynamically updates a watermark.
       *
       * @description Dynamically updating a watermark involves replacing the watermark template ID during a live stream. Before you call this operation, you must obtain the ID of the watermark template that you want to use. To obtain the IDs of available watermark templates, call the [DescribeLiveStreamWatermarks](https://help.aliyun.com/document_detail/2848102.html) operation.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request DynamicUpdateWaterMarkStreamRuleRequest
       * @return DynamicUpdateWaterMarkStreamRuleResponse
       */
      Models::DynamicUpdateWaterMarkStreamRuleResponse dynamicUpdateWaterMarkStreamRule(const Models::DynamicUpdateWaterMarkStreamRuleRequest &request);

      /**
       * @summary Edits a playlist.
       *
       * @description This operation performs a full edit. You can use this operation to edit configuration information or replace multiple playlist items.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled. This throttling can affect your business. Call this API within the specified limit.
       *
       * @param request EditPlaylistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditPlaylistResponse
       */
      Models::EditPlaylistResponse editPlaylistWithOptions(const Models::EditPlaylistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a playlist.
       *
       * @description This operation performs a full edit. You can use this operation to edit configuration information or replace multiple playlist items.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled. This throttling can affect your business. Call this API within the specified limit.
       *
       * @param request EditPlaylistRequest
       * @return EditPlaylistResponse
       */
      Models::EditPlaylistResponse editPlaylist(const Models::EditPlaylistRequest &request);

      /**
       * @summary Adds a video clip task.
       *
       * @description This operation allows you to add a video clip task by specifying CasterId and ShowId.
       * After a video clip task is added, no automatic notification is sent. You can call the [GetEditingJobInfo](https://help.aliyun.com/document_detail/2848059.html) operation to query the task status.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request EditShowAndReplaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditShowAndReplaceResponse
       */
      Models::EditShowAndReplaceResponse editShowAndReplaceWithOptions(const Models::EditShowAndReplaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a video clip task.
       *
       * @description This operation allows you to add a video clip task by specifying CasterId and ShowId.
       * After a video clip task is added, no automatic notification is sent. You can call the [GetEditingJobInfo](https://help.aliyun.com/document_detail/2848059.html) operation to query the task status.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request EditShowAndReplaceRequest
       * @return EditShowAndReplaceResponse
       */
      Models::EditShowAndReplaceResponse editShowAndReplace(const Models::EditShowAndReplaceRequest &request);

      /**
       * @summary Switches a production studio to the standby resource.
       *
       * @description You can call this operation to urgently switch a specified scene to the standby video. This operation applies only to Program (PGM) scenes.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 per user. If you exceed this limit, API calls are throttled, which may impact your business.
       *
       * @param request EffectCasterUrgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EffectCasterUrgentResponse
       */
      Models::EffectCasterUrgentResponse effectCasterUrgentWithOptions(const Models::EffectCasterUrgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches a production studio to the standby resource.
       *
       * @description You can call this operation to urgently switch a specified scene to the standby video. This operation applies only to Program (PGM) scenes.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 per user. If you exceed this limit, API calls are throttled, which may impact your business.
       *
       * @param request EffectCasterUrgentRequest
       * @return EffectCasterUrgentResponse
       */
      Models::EffectCasterUrgentResponse effectCasterUrgent(const Models::EffectCasterUrgentRequest &request);

      /**
       * @summary Update the standby video of a production studio.
       *
       * @description This operation adds a video resource to a specified scenario. The resource becomes active when it is referenced by the scenario.
       * ## QPS limits
       * The queries per second (QPS) limit for each user is 10. If you exceed this limit, API calls are throttled. Throttling may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request EffectCasterVideoResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EffectCasterVideoResourceResponse
       */
      Models::EffectCasterVideoResourceResponse effectCasterVideoResourceWithOptions(const Models::EffectCasterVideoResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the standby video of a production studio.
       *
       * @description This operation adds a video resource to a specified scenario. The resource becomes active when it is referenced by the scenario.
       * ## QPS limits
       * The queries per second (QPS) limit for each user is 10. If you exceed this limit, API calls are throttled. Throttling may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request EffectCasterVideoResourceRequest
       * @return EffectCasterVideoResourceResponse
       */
      Models::EffectCasterVideoResourceResponse effectCasterVideoResource(const Models::EffectCasterVideoResourceRequest &request);

      /**
       * @summary Call the EnableLiveRealtimeLogDelivery operation to enable real-time log delivery for a domain name.
       *
       * @description <props="china">Currently, you can configure only streaming domains. To deliver real-time logs for ingest domains, [submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live\\&commonQuestionId=4545\\&isSmart=true\\&iatraceid=1608439120675-2a5c48de0b84805313c708\\&channel=selfservice). <props="intl">Currently, you can configure only streaming domains. To deliver real-time logs for ingest domains, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 6,000 calls per minute. If you exceed the limit, API calls are throttled, which can affect your business. Call this operation at a reasonable rate.
       *
       * @param request EnableLiveRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableLiveRealtimeLogDeliveryResponse
       */
      Models::EnableLiveRealtimeLogDeliveryResponse enableLiveRealtimeLogDeliveryWithOptions(const Models::EnableLiveRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the EnableLiveRealtimeLogDelivery operation to enable real-time log delivery for a domain name.
       *
       * @description <props="china">Currently, you can configure only streaming domains. To deliver real-time logs for ingest domains, [submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live\\&commonQuestionId=4545\\&isSmart=true\\&iatraceid=1608439120675-2a5c48de0b84805313c708\\&channel=selfservice). <props="intl">Currently, you can configure only streaming domains. To deliver real-time logs for ingest domains, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 6,000 calls per minute. If you exceed the limit, API calls are throttled, which can affect your business. Call this operation at a reasonable rate.
       *
       * @param request EnableLiveRealtimeLogDeliveryRequest
       * @return EnableLiveRealtimeLogDeliveryResponse
       */
      Models::EnableLiveRealtimeLogDeliveryResponse enableLiveRealtimeLogDelivery(const Models::EnableLiveRealtimeLogDeliveryRequest &request);

      /**
       * @summary Disables stream ingest for a specified stream. You can preset a time to resume the stream.
       *
       * @description Calls this operation to disable stream ingest for a specified stream. You can preset a time to resume the stream. If no preset time is specified, call the [ResumeLiveStream](https://help.aliyun.com/document_detail/2847831.html) operation to resume the live stream. This operation currently supports only publisher (streamer ingest).
       * > - This operation disables live streams by adding them to a blacklist. The upper limit is 10,000 streams. If this limit is exceeded, the disable operation fails. Monitor the number of currently disabled streams. Call the [DescribeLiveStreamsBlockList](https://help.aliyun.com/document_detail/2847825.html) operation to query the number of disabled streams.
       * > - If you only interrupt a live stream without adding it to the blacklist, the stream does not count toward the 10,000-stream blacklist quota.
       * ## QPS limit
       * The maximum queries per second (QPS) per user for this operation is 20. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ForbidLiveStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForbidLiveStreamResponse
       */
      Models::ForbidLiveStreamResponse forbidLiveStreamWithOptions(const Models::ForbidLiveStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables stream ingest for a specified stream. You can preset a time to resume the stream.
       *
       * @description Calls this operation to disable stream ingest for a specified stream. You can preset a time to resume the stream. If no preset time is specified, call the [ResumeLiveStream](https://help.aliyun.com/document_detail/2847831.html) operation to resume the live stream. This operation currently supports only publisher (streamer ingest).
       * > - This operation disables live streams by adding them to a blacklist. The upper limit is 10,000 streams. If this limit is exceeded, the disable operation fails. Monitor the number of currently disabled streams. Call the [DescribeLiveStreamsBlockList](https://help.aliyun.com/document_detail/2847825.html) operation to query the number of disabled streams.
       * > - If you only interrupt a live stream without adding it to the blacklist, the stream does not count toward the 10,000-stream blacklist quota.
       * ## QPS limit
       * The maximum queries per second (QPS) per user for this operation is 20. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ForbidLiveStreamRequest
       * @return ForbidLiveStreamResponse
       */
      Models::ForbidLiveStreamResponse forbidLiveStream(const Models::ForbidLiveStreamRequest &request);

      /**
       * @summary Retrieves all custom stream mix templates.
       *
       * @description You can call this operation to retrieve all custom stream mix templates. The operation returns a list of template names and template configurations.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If this limit is exceeded, throttling is triggered, which may affect your business. We recommend that you are aware of this limit when you call this operation.
       *
       * @param request GetAllCustomTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAllCustomTemplatesResponse
       */
      Models::GetAllCustomTemplatesResponse getAllCustomTemplatesWithOptions(const Models::GetAllCustomTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all custom stream mix templates.
       *
       * @description You can call this operation to retrieve all custom stream mix templates. The operation returns a list of template names and template configurations.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If this limit is exceeded, throttling is triggered, which may affect your business. We recommend that you are aware of this limit when you call this operation.
       *
       * @param request GetAllCustomTemplatesRequest
       * @return GetAllCustomTemplatesResponse
       */
      Models::GetAllCustomTemplatesResponse getAllCustomTemplates(const Models::GetAllCustomTemplatesRequest &request);

      /**
       * @summary Retrieves a custom stream mixing template.
       *
       * @description First, obtain the name of the custom template that you want to query. Then, call this operation to retrieve the custom stream mixing template.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 per user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request GetCustomTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomTemplateResponse
       */
      Models::GetCustomTemplateResponse getCustomTemplateWithOptions(const Models::GetCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a custom stream mixing template.
       *
       * @description First, obtain the name of the custom template that you want to query. Then, call this operation to retrieve the custom stream mixing template.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 per user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request GetCustomTemplateRequest
       * @return GetCustomTemplateResponse
       */
      Models::GetCustomTemplateResponse getCustomTemplate(const Models::GetCustomTemplateRequest &request);

      /**
       * @summary Queries the details of an edge transcoding job.
       *
       * @description To call this API operation, you must have permissions for the edge transcoding service.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user on this API is 6,000 calls per minute. API calls that exceed this limit are throttled. This may affect your business. We recommend that you call the API at a reasonable rate.
       *
       * @param request GetEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeTranscodeJobResponse
       */
      Models::GetEdgeTranscodeJobResponse getEdgeTranscodeJobWithOptions(const Models::GetEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an edge transcoding job.
       *
       * @description To call this API operation, you must have permissions for the edge transcoding service.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user on this API is 6,000 calls per minute. API calls that exceed this limit are throttled. This may affect your business. We recommend that you call the API at a reasonable rate.
       *
       * @param request GetEdgeTranscodeJobRequest
       * @return GetEdgeTranscodeJobResponse
       */
      Models::GetEdgeTranscodeJobResponse getEdgeTranscodeJob(const Models::GetEdgeTranscodeJobRequest &request);

      /**
       * @summary Queries the details of an edge transcoding template.
       *
       * @description - This operation queries the details of an edge transcoding template.
       * - You must have permissions to access the edge transcoding service before you can call this operation.
       * ## QPS limit
       * The single-user QPS limit for this operation is 6,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request GetEdgeTranscodeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEdgeTranscodeTemplateResponse
       */
      Models::GetEdgeTranscodeTemplateResponse getEdgeTranscodeTemplateWithOptions(const Models::GetEdgeTranscodeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an edge transcoding template.
       *
       * @description - This operation queries the details of an edge transcoding template.
       * - You must have permissions to access the edge transcoding service before you can call this operation.
       * ## QPS limit
       * The single-user QPS limit for this operation is 6,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request GetEdgeTranscodeTemplateRequest
       * @return GetEdgeTranscodeTemplateResponse
       */
      Models::GetEdgeTranscodeTemplateResponse getEdgeTranscodeTemplate(const Models::GetEdgeTranscodeTemplateRequest &request);

      /**
       * @summary Queries the information about a video clip task.
       *
       * @description - This operation allows you to query information about a video clip task for a specified CasterId and ShowId. Make sure that the parameters are set correctly when you call this operation.
       * - If you specify the ShowId request parameter, the response returns the video clip task information for the specified show in the playlist.
       * - If you do not specify the ShowId request parameter, the response returns the video clip task information for the entire playlist.
       * ### QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request GetEditingJobInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEditingJobInfoResponse
       */
      Models::GetEditingJobInfoResponse getEditingJobInfoWithOptions(const Models::GetEditingJobInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a video clip task.
       *
       * @description - This operation allows you to query information about a video clip task for a specified CasterId and ShowId. Make sure that the parameters are set correctly when you call this operation.
       * - If you specify the ShowId request parameter, the response returns the video clip task information for the specified show in the playlist.
       * - If you do not specify the ShowId request parameter, the response returns the video clip task information for the entire playlist.
       * ### QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request GetEditingJobInfoRequest
       * @return GetEditingJobInfoResponse
       */
      Models::GetEditingJobInfoResponse getEditingJobInfo(const Models::GetEditingJobInfoRequest &request);

      /**
       * @summary You can call the GetMessageApp operation to retrieve the details of a specified interactive message application.
       *
       * @description ## QPS limits
       * The queries per second (QPS) limit for a single user is 100. If you exceed this limit, API calls are throttled, which may affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageAppResponse
       */
      Models::GetMessageAppResponse getMessageAppWithOptions(const Models::GetMessageAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the GetMessageApp operation to retrieve the details of a specified interactive message application.
       *
       * @description ## QPS limits
       * The queries per second (QPS) limit for a single user is 100. If you exceed this limit, API calls are throttled, which may affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageAppRequest
       * @return GetMessageAppResponse
       */
      Models::GetMessageAppResponse getMessageApp(const Models::GetMessageAppRequest &request);

      /**
       * @summary Call GetMessageGroup to retrieve message group details.
       *
       * @description ## Usage notes
       * The QPS limit for this API is 100 queries per second per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageGroupResponse
       */
      Models::GetMessageGroupResponse getMessageGroupWithOptions(const Models::GetMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call GetMessageGroup to retrieve message group details.
       *
       * @description ## Usage notes
       * The QPS limit for this API is 100 queries per second per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageGroupRequest
       * @return GetMessageGroupResponse
       */
      Models::GetMessageGroupResponse getMessageGroup(const Models::GetMessageGroupRequest &request);

      /**
       * @summary Call GetMessageToken to obtain a persistent connection token. The client can use this token to communicate with various atomic capabilities through the LWP protocol via persistent connection.
       *
       * @description ## Usage notes
       * First obtain the client UserId, DeviceId, and DeviceType information, then pass them to the server. The server uses this interface to obtain the authentication token and returns it to the client. Different users need to use different UserIds, and different terminal devices need to use different DeviceIds.
       * ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If you exceed this limit, API calls will be throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageTokenResponse
       */
      Models::GetMessageTokenResponse getMessageTokenWithOptions(const Models::GetMessageTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call GetMessageToken to obtain a persistent connection token. The client can use this token to communicate with various atomic capabilities through the LWP protocol via persistent connection.
       *
       * @description ## Usage notes
       * First obtain the client UserId, DeviceId, and DeviceType information, then pass them to the server. The server uses this interface to obtain the authentication token and returns it to the client. Different users need to use different UserIds, and different terminal devices need to use different DeviceIds.
       * ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If you exceed this limit, API calls will be throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request GetMessageTokenRequest
       * @return GetMessageTokenResponse
       */
      Models::GetMessageTokenResponse getMessageToken(const Models::GetMessageTokenRequest &request);

      /**
       * @summary 获取转码任务状态
       *
       * @param request GetTranscodeTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranscodeTaskStatusResponse
       */
      Models::GetTranscodeTaskStatusResponse getTranscodeTaskStatusWithOptions(const Models::GetTranscodeTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取转码任务状态
       *
       * @param request GetTranscodeTaskStatusRequest
       * @return GetTranscodeTaskStatusResponse
       */
      Models::GetTranscodeTaskStatusResponse getTranscodeTaskStatus(const Models::GetTranscodeTaskStatusRequest &request);

      /**
       * @summary Prefetches Real-Time Communication (RTC) streams.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request HotLiveRtcStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotLiveRtcStreamResponse
       */
      Models::HotLiveRtcStreamResponse hotLiveRtcStreamWithOptions(const Models::HotLiveRtcStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prefetches Real-Time Communication (RTC) streams.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request HotLiveRtcStreamRequest
       * @return HotLiveRtcStreamResponse
       */
      Models::HotLiveRtcStreamResponse hotLiveRtcStream(const Models::HotLiveRtcStreamRequest &request);

      /**
       * @summary Creates a scheduled task.
       *
       * @description This operation allows you to configure a scheduled task to start and stop a playlist at specified times. Make sure that the parameters are set correctly when you call this operation.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request InitializeAutoShowListTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeAutoShowListTaskResponse
       */
      Models::InitializeAutoShowListTaskResponse initializeAutoShowListTaskWithOptions(const Models::InitializeAutoShowListTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled task.
       *
       * @description This operation allows you to configure a scheduled task to start and stop a playlist at specified times. Make sure that the parameters are set correctly when you call this operation.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request InitializeAutoShowListTaskRequest
       * @return InitializeAutoShowListTaskResponse
       */
      Models::InitializeAutoShowListTaskResponse initializeAutoShowListTask(const Models::InitializeAutoShowListTaskRequest &request);

      /**
       * @summary Join a message group.
       *
       * @description The QPS limit for this API is 200 calls per second per user. If this limit is exceeded, API calls will be throttled, which may affect your business. Please use this API responsibly.
       *
       * @param request JoinMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinMessageGroupResponse
       */
      Models::JoinMessageGroupResponse joinMessageGroupWithOptions(const Models::JoinMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Join a message group.
       *
       * @description The QPS limit for this API is 200 calls per second per user. If this limit is exceeded, API calls will be throttled, which may affect your business. Please use this API responsibly.
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
       * @summary Call LeaveMessageGroup to allow users to exit a message group.
       *
       * @description ## Usage notes
       * The QPS limit for this API is 100 calls per second per user. If this limit is exceeded, API calls will be throttled, which may affect your business. You can call this API properly to avoid issues. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request LeaveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LeaveMessageGroupResponse
       */
      Models::LeaveMessageGroupResponse leaveMessageGroupWithOptions(const Models::LeaveMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call LeaveMessageGroup to allow users to exit a message group.
       *
       * @description ## Usage notes
       * The QPS limit for this API is 100 calls per second per user. If this limit is exceeded, API calls will be throttled, which may affect your business. You can call this API properly to avoid issues. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request LeaveMessageGroupRequest
       * @return LeaveMessageGroupResponse
       */
      Models::LeaveMessageGroupResponse leaveMessageGroup(const Models::LeaveMessageGroupRequest &request);

      /**
       * @summary Queries the list of edge transcoding tasks.
       *
       * @description - This operation queries the list of edge transcoding tasks.
       * - You must have the permissions to access the edge transcoding service before you can call this operation.
       * - This operation returns only tasks from the last 180 days, and the last operation time must be within this 180-day period.
       * ## QPS limit
       * The single-user QPS limit for this operation is 6,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request ListEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeTranscodeJobResponse
       */
      Models::ListEdgeTranscodeJobResponse listEdgeTranscodeJobWithOptions(const Models::ListEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of edge transcoding tasks.
       *
       * @description - This operation queries the list of edge transcoding tasks.
       * - You must have the permissions to access the edge transcoding service before you can call this operation.
       * - This operation returns only tasks from the last 180 days, and the last operation time must be within this 180-day period.
       * ## QPS limit
       * The single-user QPS limit for this operation is 6,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request ListEdgeTranscodeJobRequest
       * @return ListEdgeTranscodeJobResponse
       */
      Models::ListEdgeTranscodeJobResponse listEdgeTranscodeJob(const Models::ListEdgeTranscodeJobRequest &request);

      /**
       * @summary Queries the list of edge transcoding templates.
       *
       * @description - This operation queries the list of edge transcoding templates.
       * - You must have permissions to access the edge transcoding service before you can call this operation.
       * ## QPS limit
       * The single-user QPS limit for this operation is 6,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request ListEdgeTranscodeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeTranscodeTemplateResponse
       */
      Models::ListEdgeTranscodeTemplateResponse listEdgeTranscodeTemplateWithOptions(const Models::ListEdgeTranscodeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of edge transcoding templates.
       *
       * @description - This operation queries the list of edge transcoding templates.
       * - You must have permissions to access the edge transcoding service before you can call this operation.
       * ## QPS limit
       * The single-user QPS limit for this operation is 6,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
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
       * @description - Maximum query span: 7 days.
       * - Minimum query granularity: 1 minute.
       * - Maximum query range: data from the last 7 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ListEventSubEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventSubEventResponse
       */
      Models::ListEventSubEventResponse listEventSubEventWithOptions(const Models::ListEventSubEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries callback records.
       *
       * @description - Maximum query span: 7 days.
       * - Minimum query granularity: 1 minute.
       * - Maximum query range: data from the last 7 days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ListEventSubEventRequest
       * @return ListEventSubEventResponse
       */
      Models::ListEventSubEventResponse listEventSubEvent(const Models::ListEventSubEventRequest &request);

      /**
       * @summary Retrieves stream delay configurations.
       *
       * @description The queries per second (QPS) limit for a single user is 60. If you exceed this limit, API calls are throttled, which may impact your business. Ensure that you call this operation within this limit.
       *
       * @param request ListLiveDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveDelayConfigResponse
       */
      Models::ListLiveDelayConfigResponse listLiveDelayConfigWithOptions(const Models::ListLiveDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves stream delay configurations.
       *
       * @description The queries per second (QPS) limit for a single user is 60. If you exceed this limit, API calls are throttled, which may impact your business. Ensure that you call this operation within this limit.
       *
       * @param request ListLiveDelayConfigRequest
       * @return ListLiveDelayConfigResponse
       */
      Models::ListLiveDelayConfigResponse listLiveDelayConfig(const Models::ListLiveDelayConfigRequest &request);

      /**
       * @summary Queries the list of interactive messaging applications by calling ListLiveMessageApps.
       *
       * @description The China (Shanghai) region is replaced by the Singapore region in the example. The China (Shanghai) region is replaced by the Singapore region in the example. The per-user QPS limit for this operation is 50. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request ListLiveMessageAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveMessageAppsResponse
       */
      Models::ListLiveMessageAppsResponse listLiveMessageAppsWithOptions(const Models::ListLiveMessageAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of interactive messaging applications by calling ListLiveMessageApps.
       *
       * @description The China (Shanghai) region is replaced by the Singapore region in the example. The China (Shanghai) region is replaced by the Singapore region in the example. The per-user QPS limit for this operation is 50. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request ListLiveMessageAppsRequest
       * @return ListLiveMessageAppsResponse
       */
      Models::ListLiveMessageAppsResponse listLiveMessageApps(const Models::ListLiveMessageAppsRequest &request);

      /**
       * @summary Queries the list of interactive message groups with pagination support.
       *
       * @description Before calling this operation, you must have already called [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) to create an interactive message group.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ListLiveMessageGroupByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveMessageGroupByPageResponse
       */
      Models::ListLiveMessageGroupByPageResponse listLiveMessageGroupByPageWithOptions(const Models::ListLiveMessageGroupByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of interactive message groups with pagination support.
       *
       * @description Before calling this operation, you must have already called [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) to create an interactive message group.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ListLiveMessageGroupByPageRequest
       * @return ListLiveMessageGroupByPageResponse
       */
      Models::ListLiveMessageGroupByPageResponse listLiveMessageGroupByPage(const Models::ListLiveMessageGroupByPageRequest &request);

      /**
       * @summary Queries the message list of a group by calling ListLiveMessageGroupMessages.
       *
       * @description Before calling this operation, you must have already created an interactive message group by calling [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ListLiveMessageGroupMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveMessageGroupMessagesResponse
       */
      Models::ListLiveMessageGroupMessagesResponse listLiveMessageGroupMessagesWithOptions(const Models::ListLiveMessageGroupMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the message list of a group by calling ListLiveMessageGroupMessages.
       *
       * @description Before calling this operation, you must have already created an interactive message group by calling [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ListLiveMessageGroupMessagesRequest
       * @return ListLiveMessageGroupMessagesResponse
       */
      Models::ListLiveMessageGroupMessagesResponse listLiveMessageGroupMessages(const Models::ListLiveMessageGroupMessagesRequest &request);

      /**
       * @summary Queries the list of users in a group by calling ListLiveMessageGroupUsers.
       *
       * @description - Before calling this operation, you must have already created an interactive messaging group by calling [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html).
       * - For super-large groups (groups with more than 2,000 members), member list queries are no longer supported. Additionally, notifications for members joining or leaving the group are sent at intervals of at least 5 seconds. The notifications do not display the full list of users who joined or left, but they display the exact group member count. Once a group is upgraded to a super-large group, the member list is immediately cleared. The group cannot be reverted to a regular group until all members leave the group (the group is closed). When the group is reopened, it is restored to a regular group.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ListLiveMessageGroupUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveMessageGroupUsersResponse
       */
      Models::ListLiveMessageGroupUsersResponse listLiveMessageGroupUsersWithOptions(const Models::ListLiveMessageGroupUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of users in a group by calling ListLiveMessageGroupUsers.
       *
       * @description - Before calling this operation, you must have already created an interactive messaging group by calling [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html).
       * - For super-large groups (groups with more than 2,000 members), member list queries are no longer supported. Additionally, notifications for members joining or leaving the group are sent at intervals of at least 5 seconds. The notifications do not display the full list of users who joined or left, but they display the exact group member count. Once a group is upgraded to a super-large group, the member list is immediately cleared. The group cannot be reverted to a regular group until all members leave the group (the group is closed). When the group is reopened, it is restored to a regular group.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
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
       * @summary You can call the ListLiveRealtimeLogDelivery operation to query all real-time log delivery configurations.
       *
       * @description You can call this operation to query all real-time log delivery configurations. Make sure that the parameters are set as required.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute for each user. API calls that exceed this limit are throttled, which may impact your business. Call this operation at a reasonable rate.
       *
       * @param request ListLiveRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRealtimeLogDeliveryResponse
       */
      Models::ListLiveRealtimeLogDeliveryResponse listLiveRealtimeLogDeliveryWithOptions(const Models::ListLiveRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListLiveRealtimeLogDelivery operation to query all real-time log delivery configurations.
       *
       * @description You can call this operation to query all real-time log delivery configurations. Make sure that the parameters are set as required.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute for each user. API calls that exceed this limit are throttled, which may impact your business. Call this operation at a reasonable rate.
       *
       * @param request ListLiveRealtimeLogDeliveryRequest
       * @return ListLiveRealtimeLogDeliveryResponse
       */
      Models::ListLiveRealtimeLogDeliveryResponse listLiveRealtimeLogDelivery(const Models::ListLiveRealtimeLogDeliveryRequest &request);

      /**
       * @summary Call ListLiveRealtimeLogDeliveryDomains to query all streaming domains that are configured for the real-time log delivery service.
       *
       * @description - This operation queries all streaming domains that are configured for the real-time log delivery service. The response indicates whether the service is online or offline for each domain.
       * - You can call [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) to query parameters such as Project, Logstore, and Region.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 6,000 calls per minute. If you exceed this limit, API calls are throttled. Throttling may affect your business. We recommend that you call this operation within the specified limit.
       *
       * @param request ListLiveRealtimeLogDeliveryDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRealtimeLogDeliveryDomainsResponse
       */
      Models::ListLiveRealtimeLogDeliveryDomainsResponse listLiveRealtimeLogDeliveryDomainsWithOptions(const Models::ListLiveRealtimeLogDeliveryDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call ListLiveRealtimeLogDeliveryDomains to query all streaming domains that are configured for the real-time log delivery service.
       *
       * @description - This operation queries all streaming domains that are configured for the real-time log delivery service. The response indicates whether the service is online or offline for each domain.
       * - You can call [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) to query parameters such as Project, Logstore, and Region.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 6,000 calls per minute. If you exceed this limit, API calls are throttled. Throttling may affect your business. We recommend that you call this operation within the specified limit.
       *
       * @param request ListLiveRealtimeLogDeliveryDomainsRequest
       * @return ListLiveRealtimeLogDeliveryDomainsResponse
       */
      Models::ListLiveRealtimeLogDeliveryDomainsResponse listLiveRealtimeLogDeliveryDomains(const Models::ListLiveRealtimeLogDeliveryDomainsRequest &request);

      /**
       * @summary Queries information about all real-time log delivery services.
       *
       * @description Make sure that you configure the parameters as required when you call this operation.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 6,000 calls per minute. If you exceed this limit, API calls are throttled. This can affect your business, so you should plan your calls accordingly.
       *
       * @param request ListLiveRealtimeLogDeliveryInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRealtimeLogDeliveryInfosResponse
       */
      Models::ListLiveRealtimeLogDeliveryInfosResponse listLiveRealtimeLogDeliveryInfosWithOptions(const Models::ListLiveRealtimeLogDeliveryInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all real-time log delivery services.
       *
       * @description Make sure that you configure the parameters as required when you call this operation.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 6,000 calls per minute. If you exceed this limit, API calls are throttled. This can affect your business, so you should plan your calls accordingly.
       *
       * @param request ListLiveRealtimeLogDeliveryInfosRequest
       * @return ListLiveRealtimeLogDeliveryInfosResponse
       */
      Models::ListLiveRealtimeLogDeliveryInfosResponse listLiveRealtimeLogDeliveryInfos(const Models::ListLiveRealtimeLogDeliveryInfosRequest &request);

      /**
       * @summary Queries resources and tags that meet the specified conditions.
       *
       * @param request ListLiveTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveTagResourcesResponse
       */
      Models::ListLiveTagResourcesResponse listLiveTagResourcesWithOptions(const Models::ListLiveTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resources and tags that meet the specified conditions.
       *
       * @param request ListLiveTagResourcesRequest
       * @return ListLiveTagResourcesResponse
       */
      Models::ListLiveTagResourcesResponse listLiveTagResources(const Models::ListLiveTagResourcesRequest &request);

      /**
       * @summary Queries the message list.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API operation is 100 queries per second (QPS). If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API operation properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageResponse
       */
      Models::ListMessageResponse listMessageWithOptions(const Models::ListMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the message list.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API operation is 100 queries per second (QPS). If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API operation properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageRequest
       * @return ListMessageResponse
       */
      Models::ListMessageResponse listMessage(const Models::ListMessageRequest &request);

      /**
       * @summary Call ListMessageApp to query the list of interactive message applications.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second (QPS). API calls exceeding this limit will be throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageAppResponse
       */
      Models::ListMessageAppResponse listMessageAppWithOptions(const Models::ListMessageAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call ListMessageApp to query the list of interactive message applications.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second (QPS). API calls exceeding this limit will be throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageAppRequest
       * @return ListMessageAppResponse
       */
      Models::ListMessageAppResponse listMessageApp(const Models::ListMessageAppRequest &request);

      /**
       * @summary Call ListMessageGroup to query the message group list for a specified user.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second. If this limit is exceeded, API calls will be throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageGroupResponse
       */
      Models::ListMessageGroupResponse listMessageGroupWithOptions(const Models::ListMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call ListMessageGroup to query the message group list for a specified user.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second. If this limit is exceeded, API calls will be throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageGroupRequest
       * @return ListMessageGroupResponse
       */
      Models::ListMessageGroupResponse listMessageGroup(const Models::ListMessageGroupRequest &request);

      /**
       * @summary Query message group members.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second (QPS). If you exceed this limit, API calls will be throttled, which may affect your business. You can make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageGroupUserResponse
       */
      Models::ListMessageGroupUserResponse listMessageGroupUserWithOptions(const Models::ListMessageGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query message group members.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second (QPS). If you exceed this limit, API calls will be throttled, which may affect your business. You can make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageGroupUserRequest
       * @return ListMessageGroupUserResponse
       */
      Models::ListMessageGroupUserResponse listMessageGroupUser(const Models::ListMessageGroupUserRequest &request);

      /**
       * @summary Call ListMessageGroupUserById to query user information by user ID list.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq ListMessageGroupUserByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessageGroupUserByIdResponse
       */
      Models::ListMessageGroupUserByIdResponse listMessageGroupUserByIdWithOptions(const Models::ListMessageGroupUserByIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call ListMessageGroupUserById to query user information by user ID list.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMessageGroupUserByIdRequest
       * @return ListMessageGroupUserByIdResponse
       */
      Models::ListMessageGroupUserByIdResponse listMessageGroupUserById(const Models::ListMessageGroupUserByIdRequest &request);

      /**
       * @summary Call ListMuteGroupUser to query the list of muted members in a message group.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMuteGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMuteGroupUserResponse
       */
      Models::ListMuteGroupUserResponse listMuteGroupUserWithOptions(const Models::ListMuteGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call ListMuteGroupUser to query the list of muted members in a message group.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request ListMuteGroupUserRequest
       * @return ListMuteGroupUserResponse
       */
      Models::ListMuteGroupUserResponse listMuteGroupUser(const Models::ListMuteGroupUserRequest &request);

      /**
       * @summary Queries episode lists.
       *
       * @description Call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add items to a playlist before you query it.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) per user. API calls that exceed this limit are throttled. Throttling may affect your business. Plan your calls accordingly.
       *
       * @param request ListPlaylistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPlaylistResponse
       */
      Models::ListPlaylistResponse listPlaylistWithOptions(const Models::ListPlaylistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries episode lists.
       *
       * @description Call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add items to a playlist before you query it.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) per user. API calls that exceed this limit are throttled. Throttling may affect your business. Plan your calls accordingly.
       *
       * @param request ListPlaylistRequest
       * @return ListPlaylistResponse
       */
      Models::ListPlaylistResponse listPlaylist(const Models::ListPlaylistRequest &request);

      /**
       * @summary Queries the items in a specified playlist.
       *
       * @description Before you call this operation, you must call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add items to a playlist.
       * ## QPS limit
       * This operation has a queries per second (QPS) limit of 10 calls per user. If you exceed this limit, your API calls are throttled. Throttling can affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request ListPlaylistItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPlaylistItemsResponse
       */
      Models::ListPlaylistItemsResponse listPlaylistItemsWithOptions(const Models::ListPlaylistItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the items in a specified playlist.
       *
       * @description Before you call this operation, you must call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add items to a playlist.
       * ## QPS limit
       * This operation has a queries per second (QPS) limit of 10 calls per user. If you exceed this limit, your API calls are throttled. Throttling can affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request ListPlaylistItemsRequest
       * @return ListPlaylistItemsResponse
       */
      Models::ListPlaylistItemsResponse listPlaylistItems(const Models::ListPlaylistItemsRequest &request);

      /**
       * @summary Retrieves the list of online channels.
       *
       * @param request ListRTCLiveRoomsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRTCLiveRoomsResponse
       */
      Models::ListRTCLiveRoomsResponse listRTCLiveRoomsWithOptions(const Models::ListRTCLiveRoomsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of online channels.
       *
       * @param request ListRTCLiveRoomsRequest
       * @return ListRTCLiveRoomsResponse
       */
      Models::ListRTCLiveRoomsResponse listRTCLiveRooms(const Models::ListRTCLiveRoomsRequest &request);

      /**
       * @summary Queries the event subscription records for stream mixing and forwarding.
       *
       * @description Queries the event subscription records for stream mixing and forwarding. You can query data from the last seven days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request ListRtcMPUEventSubRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRtcMPUEventSubRecordResponse
       */
      Models::ListRtcMPUEventSubRecordResponse listRtcMPUEventSubRecordWithOptions(const Models::ListRtcMPUEventSubRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the event subscription records for stream mixing and forwarding.
       *
       * @description Queries the event subscription records for stream mixing and forwarding. You can query data from the last seven days.
       * ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request ListRtcMPUEventSubRecordRequest
       * @return ListRtcMPUEventSubRecordResponse
       */
      Models::ListRtcMPUEventSubRecordResponse listRtcMPUEventSubRecord(const Models::ListRtcMPUEventSubRecordRequest &request);

      /**
       * @summary Queries the parameter details of a stream mixing and relaying task.
       *
       * @description - This operation queries the parameter details of a stream mixing and relaying task. Only stream mixing and relaying tasks created by using API operations can be queried.
       * - For a paged query, the query results are sorted by task update time in descending order by default.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, the API invocation is throttled, which may affect your business. Invoke this operation as needed.
       *
       * @param request ListRtcMPUTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRtcMPUTaskDetailResponse
       */
      Models::ListRtcMPUTaskDetailResponse listRtcMPUTaskDetailWithOptions(const Models::ListRtcMPUTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameter details of a stream mixing and relaying task.
       *
       * @description - This operation queries the parameter details of a stream mixing and relaying task. Only stream mixing and relaying tasks created by using API operations can be queried.
       * - For a paged query, the query results are sorted by task update time in descending order by default.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, the API invocation is throttled, which may affect your business. Invoke this operation as needed.
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
       * @description You can call this operation to modify a production studio component, such as a text, image, or translation caption component.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request ModifyCasterComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCasterComponentResponse
       */
      Models::ModifyCasterComponentResponse modifyCasterComponentWithOptions(const Models::ModifyCasterComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a component of a production studio.
       *
       * @description You can call this operation to modify a production studio component, such as a text, image, or translation caption component.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request ModifyCasterComponentRequest
       * @return ModifyCasterComponentResponse
       */
      Models::ModifyCasterComponentResponse modifyCasterComponent(const Models::ModifyCasterComponentRequest &request);

      /**
       * @summary Modifies the configuration of a production studio episode. The episode type cannot be modified.
       *
       * @description You can call this operation to modify the configuration of a production studio episode. The episode type cannot be modified.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 4 calls per second. If this limit is exceeded, API calls are throttled. This may affect your business. We recommend that you call this API operation at a reasonable rate.
       *
       * @param request ModifyCasterEpisodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCasterEpisodeResponse
       */
      Models::ModifyCasterEpisodeResponse modifyCasterEpisodeWithOptions(const Models::ModifyCasterEpisodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a production studio episode. The episode type cannot be modified.
       *
       * @description You can call this operation to modify the configuration of a production studio episode. The episode type cannot be modified.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 4 calls per second. If this limit is exceeded, API calls are throttled. This may affect your business. We recommend that you call this API operation at a reasonable rate.
       *
       * @param request ModifyCasterEpisodeRequest
       * @return ModifyCasterEpisodeResponse
       */
      Models::ModifyCasterEpisodeResponse modifyCasterEpisode(const Models::ModifyCasterEpisodeRequest &request);

      /**
       * @summary Modifies a layout configuration. Only the items to be modified need to be passed. Items that do not require modification do not need to be included.
       *
       * @description Create a production studio by calling the [CreateCaster operation](https://help.aliyun.com/document_detail/2848009.html) first, and then call this operation to modify the layout configuration. Only the items to be modified need to be passed. Items that do not require modification do not need to be included. This operation currently supports the following element fill modes: default and adaptive.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ModifyCasterLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCasterLayoutResponse
       */
      Models::ModifyCasterLayoutResponse modifyCasterLayoutWithOptions(const Models::ModifyCasterLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a layout configuration. Only the items to be modified need to be passed. Items that do not require modification do not need to be included.
       *
       * @description Create a production studio by calling the [CreateCaster operation](https://help.aliyun.com/document_detail/2848009.html) first, and then call this operation to modify the layout configuration. Only the items to be modified need to be passed. Items that do not require modification do not need to be included. This operation currently supports the following element fill modes: default and adaptive.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ModifyCasterLayoutRequest
       * @return ModifyCasterLayoutResponse
       */
      Models::ModifyCasterLayoutResponse modifyCasterLayout(const Models::ModifyCasterLayoutRequest &request);

      /**
       * @summary This operation modifies the program list of a production studio.
       *
       * @description You can call the [AddCasterProgram](https://help.aliyun.com/document_detail/2848074.html) operation to add a program list for a production studio. Then, you can call this operation to modify the program list. This operation supports programs of the video source and component types.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 4 calls per second. If you exceed this limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyCasterProgramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCasterProgramResponse
       */
      Models::ModifyCasterProgramResponse modifyCasterProgramWithOptions(const Models::ModifyCasterProgramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation modifies the program list of a production studio.
       *
       * @description You can call the [AddCasterProgram](https://help.aliyun.com/document_detail/2848074.html) operation to add a program list for a production studio. Then, you can call this operation to modify the program list. This operation supports programs of the video source and component types.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 4 calls per second. If you exceed this limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyCasterProgramRequest
       * @return ModifyCasterProgramResponse
       */
      Models::ModifyCasterProgramResponse modifyCasterProgram(const Models::ModifyCasterProgramRequest &request);

      /**
       * @summary Modifies the video resources of a production studio.
       *
       * @description Before calling this operation, you must create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation.
       * ## QPS limit
       * This operation supports up to 10 queries per second (QPS) per user. If you exceed this limit, your API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyCasterVideoResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCasterVideoResourceResponse
       */
      Models::ModifyCasterVideoResourceResponse modifyCasterVideoResourceWithOptions(const Models::ModifyCasterVideoResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the video resources of a production studio.
       *
       * @description Before calling this operation, you must create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation.
       * ## QPS limit
       * This operation supports up to 10 queries per second (QPS) per user. If you exceed this limit, your API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyCasterVideoResourceRequest
       * @return ModifyCasterVideoResourceResponse
       */
      Models::ModifyCasterVideoResourceResponse modifyCasterVideoResource(const Models::ModifyCasterVideoResourceRequest &request);

      /**
       * @summary This API is used to modify the specified virtual studio template.
       *
       * @param tmpReq ModifyLiveAIStudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveAIStudioResponse
       */
      Models::ModifyLiveAIStudioResponse modifyLiveAIStudioWithOptions(const Models::ModifyLiveAIStudioRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API is used to modify the specified virtual studio template.
       *
       * @param request ModifyLiveAIStudioRequest
       * @return ModifyLiveAIStudioResponse
       */
      Models::ModifyLiveAIStudioResponse modifyLiveAIStudio(const Models::ModifyLiveAIStudioRequest &request);

      /**
       * @summary Modifies the acceleration region of a domain name.
       *
       * @description ### QPS limit
       * You can call this operation up to 100 queries per second (QPS) per user. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyLiveDomainSchdmByPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveDomainSchdmByPropertyResponse
       */
      Models::ModifyLiveDomainSchdmByPropertyResponse modifyLiveDomainSchdmByPropertyWithOptions(const Models::ModifyLiveDomainSchdmByPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the acceleration region of a domain name.
       *
       * @description ### QPS limit
       * You can call this operation up to 100 queries per second (QPS) per user. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyLiveDomainSchdmByPropertyRequest
       * @return ModifyLiveDomainSchdmByPropertyResponse
       */
      Models::ModifyLiveDomainSchdmByPropertyResponse modifyLiveDomainSchdmByProperty(const Models::ModifyLiveDomainSchdmByPropertyRequest &request);

      /**
       * @summary Modifies the security audit settings of an interactive messaging application.
       *
       * @description The China site Chinese edition of this API has a single-user QPS limit of 50 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this API at a reasonable frequency.
       *
       * @param request ModifyLiveMessageAppAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveMessageAppAuditResponse
       */
      Models::ModifyLiveMessageAppAuditResponse modifyLiveMessageAppAuditWithOptions(const Models::ModifyLiveMessageAppAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the security audit settings of an interactive messaging application.
       *
       * @description The China site Chinese edition of this API has a single-user QPS limit of 50 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this API at a reasonable frequency.
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
       * @summary You can call the ModifyLiveMessageGroup operation to modify information about an interactive message group.
       *
       * @description Before you call this operation, call [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) to create an interactive message group.
       * ## QPS limit
       * This operation has a queries per second (QPS) limit of 50 for each user. If you exceed the limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param tmpReq ModifyLiveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveMessageGroupResponse
       */
      Models::ModifyLiveMessageGroupResponse modifyLiveMessageGroupWithOptions(const Models::ModifyLiveMessageGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyLiveMessageGroup operation to modify information about an interactive message group.
       *
       * @description Before you call this operation, call [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) to create an interactive message group.
       * ## QPS limit
       * This operation has a queries per second (QPS) limit of 50 for each user. If you exceed the limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyLiveMessageGroupRequest
       * @return ModifyLiveMessageGroupResponse
       */
      Models::ModifyLiveMessageGroupResponse modifyLiveMessageGroup(const Models::ModifyLiveMessageGroupRequest &request);

      /**
       * @summary Changes the mute status of users in a group.
       *
       * @description Before you call this operation, you must call the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## QPS limit
       * A single user can make up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled, which may impact your business. Call this operation at a reasonable rate.
       *
       * @param tmpReq ModifyLiveMessageGroupBandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveMessageGroupBandResponse
       */
      Models::ModifyLiveMessageGroupBandResponse modifyLiveMessageGroupBandWithOptions(const Models::ModifyLiveMessageGroupBandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the mute status of users in a group.
       *
       * @description Before you call this operation, you must call the [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) operation to create an interactive messaging group.
       * ## QPS limit
       * A single user can make up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled, which may impact your business. Call this operation at a reasonable rate.
       *
       * @param request ModifyLiveMessageGroupBandRequest
       * @return ModifyLiveMessageGroupBandResponse
       */
      Models::ModifyLiveMessageGroupBandResponse modifyLiveMessageGroupBand(const Models::ModifyLiveMessageGroupBandRequest &request);

      /**
       * @summary Modifies the information about a user.
       *
       * @description 本接口的单用户QPS限制为50次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request ModifyLiveMessageUserInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveMessageUserInfoResponse
       */
      Models::ModifyLiveMessageUserInfoResponse modifyLiveMessageUserInfoWithOptions(const Models::ModifyLiveMessageUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a user.
       *
       * @description 本接口的单用户QPS限制为50次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request ModifyLiveMessageUserInfoRequest
       * @return ModifyLiveMessageUserInfoResponse
       */
      Models::ModifyLiveMessageUserInfoResponse modifyLiveMessageUserInfo(const Models::ModifyLiveMessageUserInfoRequest &request);

      /**
       * @summary Modifies the real-time log delivery configuration for a domain name.
       *
       * @description - Call this operation to modify the real-time log delivery configuration for a domain name. A domain name can deliver logs to only one Logstore at a time. <props="china">Currently, only streaming domains can be configured. To push real-time upstream logs (by configuring an ingest domain), [submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live\\&commonQuestionId=4545\\&isSmart=true\\&iatraceid=1608439120675-2a5c48de0b84805313c708\\&channel=selfservice). <props="intl">Currently, only streaming domains can be configured. To push real-time upstream logs (by configuring an ingest domain), [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * - Call [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) to query information about the Project, Logstore, and Region parameters.
       * ## QPS limits
       * You can call this operation up to 6,000 times per minute per user. If you exceed the queries per second (QPS) limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyLiveRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLiveRealtimeLogDeliveryResponse
       */
      Models::ModifyLiveRealtimeLogDeliveryResponse modifyLiveRealtimeLogDeliveryWithOptions(const Models::ModifyLiveRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the real-time log delivery configuration for a domain name.
       *
       * @description - Call this operation to modify the real-time log delivery configuration for a domain name. A domain name can deliver logs to only one Logstore at a time. <props="china">Currently, only streaming domains can be configured. To push real-time upstream logs (by configuring an ingest domain), [submit a ticket](https://workorder.console.aliyun.com/console.htm#/ticket/add?productCode=live\\&commonQuestionId=4545\\&isSmart=true\\&iatraceid=1608439120675-2a5c48de0b84805313c708\\&channel=selfservice). <props="intl">Currently, only streaming domains can be configured. To push real-time upstream logs (by configuring an ingest domain), [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12818093.nav-right.dticket.6cb216d07otFWR#/ticket/createIndex).
       * - Call [DescribeLiveDomainRealtimeLogDelivery](https://help.aliyun.com/document_detail/2848121.html) to query information about the Project, Logstore, and Region parameters.
       * ## QPS limits
       * You can call this operation up to 6,000 times per minute per user. If you exceed the queries per second (QPS) limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyLiveRealtimeLogDeliveryRequest
       * @return ModifyLiveRealtimeLogDeliveryResponse
       */
      Models::ModifyLiveRealtimeLogDeliveryResponse modifyLiveRealtimeLogDelivery(const Models::ModifyLiveRealtimeLogDeliveryRequest &request);

      /**
       * @summary Modifies the attributes of an episode list.
       *
       * @description This API operation modifies the position of a show in a playlist, the total number of playback loops for the playlist, and the specific playback time of the highest-priority show.
       * ## QPS limit
       * The queries per second (QPS) limit for this API operation is 10 calls per second per user. If this limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request ModifyShowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyShowListResponse
       */
      Models::ModifyShowListResponse modifyShowListWithOptions(const Models::ModifyShowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an episode list.
       *
       * @description This API operation modifies the position of a show in a playlist, the total number of playback loops for the playlist, and the specific playback time of the highest-priority show.
       * ## QPS limit
       * The queries per second (QPS) limit for this API operation is 10 calls per second per user. If this limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request ModifyShowListRequest
       * @return ModifyShowListResponse
       */
      Models::ModifyShowListResponse modifyShowList(const Models::ModifyShowListRequest &request);

      /**
       * @summary Modifies the layout of a production studio.
       *
       * @description You can call this operation to modify the layout of a production studio. When you modify the layout settings, pass only the parameters that you want to change.
       * ## QPS limit
       * The QPS limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request ModifyStudioLayoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyStudioLayoutResponse
       */
      Models::ModifyStudioLayoutResponse modifyStudioLayoutWithOptions(const Models::ModifyStudioLayoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the layout of a production studio.
       *
       * @description You can call this operation to modify the layout of a production studio. When you modify the layout settings, pass only the parameters that you want to change.
       * ## QPS limit
       * The QPS limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request ModifyStudioLayoutRequest
       * @return ModifyStudioLayoutResponse
       */
      Models::ModifyStudioLayoutResponse modifyStudioLayout(const Models::ModifyStudioLayoutRequest &request);

      /**
       * @summary Call MuteAllGroupUser to mute a message group, enabling group-wide muting.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If you exceed this limit, API calls will be throttled, which may affect your business. You can make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request MuteAllGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MuteAllGroupUserResponse
       */
      Models::MuteAllGroupUserResponse muteAllGroupUserWithOptions(const Models::MuteAllGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call MuteAllGroupUser to mute a message group, enabling group-wide muting.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If you exceed this limit, API calls will be throttled, which may affect your business. You can make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request MuteAllGroupUserRequest
       * @return MuteAllGroupUserResponse
       */
      Models::MuteAllGroupUserResponse muteAllGroupUser(const Models::MuteAllGroupUserRequest &request);

      /**
       * @summary Mutes members in a message group in batches.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq MuteGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MuteGroupUserResponse
       */
      Models::MuteGroupUserResponse muteGroupUserWithOptions(const Models::MuteGroupUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mutes members in a message group in batches.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request MuteGroupUserRequest
       * @return MuteGroupUserResponse
       */
      Models::MuteGroupUserResponse muteGroupUser(const Models::MuteGroupUserRequest &request);

      /**
       * @summary You can call the OpenLiveShift operation to enable time shifting for a specific domain name, application, or stream.
       *
       * @description You cannot configure time shifting and delayed transcoding at the same time.
       * ## QPS limit
       * This operation supports up to 10 queries per second (QPS) per user. If you exceed this limit, the system throttles your API calls, which can impact your business. To prevent throttling, call this operation at a reasonable rate.
       *
       * @param request OpenLiveShiftRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenLiveShiftResponse
       */
      Models::OpenLiveShiftResponse openLiveShiftWithOptions(const Models::OpenLiveShiftRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the OpenLiveShift operation to enable time shifting for a specific domain name, application, or stream.
       *
       * @description You cannot configure time shifting and delayed transcoding at the same time.
       * ## QPS limit
       * This operation supports up to 10 queries per second (QPS) per user. If you exceed this limit, the system throttles your API calls, which can impact your business. To prevent throttling, call this operation at a reasonable rate.
       *
       * @param request OpenLiveShiftRequest
       * @return OpenLiveShiftResponse
       */
      Models::OpenLiveShiftResponse openLiveShift(const Models::OpenLiveShiftRequest &request);

      /**
       * @summary Manually switches a show.
       *
       * @description After you add a show and start live streaming, you can call this operation to switch the show. To add a show by using an API operation, see [Add a show to the show list](https://help.aliyun.com/document_detail/2848051.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request PlayChoosenShowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PlayChoosenShowResponse
       */
      Models::PlayChoosenShowResponse playChoosenShowWithOptions(const Models::PlayChoosenShowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually switches a show.
       *
       * @description After you add a show and start live streaming, you can call this operation to switch the show. To add a show by using an API operation, see [Add a show to the show list](https://help.aliyun.com/document_detail/2848051.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request PlayChoosenShowRequest
       * @return PlayChoosenShowResponse
       */
      Models::PlayChoosenShowResponse playChoosenShow(const Models::PlayChoosenShowRequest &request);

      /**
       * @summary Publishes the configurations of an accelerated domain name from the canary release environment to the production environment.
       *
       * @description ## Usage notes
       * You can call the [DescribeLiveDomainStagingConfig](https://help.aliyun.com/document_detail/297374.html) operation to obtain the feature name. Then, you can call this operation to publish the configurations from the canary release environment to the production environment.
       * ## QPS limits
       * You can call this operation up to 30 times per second per user. Throttling is triggered if the number of calls exceeds the limit. This may affect your business operations. We recommend that you plan your calls accordingly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request PublishLiveStagingConfigToProductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishLiveStagingConfigToProductionResponse
       */
      Models::PublishLiveStagingConfigToProductionResponse publishLiveStagingConfigToProductionWithOptions(const Models::PublishLiveStagingConfigToProductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes the configurations of an accelerated domain name from the canary release environment to the production environment.
       *
       * @description ## Usage notes
       * You can call the [DescribeLiveDomainStagingConfig](https://help.aliyun.com/document_detail/297374.html) operation to obtain the feature name. Then, you can call this operation to publish the configurations from the canary release environment to the production environment.
       * ## QPS limits
       * You can call this operation up to 30 times per second per user. Throttling is triggered if the number of calls exceeds the limit. This may affect your business operations. We recommend that you plan your calls accordingly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request PublishLiveStagingConfigToProductionRequest
       * @return PublishLiveStagingConfigToProductionResponse
       */
      Models::PublishLiveStagingConfigToProductionResponse publishLiveStagingConfigToProduction(const Models::PublishLiveStagingConfigToProductionRequest &request);

      /**
       * @summary 用于修改指定直播流的录制文件存储时长。
       *
       * @description ## 请求说明
       * - 该接口允许用户为一个或多个指定的直播流设置新的录制文件存储期限。
       * - `Tag` 字段必须符合格式 `[0-9]+days`，表示直播结束后录制内容将被保存的天数。
       * - 如果对某个流的存储时间修改失败，错误信息会被记录在返回结果中。对于失败的情况，调用方应重试最多3次；如果超过重试次数仍失败，则视为最终失败。
       * - 为了支持未来可能的需求变化（如更长的存储周期），请确保您的系统能够处理不同的时间段值。
       * - 成功执行后，供应商会通过异步回调的方式通知调用方所有操作的结果。若回调失败，将按照1小时、2小时、4小时的时间间隔尝试重新发送，直至成功或达到最大重试次数。
       *
       * @param tmpReq PutRecordStorageLifeCycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutRecordStorageLifeCycleResponse
       */
      Models::PutRecordStorageLifeCycleResponse putRecordStorageLifeCycleWithOptions(const Models::PutRecordStorageLifeCycleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用于修改指定直播流的录制文件存储时长。
       *
       * @description ## 请求说明
       * - 该接口允许用户为一个或多个指定的直播流设置新的录制文件存储期限。
       * - `Tag` 字段必须符合格式 `[0-9]+days`，表示直播结束后录制内容将被保存的天数。
       * - 如果对某个流的存储时间修改失败，错误信息会被记录在返回结果中。对于失败的情况，调用方应重试最多3次；如果超过重试次数仍失败，则视为最终失败。
       * - 为了支持未来可能的需求变化（如更长的存储周期），请确保您的系统能够处理不同的时间段值。
       * - 成功执行后，供应商会通过异步回调的方式通知调用方所有操作的结果。若回调失败，将按照1小时、2小时、4小时的时间间隔尝试重新发送，直至成功或达到最大重试次数。
       *
       * @param request PutRecordStorageLifeCycleRequest
       * @return PutRecordStorageLifeCycleResponse
       */
      Models::PutRecordStorageLifeCycleResponse putRecordStorageLifeCycle(const Models::PutRecordStorageLifeCycleRequest &request);

      /**
       * @summary Queries dual-stream disaster recovery online records.
       *
       * @param request QueryLiveDomainMultiStreamListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLiveDomainMultiStreamListResponse
       */
      Models::QueryLiveDomainMultiStreamListResponse queryLiveDomainMultiStreamListWithOptions(const Models::QueryLiveDomainMultiStreamListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries dual-stream disaster recovery online records.
       *
       * @param request QueryLiveDomainMultiStreamListRequest
       * @return QueryLiveDomainMultiStreamListResponse
       */
      Models::QueryLiveDomainMultiStreamListResponse queryLiveDomainMultiStreamList(const Models::QueryLiveDomainMultiStreamListRequest &request);

      /**
       * @summary Call QueryMessageApp to query interactive message applications based on specified conditions.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request QueryMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMessageAppResponse
       */
      Models::QueryMessageAppResponse queryMessageAppWithOptions(const Models::QueryMessageAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call QueryMessageApp to query interactive message applications based on specified conditions.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request QueryMessageAppRequest
       * @return QueryMessageAppResponse
       */
      Models::QueryMessageAppResponse queryMessageApp(const Models::QueryMessageAppRequest &request);

      /**
       * @summary Queries the status of created real-time speech-to-text or translation tasks.
       *
       * @description The queries per second (QPS) limit for a single user is 20 calls per second. If you exceed this limit, your API calls are throttled, which can affect your business. Call this API only as needed.
       *
       * @param request QueryRtcAsrTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRtcAsrTasksResponse
       */
      Models::QueryRtcAsrTasksResponse queryRtcAsrTasksWithOptions(const Models::QueryRtcAsrTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of created real-time speech-to-text or translation tasks.
       *
       * @description The queries per second (QPS) limit for a single user is 20 calls per second. If you exceed this limit, your API calls are throttled, which can affect your business. Call this API only as needed.
       *
       * @param request QueryRtcAsrTasksRequest
       * @return QueryRtcAsrTasksResponse
       */
      Models::QueryRtcAsrTasksResponse queryRtcAsrTasks(const Models::QueryRtcAsrTasksRequest &request);

      /**
       * @summary Queries the authentication configuration for snapshot callbacks.
       *
       * @description You can call this operation to query the authentication configuration for snapshot callbacks for a streaming domain. Before you call this operation, you must configure authentication. For more information, see [Set snapshot callback authentication](https://help.aliyun.com/document_detail/2847907.html).
       * ## QPS limit
       * This operation is limited to 30 queries per second (QPS) per user. If you exceed this limit, throttling is triggered, which can affect your services.
       *
       * @param request QuerySnapshotCallbackAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySnapshotCallbackAuthResponse
       */
      Models::QuerySnapshotCallbackAuthResponse querySnapshotCallbackAuthWithOptions(const Models::QuerySnapshotCallbackAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authentication configuration for snapshot callbacks.
       *
       * @description You can call this operation to query the authentication configuration for snapshot callbacks for a streaming domain. Before you call this operation, you must configure authentication. For more information, see [Set snapshot callback authentication](https://help.aliyun.com/document_detail/2847907.html).
       * ## QPS limit
       * This operation is limited to 30 queries per second (QPS) per user. If you exceed this limit, throttling is triggered, which can affect your services.
       *
       * @param request QuerySnapshotCallbackAuthRequest
       * @return QuerySnapshotCallbackAuthResponse
       */
      Models::QuerySnapshotCallbackAuthResponse querySnapshotCallbackAuth(const Models::QuerySnapshotCallbackAuthRequest &request);

      /**
       * @summary Performs on-demand manual recording. For example, dynamically starts or stops recording.
       *
       * @description - Before using this operation, make sure that you fully understand the billing method and pricing of live stream recording. For billing details, see [Live stream recording fees](https://help.aliyun.com/document_detail/195287.html).
       * - This operation can only control live streams for which a recording configuration has taken effect. Complete [adding a recording configuration](https://help.aliyun.com/document_detail/2847881.html) first.
       * - Before calling this operation, make sure that the target stream (DomainName/AppName/StreamName) is in an active stream ingest state.
       * - If a live stream is being recorded (through automatic recording or manual recording), you can call this operation to stop recording the stream. However, if you call this operation to start recording when recording is already started, the TaskAlreadyStarted error is returned, indicating that the task has already been started.
       * - If a live stream that is manually started for recording is interrupted, recording stops. If automatic recording is not configured, recording does not automatically start after stream ingest resumes.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request RealTimeRecordCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RealTimeRecordCommandResponse
       */
      Models::RealTimeRecordCommandResponse realTimeRecordCommandWithOptions(const Models::RealTimeRecordCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs on-demand manual recording. For example, dynamically starts or stops recording.
       *
       * @description - Before using this operation, make sure that you fully understand the billing method and pricing of live stream recording. For billing details, see [Live stream recording fees](https://help.aliyun.com/document_detail/195287.html).
       * - This operation can only control live streams for which a recording configuration has taken effect. Complete [adding a recording configuration](https://help.aliyun.com/document_detail/2847881.html) first.
       * - Before calling this operation, make sure that the target stream (DomainName/AppName/StreamName) is in an active stream ingest state.
       * - If a live stream is being recorded (through automatic recording or manual recording), you can call this operation to stop recording the stream. However, if you call this operation to start recording when recording is already started, the TaskAlreadyStarted error is returned, indicating that the task has already been started.
       * - If a live stream that is manually started for recording is interrupted, recording stops. If automatic recording is not configured, recording does not automatically start after stream ingest resumes.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
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
       * @summary Unmutes users in a live interactive message group.
       *
       * @description You must call [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) to create an interactive message group before you call this operation.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. Exceeding this limit triggers API throttling, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param tmpReq RemoveLiveMessageGroupBandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveLiveMessageGroupBandResponse
       */
      Models::RemoveLiveMessageGroupBandResponse removeLiveMessageGroupBandWithOptions(const Models::RemoveLiveMessageGroupBandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unmutes users in a live interactive message group.
       *
       * @description You must call [CreateLiveMessageGroup](https://help.aliyun.com/document_detail/2848163.html) to create an interactive message group before you call this operation.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. Exceeding this limit triggers API throttling, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request RemoveLiveMessageGroupBandRequest
       * @return RemoveLiveMessageGroupBandResponse
       */
      Models::RemoveLiveMessageGroupBandResponse removeLiveMessageGroupBand(const Models::RemoveLiveMessageGroupBandRequest &request);

      /**
       * @summary Removes an episode from an episode list.
       *
       * @description This operation deletes a show from a show list. You must first call the [AddShowIntoShowList](https://help.aliyun.com/document_detail/2848051.html) operation to add the show.
       * ## QPS limit
       * The limit for this operation is 10 queries per second (QPS) per user. API calls that exceed this limit are throttled, which may affect your business. Plan your API calls to avoid exceeding this limit.
       *
       * @param request RemoveShowFromShowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveShowFromShowListResponse
       */
      Models::RemoveShowFromShowListResponse removeShowFromShowListWithOptions(const Models::RemoveShowFromShowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an episode from an episode list.
       *
       * @description This operation deletes a show from a show list. You must first call the [AddShowIntoShowList](https://help.aliyun.com/document_detail/2848051.html) operation to add the show.
       * ## QPS limit
       * The limit for this operation is 10 queries per second (QPS) per user. API calls that exceed this limit are throttled, which may affect your business. Plan your API calls to avoid exceeding this limit.
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
       * @description - This operation supports only production studios in playlist mode (carousel) or general mode. Virtual studios are not supported.
       * - When you restart a production studio, its current settings, such as resolution and screen orientation, are reloaded to restore the previous playback status.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request RestartCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartCasterResponse
       */
      Models::RestartCasterResponse restartCasterWithOptions(const Models::RestartCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a production studio.
       *
       * @description - This operation supports only production studios in playlist mode (carousel) or general mode. Virtual studios are not supported.
       * - When you restart a production studio, its current settings, such as resolution and screen orientation, are reloaded to restore the previous playback status.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request RestartCasterRequest
       * @return RestartCasterResponse
       */
      Models::RestartCasterResponse restartCaster(const Models::RestartCasterRequest &request);

      /**
       * @summary Restarts a stream pulling task.
       *
       * @description - Calls this operation to restart a stream pulling task.
       * - You can restart a task that is running (including tasks in abnormal retry status) or stopped. A running task is stopped and then started again. A non-running task is started directly.
       * - If the task has not reached the configured start time, the restart does not take effect.
       * - The restarted task runs based on the latest task configuration, which causes stream ingest interruption.
       * - After a video-on-demand task is restarted, playback starts from the beginning based on the latest playlist. You can call the update operation to set the video index and video playback progress to resume playback.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request RestartLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartLivePullToPushResponse
       */
      Models::RestartLivePullToPushResponse restartLivePullToPushWithOptions(const Models::RestartLivePullToPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a stream pulling task.
       *
       * @description - Calls this operation to restart a stream pulling task.
       * - You can restart a task that is running (including tasks in abnormal retry status) or stopped. A running task is stopped and then started again. A non-running task is started directly.
       * - If the task has not reached the configured start time, the restart does not take effect.
       * - The restarted task runs based on the latest task configuration, which causes stream ingest interruption.
       * - After a video-on-demand task is restarted, playback starts from the beginning based on the latest playlist. You can call the update operation to set the video index and video playback progress to resume playback.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request RestartLivePullToPushRequest
       * @return RestartLivePullToPushResponse
       */
      Models::RestartLivePullToPushResponse restartLivePullToPush(const Models::RestartLivePullToPushRequest &request);

      /**
       * @summary 重启转码任务
       *
       * @param request RestartTranscodeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartTranscodeTaskResponse
       */
      Models::RestartTranscodeTaskResponse restartTranscodeTaskWithOptions(const Models::RestartTranscodeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启转码任务
       *
       * @param request RestartTranscodeTaskRequest
       * @return RestartTranscodeTaskResponse
       */
      Models::RestartTranscodeTaskResponse restartTranscodeTask(const Models::RestartTranscodeTaskRequest &request);

      /**
       * @summary Resumes stream ingest for a specified stream.
       *
       * @description Calls this operation to resume stream ingest for a specified stream. This operation currently supports only publisher (streamer ingest).
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ResumeLiveStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeLiveStreamResponse
       */
      Models::ResumeLiveStreamResponse resumeLiveStreamWithOptions(const Models::ResumeLiveStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes stream ingest for a specified stream.
       *
       * @description Calls this operation to resume stream ingest for a specified stream. This operation currently supports only publisher (streamer ingest).
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ResumeLiveStreamRequest
       * @return ResumeLiveStreamResponse
       */
      Models::ResumeLiveStreamResponse resumeLiveStream(const Models::ResumeLiveStreamRequest &request);

      /**
       * @summary Rolls back the configurations of an accelerated domain name in the canary release environment.
       *
       * @description ## Usage notes
       * You must first call the [DescribeLiveDomainStagingConfig](https://help.aliyun.com/document_detail/297374.html) operation to obtain the feature name. Then, you can call this operation to roll back the configurations in the canary release environment.
       * ## QPS limits
       * You can call this operation up to 30 times per second per user. API calls that exceed this limit are throttled. This can affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request RollbackLiveStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackLiveStagingConfigResponse
       */
      Models::RollbackLiveStagingConfigResponse rollbackLiveStagingConfigWithOptions(const Models::RollbackLiveStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back the configurations of an accelerated domain name in the canary release environment.
       *
       * @description ## Usage notes
       * You must first call the [DescribeLiveDomainStagingConfig](https://help.aliyun.com/document_detail/297374.html) operation to obtain the feature name. Then, you can call this operation to roll back the configurations in the canary release environment.
       * ## QPS limits
       * You can call this operation up to 30 times per second per user. API calls that exceed this limit are throttled. This can affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request RollbackLiveStagingConfigRequest
       * @return RollbackLiveStagingConfigResponse
       */
      Models::RollbackLiveStagingConfigResponse rollbackLiveStagingConfig(const Models::RollbackLiveStagingConfigRequest &request);

      /**
       * @summary Call SendLike to configure system like messages.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SendLikeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendLikeResponse
       */
      Models::SendLikeResponse sendLikeWithOptions(const Models::SendLikeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call SendLike to configure system like messages.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SendLikeRequest
       * @return SendLikeResponse
       */
      Models::SendLikeResponse sendLike(const Models::SendLikeRequest &request);

      /**
       * @summary Sends a message to a group.
       *
       * @description Before you call this operation, you must call [](t2586945.xdita#)to create an interactive messaging group. You can send messages to a group only if the group is active, which means that one or more users have joined the group. Offline messages are not supported. If you fail to send a message, check whether there are users in the group. If you want to send an offline message, we recommend that you store the message locally and send it after users come online.
       * ## QPS limits
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you consider this limit when calling this operation.
       *
       * @param request SendLiveMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendLiveMessageGroupResponse
       */
      Models::SendLiveMessageGroupResponse sendLiveMessageGroupWithOptions(const Models::SendLiveMessageGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message to a group.
       *
       * @description Before you call this operation, you must call [](t2586945.xdita#)to create an interactive messaging group. You can send messages to a group only if the group is active, which means that one or more users have joined the group. Offline messages are not supported. If you fail to send a message, check whether there are users in the group. If you want to send an offline message, we recommend that you store the message locally and send it after users come online.
       * ## QPS limits
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you consider this limit when calling this operation.
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
       * @summary Call SendMessageToGroup to send messages to all members of a message group.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second (QPS). If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SendMessageToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageToGroupResponse
       */
      Models::SendMessageToGroupResponse sendMessageToGroupWithOptions(const Models::SendMessageToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call SendMessageToGroup to send messages to all members of a message group.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second (QPS). If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SendMessageToGroupRequest
       * @return SendMessageToGroupResponse
       */
      Models::SendMessageToGroupResponse sendMessageToGroup(const Models::SendMessageToGroupRequest &request);

      /**
       * @summary Call SendMessageToGroupUsers to send messages to specified users in a message group.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second (QPS). If this limit is exceeded, API calls will be throttled, which may affect your business. You can make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq SendMessageToGroupUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageToGroupUsersResponse
       */
      Models::SendMessageToGroupUsersResponse sendMessageToGroupUsersWithOptions(const Models::SendMessageToGroupUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call SendMessageToGroupUsers to send messages to specified users in a message group.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second (QPS). If this limit is exceeded, API calls will be throttled, which may affect your business. You can make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SendMessageToGroupUsersRequest
       * @return SendMessageToGroupUsersResponse
       */
      Models::SendMessageToGroupUsersResponse sendMessageToGroupUsers(const Models::SendMessageToGroupUsersRequest &request);

      /**
       * @summary Sets a channel for a production studio.
       *
       * @description Call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to set a channel for the production studio.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 for each user. Exceeding this limit triggers throttling, which may affect your business. Call this operation at a reasonable rate to prevent interruptions.
       *
       * @param request SetCasterChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCasterChannelResponse
       */
      Models::SetCasterChannelResponse setCasterChannelWithOptions(const Models::SetCasterChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a channel for a production studio.
       *
       * @description Call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to set a channel for the production studio.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 for each user. Exceeding this limit triggers throttling, which may affect your business. Call this operation at a reasonable rate to prevent interruptions.
       *
       * @param request SetCasterChannelRequest
       * @return SetCasterChannelResponse
       */
      Models::SetCasterChannelResponse setCasterChannel(const Models::SetCasterChannelRequest &request);

      /**
       * @summary Configures detailed settings for a production studio, including the name, transcoding configuration, recording configuration, and other parameters.
       *
       * @description Create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation first, and then call this operation to configure detailed settings for the production studio.
       * >Warning: This operation fully replaces the existing configuration. If you set a parameter to empty, the existing configuration of that parameter in the production studio is cleared.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request SetCasterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCasterConfigResponse
       */
      Models::SetCasterConfigResponse setCasterConfigWithOptions(const Models::SetCasterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures detailed settings for a production studio, including the name, transcoding configuration, recording configuration, and other parameters.
       *
       * @description Create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation first, and then call this operation to configure detailed settings for the production studio.
       * >Warning: This operation fully replaces the existing configuration. If you set a parameter to empty, the existing configuration of that parameter in the production studio is cleared.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request SetCasterConfigRequest
       * @return SetCasterConfigResponse
       */
      Models::SetCasterConfigResponse setCasterConfig(const Models::SetCasterConfigRequest &request);

      /**
       * @summary Sets the full scene configuration for a production studio by clearing the existing scene configuration and applying layout information to the specified scene.
       *
       * @description Calls this operation to set the full scene configuration for a production studio by clearing the existing scene configuration and applying layout information to the specified scene.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request SetCasterSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCasterSceneConfigResponse
       */
      Models::SetCasterSceneConfigResponse setCasterSceneConfigWithOptions(const Models::SetCasterSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the full scene configuration for a production studio by clearing the existing scene configuration and applying layout information to the specified scene.
       *
       * @description Calls this operation to set the full scene configuration for a production studio by clearing the existing scene configuration and applying layout information to the specified scene.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request SetCasterSceneConfigRequest
       * @return SetCasterSceneConfigResponse
       */
      Models::SetCasterSceneConfigResponse setCasterSceneConfig(const Models::SetCasterSceneConfigRequest &request);

      /**
       * @summary Configures whether the certificate feature is enabled for a domain name and modifies certificate information.
       *
       * @description Obtain the live streaming domain name first, and then call this operation to configure whether the certificate is enabled for the domain name and modify certificate information.
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request SetLiveDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveDomainCertificateResponse
       */
      Models::SetLiveDomainCertificateResponse setLiveDomainCertificateWithOptions(const Models::SetLiveDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures whether the certificate feature is enabled for a domain name and modifies certificate information.
       *
       * @description Obtain the live streaming domain name first, and then call this operation to configure whether the certificate is enabled for the domain name and modify certificate information.
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request SetLiveDomainCertificateRequest
       * @return SetLiveDomainCertificateResponse
       */
      Models::SetLiveDomainCertificateResponse setLiveDomainCertificate(const Models::SetLiveDomainCertificateRequest &request);

      /**
       * @summary Calls SetLiveDomainMultiStreamConfig to enable or disable the dual-stream disaster recovery switch.
       *
       * @description Calls this operation to enable the dual-stream disaster recovery feature, which allows stream ingest to the same live stream name.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request SetLiveDomainMultiStreamConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveDomainMultiStreamConfigResponse
       */
      Models::SetLiveDomainMultiStreamConfigResponse setLiveDomainMultiStreamConfigWithOptions(const Models::SetLiveDomainMultiStreamConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls SetLiveDomainMultiStreamConfig to enable or disable the dual-stream disaster recovery switch.
       *
       * @description Calls this operation to enable the dual-stream disaster recovery feature, which allows stream ingest to the same live stream name.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
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
       * @summary Sets the automatic mode switch for dual-stream disaster recovery.
       *
       * @param request SetLiveDomainMultiStreamOptimalModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveDomainMultiStreamOptimalModeResponse
       */
      Models::SetLiveDomainMultiStreamOptimalModeResponse setLiveDomainMultiStreamOptimalModeWithOptions(const Models::SetLiveDomainMultiStreamOptimalModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the automatic mode switch for dual-stream disaster recovery.
       *
       * @param request SetLiveDomainMultiStreamOptimalModeRequest
       * @return SetLiveDomainMultiStreamOptimalModeResponse
       */
      Models::SetLiveDomainMultiStreamOptimalModeResponse setLiveDomainMultiStreamOptimalMode(const Models::SetLiveDomainMultiStreamOptimalModeRequest &request);

      /**
       * @summary Sets or modifies domain configurations in the canary release environment.
       *
       * @description ## Usage notes
       * Obtain an accelerated domain name. You can then call this operation to set or modify domain name configurations in the staging environment. For more information, see **Functions format description**.
       * ## QPS limit
       * This operation is limited to 30 queries per second (QPS) per user. API calls that exceed this limit are throttled, which may affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SetLiveDomainStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveDomainStagingConfigResponse
       */
      Models::SetLiveDomainStagingConfigResponse setLiveDomainStagingConfigWithOptions(const Models::SetLiveDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets or modifies domain configurations in the canary release environment.
       *
       * @description ## Usage notes
       * Obtain an accelerated domain name. You can then call this operation to set or modify domain name configurations in the staging environment. For more information, see **Functions format description**.
       * ## QPS limit
       * This operation is limited to 30 queries per second (QPS) per user. API calls that exceed this limit are throttled, which may affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request SetLiveDomainStagingConfigRequest
       * @return SetLiveDomainStagingConfigResponse
       */
      Models::SetLiveDomainStagingConfigResponse setLiveDomainStagingConfig(const Models::SetLiveDomainStagingConfigRequest &request);

      /**
       * @summary Calls SetLiveEdgeTransfer to configure live stream relay settings.
       *
       * @description The live edge stream relay configuration made by calling SetLiveEdgeTransfer only takes effect for streams that start after the configuration is completed. The following are examples of some typical scenarios:
       * | Scenario | Analysis | Result |
       * | -------------- | -------------- | ------ |
       * | 1. The user has already started streaming before calling SetLiveEdgeTransfer. | The live edge stream relay configuration does not exist at this point. | The stream is not affected by the SetLiveEdgeTransfer configuration, meaning live edge stream relay will not be initiated. |
       * | 2. The user interrupts streaming that was started before calling SetLiveEdgeTransfer, and then resumes streaming. | The live edge stream relay configuration already exists at this point. | The resumed stream will initiate live stream relay according to the SetLiveEdgeTransfer configuration. |
       * | 3. The user starts streaming after calling SetLiveEdgeTransfer. | The live edge stream relay configuration already exists at this point. | This stream will initiate live stream relay according to the SetLiveEdgeTransfer configuration. |
       * ## QPS Limit
       * The single-user QPS limit for this API is 100 calls/second. Exceeding the limit will result in API throttling, which may affect your business. Please call this API appropriately.
       *
       * @param request SetLiveEdgeTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveEdgeTransferResponse
       */
      Models::SetLiveEdgeTransferResponse setLiveEdgeTransferWithOptions(const Models::SetLiveEdgeTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls SetLiveEdgeTransfer to configure live stream relay settings.
       *
       * @description The live edge stream relay configuration made by calling SetLiveEdgeTransfer only takes effect for streams that start after the configuration is completed. The following are examples of some typical scenarios:
       * | Scenario | Analysis | Result |
       * | -------------- | -------------- | ------ |
       * | 1. The user has already started streaming before calling SetLiveEdgeTransfer. | The live edge stream relay configuration does not exist at this point. | The stream is not affected by the SetLiveEdgeTransfer configuration, meaning live edge stream relay will not be initiated. |
       * | 2. The user interrupts streaming that was started before calling SetLiveEdgeTransfer, and then resumes streaming. | The live edge stream relay configuration already exists at this point. | The resumed stream will initiate live stream relay according to the SetLiveEdgeTransfer configuration. |
       * | 3. The user starts streaming after calling SetLiveEdgeTransfer. | The live edge stream relay configuration already exists at this point. | This stream will initiate live stream relay according to the SetLiveEdgeTransfer configuration. |
       * ## QPS Limit
       * The single-user QPS limit for this API is 100 calls/second. Exceeding the limit will result in API throttling, which may affect your business. Please call this API appropriately.
       *
       * @param request SetLiveEdgeTransferRequest
       * @return SetLiveEdgeTransferResponse
       */
      Models::SetLiveEdgeTransferResponse setLiveEdgeTransfer(const Models::SetLiveEdgeTransferRequest &request);

      /**
       * @summary Configures triggered stream pulling.
       *
       * @description This API configures triggered stream pulling. When a live stream starts on the origin server, ApsaraVideo Live automatically pulls the stream for live playback.
       * > This API does not support the IPv6 protocol.
       * ## QPS limits
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request SetLiveLazyPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveLazyPullStreamInfoConfigResponse
       */
      Models::SetLiveLazyPullStreamInfoConfigResponse setLiveLazyPullStreamInfoConfigWithOptions(const Models::SetLiveLazyPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures triggered stream pulling.
       *
       * @description This API configures triggered stream pulling. When a live stream starts on the origin server, ApsaraVideo Live automatically pulls the stream for live playback.
       * > This API does not support the IPv6 protocol.
       * ## QPS limits
       * You can call this operation up to 1,000 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
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
       * @summary Sets stream-level blocking for live streams by calling SetLiveStreamBlock.
       *
       * @description You can configure up to 200 live stream area blocking rules for a domain name. If duplicate rules with the same AppName and StreamName exist in the live stream area blocking rules, the most recently updated rule takes effect.
       * ### QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, the API invocations are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request SetLiveStreamBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveStreamBlockResponse
       */
      Models::SetLiveStreamBlockResponse setLiveStreamBlockWithOptions(const Models::SetLiveStreamBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets stream-level blocking for live streams by calling SetLiveStreamBlock.
       *
       * @description You can configure up to 200 live stream area blocking rules for a domain name. If duplicate rules with the same AppName and StreamName exist in the live stream area blocking rules, the most recently updated rule takes effect.
       * ### QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, the API invocations are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request SetLiveStreamBlockRequest
       * @return SetLiveStreamBlockResponse
       */
      Models::SetLiveStreamBlockResponse setLiveStreamBlock(const Models::SetLiveStreamBlockRequest &request);

      /**
       * @summary You can call SetLiveStreamDelayConfig to configure live streaming latency.
       *
       * @description - This operation configures the latency for a streaming domain.
       * - The server-side cache stores an integer number of Groups of Pictures (GOPs). Therefore, the latency cannot be less than the GOP size. The actual latency is estimated based on the GOP size. For example, if you set RtmpDelay to 4 seconds for an RTMP stream and the GOP size is 2 seconds, the actual latency ranges from 2 seconds (4 - 2) to 6 seconds (4 + 2). If the GOP size is larger than the configured RtmpDelay, for example, GOP = 5 seconds and RtmpDelay = 4 seconds, the latency fluctuates between 0 and 9 seconds.
       * - Latency configurations do not take effect for audio-only streams. The default latency is close to 0 seconds.
       * - For an HLS configuration, the segment size is calculated as \\`Delay / 3\\` and rounded down to the nearest integer. The minimum segment size is 1 second. The maximum number of segments is 4 if the segment size is 3 seconds or more. Otherwise, the maximum is 6 segments.
       * - The actual HLS segment size cannot be smaller than the GOP size.
       * - The HLS latency is calculated as: Configured Segment Size × 3.
       * - If you do not call this operation, the system uses the default values. The default latency is 2 seconds for RTMP and 4 seconds for FLV. For HLS, the default segment size is 5 seconds, which results in a latency of 15 seconds with a maximum of 6 segments.
       * ## Queries per second (QPS) limit
       * The QPS limit for this operation is 1,000 calls per second per user. If you exceed this limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request SetLiveStreamDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveStreamDelayConfigResponse
       */
      Models::SetLiveStreamDelayConfigResponse setLiveStreamDelayConfigWithOptions(const Models::SetLiveStreamDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call SetLiveStreamDelayConfig to configure live streaming latency.
       *
       * @description - This operation configures the latency for a streaming domain.
       * - The server-side cache stores an integer number of Groups of Pictures (GOPs). Therefore, the latency cannot be less than the GOP size. The actual latency is estimated based on the GOP size. For example, if you set RtmpDelay to 4 seconds for an RTMP stream and the GOP size is 2 seconds, the actual latency ranges from 2 seconds (4 - 2) to 6 seconds (4 + 2). If the GOP size is larger than the configured RtmpDelay, for example, GOP = 5 seconds and RtmpDelay = 4 seconds, the latency fluctuates between 0 and 9 seconds.
       * - Latency configurations do not take effect for audio-only streams. The default latency is close to 0 seconds.
       * - For an HLS configuration, the segment size is calculated as \\`Delay / 3\\` and rounded down to the nearest integer. The minimum segment size is 1 second. The maximum number of segments is 4 if the segment size is 3 seconds or more. Otherwise, the maximum is 6 segments.
       * - The actual HLS segment size cannot be smaller than the GOP size.
       * - The HLS latency is calculated as: Configured Segment Size × 3.
       * - If you do not call this operation, the system uses the default values. The default latency is 2 seconds for RTMP and 4 seconds for FLV. For HLS, the default segment size is 5 seconds, which results in a latency of 15 seconds with a maximum of 6 segments.
       * ## Queries per second (QPS) limit
       * The QPS limit for this operation is 1,000 calls per second per user. If you exceed this limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request SetLiveStreamDelayConfigRequest
       * @return SetLiveStreamDelayConfigResponse
       */
      Models::SetLiveStreamDelayConfigResponse setLiveStreamDelayConfig(const Models::SetLiveStreamDelayConfigRequest &request);

      /**
       * @summary Sets live stream prefetch tasks. You can prefetch up to 100 live streams in a batch.
       *
       * @description - You can call this operation to set live stream prefetch tasks in batches. You can set up to 100 live stream URLs at a time.
       * - Live stream prefetch does not support HLS URLs.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request SetLiveStreamPreloadTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveStreamPreloadTasksResponse
       */
      Models::SetLiveStreamPreloadTasksResponse setLiveStreamPreloadTasksWithOptions(const Models::SetLiveStreamPreloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets live stream prefetch tasks. You can prefetch up to 100 live streams in a batch.
       *
       * @description - You can call this operation to set live stream prefetch tasks in batches. You can set up to 100 live stream URLs at a time.
       * - Live stream prefetch does not support HLS URLs.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request SetLiveStreamPreloadTasksRequest
       * @return SetLiveStreamPreloadTasksResponse
       */
      Models::SetLiveStreamPreloadTasksResponse setLiveStreamPreloadTasks(const Models::SetLiveStreamPreloadTasksRequest &request);

      /**
       * @summary Sets the stream ingest callback configuration.
       *
       * @description - This operation allows you to configure the callback URL and authentication information for an ingest domain.
       * - The real-time stream status callback promptly notifies you of the results of stream ingest or stream disconnection operations. For more information, see [Stream ingest callback format description](https://help.aliyun.com/document_detail/54787.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request SetLiveStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLiveStreamsNotifyUrlConfigResponse
       */
      Models::SetLiveStreamsNotifyUrlConfigResponse setLiveStreamsNotifyUrlConfigWithOptions(const Models::SetLiveStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the stream ingest callback configuration.
       *
       * @description - This operation allows you to configure the callback URL and authentication information for an ingest domain.
       * - The real-time stream status callback promptly notifies you of the results of stream ingest or stream disconnection operations. For more information, see [Stream ingest callback format description](https://help.aliyun.com/document_detail/54787.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request SetLiveStreamsNotifyUrlConfigRequest
       * @return SetLiveStreamsNotifyUrlConfigResponse
       */
      Models::SetLiveStreamsNotifyUrlConfigResponse setLiveStreamsNotifyUrlConfig(const Models::SetLiveStreamsNotifyUrlConfigRequest &request);

      /**
       * @summary Sets the background for a playlist mode production studio.
       *
       * @description - Create a playlist mode production studio before calling this operation to add background materials. To create a production studio by using an API operation, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * - You can use this operation to create, update, or delete a playlist background. To delete the background, leave the ResourceType, ResourceUrl, and MaterialId parameters empty.  
       * >Notice: 
       * - When using ApsaraVideo VOD resources, use managed bucket resources first. Resources in your own bucket may expire. If you use resources in your own bucket, check the resource validity period.
       * - Use ApsaraVideo Live and ApsaraVideo VOD resources as material input first. Resources from third-party URLs may fail to play. Verify the quality and validity of such resources.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request SetShowListBackgroundRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetShowListBackgroundResponse
       */
      Models::SetShowListBackgroundResponse setShowListBackgroundWithOptions(const Models::SetShowListBackgroundRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the background for a playlist mode production studio.
       *
       * @description - Create a playlist mode production studio before calling this operation to add background materials. To create a production studio by using an API operation, see [CreateCaster](https://help.aliyun.com/document_detail/2848009.html).
       * - You can use this operation to create, update, or delete a playlist background. To delete the background, leave the ResourceType, ResourceUrl, and MaterialId parameters empty.  
       * >Notice: 
       * - When using ApsaraVideo VOD resources, use managed bucket resources first. Resources in your own bucket may expire. If you use resources in your own bucket, check the resource validity period.
       * - Use ApsaraVideo Live and ApsaraVideo VOD resources as material input first. Resources from third-party URLs may fail to play. Verify the quality and validity of such resources.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request SetShowListBackgroundRequest
       * @return SetShowListBackgroundResponse
       */
      Models::SetShowListBackgroundResponse setShowListBackground(const Models::SetShowListBackgroundRequest &request);

      /**
       * @summary Configures authentication for snapshot callbacks.
       *
       * @description - Before calling this API, configure a callback URL first. For more information, see [AddLiveAppSnapshotConfig](https://help.aliyun.com/document_detail/2847897.html).
       * - The snapshot service supports adding a signature header to HTTP or HTTPS callback requests. This allows the receiving server to authenticate the signature and prevent unauthorized or invalid requests. For more information, see [Usage notes for callback authentication](https://help.aliyun.com/document_detail/417349.html).
       * ## QPS limits
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request SetSnapshotCallbackAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSnapshotCallbackAuthResponse
       */
      Models::SetSnapshotCallbackAuthResponse setSnapshotCallbackAuthWithOptions(const Models::SetSnapshotCallbackAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures authentication for snapshot callbacks.
       *
       * @description - Before calling this API, configure a callback URL first. For more information, see [AddLiveAppSnapshotConfig](https://help.aliyun.com/document_detail/2847897.html).
       * - The snapshot service supports adding a signature header to HTTP or HTTPS callback requests. This allows the receiving server to authenticate the signature and prevent unauthorized or invalid requests. For more information, see [Usage notes for callback authentication](https://help.aliyun.com/document_detail/417349.html).
       * ## QPS limits
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request SetSnapshotCallbackAuthRequest
       * @return SetSnapshotCallbackAuthResponse
       */
      Models::SetSnapshotCallbackAuthResponse setSnapshotCallbackAuth(const Models::SetSnapshotCallbackAuthRequest &request);

      /**
       * @summary Starts a production studio. If the PVW and PGM scenes do not exist, they are created. The PVW and PGM scenes are started, and the underlying audio and video processing tasks are initiated.
       *
       * @description Create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, and then call this operation to start the production studio. If the PVW and PGM scenes do not exist, they are created. The PVW and PGM scenes are started, and the underlying audio and video processing tasks are initiated.
       * Before calling this operation, call SetCasterConfig to configure DomainName. If DomainName is not configured, the error InvalidDomainName.NotFound is returned.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request StartCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCasterResponse
       */
      Models::StartCasterResponse startCasterWithOptions(const Models::StartCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a production studio. If the PVW and PGM scenes do not exist, they are created. The PVW and PGM scenes are started, and the underlying audio and video processing tasks are initiated.
       *
       * @description Create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, and then call this operation to start the production studio. If the PVW and PGM scenes do not exist, they are created. The PVW and PGM scenes are started, and the underlying audio and video processing tasks are initiated.
       * Before calling this operation, call SetCasterConfig to configure DomainName. If DomainName is not configured, the error InvalidDomainName.NotFound is returned.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request StartCasterRequest
       * @return StartCasterResponse
       */
      Models::StartCasterResponse startCaster(const Models::StartCasterRequest &request);

      /**
       * @summary Starts a specified Program View (PVW) scene. This operation is used to start preview scenes.
       *
       * @description You can call this operation to start a specified Program View (PVW) scene. A PVW scene is a preview scene.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled. Throttling can affect your business. We recommend that you call this operation within the specified limit.
       *
       * @param request StartCasterSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCasterSceneResponse
       */
      Models::StartCasterSceneResponse startCasterSceneWithOptions(const Models::StartCasterSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a specified Program View (PVW) scene. This operation is used to start preview scenes.
       *
       * @description You can call this operation to start a specified Program View (PVW) scene. A PVW scene is a preview scene.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled. Throttling can affect your business. We recommend that you call this operation within the specified limit.
       *
       * @param request StartCasterSceneRequest
       * @return StartCasterSceneResponse
       */
      Models::StartCasterSceneResponse startCasterScene(const Models::StartCasterSceneRequest &request);

      /**
       * @summary Starts an edge transcoding task.
       *
       * @description - This operation is used to start an edge transcoding job.
       * - Before you call this operation, make sure that you have the required permissions to access the edge transcoding service and that the specified transcoding job is not running.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute for each user. API calls that exceed this limit are throttled, which may affect your business. We recommend that you call this operation as needed.
       *
       * @param request StartEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartEdgeTranscodeJobResponse
       */
      Models::StartEdgeTranscodeJobResponse startEdgeTranscodeJobWithOptions(const Models::StartEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an edge transcoding task.
       *
       * @description - This operation is used to start an edge transcoding job.
       * - Before you call this operation, make sure that you have the required permissions to access the edge transcoding service and that the specified transcoding job is not running.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute for each user. API calls that exceed this limit are throttled, which may affect your business. We recommend that you call this operation as needed.
       *
       * @param request StartEdgeTranscodeJobRequest
       * @return StartEdgeTranscodeJobResponse
       */
      Models::StartEdgeTranscodeJobResponse startEdgeTranscodeJob(const Models::StartEdgeTranscodeJobRequest &request);

      /**
       * @summary Starts a disabled live streaming domain. This operation changes the DomainStatus to online.
       *
       * @description This API operation fails if your account has an overdue payment or if the domain name is in an invalid state.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request StartLiveDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLiveDomainResponse
       */
      Models::StartLiveDomainResponse startLiveDomainWithOptions(const Models::StartLiveDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a disabled live streaming domain. This operation changes the DomainStatus to online.
       *
       * @description This API operation fails if your account has an overdue payment or if the domain name is in an invalid state.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request StartLiveDomainRequest
       * @return StartLiveDomainResponse
       */
      Models::StartLiveDomainResponse startLiveDomain(const Models::StartLiveDomainRequest &request);

      /**
       * @summary Creates a stream mixing and transcoding task.
       *
       * @description By default, each application ID supports a maximum of 200 single-stream ingest tasks and 40 stream mixing and transcoding tasks. To increase the quota, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket).
       * ### Stream mixing task lifecycle
       * **Start**
       * - When a streamer starts streaming for the first time, you can call StartLiveMPUTask to start a bypass task.
       *   - If no users are in the channel, a "channel does not exist" error is returned.
       *   - The bypass stream is output only when a user starts stream ingest. If the user in a single-stream task does not ingest a stream, the bypass stream cannot be played.
       *   - For a stream mixing task, at least one user must be ingesting a stream for the bypass stream to be playable. The layout area for users who are not ingesting streams shows a black screen.
       * - You can record the bypass task status, task type, and task parameters on your business server.
       *   - Task status: Started, Stopped.
       *   - Task type: Single-stream, Stream mixing.
       *   - Task parameters: The latest input parameters. For example, after a successful call to UpdateLiveMPUTask, record the latest task parameters.
       * - In co-streaming or PK scenarios, if a task has been updated to a stream mixing task and the streamer unexpectedly leaves and then rejoins the channel, your business server can call StartLiveMPUTask to restart the stream mixing task based on the saved task type and parameters.
       *   - If the system has not automatically cleared the task before you start it, the task starts successfully.
       *   - If the system has not yet cleared the task, a **Task already exists** error code is returned.
       * **End**
       * - When a streamer leaves the channel, call [StopLiveMPUTask](https://help.aliyun.com/document_detail/2362742.html) to stop the bypass task.
       * - If all users in the task leave the channel and StopLiveMPUTask is not called, the system automatically stops the bypass task after 2 minutes.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user for this API is 500 calls/second. If you exceed this limit, API calls are throttled. This may affect your business. We recommend that you call this API reasonably.
       *
       * @param tmpReq StartLiveMPUTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLiveMPUTaskResponse
       */
      Models::StartLiveMPUTaskResponse startLiveMPUTaskWithOptions(const Models::StartLiveMPUTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a stream mixing and transcoding task.
       *
       * @description By default, each application ID supports a maximum of 200 single-stream ingest tasks and 40 stream mixing and transcoding tasks. To increase the quota, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket).
       * ### Stream mixing task lifecycle
       * **Start**
       * - When a streamer starts streaming for the first time, you can call StartLiveMPUTask to start a bypass task.
       *   - If no users are in the channel, a "channel does not exist" error is returned.
       *   - The bypass stream is output only when a user starts stream ingest. If the user in a single-stream task does not ingest a stream, the bypass stream cannot be played.
       *   - For a stream mixing task, at least one user must be ingesting a stream for the bypass stream to be playable. The layout area for users who are not ingesting streams shows a black screen.
       * - You can record the bypass task status, task type, and task parameters on your business server.
       *   - Task status: Started, Stopped.
       *   - Task type: Single-stream, Stream mixing.
       *   - Task parameters: The latest input parameters. For example, after a successful call to UpdateLiveMPUTask, record the latest task parameters.
       * - In co-streaming or PK scenarios, if a task has been updated to a stream mixing task and the streamer unexpectedly leaves and then rejoins the channel, your business server can call StartLiveMPUTask to restart the stream mixing task based on the saved task type and parameters.
       *   - If the system has not automatically cleared the task before you start it, the task starts successfully.
       *   - If the system has not yet cleared the task, a **Task already exists** error code is returned.
       * **End**
       * - When a streamer leaves the channel, call [StopLiveMPUTask](https://help.aliyun.com/document_detail/2362742.html) to stop the bypass task.
       * - If all users in the task leave the channel and StopLiveMPUTask is not called, the system automatically stops the bypass task after 2 minutes.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user for this API is 500 calls/second. If you exceed this limit, API calls are throttled. This may affect your business. We recommend that you call this API reasonably.
       *
       * @param request StartLiveMPUTaskRequest
       * @return StartLiveMPUTaskResponse
       */
      Models::StartLiveMPUTaskResponse startLiveMPUTask(const Models::StartLiveMPUTaskRequest &request);

      /**
       * @summary Starts live monitoring.
       *
       * @description You can call the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation to create a monitoring session. Then, you can use the **MonitorId** value from the response to start the session.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. Calls that exceed this limit are throttled. Throttling may affect your business. Plan your calls accordingly.
       *
       * @param request StartLiveStreamMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLiveStreamMonitorResponse
       */
      Models::StartLiveStreamMonitorResponse startLiveStreamMonitorWithOptions(const Models::StartLiveStreamMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts live monitoring.
       *
       * @description You can call the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation to create a monitoring session. Then, you can use the **MonitorId** value from the response to start the session.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. Calls that exceed this limit are throttled. Throttling may affect your business. Plan your calls accordingly.
       *
       * @param request StartLiveStreamMonitorRequest
       * @return StartLiveStreamMonitorResponse
       */
      Models::StartLiveStreamMonitorResponse startLiveStreamMonitor(const Models::StartLiveStreamMonitorRequest &request);

      /**
       * @summary Starts a playlist.
       *
       * @description Call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add items to a playlist. Then, call this operation to start the playlist.
       * ## QPS limit
       * This operation has a queries per second (QPS) limit of 10 for each user. If you exceed this limit, your API calls are throttled, which may affect your business. Call this operation within the specified limit.
       *
       * @param request StartPlaylistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPlaylistResponse
       */
      Models::StartPlaylistResponse startPlaylistWithOptions(const Models::StartPlaylistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a playlist.
       *
       * @description Call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add items to a playlist. Then, call this operation to start the playlist.
       * ## QPS limit
       * This operation has a queries per second (QPS) limit of 10 for each user. If you exceed this limit, your API calls are throttled, which may affect your business. Call this operation within the specified limit.
       *
       * @param request StartPlaylistRequest
       * @return StartPlaylistResponse
       */
      Models::StartPlaylistResponse startPlaylist(const Models::StartPlaylistRequest &request);

      /**
       * @summary Starts an RTC cloud recording task.
       *
       * @description Cloud recording is a paid feature. For billing details, see [Cloud recording fees](https://help.aliyun.com/document_detail/2976391.html).
       * ## Service registration
       * ## QPS limit.
       *
       * @param tmpReq StartRtcCloudRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRtcCloudRecordingResponse
       */
      Models::StartRtcCloudRecordingResponse startRtcCloudRecordingWithOptions(const Models::StartRtcCloudRecordingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an RTC cloud recording task.
       *
       * @description Cloud recording is a paid feature. For billing details, see [Cloud recording fees](https://help.aliyun.com/document_detail/2976391.html).
       * ## Service registration
       * ## QPS limit.
       *
       * @param request StartRtcCloudRecordingRequest
       * @return StartRtcCloudRecordingResponse
       */
      Models::StartRtcCloudRecordingResponse startRtcCloudRecording(const Models::StartRtcCloudRecordingRequest &request);

      /**
       * @summary Creates a cloud transcoding job.
       *
       * @description ## Endpoints
       * The following endpoints are available for this operation.
       * | Region    | Region ID      | Public endpoint                  |
       * | --------- | -------------- | -------------------------------- |
       * | Singapore | ap-southeast-1 | live.ap-southeast-1.aliyuncs.com |
       *
       * @param tmpReq StartRtcCloudTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRtcCloudTranscodeResponse
       */
      Models::StartRtcCloudTranscodeResponse startRtcCloudTranscodeWithOptions(const Models::StartRtcCloudTranscodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud transcoding job.
       *
       * @description ## Endpoints
       * The following endpoints are available for this operation.
       * | Region    | Region ID      | Public endpoint                  |
       * | --------- | -------------- | -------------------------------- |
       * | Singapore | ap-southeast-1 | live.ap-southeast-1.aliyuncs.com |
       *
       * @param request StartRtcCloudTranscodeRequest
       * @return StartRtcCloudTranscodeResponse
       */
      Models::StartRtcCloudTranscodeResponse startRtcCloudTranscode(const Models::StartRtcCloudTranscodeRequest &request);

      /**
       * @summary Stops a production studio. This stops the PVW (preview scene) and PGM (program output scene) scenes.
       *
       * @description You must first call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to stop the production studio, which stops the Preview (PVW) and Program (PGM) scenes.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. API calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request StopCasterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCasterResponse
       */
      Models::StopCasterResponse stopCasterWithOptions(const Models::StopCasterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a production studio. This stops the PVW (preview scene) and PGM (program output scene) scenes.
       *
       * @description You must first call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. You can then call this operation to stop the production studio, which stops the Preview (PVW) and Program (PGM) scenes.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. API calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request StopCasterRequest
       * @return StopCasterResponse
       */
      Models::StopCasterResponse stopCaster(const Models::StopCasterRequest &request);

      /**
       * @summary Stops a specified preview (PVW) scene.
       *
       * @description Call this operation to stop a specified preview (PVW) scene.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) per user. Exceeding this limit results in API call throttling, which may affect your business. We recommend that you call this operation at a reasonable frequency.
       *
       * @param request StopCasterSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCasterSceneResponse
       */
      Models::StopCasterSceneResponse stopCasterSceneWithOptions(const Models::StopCasterSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a specified preview (PVW) scene.
       *
       * @description Call this operation to stop a specified preview (PVW) scene.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) per user. Exceeding this limit results in API call throttling, which may affect your business. We recommend that you call this operation at a reasonable frequency.
       *
       * @param request StopCasterSceneRequest
       * @return StopCasterSceneResponse
       */
      Models::StopCasterSceneResponse stopCasterScene(const Models::StopCasterSceneRequest &request);

      /**
       * @summary Stops an edge transcoding task.
       *
       * @description - This operation stops an edge transcoding job.
       * - To call this operation, you must have permissions to access the edge transcoding service, and the transcoding job must be in the running state.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute for each account. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request StopEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopEdgeTranscodeJobResponse
       */
      Models::StopEdgeTranscodeJobResponse stopEdgeTranscodeJobWithOptions(const Models::StopEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an edge transcoding task.
       *
       * @description - This operation stops an edge transcoding job.
       * - To call this operation, you must have permissions to access the edge transcoding service, and the transcoding job must be in the running state.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute for each account. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request StopEdgeTranscodeJobRequest
       * @return StopEdgeTranscodeJobResponse
       */
      Models::StopEdgeTranscodeJobResponse stopEdgeTranscodeJob(const Models::StopEdgeTranscodeJobRequest &request);

      /**
       * @summary Disables a live streaming domain. This operation changes the DomainStatus to offline.
       *
       * @description After a live streaming domain is disabled, its information is retained. The system automatically performs an origin fetch for requests to the domain.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request StopLiveDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLiveDomainResponse
       */
      Models::StopLiveDomainResponse stopLiveDomainWithOptions(const Models::StopLiveDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a live streaming domain. This operation changes the DomainStatus to offline.
       *
       * @description After a live streaming domain is disabled, its information is retained. The system automatically performs an origin fetch for requests to the domain.
       * ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request StopLiveDomainRequest
       * @return StopLiveDomainResponse
       */
      Models::StopLiveDomainResponse stopLiveDomain(const Models::StopLiveDomainRequest &request);

      /**
       * @summary Stops a stream mixing and forwarding task.
       *
       * @description - Before you call this operation, you must have already called [StartLiveMPUTask](https://help.aliyun.com/document_detail/2848199.html) to start a stream mixing and forwarding task.
       * - If you need to stop a stream mixing and forwarding task but the task is abnormal (StopLiveMPUTask was not called to stop the task), the task automatically stops 2 minutes after the last user leaves the channel. To resume stream mixing and forwarding after the task stops, call the [StartLiveMPUTask](https://help.aliyun.com/document_detail/2848199.html) operation again.
       * ## QPS limit
       * The single-user QPS limit for this operation is 500 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request StopLiveMPUTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLiveMPUTaskResponse
       */
      Models::StopLiveMPUTaskResponse stopLiveMPUTaskWithOptions(const Models::StopLiveMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a stream mixing and forwarding task.
       *
       * @description - Before you call this operation, you must have already called [StartLiveMPUTask](https://help.aliyun.com/document_detail/2848199.html) to start a stream mixing and forwarding task.
       * - If you need to stop a stream mixing and forwarding task but the task is abnormal (StopLiveMPUTask was not called to stop the task), the task automatically stops 2 minutes after the last user leaves the channel. To resume stream mixing and forwarding after the task stops, call the [StartLiveMPUTask](https://help.aliyun.com/document_detail/2848199.html) operation again.
       * ## QPS limit
       * The single-user QPS limit for this operation is 500 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request StopLiveMPUTaskRequest
       * @return StopLiveMPUTaskResponse
       */
      Models::StopLiveMPUTaskResponse stopLiveMPUTask(const Models::StopLiveMPUTaskRequest &request);

      /**
       * @summary Stops a stream pulling task.
       *
       * @description - Call this operation to stop a stream pulling task.
       * - You can forcibly stop a running task (including tasks in the abnormal retry state). This operation does not take effect on tasks that are not running.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request StopLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLivePullToPushResponse
       */
      Models::StopLivePullToPushResponse stopLivePullToPushWithOptions(const Models::StopLivePullToPushRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a stream pulling task.
       *
       * @description - Call this operation to stop a stream pulling task.
       * - You can forcibly stop a running task (including tasks in the abnormal retry state). This operation does not take effect on tasks that are not running.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request StopLivePullToPushRequest
       * @return StopLivePullToPushResponse
       */
      Models::StopLivePullToPushResponse stopLivePullToPush(const Models::StopLivePullToPushRequest &request);

      /**
       * @summary Stops a monitoring session.
       *
       * @description You can obtain a **MonitorId** by calling the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation. After a monitoring session starts, call this operation to stop the session.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request StopLiveStreamMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLiveStreamMonitorResponse
       */
      Models::StopLiveStreamMonitorResponse stopLiveStreamMonitorWithOptions(const Models::StopLiveStreamMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a monitoring session.
       *
       * @description You can obtain a **MonitorId** by calling the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation. After a monitoring session starts, call this operation to stop the session.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request StopLiveStreamMonitorRequest
       * @return StopLiveStreamMonitorResponse
       */
      Models::StopLiveStreamMonitorResponse stopLiveStreamMonitor(const Models::StopLiveStreamMonitorRequest &request);

      /**
       * @summary Stops playing an episode list.
       *
       * @description First, call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add items to a playlist. You can then call this operation to stop the playlist.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation based on your business needs.
       *
       * @param request StopPlaylistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopPlaylistResponse
       */
      Models::StopPlaylistResponse stopPlaylistWithOptions(const Models::StopPlaylistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops playing an episode list.
       *
       * @description First, call the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation to add items to a playlist. You can then call this operation to stop the playlist.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation based on your business needs.
       *
       * @param request StopPlaylistRequest
       * @return StopPlaylistResponse
       */
      Models::StopPlaylistResponse stopPlaylist(const Models::StopPlaylistRequest &request);

      /**
       * @summary Stops a live subtitle task.
       *
       * @description This operation is limited to 20 queries per second (QPS) for each account. If you exceed the limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request StopRtcAsrTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRtcAsrTaskResponse
       */
      Models::StopRtcAsrTaskResponse stopRtcAsrTaskWithOptions(const Models::StopRtcAsrTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a live subtitle task.
       *
       * @description This operation is limited to 20 queries per second (QPS) for each account. If you exceed the limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request StopRtcAsrTaskRequest
       * @return StopRtcAsrTaskResponse
       */
      Models::StopRtcAsrTaskResponse stopRtcAsrTask(const Models::StopRtcAsrTaskRequest &request);

      /**
       * @summary Stops an RTC cloud recording task.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for a single user is 50 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request StopRtcCloudRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRtcCloudRecordingResponse
       */
      Models::StopRtcCloudRecordingResponse stopRtcCloudRecordingWithOptions(const Models::StopRtcCloudRecordingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an RTC cloud recording task.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for a single user is 50 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request StopRtcCloudRecordingRequest
       * @return StopRtcCloudRecordingResponse
       */
      Models::StopRtcCloudRecordingResponse stopRtcCloudRecording(const Models::StopRtcCloudRecordingRequest &request);

      /**
       * @summary Stops a cloud transcoding job.
       *
       * @param request StopRtcCloudTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRtcCloudTranscodeResponse
       */
      Models::StopRtcCloudTranscodeResponse stopRtcCloudTranscodeWithOptions(const Models::StopRtcCloudTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a cloud transcoding job.
       *
       * @param request StopRtcCloudTranscodeRequest
       * @return StopRtcCloudTranscodeResponse
       */
      Models::StopRtcCloudTranscodeResponse stopRtcCloudTranscode(const Models::StopRtcCloudTranscodeRequest &request);

      /**
       * @summary Adds labels to ApsaraVideo Live resources by calling TagLiveResources.
       *
       * @description The maximum number of times that each user can call this operation per second is 100.
       *
       * @param request TagLiveResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagLiveResourcesResponse
       */
      Models::TagLiveResourcesResponse tagLiveResourcesWithOptions(const Models::TagLiveResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds labels to ApsaraVideo Live resources by calling TagLiveResources.
       *
       * @description The maximum number of times that each user can call this operation per second is 100.
       *
       * @param request TagLiveResourcesRequest
       * @return TagLiveResourcesResponse
       */
      Models::TagLiveResourcesResponse tagLiveResources(const Models::TagLiveResourcesRequest &request);

      /**
       * @summary Calls UnTagLiveResources to delete tags from ApsaraVideo Live resources.
       *
       * @description The maximum call frequency for a single user is 100 calls per second.
       *
       * @param request UnTagLiveResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagLiveResourcesResponse
       */
      Models::UnTagLiveResourcesResponse unTagLiveResourcesWithOptions(const Models::UnTagLiveResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls UnTagLiveResources to delete tags from ApsaraVideo Live resources.
       *
       * @description The maximum call frequency for a single user is 100 calls per second.
       *
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
       * @summary Updates the resource group of a production studio.
       *
       * @description ## Usage notes
       * When you call this operation, your account must have permissions on both the source and destination resource groups.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed the limit, your API calls are throttled. This may affect your business. Make sure that you call this operation within the limit. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request UpdateCasterResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCasterResourceGroupResponse
       */
      Models::UpdateCasterResourceGroupResponse updateCasterResourceGroupWithOptions(const Models::UpdateCasterResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the resource group of a production studio.
       *
       * @description ## Usage notes
       * When you call this operation, your account must have permissions on both the source and destination resource groups.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed the limit, your API calls are throttled. This may affect your business. Make sure that you call this operation within the limit. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request UpdateCasterResourceGroupRequest
       * @return UpdateCasterResourceGroupResponse
       */
      Models::UpdateCasterResourceGroupResponse updateCasterResourceGroup(const Models::UpdateCasterResourceGroupRequest &request);

      /**
       * @summary Modifies the audio configurations of a scene. This operation also lets you add an audio configuration or apply an existing audio configuration to a new scene.
       *
       * @description First, call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. Then, you can call this operation to update the audio configuration of a scene. This operation supports the audio mixing mode and the audio-follows-video (AFV) mode.
       * ## QPS limits
       * You can make up to 10 queries per second (QPS) per Alibaba Cloud account. API calls that exceed this limit are throttled, which may affect your business. We recommend that you adhere to this limit.
       *
       * @param request UpdateCasterSceneAudioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCasterSceneAudioResponse
       */
      Models::UpdateCasterSceneAudioResponse updateCasterSceneAudioWithOptions(const Models::UpdateCasterSceneAudioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the audio configurations of a scene. This operation also lets you add an audio configuration or apply an existing audio configuration to a new scene.
       *
       * @description First, call the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation to create a production studio. Then, you can call this operation to update the audio configuration of a scene. This operation supports the audio mixing mode and the audio-follows-video (AFV) mode.
       * ## QPS limits
       * You can make up to 10 queries per second (QPS) per Alibaba Cloud account. API calls that exceed this limit are throttled, which may affect your business. We recommend that you adhere to this limit.
       *
       * @param request UpdateCasterSceneAudioRequest
       * @return UpdateCasterSceneAudioResponse
       */
      Models::UpdateCasterSceneAudioResponse updateCasterSceneAudio(const Models::UpdateCasterSceneAudioRequest &request);

      /**
       * @summary Modifies a scene, including the layout, without invalidating the previous configurations. This operation is more efficient than the SetCasterSceneConfig operation.
       *
       * @description You can call this operation to incrementally modify the configuration of a scene, including its layout. This operation preserves existing settings and is more efficient than a full update.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. Calls that exceed this limit are throttled, which may affect your business. We recommend that you plan your calls accordingly.
       *
       * @param request UpdateCasterSceneConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCasterSceneConfigResponse
       */
      Models::UpdateCasterSceneConfigResponse updateCasterSceneConfigWithOptions(const Models::UpdateCasterSceneConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scene, including the layout, without invalidating the previous configurations. This operation is more efficient than the SetCasterSceneConfig operation.
       *
       * @description You can call this operation to incrementally modify the configuration of a scene, including its layout. This operation preserves existing settings and is more efficient than a full update.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. Calls that exceed this limit are throttled, which may affect your business. We recommend that you plan your calls accordingly.
       *
       * @param request UpdateCasterSceneConfigRequest
       * @return UpdateCasterSceneConfigResponse
       */
      Models::UpdateCasterSceneConfigResponse updateCasterSceneConfig(const Models::UpdateCasterSceneConfigRequest &request);

      /**
       * @summary Updates a custom transcoding configuration.
       *
       * @description This operation supports the following types of custom transcoding templates:
       * - h264: H.264 standard transcoding.
       * - h264-nbhd: H.264 Narrowband HD™ transcoding.
       * - h265: H.265 standard transcoding.
       * - h265-nbhd: H.265 Narrowband HD™ transcoding.
       * - audio: an audio-only transcoding.
       * ## QPS limit
       * You can call this operation up to 6,000 times per second per account.
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
       * - h264: H.264 standard transcoding.
       * - h264-nbhd: H.264 Narrowband HD™ transcoding.
       * - h265: H.265 standard transcoding.
       * - h265-nbhd: H.265 Narrowband HD™ transcoding.
       * - audio: an audio-only transcoding.
       * ## QPS limit
       * You can call this operation up to 6,000 times per second per account.
       *
       * @param request UpdateCustomLiveStreamTranscodeRequest
       * @return UpdateCustomLiveStreamTranscodeResponse
       */
      Models::UpdateCustomLiveStreamTranscodeResponse updateCustomLiveStreamTranscode(const Models::UpdateCustomLiveStreamTranscodeRequest &request);

      /**
       * @summary Updates an edge transcoding job.
       *
       * @description - This operation updates an edge transcoding job.
       * - To call this operation, you must have permissions to access the edge transcoding service. The transcoding job must not have been started.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute per user. If you exceed this limit, API calls are throttled. This may impact your business. Plan your calls accordingly.
       *
       * @param request UpdateEdgeTranscodeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEdgeTranscodeJobResponse
       */
      Models::UpdateEdgeTranscodeJobResponse updateEdgeTranscodeJobWithOptions(const Models::UpdateEdgeTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an edge transcoding job.
       *
       * @description - This operation updates an edge transcoding job.
       * - To call this operation, you must have permissions to access the edge transcoding service. The transcoding job must not have been started.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 6,000 calls per minute per user. If you exceed this limit, API calls are throttled. This may impact your business. Plan your calls accordingly.
       *
       * @param request UpdateEdgeTranscodeJobRequest
       * @return UpdateEdgeTranscodeJobResponse
       */
      Models::UpdateEdgeTranscodeJobResponse updateEdgeTranscodeJob(const Models::UpdateEdgeTranscodeJobRequest &request);

      /**
       * @summary Updates a callback that is used to subscribe to channel or user events.
       *
       * @description - Before you call this operation, make sure that you have called the [CreateEventSub](https://help.aliyun.com/document_detail/2848209.html) operation to create a callback that is used to subscribe to channel or user events.
       * - An existing channel that you specify in this operation still uses its original callback configuration. The updated configuration can apply to the channel only if you restart the channel after it is closed for longer than 20 minutes.
       * - If you only want to update specific parameters, you must also specify the other required parameters with their original values.
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
       * @description - Before you call this operation, make sure that you have called the [CreateEventSub](https://help.aliyun.com/document_detail/2848209.html) operation to create a callback that is used to subscribe to channel or user events.
       * - An existing channel that you specify in this operation still uses its original callback configuration. The updated configuration can apply to the channel only if you restart the channel after it is closed for longer than 20 minutes.
       * - If you only want to update specific parameters, you must also specify the other required parameters with their original values.
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
       * @description Updates the parameters of a specified subtitle rule.
       * >Notice: The real-time subtitle feature is currently in invitational preview. Each user can add up to 300 subtitle templates.
       * ## QPS limit
       * The single-user QPS limit for this API is 60 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request UpdateLiveAIProduceRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveAIProduceRulesResponse
       */
      Models::UpdateLiveAIProduceRulesResponse updateLiveAIProduceRulesWithOptions(const Models::UpdateLiveAIProduceRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a subtitle rule.
       *
       * @description Updates the parameters of a specified subtitle rule.
       * >Notice: The real-time subtitle feature is currently in invitational preview. Each user can add up to 300 subtitle templates.
       * ## QPS limit
       * The single-user QPS limit for this API is 60 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request UpdateLiveAIProduceRulesRequest
       * @return UpdateLiveAIProduceRulesResponse
       */
      Models::UpdateLiveAIProduceRulesResponse updateLiveAIProduceRules(const Models::UpdateLiveAIProduceRulesRequest &request);

      /**
       * @summary Updates a subtitle template by calling UpdateLiveAISubtitle.
       *
       * @description ## Operation description
       * This operation updates the parameters of a specified subtitle template.
       * >Notice: The real-time subtitle feature is currently in invitational preview. Each user can add up to 300 subtitle templates.
       * ## QPS limit
       * The single-user QPS limit for this operation is 60 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq UpdateLiveAISubtitleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveAISubtitleResponse
       */
      Models::UpdateLiveAISubtitleResponse updateLiveAISubtitleWithOptions(const Models::UpdateLiveAISubtitleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a subtitle template by calling UpdateLiveAISubtitle.
       *
       * @description ## Operation description
       * This operation updates the parameters of a specified subtitle template.
       * >Notice: The real-time subtitle feature is currently in invitational preview. Each user can add up to 300 subtitle templates.
       * ## QPS limit
       * The single-user QPS limit for this operation is 60 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request UpdateLiveAISubtitleRequest
       * @return UpdateLiveAISubtitleResponse
       */
      Models::UpdateLiveAISubtitleResponse updateLiveAISubtitle(const Models::UpdateLiveAISubtitleRequest &request);

      /**
       * @summary Updates a live stream recording configuration that saves the output to Object Storage Service (OSS).
       *
       * @description ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request UpdateLiveAppRecordConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveAppRecordConfigResponse
       */
      Models::UpdateLiveAppRecordConfigResponse updateLiveAppRecordConfigWithOptions(const Models::UpdateLiveAppRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a live stream recording configuration that saves the output to Object Storage Service (OSS).
       *
       * @description ## QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
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
       * @summary Updates the voice content moderation configuration for live streaming.
       *
       * @description - Obtain the streamer streaming domain before invoking this operation to update the voice content moderation configuration for live streaming.
       * - Before invoking this operation, create a voice content moderation configuration by calling AddLiveAudioAuditConfig.
       * - Currently, only some live centers support intelligent content moderation for live streaming. For information about the live centers that support this feature, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * The maximum number of queries per second (QPS) per user for this operation is 10. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation as needed.
       *
       * @param request UpdateLiveAudioAuditConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveAudioAuditConfigResponse
       */
      Models::UpdateLiveAudioAuditConfigResponse updateLiveAudioAuditConfigWithOptions(const Models::UpdateLiveAudioAuditConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the voice content moderation configuration for live streaming.
       *
       * @description - Obtain the streamer streaming domain before invoking this operation to update the voice content moderation configuration for live streaming.
       * - Before invoking this operation, create a voice content moderation configuration by calling AddLiveAudioAuditConfig.
       * - Currently, only some live centers support intelligent content moderation for live streaming. For information about the live centers that support this feature, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limit
       * The maximum number of queries per second (QPS) per user for this operation is 10. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation as needed.
       *
       * @param request UpdateLiveAudioAuditConfigRequest
       * @return UpdateLiveAudioAuditConfigResponse
       */
      Models::UpdateLiveAudioAuditConfigResponse updateLiveAudioAuditConfig(const Models::UpdateLiveAudioAuditConfigRequest &request);

      /**
       * @summary Updates the callback configuration for automated audio review.
       *
       * @description - Obtain the streaming domain and then call this operation to update the callback configuration for automated audio review.
       * - Live audio moderation is available only in specific regions. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limits
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request UpdateLiveAudioAuditNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveAudioAuditNotifyConfigResponse
       */
      Models::UpdateLiveAudioAuditNotifyConfigResponse updateLiveAudioAuditNotifyConfigWithOptions(const Models::UpdateLiveAudioAuditNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the callback configuration for automated audio review.
       *
       * @description - Obtain the streaming domain and then call this operation to update the callback configuration for automated audio review.
       * - Live audio moderation is available only in specific regions. For supported regions, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * ## QPS limits
       * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request UpdateLiveAudioAuditNotifyConfigRequest
       * @return UpdateLiveAudioAuditNotifyConfigResponse
       */
      Models::UpdateLiveAudioAuditNotifyConfigResponse updateLiveAudioAuditNotifyConfig(const Models::UpdateLiveAudioAuditNotifyConfigRequest &request);

      /**
       * @summary Updates the live center transfer configuration by calling UpdateLiveCenterTransfer.
       *
       * @description This operation only supports updating configurations related to the **transfer validity period** (TransferArgs, StartTime, EndTime).
       * ## QPS limit
       * The QPS limit for this operation is 100 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request UpdateLiveCenterTransferRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveCenterTransferResponse
       */
      Models::UpdateLiveCenterTransferResponse updateLiveCenterTransferWithOptions(const Models::UpdateLiveCenterTransferRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the live center transfer configuration by calling UpdateLiveCenterTransfer.
       *
       * @description This operation only supports updating configurations related to the **transfer validity period** (TransferArgs, StartTime, EndTime).
       * ## QPS limit
       * The QPS limit for this operation is 100 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request UpdateLiveCenterTransferRequest
       * @return UpdateLiveCenterTransferResponse
       */
      Models::UpdateLiveCenterTransferResponse updateLiveCenterTransfer(const Models::UpdateLiveCenterTransferRequest &request);

      /**
       * @summary Updates the live stream delay configuration.
       *
       * @description You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request UpdateLiveDelayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveDelayConfigResponse
       */
      Models::UpdateLiveDelayConfigResponse updateLiveDelayConfigWithOptions(const Models::UpdateLiveDelayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the live stream delay configuration.
       *
       * @description You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request UpdateLiveDelayConfigRequest
       * @return UpdateLiveDelayConfigResponse
       */
      Models::UpdateLiveDelayConfigResponse updateLiveDelayConfig(const Models::UpdateLiveDelayConfigRequest &request);

      /**
       * @summary Modifies the configuration of callbacks for video moderation results. As a result, the callback URL that is used to receive the callback notifications is changed.
       *
       * @description - Obtain the main streaming domain, and then call this operation to modify the configuration of callbacks for video moderation results.
       * - Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
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
       * @description - Obtain the main streaming domain, and then call this operation to modify the configuration of callbacks for video moderation results.
       * - Only some live centers support the content moderation feature. For more information, see [Supported regions](https://help.aliyun.com/document_detail/193730.html).
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
       * @summary Updates live encapsulation configurations.
       *
       * @description You can call this operation to update live encapsulation configurations. The new configurations take effect after you restart the stream ingest.
       * ## QPS limit
       * This operation is limited to 300 queries per second (QPS) per user. If you exceed this limit, API calls are throttled. This can affect your business operations. Plan your calls accordingly.
       *
       * @param request UpdateLivePackageConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivePackageConfigResponse
       */
      Models::UpdateLivePackageConfigResponse updateLivePackageConfigWithOptions(const Models::UpdateLivePackageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates live encapsulation configurations.
       *
       * @description You can call this operation to update live encapsulation configurations. The new configurations take effect after you restart the stream ingest.
       * ## QPS limit
       * This operation is limited to 300 queries per second (QPS) per user. If you exceed this limit, API calls are throttled. This can affect your business operations. Plan your calls accordingly.
       *
       * @param request UpdateLivePackageConfigRequest
       * @return UpdateLivePackageConfigResponse
       */
      Models::UpdateLivePackageConfigResponse updateLivePackageConfig(const Models::UpdateLivePackageConfigRequest &request);

      /**
       * @summary Updates the configuration of live stream pulling, including the addresses of the origin server, start time, and end time.
       *
       * @description This operation is applicable to fixed stream pulling. Invoke this operation to update the configuration of live stream pulling, including the addresses of the origin server, start time, and end time.
       * Before invoking this operation, use AddLivePullStreamInfoConfig to create a stream pulling configuration for the specified (DomainName, AppName, StreamName).
       * > After you invoke this operation to modify the configuration, the live streaming service re-executes fixed stream pulling based on the modified configuration. Make sure that the modification does not affect your online services.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 1000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request UpdateLivePullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivePullStreamInfoConfigResponse
       */
      Models::UpdateLivePullStreamInfoConfigResponse updateLivePullStreamInfoConfigWithOptions(const Models::UpdateLivePullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of live stream pulling, including the addresses of the origin server, start time, and end time.
       *
       * @description This operation is applicable to fixed stream pulling. Invoke this operation to update the configuration of live stream pulling, including the addresses of the origin server, start time, and end time.
       * Before invoking this operation, use AddLivePullStreamInfoConfig to create a stream pulling configuration for the specified (DomainName, AppName, StreamName).
       * > After you invoke this operation to modify the configuration, the live streaming service re-executes fixed stream pulling based on the modified configuration. Make sure that the modification does not affect your online services.
       * ## QPS limit
       * The QPS limit for a single user on this operation is 1000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request UpdateLivePullStreamInfoConfigRequest
       * @return UpdateLivePullStreamInfoConfigResponse
       */
      Models::UpdateLivePullStreamInfoConfigResponse updateLivePullStreamInfoConfig(const Models::UpdateLivePullStreamInfoConfigRequest &request);

      /**
       * @summary Updates a stream pulling task by calling UpdateLivePullToPush.
       *
       * @description - Call this operation to update a stream pulling task.
       * - If the task has not reached the configured start time, you can update the Region parameter.
       * - If the task is running (including in an abnormal retry state), only CallbackUrl and RepeatTime can be updated, and the updates take effect immediately.
       * - If the task is stopped, all parameters except Region can be updated.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param tmpReq UpdateLivePullToPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLivePullToPushResponse
       */
      Models::UpdateLivePullToPushResponse updateLivePullToPushWithOptions(const Models::UpdateLivePullToPushRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a stream pulling task by calling UpdateLivePullToPush.
       *
       * @description - Call this operation to update a stream pulling task.
       * - If the task has not reached the configured start time, you can update the Region parameter.
       * - If the task is running (including in an abnormal retry state), only CallbackUrl and RepeatTime can be updated, and the updates take effect immediately.
       * - If the task is stopped, all parameters except Region can be updated.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request UpdateLivePullToPushRequest
       * @return UpdateLivePullToPushResponse
       */
      Models::UpdateLivePullToPushResponse updateLivePullToPush(const Models::UpdateLivePullToPushRequest &request);

      /**
       * @summary Updates the domain-level recording callback configuration.
       *
       * @description When you update the domain-level recording callback configuration, you can modify the following settings:
       * - The callback URL for recording events, including recording file generation event callbacks and recording task status callbacks. For more information, see [Recording event callbacks](https://help.aliyun.com/document_detail/55016.html).
       * - The on-demand recording callback URL. For more information, see [On-demand recording callback](https://help.aliyun.com/document_detail/85910.html).
       * - Whether recording task status callbacks are required.
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request UpdateLiveRecordNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveRecordNotifyConfigResponse
       */
      Models::UpdateLiveRecordNotifyConfigResponse updateLiveRecordNotifyConfigWithOptions(const Models::UpdateLiveRecordNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the domain-level recording callback configuration.
       *
       * @description When you update the domain-level recording callback configuration, you can modify the following settings:
       * - The callback URL for recording events, including recording file generation event callbacks and recording task status callbacks. For more information, see [Recording event callbacks](https://help.aliyun.com/document_detail/55016.html).
       * - The on-demand recording callback URL. For more information, see [On-demand recording callback](https://help.aliyun.com/document_detail/85910.html).
       * - Whether recording task status callbacks are required.
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request UpdateLiveRecordNotifyConfigRequest
       * @return UpdateLiveRecordNotifyConfigResponse
       */
      Models::UpdateLiveRecordNotifyConfigResponse updateLiveRecordNotifyConfig(const Models::UpdateLiveRecordNotifyConfigRequest &request);

      /**
       * @summary Update a live-to-VOD configuration.
       *
       * @description This operation has a rate limit of 1,000 calls per minute per account. If you exceed this limit, your API calls will be rate-limited, which may interrupt your service.
       *
       * @param request UpdateLiveRecordVodConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveRecordVodConfigResponse
       */
      Models::UpdateLiveRecordVodConfigResponse updateLiveRecordVodConfigWithOptions(const Models::UpdateLiveRecordVodConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a live-to-VOD configuration.
       *
       * @description This operation has a rate limit of 1,000 calls per minute per account. If you exceed this limit, your API calls will be rate-limited, which may interrupt your service.
       *
       * @param request UpdateLiveRecordVodConfigRequest
       * @return UpdateLiveRecordVodConfigResponse
       */
      Models::UpdateLiveRecordVodConfigResponse updateLiveRecordVodConfig(const Models::UpdateLiveRecordVodConfigRequest &request);

      /**
       * @summary Updates the content moderation configuration for live streaming.
       *
       * @description - Obtain the streaming domain of the streamer first, and then invoke this operation to update the content moderation configuration for live streaming.
       * - Currently, only some live centers support intelligent content moderation for live streaming. For more information about the live centers that support this feature, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * - Before you invoke this operation, you must have already created a content moderation configuration for the specified DomainName and AppName by invoking AddLiveSnapshotDetectPornConfig.
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request UpdateLiveSnapshotDetectPornConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveSnapshotDetectPornConfigResponse
       */
      Models::UpdateLiveSnapshotDetectPornConfigResponse updateLiveSnapshotDetectPornConfigWithOptions(const Models::UpdateLiveSnapshotDetectPornConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the content moderation configuration for live streaming.
       *
       * @description - Obtain the streaming domain of the streamer first, and then invoke this operation to update the content moderation configuration for live streaming.
       * - Currently, only some live centers support intelligent content moderation for live streaming. For more information about the live centers that support this feature, see [Service regions](https://help.aliyun.com/document_detail/193730.html).
       * - Before you invoke this operation, you must have already created a content moderation configuration for the specified DomainName and AppName by invoking AddLiveSnapshotDetectPornConfig.
       * ## QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
       *
       * @param request UpdateLiveSnapshotDetectPornConfigRequest
       * @return UpdateLiveSnapshotDetectPornConfigResponse
       */
      Models::UpdateLiveSnapshotDetectPornConfigResponse updateLiveSnapshotDetectPornConfig(const Models::UpdateLiveSnapshotDetectPornConfigRequest &request);

      /**
       * @summary Updates the snapshot callback configuration.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request UpdateLiveSnapshotNotifyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveSnapshotNotifyConfigResponse
       */
      Models::UpdateLiveSnapshotNotifyConfigResponse updateLiveSnapshotNotifyConfigWithOptions(const Models::UpdateLiveSnapshotNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the snapshot callback configuration.
       *
       * @description You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request UpdateLiveSnapshotNotifyConfigRequest
       * @return UpdateLiveSnapshotNotifyConfigResponse
       */
      Models::UpdateLiveSnapshotNotifyConfigResponse updateLiveSnapshotNotifyConfig(const Models::UpdateLiveSnapshotNotifyConfigRequest &request);

      /**
       * @summary Updates the configurations of a monitoring session.
       *
       * @description This operation updates the configuration of a monitoring session. If the monitoring session is running, updates to the input source configuration take effect in real time.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. API calls that exceed this limit are throttled. Throttling can affect your business, so we recommend that you plan your calls accordingly.
       *
       * @param request UpdateLiveStreamMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveStreamMonitorResponse
       */
      Models::UpdateLiveStreamMonitorResponse updateLiveStreamMonitorWithOptions(const Models::UpdateLiveStreamMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of a monitoring session.
       *
       * @description This operation updates the configuration of a monitoring session. If the monitoring session is running, updates to the input source configuration take effect in real time.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. API calls that exceed this limit are throttled. Throttling can affect your business, so we recommend that you plan your calls accordingly.
       *
       * @param request UpdateLiveStreamMonitorRequest
       * @return UpdateLiveStreamMonitorResponse
       */
      Models::UpdateLiveStreamMonitorResponse updateLiveStreamMonitor(const Models::UpdateLiveStreamMonitorRequest &request);

      /**
       * @summary Updates a default transcoding configuration.
       *
       * @description To modify the encryption settings, first obtain a Customer Master Key (CMK) ID from Key Management Service (KMS). This operation supports only standard and Narrowband HD™ transcoding templates.
       * ## QPS limits
       * ou can call this operation up to 30 times per second per account.
       *
       * @param request UpdateLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveStreamTranscodeResponse
       */
      Models::UpdateLiveStreamTranscodeResponse updateLiveStreamTranscodeWithOptions(const Models::UpdateLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a default transcoding configuration.
       *
       * @description To modify the encryption settings, first obtain a Customer Master Key (CMK) ID from Key Management Service (KMS). This operation supports only standard and Narrowband HD™ transcoding templates.
       * ## QPS limits
       * ou can call this operation up to 30 times per second per account.
       *
       * @param request UpdateLiveStreamTranscodeRequest
       * @return UpdateLiveStreamTranscodeResponse
       */
      Models::UpdateLiveStreamTranscodeResponse updateLiveStreamTranscode(const Models::UpdateLiveStreamTranscodeRequest &request);

      /**
       * @summary Updates a watermark template.
       *
       * @description This operation updates the parameters of a specified watermark template.
       * ## QPS limits
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request UpdateLiveStreamWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveStreamWatermarkResponse
       */
      Models::UpdateLiveStreamWatermarkResponse updateLiveStreamWatermarkWithOptions(const Models::UpdateLiveStreamWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a watermark template.
       *
       * @description This operation updates the parameters of a specified watermark template.
       * ## QPS limits
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request UpdateLiveStreamWatermarkRequest
       * @return UpdateLiveStreamWatermarkResponse
       */
      Models::UpdateLiveStreamWatermarkResponse updateLiveStreamWatermark(const Models::UpdateLiveStreamWatermarkRequest &request);

      /**
       * @summary Updates a watermark rule.
       *
       * @description This operation updates the parameters of a watermark rule based on the specified rule ID.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request UpdateLiveStreamWatermarkRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLiveStreamWatermarkRuleResponse
       */
      Models::UpdateLiveStreamWatermarkRuleResponse updateLiveStreamWatermarkRuleWithOptions(const Models::UpdateLiveStreamWatermarkRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a watermark rule.
       *
       * @description This operation updates the parameters of a watermark rule based on the specified rule ID.
       * ## QPS limit
       * You can call this operation up to 60 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request UpdateLiveStreamWatermarkRuleRequest
       * @return UpdateLiveStreamWatermarkRuleResponse
       */
      Models::UpdateLiveStreamWatermarkRuleResponse updateLiveStreamWatermarkRule(const Models::UpdateLiveStreamWatermarkRuleRequest &request);

      /**
       * @summary Call UpdateMessageApp to update interactive message application information.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second (QPS). API calls that exceed this limit are throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq UpdateMessageAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMessageAppResponse
       */
      Models::UpdateMessageAppResponse updateMessageAppWithOptions(const Models::UpdateMessageAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call UpdateMessageApp to update interactive message application information.
       *
       * @description ## QPS limits
       * The single-user QPS limit for this API is 100 queries per second (QPS). API calls that exceed this limit are throttled, which may affect your business. You can call this API at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request UpdateMessageAppRequest
       * @return UpdateMessageAppResponse
       */
      Models::UpdateMessageAppResponse updateMessageApp(const Models::UpdateMessageAppRequest &request);

      /**
       * @summary You can call the UpdateMessageGroup operation to update message group information.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param tmpReq UpdateMessageGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMessageGroupResponse
       */
      Models::UpdateMessageGroupResponse updateMessageGroupWithOptions(const Models::UpdateMessageGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateMessageGroup operation to update message group information.
       *
       * @description ## QPS limits
       * The QPS limit for this API is 100 queries per second (QPS) per user. If the limit is exceeded, API calls will be throttled, which may affect your business. You can call the API properly to avoid this issue. For more information, see [QPS limits](https://help.aliyun.com/document_detail/343507.html).
       *
       * @param request UpdateMessageGroupRequest
       * @return UpdateMessageGroupResponse
       */
      Models::UpdateMessageGroupResponse updateMessageGroup(const Models::UpdateMessageGroupRequest &request);

      /**
       * @summary Updates a stream mix task.
       *
       * @description You can call this API operation to update a stream mix task. You can update the input sources and layout, but you cannot update parameters such as the output resolution.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled. This may impact your business. Plan your calls accordingly.
       *
       * @param request UpdateMixStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMixStreamResponse
       */
      Models::UpdateMixStreamResponse updateMixStreamWithOptions(const Models::UpdateMixStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a stream mix task.
       *
       * @description You can call this API operation to update a stream mix task. You can update the input sources and layout, but you cannot update parameters such as the output resolution.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled. This may impact your business. Plan your calls accordingly.
       *
       * @param request UpdateMixStreamRequest
       * @return UpdateMixStreamResponse
       */
      Models::UpdateMixStreamResponse updateMixStream(const Models::UpdateMixStreamRequest &request);

      /**
       * @summary Updates an RTC cloud recording task.
       *
       * @description Single-stream recording supports updating subscription parameters. Stream mixing recording supports updating only the subscribed user streams.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param tmpReq UpdateRtcCloudRecordingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRtcCloudRecordingResponse
       */
      Models::UpdateRtcCloudRecordingResponse updateRtcCloudRecordingWithOptions(const Models::UpdateRtcCloudRecordingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an RTC cloud recording task.
       *
       * @description Single-stream recording supports updating subscription parameters. Stream mixing recording supports updating only the subscribed user streams.
       * ## QPS limit
       * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation as appropriate.
       *
       * @param request UpdateRtcCloudRecordingRequest
       * @return UpdateRtcCloudRecordingResponse
       */
      Models::UpdateRtcCloudRecordingResponse updateRtcCloudRecording(const Models::UpdateRtcCloudRecordingRequest &request);

      /**
       * @summary Updates a subscription to mixed-stream relay events.
       *
       * @description - You can call this operation to update a subscription to mixed-stream relay events. You can modify parameters such as the callback URL and channel IDs.
       * - Before you call this operation, make sure that you have called the CreateRtcMPUEventSub operation to create the subscription.
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
       * @description - You can call this operation to update a subscription to mixed-stream relay events. You can modify parameters such as the callback URL and channel IDs.
       * - Before you call this operation, make sure that you have called the CreateRtcMPUEventSub operation to create the subscription.
       * ## [](#qps-)QPS limit
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request UpdateRtcMPUEventSubRequest
       * @return UpdateRtcMPUEventSubResponse
       */
      Models::UpdateRtcMPUEventSubResponse updateRtcMPUEventSub(const Models::UpdateRtcMPUEventSubRequest &request);

      /**
       * @summary Updates the configuration of a custom Real-time Streaming (RTS) transcoding template.
       *
       * @description This API operation supports only the following types of custom transcoding templates: h264, h264-nbhd, h264-origin, and audio.
       * ## QPS limit
       * You can call this operation up to 10 times per second per account.
       *
       * @param request UpdateRtsLiveStreamTranscodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRtsLiveStreamTranscodeResponse
       */
      Models::UpdateRtsLiveStreamTranscodeResponse updateRtsLiveStreamTranscodeWithOptions(const Models::UpdateRtsLiveStreamTranscodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a custom Real-time Streaming (RTS) transcoding template.
       *
       * @description This API operation supports only the following types of custom transcoding templates: h264, h264-nbhd, h264-origin, and audio.
       * ## QPS limit
       * You can call this operation up to 10 times per second per account.
       *
       * @param request UpdateRtsLiveStreamTranscodeRequest
       * @return UpdateRtsLiveStreamTranscodeResponse
       */
      Models::UpdateRtsLiveStreamTranscodeResponse updateRtsLiveStreamTranscode(const Models::UpdateRtsLiveStreamTranscodeRequest &request);

      /**
       * @summary Verifies the ownership of a domain name.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request VerifyLiveDomainOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyLiveDomainOwnerResponse
       */
      Models::VerifyLiveDomainOwnerResponse verifyLiveDomainOwnerWithOptions(const Models::VerifyLiveDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the ownership of a domain name.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions.
       *
       * @param request VerifyLiveDomainOwnerRequest
       * @return VerifyLiveDomainOwnerResponse
       */
      Models::VerifyLiveDomainOwnerResponse verifyLiveDomainOwner(const Models::VerifyLiveDomainOwnerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
