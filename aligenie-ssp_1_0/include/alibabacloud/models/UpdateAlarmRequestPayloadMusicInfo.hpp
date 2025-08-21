// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALARMREQUESTPAYLOADMUSICINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALARMREQUESTPAYLOADMUSICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class UpdateAlarmRequestPayloadMusicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlarmRequestPayloadMusicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(MusicId, musicId_);
      DARABONBA_PTR_TO_JSON(MusicName, musicName_);
      DARABONBA_PTR_TO_JSON(MusicType, musicType_);
      DARABONBA_PTR_TO_JSON(MusicTypeName, musicTypeName_);
      DARABONBA_PTR_TO_JSON(MusicUrl, musicUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlarmRequestPayloadMusicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(MusicId, musicId_);
      DARABONBA_PTR_FROM_JSON(MusicName, musicName_);
      DARABONBA_PTR_FROM_JSON(MusicType, musicType_);
      DARABONBA_PTR_FROM_JSON(MusicTypeName, musicTypeName_);
      DARABONBA_PTR_FROM_JSON(MusicUrl, musicUrl_);
    };
    UpdateAlarmRequestPayloadMusicInfo() = default ;
    UpdateAlarmRequestPayloadMusicInfo(const UpdateAlarmRequestPayloadMusicInfo &) = default ;
    UpdateAlarmRequestPayloadMusicInfo(UpdateAlarmRequestPayloadMusicInfo &&) = default ;
    UpdateAlarmRequestPayloadMusicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlarmRequestPayloadMusicInfo() = default ;
    UpdateAlarmRequestPayloadMusicInfo& operator=(const UpdateAlarmRequestPayloadMusicInfo &) = default ;
    UpdateAlarmRequestPayloadMusicInfo& operator=(UpdateAlarmRequestPayloadMusicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->musicId_ != nullptr
        && this->musicName_ != nullptr && this->musicType_ != nullptr && this->musicTypeName_ != nullptr && this->musicUrl_ != nullptr; };
    // musicId Field Functions 
    bool hasMusicId() const { return this->musicId_ != nullptr;};
    void deleteMusicId() { this->musicId_ = nullptr;};
    inline int64_t musicId() const { DARABONBA_PTR_GET_DEFAULT(musicId_, 0L) };
    inline UpdateAlarmRequestPayloadMusicInfo& setMusicId(int64_t musicId) { DARABONBA_PTR_SET_VALUE(musicId_, musicId) };


    // musicName Field Functions 
    bool hasMusicName() const { return this->musicName_ != nullptr;};
    void deleteMusicName() { this->musicName_ = nullptr;};
    inline string musicName() const { DARABONBA_PTR_GET_DEFAULT(musicName_, "") };
    inline UpdateAlarmRequestPayloadMusicInfo& setMusicName(string musicName) { DARABONBA_PTR_SET_VALUE(musicName_, musicName) };


    // musicType Field Functions 
    bool hasMusicType() const { return this->musicType_ != nullptr;};
    void deleteMusicType() { this->musicType_ = nullptr;};
    inline int64_t musicType() const { DARABONBA_PTR_GET_DEFAULT(musicType_, 0L) };
    inline UpdateAlarmRequestPayloadMusicInfo& setMusicType(int64_t musicType) { DARABONBA_PTR_SET_VALUE(musicType_, musicType) };


    // musicTypeName Field Functions 
    bool hasMusicTypeName() const { return this->musicTypeName_ != nullptr;};
    void deleteMusicTypeName() { this->musicTypeName_ = nullptr;};
    inline string musicTypeName() const { DARABONBA_PTR_GET_DEFAULT(musicTypeName_, "") };
    inline UpdateAlarmRequestPayloadMusicInfo& setMusicTypeName(string musicTypeName) { DARABONBA_PTR_SET_VALUE(musicTypeName_, musicTypeName) };


    // musicUrl Field Functions 
    bool hasMusicUrl() const { return this->musicUrl_ != nullptr;};
    void deleteMusicUrl() { this->musicUrl_ = nullptr;};
    inline string musicUrl() const { DARABONBA_PTR_GET_DEFAULT(musicUrl_, "") };
    inline UpdateAlarmRequestPayloadMusicInfo& setMusicUrl(string musicUrl) { DARABONBA_PTR_SET_VALUE(musicUrl_, musicUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> musicId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> musicName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> musicType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> musicTypeName_ = nullptr;
    std::shared_ptr<string> musicUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
