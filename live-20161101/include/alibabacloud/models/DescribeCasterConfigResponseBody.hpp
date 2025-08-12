// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterConfigResponseBodyRecordConfig.hpp>
#include <alibabacloud/models/DescribeCasterConfigResponseBodySyncGroupsConfig.hpp>
#include <alibabacloud/models/DescribeCasterConfigResponseBodyTranscodeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSwitchUrgentConfig, autoSwitchUrgentConfig_);
      DARABONBA_PTR_TO_JSON(AutoSwitchUrgentOn, autoSwitchUrgentOn_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(CasterName, casterName_);
      DARABONBA_PTR_TO_JSON(ChannelEnable, channelEnable_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ProgramEffect, programEffect_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(RecordConfig, recordConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SideOutputUrl, sideOutputUrl_);
      DARABONBA_PTR_TO_JSON(SideOutputUrlList, sideOutputUrlList_);
      DARABONBA_PTR_TO_JSON(SyncGroupsConfig, syncGroupsConfig_);
      DARABONBA_PTR_TO_JSON(TranscodeConfig, transcodeConfig_);
      DARABONBA_PTR_TO_JSON(UrgentImageId, urgentImageId_);
      DARABONBA_PTR_TO_JSON(UrgentImageUrl, urgentImageUrl_);
      DARABONBA_PTR_TO_JSON(UrgentLiveStreamUrl, urgentLiveStreamUrl_);
      DARABONBA_PTR_TO_JSON(UrgentMaterialId, urgentMaterialId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSwitchUrgentConfig, autoSwitchUrgentConfig_);
      DARABONBA_PTR_FROM_JSON(AutoSwitchUrgentOn, autoSwitchUrgentOn_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(CasterName, casterName_);
      DARABONBA_PTR_FROM_JSON(ChannelEnable, channelEnable_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ProgramEffect, programEffect_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(RecordConfig, recordConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SideOutputUrl, sideOutputUrl_);
      DARABONBA_PTR_FROM_JSON(SideOutputUrlList, sideOutputUrlList_);
      DARABONBA_PTR_FROM_JSON(SyncGroupsConfig, syncGroupsConfig_);
      DARABONBA_PTR_FROM_JSON(TranscodeConfig, transcodeConfig_);
      DARABONBA_PTR_FROM_JSON(UrgentImageId, urgentImageId_);
      DARABONBA_PTR_FROM_JSON(UrgentImageUrl, urgentImageUrl_);
      DARABONBA_PTR_FROM_JSON(UrgentLiveStreamUrl, urgentLiveStreamUrl_);
      DARABONBA_PTR_FROM_JSON(UrgentMaterialId, urgentMaterialId_);
    };
    DescribeCasterConfigResponseBody() = default ;
    DescribeCasterConfigResponseBody(const DescribeCasterConfigResponseBody &) = default ;
    DescribeCasterConfigResponseBody(DescribeCasterConfigResponseBody &&) = default ;
    DescribeCasterConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterConfigResponseBody() = default ;
    DescribeCasterConfigResponseBody& operator=(const DescribeCasterConfigResponseBody &) = default ;
    DescribeCasterConfigResponseBody& operator=(DescribeCasterConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSwitchUrgentConfig_ != nullptr
        && this->autoSwitchUrgentOn_ != nullptr && this->callbackUrl_ != nullptr && this->casterId_ != nullptr && this->casterName_ != nullptr && this->channelEnable_ != nullptr
        && this->delay_ != nullptr && this->domainName_ != nullptr && this->programEffect_ != nullptr && this->programName_ != nullptr && this->recordConfig_ != nullptr
        && this->requestId_ != nullptr && this->sideOutputUrl_ != nullptr && this->sideOutputUrlList_ != nullptr && this->syncGroupsConfig_ != nullptr && this->transcodeConfig_ != nullptr
        && this->urgentImageId_ != nullptr && this->urgentImageUrl_ != nullptr && this->urgentLiveStreamUrl_ != nullptr && this->urgentMaterialId_ != nullptr; };
    // autoSwitchUrgentConfig Field Functions 
    bool hasAutoSwitchUrgentConfig() const { return this->autoSwitchUrgentConfig_ != nullptr;};
    void deleteAutoSwitchUrgentConfig() { this->autoSwitchUrgentConfig_ = nullptr;};
    inline string autoSwitchUrgentConfig() const { DARABONBA_PTR_GET_DEFAULT(autoSwitchUrgentConfig_, "") };
    inline DescribeCasterConfigResponseBody& setAutoSwitchUrgentConfig(string autoSwitchUrgentConfig) { DARABONBA_PTR_SET_VALUE(autoSwitchUrgentConfig_, autoSwitchUrgentConfig) };


    // autoSwitchUrgentOn Field Functions 
    bool hasAutoSwitchUrgentOn() const { return this->autoSwitchUrgentOn_ != nullptr;};
    void deleteAutoSwitchUrgentOn() { this->autoSwitchUrgentOn_ = nullptr;};
    inline string autoSwitchUrgentOn() const { DARABONBA_PTR_GET_DEFAULT(autoSwitchUrgentOn_, "") };
    inline DescribeCasterConfigResponseBody& setAutoSwitchUrgentOn(string autoSwitchUrgentOn) { DARABONBA_PTR_SET_VALUE(autoSwitchUrgentOn_, autoSwitchUrgentOn) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline DescribeCasterConfigResponseBody& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCasterConfigResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // casterName Field Functions 
    bool hasCasterName() const { return this->casterName_ != nullptr;};
    void deleteCasterName() { this->casterName_ = nullptr;};
    inline string casterName() const { DARABONBA_PTR_GET_DEFAULT(casterName_, "") };
    inline DescribeCasterConfigResponseBody& setCasterName(string casterName) { DARABONBA_PTR_SET_VALUE(casterName_, casterName) };


    // channelEnable Field Functions 
    bool hasChannelEnable() const { return this->channelEnable_ != nullptr;};
    void deleteChannelEnable() { this->channelEnable_ = nullptr;};
    inline int32_t channelEnable() const { DARABONBA_PTR_GET_DEFAULT(channelEnable_, 0) };
    inline DescribeCasterConfigResponseBody& setChannelEnable(int32_t channelEnable) { DARABONBA_PTR_SET_VALUE(channelEnable_, channelEnable) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline float delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0.0) };
    inline DescribeCasterConfigResponseBody& setDelay(float delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCasterConfigResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // programEffect Field Functions 
    bool hasProgramEffect() const { return this->programEffect_ != nullptr;};
    void deleteProgramEffect() { this->programEffect_ = nullptr;};
    inline int32_t programEffect() const { DARABONBA_PTR_GET_DEFAULT(programEffect_, 0) };
    inline DescribeCasterConfigResponseBody& setProgramEffect(int32_t programEffect) { DARABONBA_PTR_SET_VALUE(programEffect_, programEffect) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string programName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline DescribeCasterConfigResponseBody& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // recordConfig Field Functions 
    bool hasRecordConfig() const { return this->recordConfig_ != nullptr;};
    void deleteRecordConfig() { this->recordConfig_ = nullptr;};
    inline const DescribeCasterConfigResponseBodyRecordConfig & recordConfig() const { DARABONBA_PTR_GET_CONST(recordConfig_, DescribeCasterConfigResponseBodyRecordConfig) };
    inline DescribeCasterConfigResponseBodyRecordConfig recordConfig() { DARABONBA_PTR_GET(recordConfig_, DescribeCasterConfigResponseBodyRecordConfig) };
    inline DescribeCasterConfigResponseBody& setRecordConfig(const DescribeCasterConfigResponseBodyRecordConfig & recordConfig) { DARABONBA_PTR_SET_VALUE(recordConfig_, recordConfig) };
    inline DescribeCasterConfigResponseBody& setRecordConfig(DescribeCasterConfigResponseBodyRecordConfig && recordConfig) { DARABONBA_PTR_SET_RVALUE(recordConfig_, recordConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sideOutputUrl Field Functions 
    bool hasSideOutputUrl() const { return this->sideOutputUrl_ != nullptr;};
    void deleteSideOutputUrl() { this->sideOutputUrl_ = nullptr;};
    inline string sideOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(sideOutputUrl_, "") };
    inline DescribeCasterConfigResponseBody& setSideOutputUrl(string sideOutputUrl) { DARABONBA_PTR_SET_VALUE(sideOutputUrl_, sideOutputUrl) };


    // sideOutputUrlList Field Functions 
    bool hasSideOutputUrlList() const { return this->sideOutputUrlList_ != nullptr;};
    void deleteSideOutputUrlList() { this->sideOutputUrlList_ = nullptr;};
    inline string sideOutputUrlList() const { DARABONBA_PTR_GET_DEFAULT(sideOutputUrlList_, "") };
    inline DescribeCasterConfigResponseBody& setSideOutputUrlList(string sideOutputUrlList) { DARABONBA_PTR_SET_VALUE(sideOutputUrlList_, sideOutputUrlList) };


    // syncGroupsConfig Field Functions 
    bool hasSyncGroupsConfig() const { return this->syncGroupsConfig_ != nullptr;};
    void deleteSyncGroupsConfig() { this->syncGroupsConfig_ = nullptr;};
    inline const DescribeCasterConfigResponseBodySyncGroupsConfig & syncGroupsConfig() const { DARABONBA_PTR_GET_CONST(syncGroupsConfig_, DescribeCasterConfigResponseBodySyncGroupsConfig) };
    inline DescribeCasterConfigResponseBodySyncGroupsConfig syncGroupsConfig() { DARABONBA_PTR_GET(syncGroupsConfig_, DescribeCasterConfigResponseBodySyncGroupsConfig) };
    inline DescribeCasterConfigResponseBody& setSyncGroupsConfig(const DescribeCasterConfigResponseBodySyncGroupsConfig & syncGroupsConfig) { DARABONBA_PTR_SET_VALUE(syncGroupsConfig_, syncGroupsConfig) };
    inline DescribeCasterConfigResponseBody& setSyncGroupsConfig(DescribeCasterConfigResponseBodySyncGroupsConfig && syncGroupsConfig) { DARABONBA_PTR_SET_RVALUE(syncGroupsConfig_, syncGroupsConfig) };


    // transcodeConfig Field Functions 
    bool hasTranscodeConfig() const { return this->transcodeConfig_ != nullptr;};
    void deleteTranscodeConfig() { this->transcodeConfig_ = nullptr;};
    inline const DescribeCasterConfigResponseBodyTranscodeConfig & transcodeConfig() const { DARABONBA_PTR_GET_CONST(transcodeConfig_, DescribeCasterConfigResponseBodyTranscodeConfig) };
    inline DescribeCasterConfigResponseBodyTranscodeConfig transcodeConfig() { DARABONBA_PTR_GET(transcodeConfig_, DescribeCasterConfigResponseBodyTranscodeConfig) };
    inline DescribeCasterConfigResponseBody& setTranscodeConfig(const DescribeCasterConfigResponseBodyTranscodeConfig & transcodeConfig) { DARABONBA_PTR_SET_VALUE(transcodeConfig_, transcodeConfig) };
    inline DescribeCasterConfigResponseBody& setTranscodeConfig(DescribeCasterConfigResponseBodyTranscodeConfig && transcodeConfig) { DARABONBA_PTR_SET_RVALUE(transcodeConfig_, transcodeConfig) };


    // urgentImageId Field Functions 
    bool hasUrgentImageId() const { return this->urgentImageId_ != nullptr;};
    void deleteUrgentImageId() { this->urgentImageId_ = nullptr;};
    inline string urgentImageId() const { DARABONBA_PTR_GET_DEFAULT(urgentImageId_, "") };
    inline DescribeCasterConfigResponseBody& setUrgentImageId(string urgentImageId) { DARABONBA_PTR_SET_VALUE(urgentImageId_, urgentImageId) };


    // urgentImageUrl Field Functions 
    bool hasUrgentImageUrl() const { return this->urgentImageUrl_ != nullptr;};
    void deleteUrgentImageUrl() { this->urgentImageUrl_ = nullptr;};
    inline string urgentImageUrl() const { DARABONBA_PTR_GET_DEFAULT(urgentImageUrl_, "") };
    inline DescribeCasterConfigResponseBody& setUrgentImageUrl(string urgentImageUrl) { DARABONBA_PTR_SET_VALUE(urgentImageUrl_, urgentImageUrl) };


    // urgentLiveStreamUrl Field Functions 
    bool hasUrgentLiveStreamUrl() const { return this->urgentLiveStreamUrl_ != nullptr;};
    void deleteUrgentLiveStreamUrl() { this->urgentLiveStreamUrl_ = nullptr;};
    inline string urgentLiveStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(urgentLiveStreamUrl_, "") };
    inline DescribeCasterConfigResponseBody& setUrgentLiveStreamUrl(string urgentLiveStreamUrl) { DARABONBA_PTR_SET_VALUE(urgentLiveStreamUrl_, urgentLiveStreamUrl) };


    // urgentMaterialId Field Functions 
    bool hasUrgentMaterialId() const { return this->urgentMaterialId_ != nullptr;};
    void deleteUrgentMaterialId() { this->urgentMaterialId_ = nullptr;};
    inline string urgentMaterialId() const { DARABONBA_PTR_GET_DEFAULT(urgentMaterialId_, "") };
    inline DescribeCasterConfigResponseBody& setUrgentMaterialId(string urgentMaterialId) { DARABONBA_PTR_SET_VALUE(urgentMaterialId_, urgentMaterialId) };


  protected:
    // The configuration for automatic switchover to the standby resource. The `eofThres` field specifies the duration after which the production studio automatically switches to the standby resource if a stream interruption occurs. Unit: seconds.
    std::shared_ptr<string> autoSwitchUrgentConfig_ = nullptr;
    // Indicates whether the production studio automatically switches to the standby resource in case of a stream interruption.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> autoSwitchUrgentOn_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The ID of the production studio.
    std::shared_ptr<string> casterId_ = nullptr;
    // The name of the production studio.
    std::shared_ptr<string> casterName_ = nullptr;
    // Indicates whether channels are enabled for the production studio. Valid values:
    // 
    // *   **0**: Channels are disabled.
    // *   **1**: Channels are enabled.
    std::shared_ptr<int32_t> channelEnable_ = nullptr;
    // Indicates whether stream delay is enabled. Unit: seconds.
    // 
    // *   **0**: Stream delay is disabled.
    // *   **A value greater than 0**: Stream delay is enabled.
    std::shared_ptr<float> delay_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // Indicates whether the carousel playback feature is enabled. Valid values:
    // 
    // *   **0**: The carousel playback feature is disabled.
    // *   **1**: The carousel playback feature is enabled.
    std::shared_ptr<int32_t> programEffect_ = nullptr;
    // The name of the playlist for carousel playback.
    std::shared_ptr<string> programName_ = nullptr;
    // The recording configuration. If this parameter is empty, the recording feature is disabled.
    std::shared_ptr<DescribeCasterConfigResponseBodyRecordConfig> recordConfig_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The custom stream redirect URL.
    std::shared_ptr<string> sideOutputUrl_ = nullptr;
    // The list of custom stream redirect URLs.
    std::shared_ptr<string> sideOutputUrlList_ = nullptr;
    // The storage configuration.
    std::shared_ptr<DescribeCasterConfigResponseBodySyncGroupsConfig> syncGroupsConfig_ = nullptr;
    // The transcoding configuration.
    std::shared_ptr<DescribeCasterConfigResponseBodyTranscodeConfig> transcodeConfig_ = nullptr;
    // Prepared broadcast image media asset ID.
    std::shared_ptr<string> urgentImageId_ = nullptr;
    // URL of the standby image material.
    std::shared_ptr<string> urgentImageUrl_ = nullptr;
    // The URL of the standby live stream.
    std::shared_ptr<string> urgentLiveStreamUrl_ = nullptr;
    // The ID of the material that is used as the standby video from the media library.
    std::shared_ptr<string> urgentMaterialId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
