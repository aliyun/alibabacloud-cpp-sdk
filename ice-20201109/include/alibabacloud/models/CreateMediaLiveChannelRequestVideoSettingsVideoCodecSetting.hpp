// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTVIDEOSETTINGSVIDEOCODECSETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTVIDEOSETTINGSVIDEOCODECSETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail.hpp>
#include <alibabacloud/models/CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate.hpp>
#include <alibabacloud/models/CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop.hpp>
#include <alibabacloud/models/CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& obj) { 
      DARABONBA_PTR_TO_JSON(CodecDetail, codecDetail_);
      DARABONBA_PTR_TO_JSON(Framerate, framerate_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(CodecDetail, codecDetail_);
      DARABONBA_PTR_FROM_JSON(Framerate, framerate_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
    };
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting() = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting(const CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting &) = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting(CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting &&) = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting() = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& operator=(const CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting &) = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& operator=(CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codecDetail_ != nullptr
        && this->framerate_ != nullptr && this->gop_ != nullptr && this->rate_ != nullptr; };
    // codecDetail Field Functions 
    bool hasCodecDetail() const { return this->codecDetail_ != nullptr;};
    void deleteCodecDetail() { this->codecDetail_ = nullptr;};
    inline const Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail & codecDetail() const { DARABONBA_PTR_GET_CONST(codecDetail_, Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail) };
    inline Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail codecDetail() { DARABONBA_PTR_GET(codecDetail_, Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setCodecDetail(const Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail & codecDetail) { DARABONBA_PTR_SET_VALUE(codecDetail_, codecDetail) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setCodecDetail(Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail && codecDetail) { DARABONBA_PTR_SET_RVALUE(codecDetail_, codecDetail) };


    // framerate Field Functions 
    bool hasFramerate() const { return this->framerate_ != nullptr;};
    void deleteFramerate() { this->framerate_ = nullptr;};
    inline const Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate & framerate() const { DARABONBA_PTR_GET_CONST(framerate_, Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate) };
    inline Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate framerate() { DARABONBA_PTR_GET(framerate_, Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setFramerate(const Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate & framerate) { DARABONBA_PTR_SET_VALUE(framerate_, framerate) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setFramerate(Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate && framerate) { DARABONBA_PTR_SET_RVALUE(framerate_, framerate) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline const Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop & gop() const { DARABONBA_PTR_GET_CONST(gop_, Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop) };
    inline Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop gop() { DARABONBA_PTR_GET(gop_, Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setGop(const Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop & gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setGop(Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop && gop) { DARABONBA_PTR_SET_RVALUE(gop_, gop) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline const Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate & rate() const { DARABONBA_PTR_GET_CONST(rate_, Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate) };
    inline Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate rate() { DARABONBA_PTR_GET(rate_, Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setRate(const Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate & rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting& setRate(Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate && rate) { DARABONBA_PTR_SET_RVALUE(rate_, rate) };


  protected:
    // The video encoding settings.
    std::shared_ptr<Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingCodecDetail> codecDetail_ = nullptr;
    // The frame rate. If it is not specified, the source specification is used.
    std::shared_ptr<Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate> framerate_ = nullptr;
    // The GOP setting. If it is not specified, the source specification is used.
    std::shared_ptr<Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingGop> gop_ = nullptr;
    // The video encoding rate. If it is not specified, the source specification is used.
    std::shared_ptr<Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingRate> rate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
