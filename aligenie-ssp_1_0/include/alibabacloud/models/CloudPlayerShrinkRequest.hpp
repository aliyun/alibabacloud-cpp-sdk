// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDPLAYERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDPLAYERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CloudPlayerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudPlayerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurPlayIndex, curPlayIndex_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(PlayMode, playMode_);
      DARABONBA_PTR_TO_JSON(SongId, songId_);
      DARABONBA_PTR_TO_JSON(SongIdList, songIdListShrink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CloudPlayerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurPlayIndex, curPlayIndex_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(PlayMode, playMode_);
      DARABONBA_PTR_FROM_JSON(SongId, songId_);
      DARABONBA_PTR_FROM_JSON(SongIdList, songIdListShrink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    CloudPlayerShrinkRequest() = default ;
    CloudPlayerShrinkRequest(const CloudPlayerShrinkRequest &) = default ;
    CloudPlayerShrinkRequest(CloudPlayerShrinkRequest &&) = default ;
    CloudPlayerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudPlayerShrinkRequest() = default ;
    CloudPlayerShrinkRequest& operator=(const CloudPlayerShrinkRequest &) = default ;
    CloudPlayerShrinkRequest& operator=(CloudPlayerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->curPlayIndex_ == nullptr
        && this->deviceInfoShrink_ == nullptr && this->playMode_ == nullptr && this->songId_ == nullptr && this->songIdListShrink_ == nullptr && this->source_ == nullptr
        && this->userInfoShrink_ == nullptr; };
    // curPlayIndex Field Functions 
    bool hasCurPlayIndex() const { return this->curPlayIndex_ != nullptr;};
    void deleteCurPlayIndex() { this->curPlayIndex_ = nullptr;};
    inline int32_t getCurPlayIndex() const { DARABONBA_PTR_GET_DEFAULT(curPlayIndex_, 0) };
    inline CloudPlayerShrinkRequest& setCurPlayIndex(int32_t curPlayIndex) { DARABONBA_PTR_SET_VALUE(curPlayIndex_, curPlayIndex) };


    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string getDeviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline CloudPlayerShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // playMode Field Functions 
    bool hasPlayMode() const { return this->playMode_ != nullptr;};
    void deletePlayMode() { this->playMode_ = nullptr;};
    inline string getPlayMode() const { DARABONBA_PTR_GET_DEFAULT(playMode_, "") };
    inline CloudPlayerShrinkRequest& setPlayMode(string playMode) { DARABONBA_PTR_SET_VALUE(playMode_, playMode) };


    // songId Field Functions 
    bool hasSongId() const { return this->songId_ != nullptr;};
    void deleteSongId() { this->songId_ = nullptr;};
    inline string getSongId() const { DARABONBA_PTR_GET_DEFAULT(songId_, "") };
    inline CloudPlayerShrinkRequest& setSongId(string songId) { DARABONBA_PTR_SET_VALUE(songId_, songId) };


    // songIdListShrink Field Functions 
    bool hasSongIdListShrink() const { return this->songIdListShrink_ != nullptr;};
    void deleteSongIdListShrink() { this->songIdListShrink_ = nullptr;};
    inline string getSongIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(songIdListShrink_, "") };
    inline CloudPlayerShrinkRequest& setSongIdListShrink(string songIdListShrink) { DARABONBA_PTR_SET_VALUE(songIdListShrink_, songIdListShrink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CloudPlayerShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string getUserInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline CloudPlayerShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // Index of the currently playing song. Starts from 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> curPlayIndex_ {};
    // Device identity information
    // 
    // This parameter is required.
    shared_ptr<string> deviceInfoShrink_ {};
    // Playback pattern
    // 
    // This parameter is required.
    shared_ptr<string> playMode_ {};
    // Song ID (used to recompute the index when the index is invalid)
    shared_ptr<string> songId_ {};
    // List of song IDs (1–200 songs)
    // 
    // This parameter is required.
    shared_ptr<string> songIdListShrink_ {};
    // Source of cloud-recommended songs
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
    // Open user information
    // 
    // This parameter is required.
    shared_ptr<string> userInfoShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
