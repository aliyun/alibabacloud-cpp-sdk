// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDPLAYERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDPLAYERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CloudPlayerRequestDeviceInfo.hpp>
#include <vector>
#include <alibabacloud/models/CloudPlayerRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CloudPlayerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudPlayerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurPlayIndex, curPlayIndex_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(PlayMode, playMode_);
      DARABONBA_PTR_TO_JSON(SongId, songId_);
      DARABONBA_PTR_TO_JSON(SongIdList, songIdList_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CloudPlayerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurPlayIndex, curPlayIndex_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(PlayMode, playMode_);
      DARABONBA_PTR_FROM_JSON(SongId, songId_);
      DARABONBA_PTR_FROM_JSON(SongIdList, songIdList_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CloudPlayerRequest() = default ;
    CloudPlayerRequest(const CloudPlayerRequest &) = default ;
    CloudPlayerRequest(CloudPlayerRequest &&) = default ;
    CloudPlayerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudPlayerRequest() = default ;
    CloudPlayerRequest& operator=(const CloudPlayerRequest &) = default ;
    CloudPlayerRequest& operator=(CloudPlayerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->curPlayIndex_ != nullptr
        && this->deviceInfo_ != nullptr && this->playMode_ != nullptr && this->songId_ != nullptr && this->songIdList_ != nullptr && this->source_ != nullptr
        && this->userInfo_ != nullptr; };
    // curPlayIndex Field Functions 
    bool hasCurPlayIndex() const { return this->curPlayIndex_ != nullptr;};
    void deleteCurPlayIndex() { this->curPlayIndex_ = nullptr;};
    inline int32_t curPlayIndex() const { DARABONBA_PTR_GET_DEFAULT(curPlayIndex_, 0) };
    inline CloudPlayerRequest& setCurPlayIndex(int32_t curPlayIndex) { DARABONBA_PTR_SET_VALUE(curPlayIndex_, curPlayIndex) };


    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CloudPlayerRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CloudPlayerRequestDeviceInfo) };
    inline CloudPlayerRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CloudPlayerRequestDeviceInfo) };
    inline CloudPlayerRequest& setDeviceInfo(const CloudPlayerRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CloudPlayerRequest& setDeviceInfo(CloudPlayerRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // playMode Field Functions 
    bool hasPlayMode() const { return this->playMode_ != nullptr;};
    void deletePlayMode() { this->playMode_ = nullptr;};
    inline string playMode() const { DARABONBA_PTR_GET_DEFAULT(playMode_, "") };
    inline CloudPlayerRequest& setPlayMode(string playMode) { DARABONBA_PTR_SET_VALUE(playMode_, playMode) };


    // songId Field Functions 
    bool hasSongId() const { return this->songId_ != nullptr;};
    void deleteSongId() { this->songId_ = nullptr;};
    inline string songId() const { DARABONBA_PTR_GET_DEFAULT(songId_, "") };
    inline CloudPlayerRequest& setSongId(string songId) { DARABONBA_PTR_SET_VALUE(songId_, songId) };


    // songIdList Field Functions 
    bool hasSongIdList() const { return this->songIdList_ != nullptr;};
    void deleteSongIdList() { this->songIdList_ = nullptr;};
    inline const vector<string> & songIdList() const { DARABONBA_PTR_GET_CONST(songIdList_, vector<string>) };
    inline vector<string> songIdList() { DARABONBA_PTR_GET(songIdList_, vector<string>) };
    inline CloudPlayerRequest& setSongIdList(const vector<string> & songIdList) { DARABONBA_PTR_SET_VALUE(songIdList_, songIdList) };
    inline CloudPlayerRequest& setSongIdList(vector<string> && songIdList) { DARABONBA_PTR_SET_RVALUE(songIdList_, songIdList) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CloudPlayerRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CloudPlayerRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CloudPlayerRequestUserInfo) };
    inline CloudPlayerRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, CloudPlayerRequestUserInfo) };
    inline CloudPlayerRequest& setUserInfo(const CloudPlayerRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CloudPlayerRequest& setUserInfo(CloudPlayerRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> curPlayIndex_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CloudPlayerRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> playMode_ = nullptr;
    std::shared_ptr<string> songId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> songIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> source_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CloudPlayerRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
