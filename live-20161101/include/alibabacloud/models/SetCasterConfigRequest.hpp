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
    // The configuration for automatic switchover to the standby resource.
    // 
    // The `eofThres` field specifies the duration after which the production studio automatically switches to the standby resource if a stream interruption occurs. Unit: seconds.
    shared_ptr<string> autoSwitchUrgentConfig_ {};
    // Specifies whether the production studio automatically switches to the standby resource in case of a stream interruption.
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> autoSwitchUrgentOn_ {};
    // The callback URL. Enter a valid HTTP address for receiving callback notifications. If you do not specify this parameter, the production studio does not send callback notifications.
    // 
    // >  For more information about production studio callbacks, see [Production studio callbacks](https://help.aliyun.com/document_detail/213633.html).
    shared_ptr<string> callbackUrl_ {};
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The name of the production studio.
    shared_ptr<string> casterName_ {};
    // Specifies whether to enable channels. Valid values:
    // 
    // *   **0** (default): disables channels.
    // *   **1**: enables channels.
    // 
    // > You cannot disable channels after you enable them. If you set this parameter to 0, the production studio references video resources in a layout without using channels. If you enable channels for the first time, make sure that the production studio is in the idle state. After you enable channels, a new layout that references video resources by using channels is generated to replace the original one. Therefore, you must specify video resources for channels. You can use the channels to change the playback progress or status. If the video resource, preview, and program modules of the production studio use the same video source, the three modules display the same content.
    shared_ptr<int32_t> channelEnable_ {};
    // Specifies whether to enable stream delay. Unit: seconds. Valid values:
    // 
    // *   **0** (default): disables stream delay.
    // 
    // *   **A value greater than 0**: enables stream delay.
    // 
    // *   **Empty**: clears the stream delay configuration.
    // 
    //     **
    // 
    //     **Note **The maximum value can be 300 seconds.
    shared_ptr<float> delay_ {};
    // The main streaming domain.
    // 
    // Complete the configuration of the domain name before the production studio is started. If you do not specify this parameter, the domain configuration for the production studio is cleared.
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to enable the carousel playback feature. Valid values:
    // 
    // *   **0**: disables carousel playback.
    // *   **1**: enables carousel playback.
    shared_ptr<int32_t> programEffect_ {};
    // The name of the playlist for carousel playback. You can specify this parameter if you enable the carousel playback feature.
    shared_ptr<string> programName_ {};
    // The recording configuration. The value is a JSON string. You can configure the following fields:
    // 
    // *   **endpoint**: the API server address of an Alibaba Cloud service.
    // *   **ossBucket**: the name of the Object Storage Service (OSS) bucket.
    // *   **videoFormat**: the format in which the video file can be exported. Example: `[{\\"OssObjectPrefix\\":\\"record/{AppName}/{StreamName}/{StartTime}_{EndTime}\\",\\"Format\\":\\"m3u8\\",\\"CycleDuration\\":21600,\\"SliceOssObjectPrefix\\":\\"record/{AppName}/{StreamName}/{UnixTimestamp}\\"},{\\"OssObjectPrefix\\":\\"record/{AppName}/{StreamName}/{StartTime}_{EndTime}\\",\\"Format\\":\\"flv\\",\\"CycleDuration\\":21600}]`.
    // *   **interval**: the interval between recordings. Unit: milliseconds.
    // 
    // > If you do not specify this parameter, the recording feature is disabled and the recording configuration for the production studio is cleared.
    shared_ptr<string> recordConfig_ {};
    shared_ptr<string> regionId_ {};
    // The custom stream redirect URL.
    // 
    // If you do not specify this parameter, the production studio uses the redirect URL generated by the system.
    // 
    // > Redirect URLs support only the Real-Time Messaging Protocol (RTMP) protocol.
    shared_ptr<string> sideOutputUrl_ {};
    // The stream relay URLs. A relay URL can be an Alibaba Cloud URL or a URL from a third-party CDN provider. You can specify up to 20 relay URLs over the RTMP protocol.
    // 
    // > Use the following format to specify multiple relay URLs: "rtmp://domain/app1/stream1","rtmp://domain/app2/stream2".
    shared_ptr<string> sideOutputUrlList_ {};
    // The multi-view synchronization configuration. You can specify this parameter to synchronize multiple video sources.
    // 
    // There are two modes of multi-view synchronization.
    // 
    // *   A value of 0 for the mode field specifies the streamer mode. In this mode, multiple video sources are synchronized based on the settings by the streamer.
    // *   A value of 1 for the mode field specifies the conference mode. In this mode, all video sources are synchronized.
    // 
    // In the streamer mode, the hostResourceId field specifies the video source on the streamer side.
    // 
    // In the conference mode, the hostResourceId field is not available. You need to provide only resource IDs that are required.
    shared_ptr<string> syncGroupsConfig_ {};
    // The transcoding configuration.
    // 
    // The value is a JSON string. Use upper camel case for fields of the string. If you do not specify this parameter, the transcoding configuration is cleared. If no transcoding template is available, an error occurs when the production studio is started.
    shared_ptr<string> transcodeConfig_ {};
    // The ID of the standby image from the media library.
    shared_ptr<string> urgentImageId_ {};
    // The URL of the standby image.
    shared_ptr<string> urgentImageUrl_ {};
    // The URL of the standby live stream.
    shared_ptr<string> urgentLiveStreamUrl_ {};
    // The ID of the standby video from the media library. If you do not specify this parameter, the standby video configuration for the production studio is cleared.
    shared_ptr<string> urgentMaterialId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
