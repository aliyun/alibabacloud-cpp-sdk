// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTMPUTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTMPUTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartMPUTaskRequestBackgrounds.hpp>
#include <alibabacloud/models/StartMPUTaskRequestClockWidgets.hpp>
#include <alibabacloud/models/StartMPUTaskRequestEnhancedParam.hpp>
#include <alibabacloud/models/StartMPUTaskRequestUserPanes.hpp>
#include <alibabacloud/models/StartMPUTaskRequestWatermarks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartMPUTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartMPUTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_TO_JSON(CropMode, cropMode_);
      DARABONBA_PTR_TO_JSON(EnhancedParam, enhancedParam_);
      DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_TO_JSON(MixMode, mixMode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayloadType, payloadType_);
      DARABONBA_PTR_TO_JSON(ReportVad, reportVad_);
      DARABONBA_PTR_TO_JSON(RtpExtInfo, rtpExtInfo_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_TO_JSON(SubSpecAudioUsers, subSpecAudioUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecCameraUsers, subSpecCameraUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecShareScreenUsers, subSpecShareScreenUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecUsers, subSpecUsers_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TimeStampRef, timeStampRef_);
      DARABONBA_PTR_TO_JSON(UnsubSpecAudioUsers, unsubSpecAudioUsers_);
      DARABONBA_PTR_TO_JSON(UnsubSpecCameraUsers, unsubSpecCameraUsers_);
      DARABONBA_PTR_TO_JSON(UnsubSpecShareScreenUsers, unsubSpecShareScreenUsers_);
      DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
      DARABONBA_PTR_TO_JSON(VadInterval, vadInterval_);
      DARABONBA_PTR_TO_JSON(Watermarks, watermarks_);
    };
    friend void from_json(const Darabonba::Json& j, StartMPUTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_FROM_JSON(CropMode, cropMode_);
      DARABONBA_PTR_FROM_JSON(EnhancedParam, enhancedParam_);
      DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_FROM_JSON(MixMode, mixMode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayloadType, payloadType_);
      DARABONBA_PTR_FROM_JSON(ReportVad, reportVad_);
      DARABONBA_PTR_FROM_JSON(RtpExtInfo, rtpExtInfo_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_FROM_JSON(SubSpecAudioUsers, subSpecAudioUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecCameraUsers, subSpecCameraUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecShareScreenUsers, subSpecShareScreenUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecUsers, subSpecUsers_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TimeStampRef, timeStampRef_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecAudioUsers, unsubSpecAudioUsers_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecCameraUsers, unsubSpecCameraUsers_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecShareScreenUsers, unsubSpecShareScreenUsers_);
      DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
      DARABONBA_PTR_FROM_JSON(VadInterval, vadInterval_);
      DARABONBA_PTR_FROM_JSON(Watermarks, watermarks_);
    };
    StartMPUTaskRequest() = default ;
    StartMPUTaskRequest(const StartMPUTaskRequest &) = default ;
    StartMPUTaskRequest(StartMPUTaskRequest &&) = default ;
    StartMPUTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartMPUTaskRequest() = default ;
    StartMPUTaskRequest& operator=(const StartMPUTaskRequest &) = default ;
    StartMPUTaskRequest& operator=(StartMPUTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->backgroundColor_ == nullptr && return this->backgrounds_ == nullptr && return this->channelId_ == nullptr && return this->clockWidgets_ == nullptr && return this->cropMode_ == nullptr
        && return this->enhancedParam_ == nullptr && return this->layoutIds_ == nullptr && return this->mediaEncode_ == nullptr && return this->mixMode_ == nullptr && return this->ownerId_ == nullptr
        && return this->payloadType_ == nullptr && return this->reportVad_ == nullptr && return this->rtpExtInfo_ == nullptr && return this->sourceType_ == nullptr && return this->streamType_ == nullptr
        && return this->streamURL_ == nullptr && return this->subSpecAudioUsers_ == nullptr && return this->subSpecCameraUsers_ == nullptr && return this->subSpecShareScreenUsers_ == nullptr && return this->subSpecUsers_ == nullptr
        && return this->taskId_ == nullptr && return this->taskType_ == nullptr && return this->timeStampRef_ == nullptr && return this->unsubSpecAudioUsers_ == nullptr && return this->unsubSpecCameraUsers_ == nullptr
        && return this->unsubSpecShareScreenUsers_ == nullptr && return this->userPanes_ == nullptr && return this->vadInterval_ == nullptr && return this->watermarks_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartMPUTaskRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgroundColor Field Functions 
    bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
    void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
    inline int32_t backgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, 0) };
    inline StartMPUTaskRequest& setBackgroundColor(int32_t backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<StartMPUTaskRequestBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<StartMPUTaskRequestBackgrounds>) };
    inline vector<StartMPUTaskRequestBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<StartMPUTaskRequestBackgrounds>) };
    inline StartMPUTaskRequest& setBackgrounds(const vector<StartMPUTaskRequestBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline StartMPUTaskRequest& setBackgrounds(vector<StartMPUTaskRequestBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartMPUTaskRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<StartMPUTaskRequestClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<StartMPUTaskRequestClockWidgets>) };
    inline vector<StartMPUTaskRequestClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<StartMPUTaskRequestClockWidgets>) };
    inline StartMPUTaskRequest& setClockWidgets(const vector<StartMPUTaskRequestClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline StartMPUTaskRequest& setClockWidgets(vector<StartMPUTaskRequestClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t cropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline StartMPUTaskRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // enhancedParam Field Functions 
    bool hasEnhancedParam() const { return this->enhancedParam_ != nullptr;};
    void deleteEnhancedParam() { this->enhancedParam_ = nullptr;};
    inline const StartMPUTaskRequestEnhancedParam & enhancedParam() const { DARABONBA_PTR_GET_CONST(enhancedParam_, StartMPUTaskRequestEnhancedParam) };
    inline StartMPUTaskRequestEnhancedParam enhancedParam() { DARABONBA_PTR_GET(enhancedParam_, StartMPUTaskRequestEnhancedParam) };
    inline StartMPUTaskRequest& setEnhancedParam(const StartMPUTaskRequestEnhancedParam & enhancedParam) { DARABONBA_PTR_SET_VALUE(enhancedParam_, enhancedParam) };
    inline StartMPUTaskRequest& setEnhancedParam(StartMPUTaskRequestEnhancedParam && enhancedParam) { DARABONBA_PTR_SET_RVALUE(enhancedParam_, enhancedParam) };


    // layoutIds Field Functions 
    bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
    void deleteLayoutIds() { this->layoutIds_ = nullptr;};
    inline const vector<int64_t> & layoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<int64_t>) };
    inline vector<int64_t> layoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<int64_t>) };
    inline StartMPUTaskRequest& setLayoutIds(const vector<int64_t> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
    inline StartMPUTaskRequest& setLayoutIds(vector<int64_t> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t mediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline StartMPUTaskRequest& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // mixMode Field Functions 
    bool hasMixMode() const { return this->mixMode_ != nullptr;};
    void deleteMixMode() { this->mixMode_ = nullptr;};
    inline int32_t mixMode() const { DARABONBA_PTR_GET_DEFAULT(mixMode_, 0) };
    inline StartMPUTaskRequest& setMixMode(int32_t mixMode) { DARABONBA_PTR_SET_VALUE(mixMode_, mixMode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartMPUTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payloadType Field Functions 
    bool hasPayloadType() const { return this->payloadType_ != nullptr;};
    void deletePayloadType() { this->payloadType_ = nullptr;};
    inline int32_t payloadType() const { DARABONBA_PTR_GET_DEFAULT(payloadType_, 0) };
    inline StartMPUTaskRequest& setPayloadType(int32_t payloadType) { DARABONBA_PTR_SET_VALUE(payloadType_, payloadType) };


    // reportVad Field Functions 
    bool hasReportVad() const { return this->reportVad_ != nullptr;};
    void deleteReportVad() { this->reportVad_ = nullptr;};
    inline int32_t reportVad() const { DARABONBA_PTR_GET_DEFAULT(reportVad_, 0) };
    inline StartMPUTaskRequest& setReportVad(int32_t reportVad) { DARABONBA_PTR_SET_VALUE(reportVad_, reportVad) };


    // rtpExtInfo Field Functions 
    bool hasRtpExtInfo() const { return this->rtpExtInfo_ != nullptr;};
    void deleteRtpExtInfo() { this->rtpExtInfo_ = nullptr;};
    inline int32_t rtpExtInfo() const { DARABONBA_PTR_GET_DEFAULT(rtpExtInfo_, 0) };
    inline StartMPUTaskRequest& setRtpExtInfo(int32_t rtpExtInfo) { DARABONBA_PTR_SET_VALUE(rtpExtInfo_, rtpExtInfo) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline StartMPUTaskRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline int32_t streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
    inline StartMPUTaskRequest& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // streamURL Field Functions 
    bool hasStreamURL() const { return this->streamURL_ != nullptr;};
    void deleteStreamURL() { this->streamURL_ = nullptr;};
    inline string streamURL() const { DARABONBA_PTR_GET_DEFAULT(streamURL_, "") };
    inline StartMPUTaskRequest& setStreamURL(string streamURL) { DARABONBA_PTR_SET_VALUE(streamURL_, streamURL) };


    // subSpecAudioUsers Field Functions 
    bool hasSubSpecAudioUsers() const { return this->subSpecAudioUsers_ != nullptr;};
    void deleteSubSpecAudioUsers() { this->subSpecAudioUsers_ = nullptr;};
    inline const vector<string> & subSpecAudioUsers() const { DARABONBA_PTR_GET_CONST(subSpecAudioUsers_, vector<string>) };
    inline vector<string> subSpecAudioUsers() { DARABONBA_PTR_GET(subSpecAudioUsers_, vector<string>) };
    inline StartMPUTaskRequest& setSubSpecAudioUsers(const vector<string> & subSpecAudioUsers) { DARABONBA_PTR_SET_VALUE(subSpecAudioUsers_, subSpecAudioUsers) };
    inline StartMPUTaskRequest& setSubSpecAudioUsers(vector<string> && subSpecAudioUsers) { DARABONBA_PTR_SET_RVALUE(subSpecAudioUsers_, subSpecAudioUsers) };


    // subSpecCameraUsers Field Functions 
    bool hasSubSpecCameraUsers() const { return this->subSpecCameraUsers_ != nullptr;};
    void deleteSubSpecCameraUsers() { this->subSpecCameraUsers_ = nullptr;};
    inline const vector<string> & subSpecCameraUsers() const { DARABONBA_PTR_GET_CONST(subSpecCameraUsers_, vector<string>) };
    inline vector<string> subSpecCameraUsers() { DARABONBA_PTR_GET(subSpecCameraUsers_, vector<string>) };
    inline StartMPUTaskRequest& setSubSpecCameraUsers(const vector<string> & subSpecCameraUsers) { DARABONBA_PTR_SET_VALUE(subSpecCameraUsers_, subSpecCameraUsers) };
    inline StartMPUTaskRequest& setSubSpecCameraUsers(vector<string> && subSpecCameraUsers) { DARABONBA_PTR_SET_RVALUE(subSpecCameraUsers_, subSpecCameraUsers) };


    // subSpecShareScreenUsers Field Functions 
    bool hasSubSpecShareScreenUsers() const { return this->subSpecShareScreenUsers_ != nullptr;};
    void deleteSubSpecShareScreenUsers() { this->subSpecShareScreenUsers_ = nullptr;};
    inline const vector<string> & subSpecShareScreenUsers() const { DARABONBA_PTR_GET_CONST(subSpecShareScreenUsers_, vector<string>) };
    inline vector<string> subSpecShareScreenUsers() { DARABONBA_PTR_GET(subSpecShareScreenUsers_, vector<string>) };
    inline StartMPUTaskRequest& setSubSpecShareScreenUsers(const vector<string> & subSpecShareScreenUsers) { DARABONBA_PTR_SET_VALUE(subSpecShareScreenUsers_, subSpecShareScreenUsers) };
    inline StartMPUTaskRequest& setSubSpecShareScreenUsers(vector<string> && subSpecShareScreenUsers) { DARABONBA_PTR_SET_RVALUE(subSpecShareScreenUsers_, subSpecShareScreenUsers) };


    // subSpecUsers Field Functions 
    bool hasSubSpecUsers() const { return this->subSpecUsers_ != nullptr;};
    void deleteSubSpecUsers() { this->subSpecUsers_ = nullptr;};
    inline const vector<string> & subSpecUsers() const { DARABONBA_PTR_GET_CONST(subSpecUsers_, vector<string>) };
    inline vector<string> subSpecUsers() { DARABONBA_PTR_GET(subSpecUsers_, vector<string>) };
    inline StartMPUTaskRequest& setSubSpecUsers(const vector<string> & subSpecUsers) { DARABONBA_PTR_SET_VALUE(subSpecUsers_, subSpecUsers) };
    inline StartMPUTaskRequest& setSubSpecUsers(vector<string> && subSpecUsers) { DARABONBA_PTR_SET_RVALUE(subSpecUsers_, subSpecUsers) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartMPUTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline StartMPUTaskRequest& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // timeStampRef Field Functions 
    bool hasTimeStampRef() const { return this->timeStampRef_ != nullptr;};
    void deleteTimeStampRef() { this->timeStampRef_ = nullptr;};
    inline int64_t timeStampRef() const { DARABONBA_PTR_GET_DEFAULT(timeStampRef_, 0L) };
    inline StartMPUTaskRequest& setTimeStampRef(int64_t timeStampRef) { DARABONBA_PTR_SET_VALUE(timeStampRef_, timeStampRef) };


    // unsubSpecAudioUsers Field Functions 
    bool hasUnsubSpecAudioUsers() const { return this->unsubSpecAudioUsers_ != nullptr;};
    void deleteUnsubSpecAudioUsers() { this->unsubSpecAudioUsers_ = nullptr;};
    inline const vector<string> & unsubSpecAudioUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecAudioUsers_, vector<string>) };
    inline vector<string> unsubSpecAudioUsers() { DARABONBA_PTR_GET(unsubSpecAudioUsers_, vector<string>) };
    inline StartMPUTaskRequest& setUnsubSpecAudioUsers(const vector<string> & unsubSpecAudioUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecAudioUsers_, unsubSpecAudioUsers) };
    inline StartMPUTaskRequest& setUnsubSpecAudioUsers(vector<string> && unsubSpecAudioUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecAudioUsers_, unsubSpecAudioUsers) };


    // unsubSpecCameraUsers Field Functions 
    bool hasUnsubSpecCameraUsers() const { return this->unsubSpecCameraUsers_ != nullptr;};
    void deleteUnsubSpecCameraUsers() { this->unsubSpecCameraUsers_ = nullptr;};
    inline const vector<string> & unsubSpecCameraUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecCameraUsers_, vector<string>) };
    inline vector<string> unsubSpecCameraUsers() { DARABONBA_PTR_GET(unsubSpecCameraUsers_, vector<string>) };
    inline StartMPUTaskRequest& setUnsubSpecCameraUsers(const vector<string> & unsubSpecCameraUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecCameraUsers_, unsubSpecCameraUsers) };
    inline StartMPUTaskRequest& setUnsubSpecCameraUsers(vector<string> && unsubSpecCameraUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecCameraUsers_, unsubSpecCameraUsers) };


    // unsubSpecShareScreenUsers Field Functions 
    bool hasUnsubSpecShareScreenUsers() const { return this->unsubSpecShareScreenUsers_ != nullptr;};
    void deleteUnsubSpecShareScreenUsers() { this->unsubSpecShareScreenUsers_ = nullptr;};
    inline const vector<string> & unsubSpecShareScreenUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecShareScreenUsers_, vector<string>) };
    inline vector<string> unsubSpecShareScreenUsers() { DARABONBA_PTR_GET(unsubSpecShareScreenUsers_, vector<string>) };
    inline StartMPUTaskRequest& setUnsubSpecShareScreenUsers(const vector<string> & unsubSpecShareScreenUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecShareScreenUsers_, unsubSpecShareScreenUsers) };
    inline StartMPUTaskRequest& setUnsubSpecShareScreenUsers(vector<string> && unsubSpecShareScreenUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecShareScreenUsers_, unsubSpecShareScreenUsers) };


    // userPanes Field Functions 
    bool hasUserPanes() const { return this->userPanes_ != nullptr;};
    void deleteUserPanes() { this->userPanes_ = nullptr;};
    inline const vector<StartMPUTaskRequestUserPanes> & userPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<StartMPUTaskRequestUserPanes>) };
    inline vector<StartMPUTaskRequestUserPanes> userPanes() { DARABONBA_PTR_GET(userPanes_, vector<StartMPUTaskRequestUserPanes>) };
    inline StartMPUTaskRequest& setUserPanes(const vector<StartMPUTaskRequestUserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
    inline StartMPUTaskRequest& setUserPanes(vector<StartMPUTaskRequestUserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


    // vadInterval Field Functions 
    bool hasVadInterval() const { return this->vadInterval_ != nullptr;};
    void deleteVadInterval() { this->vadInterval_ = nullptr;};
    inline int64_t vadInterval() const { DARABONBA_PTR_GET_DEFAULT(vadInterval_, 0L) };
    inline StartMPUTaskRequest& setVadInterval(int64_t vadInterval) { DARABONBA_PTR_SET_VALUE(vadInterval_, vadInterval) };


    // watermarks Field Functions 
    bool hasWatermarks() const { return this->watermarks_ != nullptr;};
    void deleteWatermarks() { this->watermarks_ = nullptr;};
    inline const vector<StartMPUTaskRequestWatermarks> & watermarks() const { DARABONBA_PTR_GET_CONST(watermarks_, vector<StartMPUTaskRequestWatermarks>) };
    inline vector<StartMPUTaskRequestWatermarks> watermarks() { DARABONBA_PTR_GET(watermarks_, vector<StartMPUTaskRequestWatermarks>) };
    inline StartMPUTaskRequest& setWatermarks(const vector<StartMPUTaskRequestWatermarks> & watermarks) { DARABONBA_PTR_SET_VALUE(watermarks_, watermarks) };
    inline StartMPUTaskRequest& setWatermarks(vector<StartMPUTaskRequestWatermarks> && watermarks) { DARABONBA_PTR_SET_RVALUE(watermarks_, watermarks) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int32_t> backgroundColor_ = nullptr;
    std::shared_ptr<vector<StartMPUTaskRequestBackgrounds>> backgrounds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<vector<StartMPUTaskRequestClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<int32_t> cropMode_ = nullptr;
    std::shared_ptr<StartMPUTaskRequestEnhancedParam> enhancedParam_ = nullptr;
    std::shared_ptr<vector<int64_t>> layoutIds_ = nullptr;
    std::shared_ptr<int32_t> mediaEncode_ = nullptr;
    std::shared_ptr<int32_t> mixMode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<int32_t> payloadType_ = nullptr;
    std::shared_ptr<int32_t> reportVad_ = nullptr;
    std::shared_ptr<int32_t> rtpExtInfo_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<int32_t> streamType_ = nullptr;
    std::shared_ptr<string> streamURL_ = nullptr;
    std::shared_ptr<vector<string>> subSpecAudioUsers_ = nullptr;
    std::shared_ptr<vector<string>> subSpecCameraUsers_ = nullptr;
    std::shared_ptr<vector<string>> subSpecShareScreenUsers_ = nullptr;
    std::shared_ptr<vector<string>> subSpecUsers_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<int32_t> taskType_ = nullptr;
    std::shared_ptr<int64_t> timeStampRef_ = nullptr;
    std::shared_ptr<vector<string>> unsubSpecAudioUsers_ = nullptr;
    std::shared_ptr<vector<string>> unsubSpecCameraUsers_ = nullptr;
    std::shared_ptr<vector<string>> unsubSpecShareScreenUsers_ = nullptr;
    std::shared_ptr<vector<StartMPUTaskRequestUserPanes>> userPanes_ = nullptr;
    std::shared_ptr<int64_t> vadInterval_ = nullptr;
    std::shared_ptr<vector<StartMPUTaskRequestWatermarks>> watermarks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
