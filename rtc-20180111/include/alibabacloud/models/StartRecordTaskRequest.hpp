// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRECORDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRECORDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartRecordTaskRequestUserPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartRecordTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRecordTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CropMode, cropMode_);
      DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_TO_JSON(MixMode, mixMode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(SubSpecAudioUsers, subSpecAudioUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecCameraUsers, subSpecCameraUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecShareScreenUsers, subSpecShareScreenUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecUsers, subSpecUsers_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskProfile, taskProfile_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(UnsubSpecAudioUsers, unsubSpecAudioUsers_);
      DARABONBA_PTR_TO_JSON(UnsubSpecCameraUsers, unsubSpecCameraUsers_);
      DARABONBA_PTR_TO_JSON(UnsubSpecShareScreenUsers, unsubSpecShareScreenUsers_);
      DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
    };
    friend void from_json(const Darabonba::Json& j, StartRecordTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CropMode, cropMode_);
      DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_FROM_JSON(MixMode, mixMode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(SubSpecAudioUsers, subSpecAudioUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecCameraUsers, subSpecCameraUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecShareScreenUsers, subSpecShareScreenUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecUsers, subSpecUsers_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskProfile, taskProfile_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecAudioUsers, unsubSpecAudioUsers_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecCameraUsers, unsubSpecCameraUsers_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecShareScreenUsers, unsubSpecShareScreenUsers_);
      DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
    };
    StartRecordTaskRequest() = default ;
    StartRecordTaskRequest(const StartRecordTaskRequest &) = default ;
    StartRecordTaskRequest(StartRecordTaskRequest &&) = default ;
    StartRecordTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRecordTaskRequest() = default ;
    StartRecordTaskRequest& operator=(const StartRecordTaskRequest &) = default ;
    StartRecordTaskRequest& operator=(StartRecordTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->channelId_ == nullptr && return this->cropMode_ == nullptr && return this->layoutIds_ == nullptr && return this->mediaEncode_ == nullptr && return this->mixMode_ == nullptr
        && return this->ownerId_ == nullptr && return this->sourceType_ == nullptr && return this->streamType_ == nullptr && return this->subSpecAudioUsers_ == nullptr && return this->subSpecCameraUsers_ == nullptr
        && return this->subSpecShareScreenUsers_ == nullptr && return this->subSpecUsers_ == nullptr && return this->taskId_ == nullptr && return this->taskProfile_ == nullptr && return this->templateId_ == nullptr
        && return this->unsubSpecAudioUsers_ == nullptr && return this->unsubSpecCameraUsers_ == nullptr && return this->unsubSpecShareScreenUsers_ == nullptr && return this->userPanes_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartRecordTaskRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartRecordTaskRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int64_t cropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0L) };
    inline StartRecordTaskRequest& setCropMode(int64_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // layoutIds Field Functions 
    bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
    void deleteLayoutIds() { this->layoutIds_ = nullptr;};
    inline const vector<int64_t> & layoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<int64_t>) };
    inline vector<int64_t> layoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<int64_t>) };
    inline StartRecordTaskRequest& setLayoutIds(const vector<int64_t> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
    inline StartRecordTaskRequest& setLayoutIds(vector<int64_t> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t mediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline StartRecordTaskRequest& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // mixMode Field Functions 
    bool hasMixMode() const { return this->mixMode_ != nullptr;};
    void deleteMixMode() { this->mixMode_ = nullptr;};
    inline int32_t mixMode() const { DARABONBA_PTR_GET_DEFAULT(mixMode_, 0) };
    inline StartRecordTaskRequest& setMixMode(int32_t mixMode) { DARABONBA_PTR_SET_VALUE(mixMode_, mixMode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartRecordTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline StartRecordTaskRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline int32_t streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
    inline StartRecordTaskRequest& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // subSpecAudioUsers Field Functions 
    bool hasSubSpecAudioUsers() const { return this->subSpecAudioUsers_ != nullptr;};
    void deleteSubSpecAudioUsers() { this->subSpecAudioUsers_ = nullptr;};
    inline const vector<string> & subSpecAudioUsers() const { DARABONBA_PTR_GET_CONST(subSpecAudioUsers_, vector<string>) };
    inline vector<string> subSpecAudioUsers() { DARABONBA_PTR_GET(subSpecAudioUsers_, vector<string>) };
    inline StartRecordTaskRequest& setSubSpecAudioUsers(const vector<string> & subSpecAudioUsers) { DARABONBA_PTR_SET_VALUE(subSpecAudioUsers_, subSpecAudioUsers) };
    inline StartRecordTaskRequest& setSubSpecAudioUsers(vector<string> && subSpecAudioUsers) { DARABONBA_PTR_SET_RVALUE(subSpecAudioUsers_, subSpecAudioUsers) };


    // subSpecCameraUsers Field Functions 
    bool hasSubSpecCameraUsers() const { return this->subSpecCameraUsers_ != nullptr;};
    void deleteSubSpecCameraUsers() { this->subSpecCameraUsers_ = nullptr;};
    inline const vector<string> & subSpecCameraUsers() const { DARABONBA_PTR_GET_CONST(subSpecCameraUsers_, vector<string>) };
    inline vector<string> subSpecCameraUsers() { DARABONBA_PTR_GET(subSpecCameraUsers_, vector<string>) };
    inline StartRecordTaskRequest& setSubSpecCameraUsers(const vector<string> & subSpecCameraUsers) { DARABONBA_PTR_SET_VALUE(subSpecCameraUsers_, subSpecCameraUsers) };
    inline StartRecordTaskRequest& setSubSpecCameraUsers(vector<string> && subSpecCameraUsers) { DARABONBA_PTR_SET_RVALUE(subSpecCameraUsers_, subSpecCameraUsers) };


    // subSpecShareScreenUsers Field Functions 
    bool hasSubSpecShareScreenUsers() const { return this->subSpecShareScreenUsers_ != nullptr;};
    void deleteSubSpecShareScreenUsers() { this->subSpecShareScreenUsers_ = nullptr;};
    inline const vector<string> & subSpecShareScreenUsers() const { DARABONBA_PTR_GET_CONST(subSpecShareScreenUsers_, vector<string>) };
    inline vector<string> subSpecShareScreenUsers() { DARABONBA_PTR_GET(subSpecShareScreenUsers_, vector<string>) };
    inline StartRecordTaskRequest& setSubSpecShareScreenUsers(const vector<string> & subSpecShareScreenUsers) { DARABONBA_PTR_SET_VALUE(subSpecShareScreenUsers_, subSpecShareScreenUsers) };
    inline StartRecordTaskRequest& setSubSpecShareScreenUsers(vector<string> && subSpecShareScreenUsers) { DARABONBA_PTR_SET_RVALUE(subSpecShareScreenUsers_, subSpecShareScreenUsers) };


    // subSpecUsers Field Functions 
    bool hasSubSpecUsers() const { return this->subSpecUsers_ != nullptr;};
    void deleteSubSpecUsers() { this->subSpecUsers_ = nullptr;};
    inline const vector<string> & subSpecUsers() const { DARABONBA_PTR_GET_CONST(subSpecUsers_, vector<string>) };
    inline vector<string> subSpecUsers() { DARABONBA_PTR_GET(subSpecUsers_, vector<string>) };
    inline StartRecordTaskRequest& setSubSpecUsers(const vector<string> & subSpecUsers) { DARABONBA_PTR_SET_VALUE(subSpecUsers_, subSpecUsers) };
    inline StartRecordTaskRequest& setSubSpecUsers(vector<string> && subSpecUsers) { DARABONBA_PTR_SET_RVALUE(subSpecUsers_, subSpecUsers) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartRecordTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskProfile Field Functions 
    bool hasTaskProfile() const { return this->taskProfile_ != nullptr;};
    void deleteTaskProfile() { this->taskProfile_ = nullptr;};
    inline string taskProfile() const { DARABONBA_PTR_GET_DEFAULT(taskProfile_, "") };
    inline StartRecordTaskRequest& setTaskProfile(string taskProfile) { DARABONBA_PTR_SET_VALUE(taskProfile_, taskProfile) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartRecordTaskRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // unsubSpecAudioUsers Field Functions 
    bool hasUnsubSpecAudioUsers() const { return this->unsubSpecAudioUsers_ != nullptr;};
    void deleteUnsubSpecAudioUsers() { this->unsubSpecAudioUsers_ = nullptr;};
    inline const vector<string> & unsubSpecAudioUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecAudioUsers_, vector<string>) };
    inline vector<string> unsubSpecAudioUsers() { DARABONBA_PTR_GET(unsubSpecAudioUsers_, vector<string>) };
    inline StartRecordTaskRequest& setUnsubSpecAudioUsers(const vector<string> & unsubSpecAudioUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecAudioUsers_, unsubSpecAudioUsers) };
    inline StartRecordTaskRequest& setUnsubSpecAudioUsers(vector<string> && unsubSpecAudioUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecAudioUsers_, unsubSpecAudioUsers) };


    // unsubSpecCameraUsers Field Functions 
    bool hasUnsubSpecCameraUsers() const { return this->unsubSpecCameraUsers_ != nullptr;};
    void deleteUnsubSpecCameraUsers() { this->unsubSpecCameraUsers_ = nullptr;};
    inline const vector<string> & unsubSpecCameraUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecCameraUsers_, vector<string>) };
    inline vector<string> unsubSpecCameraUsers() { DARABONBA_PTR_GET(unsubSpecCameraUsers_, vector<string>) };
    inline StartRecordTaskRequest& setUnsubSpecCameraUsers(const vector<string> & unsubSpecCameraUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecCameraUsers_, unsubSpecCameraUsers) };
    inline StartRecordTaskRequest& setUnsubSpecCameraUsers(vector<string> && unsubSpecCameraUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecCameraUsers_, unsubSpecCameraUsers) };


    // unsubSpecShareScreenUsers Field Functions 
    bool hasUnsubSpecShareScreenUsers() const { return this->unsubSpecShareScreenUsers_ != nullptr;};
    void deleteUnsubSpecShareScreenUsers() { this->unsubSpecShareScreenUsers_ = nullptr;};
    inline const vector<string> & unsubSpecShareScreenUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecShareScreenUsers_, vector<string>) };
    inline vector<string> unsubSpecShareScreenUsers() { DARABONBA_PTR_GET(unsubSpecShareScreenUsers_, vector<string>) };
    inline StartRecordTaskRequest& setUnsubSpecShareScreenUsers(const vector<string> & unsubSpecShareScreenUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecShareScreenUsers_, unsubSpecShareScreenUsers) };
    inline StartRecordTaskRequest& setUnsubSpecShareScreenUsers(vector<string> && unsubSpecShareScreenUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecShareScreenUsers_, unsubSpecShareScreenUsers) };


    // userPanes Field Functions 
    bool hasUserPanes() const { return this->userPanes_ != nullptr;};
    void deleteUserPanes() { this->userPanes_ = nullptr;};
    inline const vector<StartRecordTaskRequestUserPanes> & userPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<StartRecordTaskRequestUserPanes>) };
    inline vector<StartRecordTaskRequestUserPanes> userPanes() { DARABONBA_PTR_GET(userPanes_, vector<StartRecordTaskRequestUserPanes>) };
    inline StartRecordTaskRequest& setUserPanes(const vector<StartRecordTaskRequestUserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
    inline StartRecordTaskRequest& setUserPanes(vector<StartRecordTaskRequestUserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int64_t> cropMode_ = nullptr;
    std::shared_ptr<vector<int64_t>> layoutIds_ = nullptr;
    std::shared_ptr<int32_t> mediaEncode_ = nullptr;
    std::shared_ptr<int32_t> mixMode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<int32_t> streamType_ = nullptr;
    std::shared_ptr<vector<string>> subSpecAudioUsers_ = nullptr;
    std::shared_ptr<vector<string>> subSpecCameraUsers_ = nullptr;
    std::shared_ptr<vector<string>> subSpecShareScreenUsers_ = nullptr;
    std::shared_ptr<vector<string>> subSpecUsers_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskProfile_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<string>> unsubSpecAudioUsers_ = nullptr;
    std::shared_ptr<vector<string>> unsubSpecCameraUsers_ = nullptr;
    std::shared_ptr<vector<string>> unsubSpecShareScreenUsers_ = nullptr;
    std::shared_ptr<vector<StartRecordTaskRequestUserPanes>> userPanes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
