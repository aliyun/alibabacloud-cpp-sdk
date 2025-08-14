// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELVIDEOSETTINGSVIDEOCODECSETTINGCODECDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELVIDEOSETTINGSVIDEOCODECSETTINGCODECDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
    };
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail() = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail(const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail &) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail(GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail &&) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail() = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail& operator=(const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail &) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail& operator=(GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->level_ != nullptr
        && this->profile_ != nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


  protected:
    // The video encoding level. It is not supported yet.
    std::shared_ptr<string> level_ = nullptr;
    // The H.264 profile.
    std::shared_ptr<string> profile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
