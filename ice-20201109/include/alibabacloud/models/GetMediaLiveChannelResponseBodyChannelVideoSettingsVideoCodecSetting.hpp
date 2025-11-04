// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELVIDEOSETTINGSVIDEOCODECSETTING_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELVIDEOSETTINGSVIDEOCODECSETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail.hpp>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate.hpp>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop.hpp>
#include <alibabacloud/models/GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& obj) { 
      DARABONBA_PTR_TO_JSON(CodecDetail, codecDetail_);
      DARABONBA_PTR_TO_JSON(Framerate, framerate_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(CodecDetail, codecDetail_);
      DARABONBA_PTR_FROM_JSON(Framerate, framerate_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
    };
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting() = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting(const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting &) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting(GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting &&) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting() = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& operator=(const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting &) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& operator=(GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codecDetail_ == nullptr
        && return this->framerate_ == nullptr && return this->gop_ == nullptr && return this->rate_ == nullptr; };
    // codecDetail Field Functions 
    bool hasCodecDetail() const { return this->codecDetail_ != nullptr;};
    void deleteCodecDetail() { this->codecDetail_ = nullptr;};
    inline const Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail & codecDetail() const { DARABONBA_PTR_GET_CONST(codecDetail_, Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail) };
    inline Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail codecDetail() { DARABONBA_PTR_GET(codecDetail_, Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& setCodecDetail(const Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail & codecDetail) { DARABONBA_PTR_SET_VALUE(codecDetail_, codecDetail) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& setCodecDetail(Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail && codecDetail) { DARABONBA_PTR_SET_RVALUE(codecDetail_, codecDetail) };


    // framerate Field Functions 
    bool hasFramerate() const { return this->framerate_ != nullptr;};
    void deleteFramerate() { this->framerate_ = nullptr;};
    inline const Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate & framerate() const { DARABONBA_PTR_GET_CONST(framerate_, Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate) };
    inline Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate framerate() { DARABONBA_PTR_GET(framerate_, Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& setFramerate(const Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate & framerate) { DARABONBA_PTR_SET_VALUE(framerate_, framerate) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& setFramerate(Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate && framerate) { DARABONBA_PTR_SET_RVALUE(framerate_, framerate) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline const Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop & gop() const { DARABONBA_PTR_GET_CONST(gop_, Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop) };
    inline Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop gop() { DARABONBA_PTR_GET(gop_, Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& setGop(const Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop & gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& setGop(Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop && gop) { DARABONBA_PTR_SET_RVALUE(gop_, gop) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline const Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate & rate() const { DARABONBA_PTR_GET_CONST(rate_, Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate) };
    inline Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate rate() { DARABONBA_PTR_GET(rate_, Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& setRate(const Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate & rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSetting& setRate(Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate && rate) { DARABONBA_PTR_SET_RVALUE(rate_, rate) };


  protected:
    // The video encoding settings.
    std::shared_ptr<Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingCodecDetail> codecDetail_ = nullptr;
    // The frame rate.
    std::shared_ptr<Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate> framerate_ = nullptr;
    // The GOP setting.
    std::shared_ptr<Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingGop> gop_ = nullptr;
    // The video encoding rate.
    std::shared_ptr<Models::GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingRate> rate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
