// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTVIDEOSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTVIDEOSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequestVideoSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequestVideoSettings& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_TO_JSON(VideoCodecSetting, videoCodecSetting_);
      DARABONBA_PTR_TO_JSON(VideoCodecType, videoCodecType_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequestVideoSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_FROM_JSON(VideoCodecSetting, videoCodecSetting_);
      DARABONBA_PTR_FROM_JSON(VideoCodecType, videoCodecType_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    CreateMediaLiveChannelRequestVideoSettings() = default ;
    CreateMediaLiveChannelRequestVideoSettings(const CreateMediaLiveChannelRequestVideoSettings &) = default ;
    CreateMediaLiveChannelRequestVideoSettings(CreateMediaLiveChannelRequestVideoSettings &&) = default ;
    CreateMediaLiveChannelRequestVideoSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequestVideoSettings() = default ;
    CreateMediaLiveChannelRequestVideoSettings& operator=(const CreateMediaLiveChannelRequestVideoSettings &) = default ;
    CreateMediaLiveChannelRequestVideoSettings& operator=(CreateMediaLiveChannelRequestVideoSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->name_ != nullptr && this->videoCodec_ != nullptr && this->videoCodecSetting_ != nullptr && this->videoCodecType_ != nullptr && this->width_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline CreateMediaLiveChannelRequestVideoSettings& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMediaLiveChannelRequestVideoSettings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // videoCodec Field Functions 
    bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
    void deleteVideoCodec() { this->videoCodec_ = nullptr;};
    inline string videoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
    inline CreateMediaLiveChannelRequestVideoSettings& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


    // videoCodecSetting Field Functions 
    bool hasVideoCodecSetting() const { return this->videoCodecSetting_ != nullptr;};
    void deleteVideoCodecSetting() { this->videoCodecSetting_ = nullptr;};
    inline const Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting & videoCodecSetting() const { DARABONBA_PTR_GET_CONST(videoCodecSetting_, Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting) };
    inline Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting videoCodecSetting() { DARABONBA_PTR_GET(videoCodecSetting_, Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting) };
    inline CreateMediaLiveChannelRequestVideoSettings& setVideoCodecSetting(const Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting & videoCodecSetting) { DARABONBA_PTR_SET_VALUE(videoCodecSetting_, videoCodecSetting) };
    inline CreateMediaLiveChannelRequestVideoSettings& setVideoCodecSetting(Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting && videoCodecSetting) { DARABONBA_PTR_SET_RVALUE(videoCodecSetting_, videoCodecSetting) };


    // videoCodecType Field Functions 
    bool hasVideoCodecType() const { return this->videoCodecType_ != nullptr;};
    void deleteVideoCodecType() { this->videoCodecType_ = nullptr;};
    inline string videoCodecType() const { DARABONBA_PTR_GET_DEFAULT(videoCodecType_, "") };
    inline CreateMediaLiveChannelRequestVideoSettings& setVideoCodecType(string videoCodecType) { DARABONBA_PTR_SET_VALUE(videoCodecType_, videoCodecType) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline CreateMediaLiveChannelRequestVideoSettings& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The height of the output. If you set it to 0 or leave it empty, the height automatically adapts to the specified width to maintain the original aspect ratio.
    // 
    // Valid values:
    // 
    // *   For regular transcoding, the larger dimension cannot exceed 3840 px, and the smaller one cannot exceed 2160 px.
    // *   For Narrowband HD™ transcoding, the larger dimension cannot exceed 1920 px, and the smaller one cannot exceed 1080 px.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The name of the video settings. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The video codec. Valid values: H264 and H265.
    std::shared_ptr<string> videoCodec_ = nullptr;
    // The video encoding settings.
    std::shared_ptr<Models::CreateMediaLiveChannelRequestVideoSettingsVideoCodecSetting> videoCodecSetting_ = nullptr;
    // The video transcoding method. Valid values:
    // 
    // *   NORMAL: regular transcoding
    // *   NBHD: Narrowband HD™ transcoding
    // 
    // If not specified, regular transcoding is used by default.
    std::shared_ptr<string> videoCodecType_ = nullptr;
    // The width of the output. If you set it to 0 or leave it empty, the width automatically adapts to the specified height to maintain the original aspect ratio.
    // 
    // Valid values:
    // 
    // *   For regular transcoding, the larger dimension cannot exceed 3840 px, and the smaller one cannot exceed 2160 px.
    // *   For Narrowband HD™ transcoding, the larger dimension cannot exceed 1920 px, and the smaller one cannot exceed 1080 px.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
