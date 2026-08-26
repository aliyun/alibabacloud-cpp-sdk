// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCASTERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCASTERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetCasterConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCasterConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSwitchUrgentConfig, autoSwitchUrgentConfig_);
      DARABONBA_PTR_TO_JSON(AutoSwitchUrgentOn, autoSwitchUrgentOn_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(CasterName, casterName_);
      DARABONBA_PTR_TO_JSON(ChannelEnable, channelEnable_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProgramEffect, programEffect_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(RecordConfig, recordConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SideOutputUrl, sideOutputUrl_);
      DARABONBA_PTR_TO_JSON(SideOutputUrlList, sideOutputUrlList_);
      DARABONBA_PTR_TO_JSON(SyncGroupsConfig, syncGroupsConfig_);
      DARABONBA_PTR_TO_JSON(TranscodeConfig, transcodeConfig_);
      DARABONBA_PTR_TO_JSON(UrgentImageId, urgentImageId_);
      DARABONBA_PTR_TO_JSON(UrgentImageUrl, urgentImageUrl_);
      DARABONBA_PTR_TO_JSON(UrgentLiveStreamUrl, urgentLiveStreamUrl_);
      DARABONBA_PTR_TO_JSON(UrgentMaterialId, urgentMaterialId_);
    };
    friend void from_json(const Darabonba::Json& j, SetCasterConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSwitchUrgentConfig, autoSwitchUrgentConfig_);
      DARABONBA_PTR_FROM_JSON(AutoSwitchUrgentOn, autoSwitchUrgentOn_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(CasterName, casterName_);
      DARABONBA_PTR_FROM_JSON(ChannelEnable, channelEnable_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProgramEffect, programEffect_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(RecordConfig, recordConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SideOutputUrl, sideOutputUrl_);
      DARABONBA_PTR_FROM_JSON(SideOutputUrlList, sideOutputUrlList_);
      DARABONBA_PTR_FROM_JSON(SyncGroupsConfig, syncGroupsConfig_);
      DARABONBA_PTR_FROM_JSON(TranscodeConfig, transcodeConfig_);
      DARABONBA_PTR_FROM_JSON(UrgentImageId, urgentImageId_);
      DARABONBA_PTR_FROM_JSON(UrgentImageUrl, urgentImageUrl_);
      DARABONBA_PTR_FROM_JSON(UrgentLiveStreamUrl, urgentLiveStreamUrl_);
      DARABONBA_PTR_FROM_JSON(UrgentMaterialId, urgentMaterialId_);
    };
    SetCasterConfigRequest() = default ;
    SetCasterConfigRequest(const SetCasterConfigRequest &) = default ;
    SetCasterConfigRequest(SetCasterConfigRequest &&) = default ;
    SetCasterConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCasterConfigRequest() = default ;
    SetCasterConfigRequest& operator=(const SetCasterConfigRequest &) = default ;
    SetCasterConfigRequest& operator=(SetCasterConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSwitchUrgentConfig_ == nullptr
        && this->autoSwitchUrgentOn_ == nullptr && this->callbackUrl_ == nullptr && this->casterId_ == nullptr && this->casterName_ == nullptr && this->channelEnable_ == nullptr
        && this->delay_ == nullptr && this->domainName_ == nullptr && this->ownerId_ == nullptr && this->programEffect_ == nullptr && this->programName_ == nullptr
        && this->recordConfig_ == nullptr && this->regionId_ == nullptr && this->sideOutputUrl_ == nullptr && this->sideOutputUrlList_ == nullptr && this->syncGroupsConfig_ == nullptr
        && this->transcodeConfig_ == nullptr && this->urgentImageId_ == nullptr && this->urgentImageUrl_ == nullptr && this->urgentLiveStreamUrl_ == nullptr && this->urgentMaterialId_ == nullptr; };
    // autoSwitchUrgentConfig Field Functions 
    bool hasAutoSwitchUrgentConfig() const { return this->autoSwitchUrgentConfig_ != nullptr;};
    void deleteAutoSwitchUrgentConfig() { this->autoSwitchUrgentConfig_ = nullptr;};
    inline string getAutoSwitchUrgentConfig() const { DARABONBA_PTR_GET_DEFAULT(autoSwitchUrgentConfig_, "") };
    inline SetCasterConfigRequest& setAutoSwitchUrgentConfig(string autoSwitchUrgentConfig) { DARABONBA_PTR_SET_VALUE(autoSwitchUrgentConfig_, autoSwitchUrgentConfig) };


    // autoSwitchUrgentOn Field Functions 
    bool hasAutoSwitchUrgentOn() const { return this->autoSwitchUrgentOn_ != nullptr;};
    void deleteAutoSwitchUrgentOn() { this->autoSwitchUrgentOn_ = nullptr;};
    inline bool getAutoSwitchUrgentOn() const { DARABONBA_PTR_GET_DEFAULT(autoSwitchUrgentOn_, false) };
    inline SetCasterConfigRequest& setAutoSwitchUrgentOn(bool autoSwitchUrgentOn) { DARABONBA_PTR_SET_VALUE(autoSwitchUrgentOn_, autoSwitchUrgentOn) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline SetCasterConfigRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline SetCasterConfigRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // casterName Field Functions 
    bool hasCasterName() const { return this->casterName_ != nullptr;};
    void deleteCasterName() { this->casterName_ = nullptr;};
    inline string getCasterName() const { DARABONBA_PTR_GET_DEFAULT(casterName_, "") };
    inline SetCasterConfigRequest& setCasterName(string casterName) { DARABONBA_PTR_SET_VALUE(casterName_, casterName) };


    // channelEnable Field Functions 
    bool hasChannelEnable() const { return this->channelEnable_ != nullptr;};
    void deleteChannelEnable() { this->channelEnable_ = nullptr;};
    inline int32_t getChannelEnable() const { DARABONBA_PTR_GET_DEFAULT(channelEnable_, 0) };
    inline SetCasterConfigRequest& setChannelEnable(int32_t channelEnable) { DARABONBA_PTR_SET_VALUE(channelEnable_, channelEnable) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline float getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0.0) };
    inline SetCasterConfigRequest& setDelay(float delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetCasterConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetCasterConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // programEffect Field Functions 
    bool hasProgramEffect() const { return this->programEffect_ != nullptr;};
    void deleteProgramEffect() { this->programEffect_ = nullptr;};
    inline int32_t getProgramEffect() const { DARABONBA_PTR_GET_DEFAULT(programEffect_, 0) };
    inline SetCasterConfigRequest& setProgramEffect(int32_t programEffect) { DARABONBA_PTR_SET_VALUE(programEffect_, programEffect) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string getProgramName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline SetCasterConfigRequest& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // recordConfig Field Functions 
    bool hasRecordConfig() const { return this->recordConfig_ != nullptr;};
    void deleteRecordConfig() { this->recordConfig_ = nullptr;};
    inline string getRecordConfig() const { DARABONBA_PTR_GET_DEFAULT(recordConfig_, "") };
    inline SetCasterConfigRequest& setRecordConfig(string recordConfig) { DARABONBA_PTR_SET_VALUE(recordConfig_, recordConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetCasterConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sideOutputUrl Field Functions 
    bool hasSideOutputUrl() const { return this->sideOutputUrl_ != nullptr;};
    void deleteSideOutputUrl() { this->sideOutputUrl_ = nullptr;};
    inline string getSideOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(sideOutputUrl_, "") };
    inline SetCasterConfigRequest& setSideOutputUrl(string sideOutputUrl) { DARABONBA_PTR_SET_VALUE(sideOutputUrl_, sideOutputUrl) };


    // sideOutputUrlList Field Functions 
    bool hasSideOutputUrlList() const { return this->sideOutputUrlList_ != nullptr;};
    void deleteSideOutputUrlList() { this->sideOutputUrlList_ = nullptr;};
    inline string getSideOutputUrlList() const { DARABONBA_PTR_GET_DEFAULT(sideOutputUrlList_, "") };
    inline SetCasterConfigRequest& setSideOutputUrlList(string sideOutputUrlList) { DARABONBA_PTR_SET_VALUE(sideOutputUrlList_, sideOutputUrlList) };


    // syncGroupsConfig Field Functions 
    bool hasSyncGroupsConfig() const { return this->syncGroupsConfig_ != nullptr;};
    void deleteSyncGroupsConfig() { this->syncGroupsConfig_ = nullptr;};
    inline string getSyncGroupsConfig() const { DARABONBA_PTR_GET_DEFAULT(syncGroupsConfig_, "") };
    inline SetCasterConfigRequest& setSyncGroupsConfig(string syncGroupsConfig) { DARABONBA_PTR_SET_VALUE(syncGroupsConfig_, syncGroupsConfig) };


    // transcodeConfig Field Functions 
    bool hasTranscodeConfig() const { return this->transcodeConfig_ != nullptr;};
    void deleteTranscodeConfig() { this->transcodeConfig_ = nullptr;};
    inline string getTranscodeConfig() const { DARABONBA_PTR_GET_DEFAULT(transcodeConfig_, "") };
    inline SetCasterConfigRequest& setTranscodeConfig(string transcodeConfig) { DARABONBA_PTR_SET_VALUE(transcodeConfig_, transcodeConfig) };


    // urgentImageId Field Functions 
    bool hasUrgentImageId() const { return this->urgentImageId_ != nullptr;};
    void deleteUrgentImageId() { this->urgentImageId_ = nullptr;};
    inline string getUrgentImageId() const { DARABONBA_PTR_GET_DEFAULT(urgentImageId_, "") };
    inline SetCasterConfigRequest& setUrgentImageId(string urgentImageId) { DARABONBA_PTR_SET_VALUE(urgentImageId_, urgentImageId) };


    // urgentImageUrl Field Functions 
    bool hasUrgentImageUrl() const { return this->urgentImageUrl_ != nullptr;};
    void deleteUrgentImageUrl() { this->urgentImageUrl_ = nullptr;};
    inline string getUrgentImageUrl() const { DARABONBA_PTR_GET_DEFAULT(urgentImageUrl_, "") };
    inline SetCasterConfigRequest& setUrgentImageUrl(string urgentImageUrl) { DARABONBA_PTR_SET_VALUE(urgentImageUrl_, urgentImageUrl) };


    // urgentLiveStreamUrl Field Functions 
    bool hasUrgentLiveStreamUrl() const { return this->urgentLiveStreamUrl_ != nullptr;};
    void deleteUrgentLiveStreamUrl() { this->urgentLiveStreamUrl_ = nullptr;};
    inline string getUrgentLiveStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(urgentLiveStreamUrl_, "") };
    inline SetCasterConfigRequest& setUrgentLiveStreamUrl(string urgentLiveStreamUrl) { DARABONBA_PTR_SET_VALUE(urgentLiveStreamUrl_, urgentLiveStreamUrl) };


    // urgentMaterialId Field Functions 
    bool hasUrgentMaterialId() const { return this->urgentMaterialId_ != nullptr;};
    void deleteUrgentMaterialId() { this->urgentMaterialId_ = nullptr;};
    inline string getUrgentMaterialId() const { DARABONBA_PTR_GET_DEFAULT(urgentMaterialId_, "") };
    inline SetCasterConfigRequest& setUrgentMaterialId(string urgentMaterialId) { DARABONBA_PTR_SET_VALUE(urgentMaterialId_, urgentMaterialId) };


  protected:
    // The automatic standby switchover configuration.
    // `eofThres`: the duration of stream interruption after which the system automatically switches to the standby video, in seconds.
    shared_ptr<string> autoSwitchUrgentConfig_ {};
    // Specifies whether to enable automatic switchover to the standby video when the stream is interrupted.
    // - **true**: enabled.
    // - **false**: disabled.
    shared_ptr<bool> autoSwitchUrgentOn_ {};
    // The callback URL. To receive callback notifications, enter a valid receiving address that accepts the HTTP protocol. If this parameter is set to empty, callback notifications for the production studio are canceled by default.
    // > For more information about production studio callbacks, see [Cloud production studio callback information](https://help.aliyun.com/document_detail/213633.html).
    shared_ptr<string> callbackUrl_ {};
    // The production studio ID.
    // 
    // - If you created the production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the CasterId value returned by the CreateCaster operation.
    // 
    // - If you created the production studio in the ApsaraVideo Live console, go to **ApsaraVideo Live console** > **Production Studio** > **Cloud Production Studio** to view the ID.
    // 
    // > The production studio name in the production studio list on the Cloud Production Studio page of the ApsaraVideo Live console is the production studio ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The name of the production studio.
    shared_ptr<string> casterName_ {};
    // Specifies whether to enable Channel. If Channel was previously enabled (ChannelEnable=1), you must explicitly pass ChannelEnable=1 in each call to maintain the channel status. Otherwise, the error InvalidCaster.ChannelDisableUnsupported is returned.
    //          
    // - **0** (default): disabled.
    // - **1**: enabled. 
    // 
    // > Channel is disabled by default and cannot be disabled after it is enabled. When Channel is disabled, resources are directly referenced by layouts. To enable Channel for the first time, the production studio must be stopped. Existing layouts are discarded. Resources must first be assigned to a Channel, and new layouts directly reference the Channel. Through Channel, you can adjust the playback progress and status of video sources. In this mode, if the video source, PVW, and PGM areas reference the same resource, the corresponding views remain synchronized.
    shared_ptr<int32_t> channelEnable_ {};
    // The stream delay, in seconds.
    // 
    // - **0** (default): disables stream delay.
    // - Greater than **0**: enables stream delay.
    // - **Empty**: clears the stream delay configuration by default.
    // > The maximum value is 300 seconds.
    shared_ptr<float> delay_ {};
    // The primary streaming domain.
    // 
    // Complete the domain name configuration before starting the production studio. If this parameter is empty, the domain name configuration of the production studio is cleared by default.
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether the program list takes effect. 
    // 
    // - **0**: does not take effect.
    // - **1**: takes effect.
    shared_ptr<int32_t> programEffect_ {};
    // The name of the program list. This parameter can be configured when the program list feature is used.
    shared_ptr<string> programName_ {};
    // The recording configuration in JSON format. The configuration elements are as follows:
    // 
    // - **endpoint**: the API endpoint of the Alibaba Cloud service.
    // - **ossBucket**: the name of the OSS bucket.
    // - **videoFormat**: the video file formats supported for export. Example: `[{\\"OssObjectPrefix\\":\\"record/{AppName}/{StreamName}/{StartTime}_{EndTime}\\",\\"Format\\":\\"m3u8\\",\\"CycleDuration\\":21600,\\"SliceOssObjectPrefix\\":\\"record/{AppName}/{StreamName}/{UnixTimestamp}\\"},{\\"OssObjectPrefix\\":\\"record/{AppName}/{StreamName}/{StartTime}_{EndTime}\\",\\"Format\\":\\"flv\\",\\"CycleDuration\\":21600}]`.
    // - **interval**: the time interval, in milliseconds (ms).
    // 
    // >If this parameter is set to empty, the recording feature is not enabled. If this parameter is set to empty, the recording configuration is cleared by default.
    shared_ptr<string> recordConfig_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ingest URL that corresponds to the custom bypass output address of the production studio. 
    // If this parameter is empty, the ingest URL that corresponds to the output address automatically generated by Alibaba Cloud is used by default.
    // > Currently, SideOutputUrl supports only the RTMP protocol for stream ingest.
    shared_ptr<string> sideOutputUrl_ {};
    // The list of multi-destination relay streaming addresses. The addresses can be CDN ingest URLs from Alibaba Cloud or third-party providers. A maximum of 20 RTMP relay addresses can be added to a production studio.
    // 
    // 
    // > Specify multiple addresses in the array format: ["rtmp://domain/app1/stream1","rtmp://domain/app2/stream2"].
    shared_ptr<string> sideOutputUrlList_ {};
    // The multi-view synchronization configuration that synchronizes multiple video sources.
    // Multi-view synchronization has two modes:
    // 
    // - mode: 0 (streamer mode. Multiple video sources are synchronized based on the specified mode.)
    // 
    // - mode: 1 (conference mode. There is no concept of a streamer video. All video sources are synchronized with each other.)
    // 
    // 
    // 
    // Streamer mode: hostResourceId: the streamer video source in streamer mode.
    // 
    // Conference mode: the hostResourceId field is not required. Only the resource IDs in resourceIds need to be provided.
    shared_ptr<string> syncGroupsConfig_ {};
    // The transcoding configuration. 
    // 
    // A JSON-formatted string. Use upper camel case for internal fields of the struct. If this parameter is set to empty, the transcoding configuration is cleared by default. If the transcoding template is empty, an error is returned when the production studio starts.
    shared_ptr<string> transcodeConfig_ {};
    // The media asset ID of the standby image in the media library.
    shared_ptr<string> urgentImageId_ {};
    // The URL of the standby image.
    shared_ptr<string> urgentImageUrl_ {};
    // The URL of the standby live stream.
    shared_ptr<string> urgentLiveStreamUrl_ {};
    // The media asset ID of the standby video in the media library. If this parameter is set to empty, the standby configuration is cleared by default.
    shared_ptr<string> urgentMaterialId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
