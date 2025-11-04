// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELVIDEOSETTINGSVIDEOCODECSETTINGFRAMERATE_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVECHANNELRESPONSEBODYCHANNELVIDEOSETTINGSVIDEOCODECSETTINGFRAMERATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate& obj) { 
      DARABONBA_PTR_TO_JSON(FramerateControl, framerateControl_);
      DARABONBA_PTR_TO_JSON(FramerateDenominator, framerateDenominator_);
      DARABONBA_PTR_TO_JSON(FramerateNumerator, framerateNumerator_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate& obj) { 
      DARABONBA_PTR_FROM_JSON(FramerateControl, framerateControl_);
      DARABONBA_PTR_FROM_JSON(FramerateDenominator, framerateDenominator_);
      DARABONBA_PTR_FROM_JSON(FramerateNumerator, framerateNumerator_);
    };
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate() = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate(const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate &) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate(GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate &&) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate() = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate& operator=(const GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate &) = default ;
    GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate& operator=(GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->framerateControl_ == nullptr
        && return this->framerateDenominator_ == nullptr && return this->framerateNumerator_ == nullptr; };
    // framerateControl Field Functions 
    bool hasFramerateControl() const { return this->framerateControl_ != nullptr;};
    void deleteFramerateControl() { this->framerateControl_ = nullptr;};
    inline string framerateControl() const { DARABONBA_PTR_GET_DEFAULT(framerateControl_, "") };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate& setFramerateControl(string framerateControl) { DARABONBA_PTR_SET_VALUE(framerateControl_, framerateControl) };


    // framerateDenominator Field Functions 
    bool hasFramerateDenominator() const { return this->framerateDenominator_ != nullptr;};
    void deleteFramerateDenominator() { this->framerateDenominator_ = nullptr;};
    inline int32_t framerateDenominator() const { DARABONBA_PTR_GET_DEFAULT(framerateDenominator_, 0) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate& setFramerateDenominator(int32_t framerateDenominator) { DARABONBA_PTR_SET_VALUE(framerateDenominator_, framerateDenominator) };


    // framerateNumerator Field Functions 
    bool hasFramerateNumerator() const { return this->framerateNumerator_ != nullptr;};
    void deleteFramerateNumerator() { this->framerateNumerator_ = nullptr;};
    inline int32_t framerateNumerator() const { DARABONBA_PTR_GET_DEFAULT(framerateNumerator_, 0) };
    inline GetMediaLiveChannelResponseBodyChannelVideoSettingsVideoCodecSettingFramerate& setFramerateNumerator(int32_t framerateNumerator) { DARABONBA_PTR_SET_VALUE(framerateNumerator_, framerateNumerator) };


  protected:
    // The frame rate mode.
    std::shared_ptr<string> framerateControl_ = nullptr;
    // The denominator of the fixed frame rate.
    std::shared_ptr<int32_t> framerateDenominator_ = nullptr;
    // The numerator of the fixed frame rate.
    std::shared_ptr<int32_t> framerateNumerator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
