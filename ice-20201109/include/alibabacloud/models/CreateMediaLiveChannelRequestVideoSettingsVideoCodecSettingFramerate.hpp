// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTVIDEOSETTINGSVIDEOCODECSETTINGFRAMERATE_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTVIDEOSETTINGSVIDEOCODECSETTINGFRAMERATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate& obj) { 
      DARABONBA_PTR_TO_JSON(FramerateControl, framerateControl_);
      DARABONBA_PTR_TO_JSON(FramerateDenominator, framerateDenominator_);
      DARABONBA_PTR_TO_JSON(FramerateNumerator, framerateNumerator_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate& obj) { 
      DARABONBA_PTR_FROM_JSON(FramerateControl, framerateControl_);
      DARABONBA_PTR_FROM_JSON(FramerateDenominator, framerateDenominator_);
      DARABONBA_PTR_FROM_JSON(FramerateNumerator, framerateNumerator_);
    };
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate() = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate(const CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate &) = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate(CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate &&) = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate() = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate& operator=(const CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate &) = default ;
    CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate& operator=(CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->framerateControl_ != nullptr
        && this->framerateDenominator_ != nullptr && this->framerateNumerator_ != nullptr; };
    // framerateControl Field Functions 
    bool hasFramerateControl() const { return this->framerateControl_ != nullptr;};
    void deleteFramerateControl() { this->framerateControl_ = nullptr;};
    inline string framerateControl() const { DARABONBA_PTR_GET_DEFAULT(framerateControl_, "") };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate& setFramerateControl(string framerateControl) { DARABONBA_PTR_SET_VALUE(framerateControl_, framerateControl) };


    // framerateDenominator Field Functions 
    bool hasFramerateDenominator() const { return this->framerateDenominator_ != nullptr;};
    void deleteFramerateDenominator() { this->framerateDenominator_ = nullptr;};
    inline int32_t framerateDenominator() const { DARABONBA_PTR_GET_DEFAULT(framerateDenominator_, 0) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate& setFramerateDenominator(int32_t framerateDenominator) { DARABONBA_PTR_SET_VALUE(framerateDenominator_, framerateDenominator) };


    // framerateNumerator Field Functions 
    bool hasFramerateNumerator() const { return this->framerateNumerator_ != nullptr;};
    void deleteFramerateNumerator() { this->framerateNumerator_ = nullptr;};
    inline int32_t framerateNumerator() const { DARABONBA_PTR_GET_DEFAULT(framerateNumerator_, 0) };
    inline CreateMediaLiveChannelRequestVideoSettingsVideoCodecSettingFramerate& setFramerateNumerator(int32_t framerateNumerator) { DARABONBA_PTR_SET_VALUE(framerateNumerator_, framerateNumerator) };


  protected:
    // The frame rate mode. Valid values: SPECIFIED (fixed frame rate) and FROM_SOURCE (use source specification).
    std::shared_ptr<string> framerateControl_ = nullptr;
    // The denominator of the fixed frame rate. The parameter is required when FramerateControl is set to SPECIFIED. Valid values: 1 to 60. The numerator must be divisible by the denominator.
    std::shared_ptr<int32_t> framerateDenominator_ = nullptr;
    // The numerator of the fixed frame rate. The parameter is required when FramerateControl is set to SPECIFIED. Valid values: 1 to 60. The numerator must be divisible by the denominator.
    std::shared_ptr<int32_t> framerateNumerator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
