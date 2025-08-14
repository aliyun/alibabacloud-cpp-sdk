// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTVIDEOSETTINGSVIDEOCODECSETTING_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTVIDEOSETTINGSVIDEOCODECSETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail.hpp>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate.hpp>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop.hpp>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& obj) { 
      DARABONBA_PTR_TO_JSON(CodecDetail, codecDetail_);
      DARABONBA_PTR_TO_JSON(Framerate, framerate_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(CodecDetail, codecDetail_);
      DARABONBA_PTR_FROM_JSON(Framerate, framerate_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
    };
    UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting() = default ;
    UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting(const UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting &) = default ;
    UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting(UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting &&) = default ;
    UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting() = default ;
    UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& operator=(const UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting &) = default ;
    UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& operator=(UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codecDetail_ != nullptr
        && this->framerate_ != nullptr && this->gop_ != nullptr && this->rate_ != nullptr; };
    // codecDetail Field Functions 
    bool hasCodecDetail() const { return this->codecDetail_ != nullptr;};
    void deleteCodecDetail() { this->codecDetail_ = nullptr;};
    inline const Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail & codecDetail() const { DARABONBA_PTR_GET_CONST(codecDetail_, Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail) };
    inline Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail codecDetail() { DARABONBA_PTR_GET(codecDetail_, Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail) };
    inline UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setCodecDetail(const Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail & codecDetail) { DARABONBA_PTR_SET_VALUE(codecDetail_, codecDetail) };
    inline UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setCodecDetail(Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail && codecDetail) { DARABONBA_PTR_SET_RVALUE(codecDetail_, codecDetail) };


    // framerate Field Functions 
    bool hasFramerate() const { return this->framerate_ != nullptr;};
    void deleteFramerate() { this->framerate_ = nullptr;};
    inline const Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate & framerate() const { DARABONBA_PTR_GET_CONST(framerate_, Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate) };
    inline Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate framerate() { DARABONBA_PTR_GET(framerate_, Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate) };
    inline UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setFramerate(const Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate & framerate) { DARABONBA_PTR_SET_VALUE(framerate_, framerate) };
    inline UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setFramerate(Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate && framerate) { DARABONBA_PTR_SET_RVALUE(framerate_, framerate) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline const Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop & gop() const { DARABONBA_PTR_GET_CONST(gop_, Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop) };
    inline Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop gop() { DARABONBA_PTR_GET(gop_, Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop) };
    inline UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setGop(const Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop & gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };
    inline UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setGop(Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop && gop) { DARABONBA_PTR_SET_RVALUE(gop_, gop) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline const Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate & rate() const { DARABONBA_PTR_GET_CONST(rate_, Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate) };
    inline Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate rate() { DARABONBA_PTR_GET(rate_, Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate) };
    inline UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setRate(const Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate & rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };
    inline UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setRate(Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate && rate) { DARABONBA_PTR_SET_RVALUE(rate_, rate) };


  protected:
    // The video encoding settings.
    std::shared_ptr<Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail> codecDetail_ = nullptr;
    // The frame rate. If it is not specified, the source specification is used.
    std::shared_ptr<Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate> framerate_ = nullptr;
    // The GOP setting. If it is not specified, the source specification is used.
    std::shared_ptr<Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop> gop_ = nullptr;
    // The video encoding rate. If it is not specified, the source specification is used.
    std::shared_ptr<Models::UpdateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate> rate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
