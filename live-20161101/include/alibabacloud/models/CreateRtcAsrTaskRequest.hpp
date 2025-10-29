// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERTCASRTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERTCASRTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateRtcAsrTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRtcAsrTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(AutoTerminateDelay, autoTerminateDelay_);
      DARABONBA_PTR_TO_JSON(AutoTerminateEnabled, autoTerminateEnabled_);
      DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_TO_JSON(ChannelID, channelID_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportInterval, reportInterval_);
      DARABONBA_PTR_TO_JSON(RtcUserId, rtcUserId_);
      DARABONBA_PTR_TO_JSON(SDKAppID, SDKAppID_);
      DARABONBA_PTR_TO_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_TO_JSON(TargetLanguages, targetLanguages_);
      DARABONBA_PTR_TO_JSON(TranslateEnabled, translateEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRtcAsrTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(AutoTerminateDelay, autoTerminateDelay_);
      DARABONBA_PTR_FROM_JSON(AutoTerminateEnabled, autoTerminateEnabled_);
      DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_FROM_JSON(ChannelID, channelID_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportInterval, reportInterval_);
      DARABONBA_PTR_FROM_JSON(RtcUserId, rtcUserId_);
      DARABONBA_PTR_FROM_JSON(SDKAppID, SDKAppID_);
      DARABONBA_PTR_FROM_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_FROM_JSON(TargetLanguages, targetLanguages_);
      DARABONBA_PTR_FROM_JSON(TranslateEnabled, translateEnabled_);
    };
    CreateRtcAsrTaskRequest() = default ;
    CreateRtcAsrTaskRequest(const CreateRtcAsrTaskRequest &) = default ;
    CreateRtcAsrTaskRequest(CreateRtcAsrTaskRequest &&) = default ;
    CreateRtcAsrTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRtcAsrTaskRequest() = default ;
    CreateRtcAsrTaskRequest& operator=(const CreateRtcAsrTaskRequest &) = default ;
    CreateRtcAsrTaskRequest& operator=(CreateRtcAsrTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authKey_ == nullptr
        && return this->autoTerminateDelay_ == nullptr && return this->autoTerminateEnabled_ == nullptr && return this->callbackURL_ == nullptr && return this->channelID_ == nullptr && return this->language_ == nullptr
        && return this->mode_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->reportInterval_ == nullptr && return this->rtcUserId_ == nullptr
        && return this->SDKAppID_ == nullptr && return this->streamURL_ == nullptr && return this->targetLanguages_ == nullptr && return this->translateEnabled_ == nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline CreateRtcAsrTaskRequest& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // autoTerminateDelay Field Functions 
    bool hasAutoTerminateDelay() const { return this->autoTerminateDelay_ != nullptr;};
    void deleteAutoTerminateDelay() { this->autoTerminateDelay_ = nullptr;};
    inline int64_t autoTerminateDelay() const { DARABONBA_PTR_GET_DEFAULT(autoTerminateDelay_, 0L) };
    inline CreateRtcAsrTaskRequest& setAutoTerminateDelay(int64_t autoTerminateDelay) { DARABONBA_PTR_SET_VALUE(autoTerminateDelay_, autoTerminateDelay) };


    // autoTerminateEnabled Field Functions 
    bool hasAutoTerminateEnabled() const { return this->autoTerminateEnabled_ != nullptr;};
    void deleteAutoTerminateEnabled() { this->autoTerminateEnabled_ = nullptr;};
    inline bool autoTerminateEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoTerminateEnabled_, false) };
    inline CreateRtcAsrTaskRequest& setAutoTerminateEnabled(bool autoTerminateEnabled) { DARABONBA_PTR_SET_VALUE(autoTerminateEnabled_, autoTerminateEnabled) };


    // callbackURL Field Functions 
    bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
    void deleteCallbackURL() { this->callbackURL_ = nullptr;};
    inline string callbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
    inline CreateRtcAsrTaskRequest& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


    // channelID Field Functions 
    bool hasChannelID() const { return this->channelID_ != nullptr;};
    void deleteChannelID() { this->channelID_ = nullptr;};
    inline string channelID() const { DARABONBA_PTR_GET_DEFAULT(channelID_, "") };
    inline CreateRtcAsrTaskRequest& setChannelID(string channelID) { DARABONBA_PTR_SET_VALUE(channelID_, channelID) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateRtcAsrTaskRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateRtcAsrTaskRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateRtcAsrTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRtcAsrTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportInterval Field Functions 
    bool hasReportInterval() const { return this->reportInterval_ != nullptr;};
    void deleteReportInterval() { this->reportInterval_ = nullptr;};
    inline int64_t reportInterval() const { DARABONBA_PTR_GET_DEFAULT(reportInterval_, 0L) };
    inline CreateRtcAsrTaskRequest& setReportInterval(int64_t reportInterval) { DARABONBA_PTR_SET_VALUE(reportInterval_, reportInterval) };


    // rtcUserId Field Functions 
    bool hasRtcUserId() const { return this->rtcUserId_ != nullptr;};
    void deleteRtcUserId() { this->rtcUserId_ = nullptr;};
    inline string rtcUserId() const { DARABONBA_PTR_GET_DEFAULT(rtcUserId_, "") };
    inline CreateRtcAsrTaskRequest& setRtcUserId(string rtcUserId) { DARABONBA_PTR_SET_VALUE(rtcUserId_, rtcUserId) };


    // SDKAppID Field Functions 
    bool hasSDKAppID() const { return this->SDKAppID_ != nullptr;};
    void deleteSDKAppID() { this->SDKAppID_ = nullptr;};
    inline string SDKAppID() const { DARABONBA_PTR_GET_DEFAULT(SDKAppID_, "") };
    inline CreateRtcAsrTaskRequest& setSDKAppID(string SDKAppID) { DARABONBA_PTR_SET_VALUE(SDKAppID_, SDKAppID) };


    // streamURL Field Functions 
    bool hasStreamURL() const { return this->streamURL_ != nullptr;};
    void deleteStreamURL() { this->streamURL_ = nullptr;};
    inline string streamURL() const { DARABONBA_PTR_GET_DEFAULT(streamURL_, "") };
    inline CreateRtcAsrTaskRequest& setStreamURL(string streamURL) { DARABONBA_PTR_SET_VALUE(streamURL_, streamURL) };


    // targetLanguages Field Functions 
    bool hasTargetLanguages() const { return this->targetLanguages_ != nullptr;};
    void deleteTargetLanguages() { this->targetLanguages_ = nullptr;};
    inline string targetLanguages() const { DARABONBA_PTR_GET_DEFAULT(targetLanguages_, "") };
    inline CreateRtcAsrTaskRequest& setTargetLanguages(string targetLanguages) { DARABONBA_PTR_SET_VALUE(targetLanguages_, targetLanguages) };


    // translateEnabled Field Functions 
    bool hasTranslateEnabled() const { return this->translateEnabled_ != nullptr;};
    void deleteTranslateEnabled() { this->translateEnabled_ = nullptr;};
    inline bool translateEnabled() const { DARABONBA_PTR_GET_DEFAULT(translateEnabled_, false) };
    inline CreateRtcAsrTaskRequest& setTranslateEnabled(bool translateEnabled) { DARABONBA_PTR_SET_VALUE(translateEnabled_, translateEnabled) };


  protected:
    // The AuthKey that is used to generate the MD5 signature in callbacks.
    std::shared_ptr<string> authKey_ = nullptr;
    // The maximum latency at which the task is automatically stopped. Unit: seconds. Valid values: 1 to 10.
    std::shared_ptr<int64_t> autoTerminateDelay_ = nullptr;
    // Specifies whether to automatically stop the task when the latency exceeds the specified limit. Default value: false.
    std::shared_ptr<bool> autoTerminateEnabled_ = nullptr;
    // The callback URL.
    // 
    // This parameter is required.
    std::shared_ptr<string> callbackURL_ = nullptr;
    // The ID of the channel.
    // 
    // >  This parameter is required and takes effect only if you set the Mode parameter to rtc.
    std::shared_ptr<string> channelID_ = nullptr;
    // The source language of the audio. Valid values:
    // 
    // *   ja: Japanese
    // *   yue: Cantonese
    // *   fspk: mixed Mandarin and English
    // *   en: English
    // *   cn: Mandarin
    // 
    // This parameter is required.
    std::shared_ptr<string> language_ = nullptr;
    // The type of the stream. Valid values: live and rtc. The value live specifies a regular live stream, such as a Real-Time Messaging Protocol (RTMP) stream.
    // 
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The interval at which callbacks are returned. Unit: milliseconds. Valid values: -1 and 0 to 500.
    // 
    // *   \\-1: accepts callbacks only for whole sentences, but not for incomplete sentences.
    // *   0 or an empty value: returns callbacks in real time.
    // *   A value that is greater than 0 and less than or equal to 500: returns callbacks at the specified interval.
    std::shared_ptr<int64_t> reportInterval_ = nullptr;
    // The ID of the user who ingests the stream.
    // 
    // >  This parameter is required and takes effect only if you set the Mode parameter to rtc. You can specify only one user ID.
    std::shared_ptr<string> rtcUserId_ = nullptr;
    // The ID of the ApsaraVideo Real-time Communication (ARTC) application.
    // 
    // >  This parameter is required and takes effect only if you set the Mode parameter to rtc.
    std::shared_ptr<string> SDKAppID_ = nullptr;
    // The URL of the live stream.
    // 
    // >  This parameter is required and takes effect only if you set the Mode parameter to live.
    std::shared_ptr<string> streamURL_ = nullptr;
    // The language into which the subtitles are translated. Valid values:
    // 
    // *   cn: Chinese
    // *   en: English
    // *   ja: Japanese
    std::shared_ptr<string> targetLanguages_ = nullptr;
    // Specifies whether to enable the translation feature.
    std::shared_ptr<bool> translateEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
