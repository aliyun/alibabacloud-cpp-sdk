// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMPUTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMPUTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMPUTaskRequestBackgrounds.hpp>
#include <alibabacloud/models/UpdateMPUTaskRequestClockWidgets.hpp>
#include <alibabacloud/models/UpdateMPUTaskRequestUserPanes.hpp>
#include <alibabacloud/models/UpdateMPUTaskRequestWatermarks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateMPUTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMPUTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
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
      DARABONBA_PTR_TO_JSON(UnsubSpecAudioUsers, unsubSpecAudioUsers_);
      DARABONBA_PTR_TO_JSON(UnsubSpecCameraUsers, unsubSpecCameraUsers_);
      DARABONBA_PTR_TO_JSON(UnsubSpecShareScreenUsers, unsubSpecShareScreenUsers_);
      DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
      DARABONBA_PTR_TO_JSON(Watermarks, watermarks_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMPUTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
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
      DARABONBA_PTR_FROM_JSON(UnsubSpecAudioUsers, unsubSpecAudioUsers_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecCameraUsers, unsubSpecCameraUsers_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecShareScreenUsers, unsubSpecShareScreenUsers_);
      DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
      DARABONBA_PTR_FROM_JSON(Watermarks, watermarks_);
    };
    UpdateMPUTaskRequest() = default ;
    UpdateMPUTaskRequest(const UpdateMPUTaskRequest &) = default ;
    UpdateMPUTaskRequest(UpdateMPUTaskRequest &&) = default ;
    UpdateMPUTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMPUTaskRequest() = default ;
    UpdateMPUTaskRequest& operator=(const UpdateMPUTaskRequest &) = default ;
    UpdateMPUTaskRequest& operator=(UpdateMPUTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->backgroundColor_ != nullptr && this->backgrounds_ != nullptr && this->clockWidgets_ != nullptr && this->cropMode_ != nullptr && this->layoutIds_ != nullptr
        && this->mediaEncode_ != nullptr && this->mixMode_ != nullptr && this->ownerId_ != nullptr && this->sourceType_ != nullptr && this->streamType_ != nullptr
        && this->subSpecAudioUsers_ != nullptr && this->subSpecCameraUsers_ != nullptr && this->subSpecShareScreenUsers_ != nullptr && this->subSpecUsers_ != nullptr && this->taskId_ != nullptr
        && this->unsubSpecAudioUsers_ != nullptr && this->unsubSpecCameraUsers_ != nullptr && this->unsubSpecShareScreenUsers_ != nullptr && this->userPanes_ != nullptr && this->watermarks_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMPUTaskRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgroundColor Field Functions 
    bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
    void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
    inline int32_t backgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, 0) };
    inline UpdateMPUTaskRequest& setBackgroundColor(int32_t backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<UpdateMPUTaskRequestBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<UpdateMPUTaskRequestBackgrounds>) };
    inline vector<UpdateMPUTaskRequestBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<UpdateMPUTaskRequestBackgrounds>) };
    inline UpdateMPUTaskRequest& setBackgrounds(const vector<UpdateMPUTaskRequestBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline UpdateMPUTaskRequest& setBackgrounds(vector<UpdateMPUTaskRequestBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<UpdateMPUTaskRequestClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<UpdateMPUTaskRequestClockWidgets>) };
    inline vector<UpdateMPUTaskRequestClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<UpdateMPUTaskRequestClockWidgets>) };
    inline UpdateMPUTaskRequest& setClockWidgets(const vector<UpdateMPUTaskRequestClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline UpdateMPUTaskRequest& setClockWidgets(vector<UpdateMPUTaskRequestClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t cropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline UpdateMPUTaskRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // layoutIds Field Functions 
    bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
    void deleteLayoutIds() { this->layoutIds_ = nullptr;};
    inline const vector<int64_t> & layoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<int64_t>) };
    inline vector<int64_t> layoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<int64_t>) };
    inline UpdateMPUTaskRequest& setLayoutIds(const vector<int64_t> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
    inline UpdateMPUTaskRequest& setLayoutIds(vector<int64_t> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t mediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline UpdateMPUTaskRequest& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // mixMode Field Functions 
    bool hasMixMode() const { return this->mixMode_ != nullptr;};
    void deleteMixMode() { this->mixMode_ = nullptr;};
    inline int32_t mixMode() const { DARABONBA_PTR_GET_DEFAULT(mixMode_, 0) };
    inline UpdateMPUTaskRequest& setMixMode(int32_t mixMode) { DARABONBA_PTR_SET_VALUE(mixMode_, mixMode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateMPUTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateMPUTaskRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline int32_t streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
    inline UpdateMPUTaskRequest& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // subSpecAudioUsers Field Functions 
    bool hasSubSpecAudioUsers() const { return this->subSpecAudioUsers_ != nullptr;};
    void deleteSubSpecAudioUsers() { this->subSpecAudioUsers_ = nullptr;};
    inline const vector<string> & subSpecAudioUsers() const { DARABONBA_PTR_GET_CONST(subSpecAudioUsers_, vector<string>) };
    inline vector<string> subSpecAudioUsers() { DARABONBA_PTR_GET(subSpecAudioUsers_, vector<string>) };
    inline UpdateMPUTaskRequest& setSubSpecAudioUsers(const vector<string> & subSpecAudioUsers) { DARABONBA_PTR_SET_VALUE(subSpecAudioUsers_, subSpecAudioUsers) };
    inline UpdateMPUTaskRequest& setSubSpecAudioUsers(vector<string> && subSpecAudioUsers) { DARABONBA_PTR_SET_RVALUE(subSpecAudioUsers_, subSpecAudioUsers) };


    // subSpecCameraUsers Field Functions 
    bool hasSubSpecCameraUsers() const { return this->subSpecCameraUsers_ != nullptr;};
    void deleteSubSpecCameraUsers() { this->subSpecCameraUsers_ = nullptr;};
    inline const vector<string> & subSpecCameraUsers() const { DARABONBA_PTR_GET_CONST(subSpecCameraUsers_, vector<string>) };
    inline vector<string> subSpecCameraUsers() { DARABONBA_PTR_GET(subSpecCameraUsers_, vector<string>) };
    inline UpdateMPUTaskRequest& setSubSpecCameraUsers(const vector<string> & subSpecCameraUsers) { DARABONBA_PTR_SET_VALUE(subSpecCameraUsers_, subSpecCameraUsers) };
    inline UpdateMPUTaskRequest& setSubSpecCameraUsers(vector<string> && subSpecCameraUsers) { DARABONBA_PTR_SET_RVALUE(subSpecCameraUsers_, subSpecCameraUsers) };


    // subSpecShareScreenUsers Field Functions 
    bool hasSubSpecShareScreenUsers() const { return this->subSpecShareScreenUsers_ != nullptr;};
    void deleteSubSpecShareScreenUsers() { this->subSpecShareScreenUsers_ = nullptr;};
    inline const vector<string> & subSpecShareScreenUsers() const { DARABONBA_PTR_GET_CONST(subSpecShareScreenUsers_, vector<string>) };
    inline vector<string> subSpecShareScreenUsers() { DARABONBA_PTR_GET(subSpecShareScreenUsers_, vector<string>) };
    inline UpdateMPUTaskRequest& setSubSpecShareScreenUsers(const vector<string> & subSpecShareScreenUsers) { DARABONBA_PTR_SET_VALUE(subSpecShareScreenUsers_, subSpecShareScreenUsers) };
    inline UpdateMPUTaskRequest& setSubSpecShareScreenUsers(vector<string> && subSpecShareScreenUsers) { DARABONBA_PTR_SET_RVALUE(subSpecShareScreenUsers_, subSpecShareScreenUsers) };


    // subSpecUsers Field Functions 
    bool hasSubSpecUsers() const { return this->subSpecUsers_ != nullptr;};
    void deleteSubSpecUsers() { this->subSpecUsers_ = nullptr;};
    inline const vector<string> & subSpecUsers() const { DARABONBA_PTR_GET_CONST(subSpecUsers_, vector<string>) };
    inline vector<string> subSpecUsers() { DARABONBA_PTR_GET(subSpecUsers_, vector<string>) };
    inline UpdateMPUTaskRequest& setSubSpecUsers(const vector<string> & subSpecUsers) { DARABONBA_PTR_SET_VALUE(subSpecUsers_, subSpecUsers) };
    inline UpdateMPUTaskRequest& setSubSpecUsers(vector<string> && subSpecUsers) { DARABONBA_PTR_SET_RVALUE(subSpecUsers_, subSpecUsers) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateMPUTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // unsubSpecAudioUsers Field Functions 
    bool hasUnsubSpecAudioUsers() const { return this->unsubSpecAudioUsers_ != nullptr;};
    void deleteUnsubSpecAudioUsers() { this->unsubSpecAudioUsers_ = nullptr;};
    inline const vector<string> & unsubSpecAudioUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecAudioUsers_, vector<string>) };
    inline vector<string> unsubSpecAudioUsers() { DARABONBA_PTR_GET(unsubSpecAudioUsers_, vector<string>) };
    inline UpdateMPUTaskRequest& setUnsubSpecAudioUsers(const vector<string> & unsubSpecAudioUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecAudioUsers_, unsubSpecAudioUsers) };
    inline UpdateMPUTaskRequest& setUnsubSpecAudioUsers(vector<string> && unsubSpecAudioUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecAudioUsers_, unsubSpecAudioUsers) };


    // unsubSpecCameraUsers Field Functions 
    bool hasUnsubSpecCameraUsers() const { return this->unsubSpecCameraUsers_ != nullptr;};
    void deleteUnsubSpecCameraUsers() { this->unsubSpecCameraUsers_ = nullptr;};
    inline const vector<string> & unsubSpecCameraUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecCameraUsers_, vector<string>) };
    inline vector<string> unsubSpecCameraUsers() { DARABONBA_PTR_GET(unsubSpecCameraUsers_, vector<string>) };
    inline UpdateMPUTaskRequest& setUnsubSpecCameraUsers(const vector<string> & unsubSpecCameraUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecCameraUsers_, unsubSpecCameraUsers) };
    inline UpdateMPUTaskRequest& setUnsubSpecCameraUsers(vector<string> && unsubSpecCameraUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecCameraUsers_, unsubSpecCameraUsers) };


    // unsubSpecShareScreenUsers Field Functions 
    bool hasUnsubSpecShareScreenUsers() const { return this->unsubSpecShareScreenUsers_ != nullptr;};
    void deleteUnsubSpecShareScreenUsers() { this->unsubSpecShareScreenUsers_ = nullptr;};
    inline const vector<string> & unsubSpecShareScreenUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecShareScreenUsers_, vector<string>) };
    inline vector<string> unsubSpecShareScreenUsers() { DARABONBA_PTR_GET(unsubSpecShareScreenUsers_, vector<string>) };
    inline UpdateMPUTaskRequest& setUnsubSpecShareScreenUsers(const vector<string> & unsubSpecShareScreenUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecShareScreenUsers_, unsubSpecShareScreenUsers) };
    inline UpdateMPUTaskRequest& setUnsubSpecShareScreenUsers(vector<string> && unsubSpecShareScreenUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecShareScreenUsers_, unsubSpecShareScreenUsers) };


    // userPanes Field Functions 
    bool hasUserPanes() const { return this->userPanes_ != nullptr;};
    void deleteUserPanes() { this->userPanes_ = nullptr;};
    inline const vector<UpdateMPUTaskRequestUserPanes> & userPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<UpdateMPUTaskRequestUserPanes>) };
    inline vector<UpdateMPUTaskRequestUserPanes> userPanes() { DARABONBA_PTR_GET(userPanes_, vector<UpdateMPUTaskRequestUserPanes>) };
    inline UpdateMPUTaskRequest& setUserPanes(const vector<UpdateMPUTaskRequestUserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
    inline UpdateMPUTaskRequest& setUserPanes(vector<UpdateMPUTaskRequestUserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


    // watermarks Field Functions 
    bool hasWatermarks() const { return this->watermarks_ != nullptr;};
    void deleteWatermarks() { this->watermarks_ = nullptr;};
    inline const vector<UpdateMPUTaskRequestWatermarks> & watermarks() const { DARABONBA_PTR_GET_CONST(watermarks_, vector<UpdateMPUTaskRequestWatermarks>) };
    inline vector<UpdateMPUTaskRequestWatermarks> watermarks() { DARABONBA_PTR_GET(watermarks_, vector<UpdateMPUTaskRequestWatermarks>) };
    inline UpdateMPUTaskRequest& setWatermarks(const vector<UpdateMPUTaskRequestWatermarks> & watermarks) { DARABONBA_PTR_SET_VALUE(watermarks_, watermarks) };
    inline UpdateMPUTaskRequest& setWatermarks(vector<UpdateMPUTaskRequestWatermarks> && watermarks) { DARABONBA_PTR_SET_RVALUE(watermarks_, watermarks) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int32_t> backgroundColor_ = nullptr;
    std::shared_ptr<vector<UpdateMPUTaskRequestBackgrounds>> backgrounds_ = nullptr;
    std::shared_ptr<vector<UpdateMPUTaskRequestClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<int32_t> cropMode_ = nullptr;
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
    std::shared_ptr<vector<string>> unsubSpecAudioUsers_ = nullptr;
    std::shared_ptr<vector<string>> unsubSpecCameraUsers_ = nullptr;
    std::shared_ptr<vector<string>> unsubSpecShareScreenUsers_ = nullptr;
    std::shared_ptr<vector<UpdateMPUTaskRequestUserPanes>> userPanes_ = nullptr;
    std::shared_ptr<vector<UpdateMPUTaskRequestWatermarks>> watermarks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
