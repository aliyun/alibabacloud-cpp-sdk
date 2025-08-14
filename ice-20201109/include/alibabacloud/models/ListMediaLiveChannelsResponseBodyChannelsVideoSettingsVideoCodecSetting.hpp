// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSVIDEOSETTINGSVIDEOCODECSETTING_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSVIDEOSETTINGSVIDEOCODECSETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingCodecDetail.hpp>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingFramerate.hpp>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop.hpp>
#include <alibabacloud/models/ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingRate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& obj) { 
      DARABONBA_PTR_TO_JSON(CodecDetail, codecDetail_);
      DARABONBA_PTR_TO_JSON(Framerate, framerate_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(CodecDetail, codecDetail_);
      DARABONBA_PTR_FROM_JSON(Framerate, framerate_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
    };
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting() = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting(const ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting(ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting &&) = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting() = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& operator=(const ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& operator=(ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codecDetail_ != nullptr
        && this->framerate_ != nullptr && this->gop_ != nullptr && this->rate_ != nullptr; };
    // codecDetail Field Functions 
    bool hasCodecDetail() const { return this->codecDetail_ != nullptr;};
    void deleteCodecDetail() { this->codecDetail_ = nullptr;};
    inline const Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingCodecDetail & codecDetail() const { DARABONBA_PTR_GET_CONST(codecDetail_, Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingCodecDetail) };
    inline Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingCodecDetail codecDetail() { DARABONBA_PTR_GET(codecDetail_, Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingCodecDetail) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& setCodecDetail(const Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingCodecDetail & codecDetail) { DARABONBA_PTR_SET_VALUE(codecDetail_, codecDetail) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& setCodecDetail(Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingCodecDetail && codecDetail) { DARABONBA_PTR_SET_RVALUE(codecDetail_, codecDetail) };


    // framerate Field Functions 
    bool hasFramerate() const { return this->framerate_ != nullptr;};
    void deleteFramerate() { this->framerate_ = nullptr;};
    inline const Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingFramerate & framerate() const { DARABONBA_PTR_GET_CONST(framerate_, Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingFramerate) };
    inline Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingFramerate framerate() { DARABONBA_PTR_GET(framerate_, Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingFramerate) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& setFramerate(const Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingFramerate & framerate) { DARABONBA_PTR_SET_VALUE(framerate_, framerate) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& setFramerate(Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingFramerate && framerate) { DARABONBA_PTR_SET_RVALUE(framerate_, framerate) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline const Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop & gop() const { DARABONBA_PTR_GET_CONST(gop_, Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop) };
    inline Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop gop() { DARABONBA_PTR_GET(gop_, Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& setGop(const Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop & gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& setGop(Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop && gop) { DARABONBA_PTR_SET_RVALUE(gop_, gop) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline const Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingRate & rate() const { DARABONBA_PTR_GET_CONST(rate_, Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingRate) };
    inline Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingRate rate() { DARABONBA_PTR_GET(rate_, Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingRate) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& setRate(const Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingRate & rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };
    inline ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSetting& setRate(Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingRate && rate) { DARABONBA_PTR_SET_RVALUE(rate_, rate) };


  protected:
    // The video encoding settings.
    std::shared_ptr<Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingCodecDetail> codecDetail_ = nullptr;
    // The frame rate.
    std::shared_ptr<Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingFramerate> framerate_ = nullptr;
    // The GOP setting.
    std::shared_ptr<Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingGop> gop_ = nullptr;
    // The video encoding rate.
    std::shared_ptr<Models::ListMediaLiveChannelsResponseBodyChannelsVideoSettingsVideoCodecSettingRate> rate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
